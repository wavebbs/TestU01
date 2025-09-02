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
#include "BaseplayerController.h"


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
	
	PlayerController = Cast<ABasePlayerController>(Controller);

	if (PlayerController)
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

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 设置增强输入组件
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		
		// 绑定攻击输入
		// if (AttackAction)
		// {
		// 	EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &APlayerCharacter::OnAttackPressed);
		// }

		// // 绑定格挡输入
		// if (BlockAction)
		// {
		// 	EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Started, this, &APlayerCharacter::OnBlockPressed);
		// 	EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Completed, this, &APlayerCharacter::OnBlockReleased);
		// }
		//
		// // 绑定物品栏输入
		// if (InventoryAction)
		// {
		// 	EnhancedInputComponent->BindAction(InventoryAction, ETriggerEvent::Started, this, &APlayerCharacter::OnInventoryPressed);
		// }

	
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

	
}

bool APlayerCharacter::CheckAction(UInputAction* Action) const
{
	if (!Action)
	{
		return false;
	}

	// 获取玩家控制器
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC)
	{
		return false;
	}

	// 获取增强输入子系统
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
	if (!InputSubsystem)
	{
		return false;
	}

	// 获取增强玩家输入
	UEnhancedPlayerInput* EnhancedPlayerInput = InputSubsystem->GetPlayerInput();
	if (!EnhancedPlayerInput)
	{
		return false;
	}

	// 获取动作值并检查是否被触发
	FInputActionValue ActionValue = EnhancedPlayerInput->GetActionValue(Action);
	
	// 根据动作类型检查是否被触发
	// 对于布尔类型的动作，检查是否为true
	if (Action->ValueType == EInputActionValueType::Boolean)
	{
		return ActionValue.Get<bool>();
	}
	// 对于数值类型的动作，检查是否大于阈值
	else if (Action->ValueType == EInputActionValueType::Axis1D)
	{
		return FMath::Abs(ActionValue.Get<float>()) > 0.1f;
	}
	// 对于2D向量类型的动作，检查向量长度
	else if (Action->ValueType == EInputActionValueType::Axis2D)
	{
		FVector2D Value2D = ActionValue.Get<FVector2D>();
		return Value2D.SizeSquared() > 0.1f;
	}
	// 对于3D向量类型的动作，检查向量长度
	else if (Action->ValueType == EInputActionValueType::Axis3D)
	{
		FVector Value3D = ActionValue.Get<FVector>();
		return Value3D.SizeSquared() > 0.1f;
	}

	return false;
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

void APlayerCharacter::ChangeBPState(ECharacterAnimState NewState)
{
	Super::ChangeBPState(NewState);
	PlayerController->GetBlackboardComponent()->SetValueAsEnum(FName("CurrentState"), (uint8)NewState);	
}
