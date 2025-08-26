#include "BaseCharacter.h"
#include "CoreMinimal.h"
#include "Components/HealthComponent.h"
#include "Components/StaminaComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Interfaces/InteractableInterface.h"
#include "Components/CapsuleComponent.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// 设置默认移动参数
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = JumpForce;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

	// 创建健康组件
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

	// 创建耐力组件
	StaminaComponent = CreateDefaultSubobject<UStaminaComponent>(TEXT("StaminaComponent"));
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	// 设置输入映射上下文
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 设置增强输入组件
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// 绑定移动输入
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABaseCharacter::Move);
		}

		// 绑定视角输入
		if (LookAction)
		{
			EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABaseCharacter::Look);
		}

		// 绑定跳跃输入
		if (JumpAction)
		{
			EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ABaseCharacter::OnJumpPressed);
			EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ABaseCharacter::OnJumpReleased);
		}

		// 绑定冲刺输入
		if (SprintAction)
		{
			EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &ABaseCharacter::OnSprintPressed);
			EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &ABaseCharacter::OnSprintReleased);
		}

		// 绑定下蹲输入
		if (CrouchAction)
		{
			EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &ABaseCharacter::OnCrouchPressed);
		}

		// 绑定交互输入
		if (InteractAction)
		{
			EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ABaseCharacter::OnInteractPressed);
		}
	}
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 更新移动速度
	if (bIsSprinting && !bIsCrouching)
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	}
	else if (bIsCrouching)
	{
		GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}
}

void ABaseCharacter::Move(const FInputActionValue& Value)
{
	// 获取输入值
	const FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// 获取前向和右向向量
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// 添加移动输入
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ABaseCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// 添加Yaw旋转（左右看）
		AddControllerYawInput(LookAxisVector.X * MouseSensitivity);

		// 添加Pitch旋转（上下看）
		AddControllerPitchInput(LookAxisVector.Y * MouseSensitivity);
	}
}

void ABaseCharacter::OnJumpPressed(const FInputActionValue& Value)
{
	if (bCanJump && !bIsCrouching)
	{
		PerformJump();
	}
}

void ABaseCharacter::OnJumpReleased(const FInputActionValue& Value)
{
	// 停止跳跃
	StopJumping();
}

void ABaseCharacter::OnSprintPressed(const FInputActionValue& Value)
{
	if (!bIsCrouching && StaminaComponent && StaminaComponent->HasStamina())
	{
		StartSprint();
	}
}

void ABaseCharacter::OnSprintReleased(const FInputActionValue& Value)
{
	StopSprint();
}

void ABaseCharacter::OnCrouchPressed(const FInputActionValue& Value)
{
	if (bIsCrouching)
	{
		StopCrouch();
	}
	else
	{
		StartCrouch();
	}
}

void ABaseCharacter::OnInteractPressed(const FInputActionValue& Value)
{
	PerformInteraction();
}

void ABaseCharacter::StartSprint()
{
	if (!bIsSprinting && !bIsCrouching)
	{
		bIsSprinting = true;
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
		OnSprintChanged.Broadcast();
	}
}

void ABaseCharacter::StopSprint()
{
	if (bIsSprinting)
	{
		bIsSprinting = false;
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		OnSprintChanged.Broadcast();
	}
}

void ABaseCharacter::StartCrouch()
{
	if (!bIsCrouching && !bIsSprinting)
	{
		bIsCrouching = true;
		GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
		
		// 缩小胶囊体
		GetCapsuleComponent()->SetCapsuleHalfHeight(GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight() * 0.5f);
		
		OnCrouchChanged.Broadcast();
	}
}

void ABaseCharacter::StopCrouch()
{
	if (bIsCrouching)
	{
		bIsCrouching = false;
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		
		// 恢复胶囊体大小
		GetCapsuleComponent()->SetCapsuleHalfHeight(GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight() * 2.0f);
		
		OnCrouchChanged.Broadcast();
	}
}

void ABaseCharacter::PerformJump()
{
	if (bCanJump && !bIsCrouching)
	{
		Jump();
		OnJumpPerformed.Broadcast();
	}
}

void ABaseCharacter::PerformInteraction()
{
	// 执行交互逻辑
	// 这里可以添加射线检测来查找可交互对象
	FVector StartLocation = GetActorLocation() + GetActorForwardVector() * 50.0f;
	FVector ForwardVector = GetActorForwardVector();
	FVector EndLocation = StartLocation + (ForwardVector * 200.0f);

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams))
	{
		// 找到可交互对象
		if (AActor* HitActor = HitResult.GetActor())
		{
			// 检查是否实现了交互接口
			if (HitActor->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
			{
				IInteractableInterface::Execute_OnInteract(HitActor, this);
			}
		}
	}

	OnInteractionPerformed.Broadcast();
}
