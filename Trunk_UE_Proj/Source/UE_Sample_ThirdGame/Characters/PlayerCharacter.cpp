#include "PlayerCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/HealthComponent.h"
#include "Components/StaminaComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	// 保证角色朝向移动方向
	bUseControllerRotationYaw = false;
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.f, 480.f, 0.f);
	}

	// 创建并设置相机臂
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// 创建并设置跟随相机
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 设置增强输入组件
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// 绑定攻击输入
		if (AttackAction)
		{
			EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &APlayerCharacter::OnAttackPressed);
		}

		// 绑定格挡输入
		if (BlockAction)
		{
			EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Started, this, &APlayerCharacter::OnBlockPressed);
			EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Completed, this, &APlayerCharacter::OnBlockReleased);
		}

		// 绑定物品栏输入
		if (InventoryAction)
		{
			EnhancedInputComponent->BindAction(InventoryAction, ETriggerEvent::Started, this, &APlayerCharacter::OnInventoryPressed);
		}

		// 绑定暂停输入
		if (PauseAction)
		{
			EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Started, this, &APlayerCharacter::OnPausePressed);
		}

		// 绑定移动输入
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::OnMove);
		}
	}
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 玩家特有的逻辑更新
	if (bIsBlocking)
	{
		// 格挡时消耗耐力
		if (StaminaComponent)
		{
			StaminaComponent->StartDrainingStamina();
		}
	}
}

void APlayerCharacter::OnAttackPressed(const FInputActionValue& Value)
{
	if (!bIsAttacking && !bIsBlocking && !bIsCrouching)
	{
		PerformAttack();
	}
}

void APlayerCharacter::OnBlockPressed(const FInputActionValue& Value)
{
	if (!bIsAttacking && !bIsCrouching)
	{
		StartBlock();
	}
}

void APlayerCharacter::OnBlockReleased(const FInputActionValue& Value)
{
	StopBlock();
}

void APlayerCharacter::OnInventoryPressed(const FInputActionValue& Value)
{
	ToggleInventory();
}

void APlayerCharacter::OnPausePressed(const FInputActionValue& Value)
{
	TogglePause();
}

void APlayerCharacter::OnMove(const FInputActionValue& Value)
{
	// 获取输入向量
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller && (MovementVector.X != 0.f || MovementVector.Y != 0.f))
	{
		// 获取控制器旋转（通常为相机朝向）
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);

		// 计算前后/左右方向
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// 应用移动（确保方向与动画一致）
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void APlayerCharacter::PerformAttack()
{
	if (bIsAttacking || bIsBlocking || bIsCrouching)
	{
		return;
	}

	bIsAttacking = true;

	// 执行攻击逻辑
	FVector StartLocation = GetActorLocation() + GetActorForwardVector() * 50.0f;
	FVector EndLocation = StartLocation + GetActorForwardVector() * AttackRange;

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	// 绘制攻击范围（调试用）
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, 1.0f, 0, 2.0f);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams))
	{
		// 命中目标
		if (AActor* HitActor = HitResult.GetActor())
		{
			// 检查目标是否有健康组件
			if (UHealthComponent* TargetHealth = HitActor->FindComponentByClass<UHealthComponent>())
			{
				TargetHealth->TakeDamage(AttackDamage, this);
			}
		}
	}

	// 广播攻击事件
	OnAttackPerformed.Broadcast();

	// 重置攻击状态（这里可以添加攻击动画的延迟）
	FTimerHandle AttackTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle, [this]()
	{
		bIsAttacking = false;
	}, 0.5f, false);
}

void APlayerCharacter::StartBlock()
{
	if (bIsBlocking || bIsAttacking || bIsCrouching)
	{
		return;
	}

	bIsBlocking = true;
	
	// 降低移动速度
	GetCharacterMovement()->MaxWalkSpeed *= 0.5f;
	
	// 广播格挡状态变化事件
	OnBlockStateChanged.Broadcast(true);
}

void APlayerCharacter::StopBlock()
{
	if (bIsBlocking)
	{
		bIsBlocking = false;
		
		// 恢复移动速度
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		
		// 停止耐力消耗
		if (StaminaComponent)
		{
			StaminaComponent->StopDrainingStamina();
		}
		
		// 广播格挡状态变化事件
		OnBlockStateChanged.Broadcast(false);
	}
}

void APlayerCharacter::ToggleInventory()
{
	bIsInventoryOpen = !bIsInventoryOpen;
	
	// 这里可以添加物品栏UI的显示/隐藏逻辑
	
	// 广播物品栏状态变化事件
	OnInventoryToggled.Broadcast(bIsInventoryOpen);
}

void APlayerCharacter::TogglePause()
{
	bIsPaused = !bIsPaused;
	
	// 这里可以添加暂停菜单的显示/隐藏逻辑
	
	// 广播暂停状态变化事件
	OnPauseToggled.Broadcast(bIsPaused);
}

void APlayerCharacter::StartSprint()
{
	// 重写冲刺逻辑，添加耐力检查
	if (!bIsCrouching && !bIsAttacking && !bIsBlocking && StaminaComponent && StaminaComponent->HasStamina())
	{
		Super::StartSprint();
		
		// 冲刺时消耗耐力
		StaminaComponent->StartDrainingStamina();
	}
}

void APlayerCharacter::StopSprint()
{
	Super::StopSprint();
	
	// 停止耐力消耗
	if (StaminaComponent)
	{
		StaminaComponent->StopDrainingStamina();
	}
}
