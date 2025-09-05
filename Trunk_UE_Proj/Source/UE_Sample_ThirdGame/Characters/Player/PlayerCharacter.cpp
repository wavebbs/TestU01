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
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimBlueprintGeneratedClass.h"
#include "Animation/AnimNode_StateMachine.h"
#include "Characters/CharacterAnimInstanceBase.h"


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
		
		

		// 获取增强输入子系统
		UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (!InputSubsystem)
		{
			return;
		}

		// 获取增强玩家输入
		EnhancedPlayerInput = InputSubsystem->GetPlayerInput();


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
		// if (MoveAction)
		// {
		// 	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::OnMove);
		// }

		if (LookAction)
		{
			EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
		}
	}
}

void APlayerCharacter::Tick(float DeltaTime)
{
	//Super::Tick(DeltaTime);

	switch (CurrentState)
	{
		case ECharacterAnimState::Idle:
			// 如果进入待机状态，可以停止移动
			GetCharacterMovement()->StopMovementImmediately();
			break;
		case ECharacterAnimState::Walk:
			// 设置行走速度
			GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
			break;
		case ECharacterAnimState::Run:
			// 设置奔跑速度
			GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
			OnMoveUpdate();
		case ECharacterAnimState::Jump:
			OnMoveUpdate();
			break;
		default:
			break;
	}
}

bool APlayerCharacter::CheckAction(UInputAction* Action, bool Anykey) const
{
	if (!Action)
	{
		return false;
	}


	// 获取动作值并检查是否被触发
	FInputActionValue ActionValue = EnhancedPlayerInput->GetActionValue(Action);


	if (Anykey)
	{
		if (ActionValue.IsNonZero())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
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


//
//
void APlayerCharacter::OnMoveUpdate()
{

	// 动作值并检查是否被触发
	FInputActionValue ActionValue = EnhancedPlayerInput->GetActionValue(MoveAction);
	// 获取输入向量
	FVector2D MovementVector = ActionValue.Get<FVector2D>();

	Super::Move(MovementVector);
}

void APlayerCharacter::ChangeBPState(ECharacterAnimState NewState)
{
	Super::ChangeBPState(NewState);
	PlayerController->GetBlackboardComponent()->SetValueAsEnum(FName("CurrentState"), (uint8)NewState);	
}

void APlayerCharacter::Look(const FInputActionValue& Value)
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

void APlayerCharacter::StartJump(float JumpVelocity)
{

	Jump();
	// // 检查角色移动组件是否有效
	// if (!GetCharacterMovement())
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter::StartJump - CharacterMovement component is null"));
	// 	return;
	// }
	//
	// // 检查角色是否可以跳跃（在地面上或者允许多段跳跃）
	// if (!CanJump())
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter::StartJump - Character cannot jump"));
	// 	return;
	// }
	//
	// // 使用传入的跳跃速度，如果为0则使用默认值
	// float FinalJumpVelocity = (JumpVelocity > 0.0f) ? JumpVelocity : CustomJumpVelocity;
	//
	// // 设置跳跃初速度
	// GetCharacterMovement()->Velocity.Z = FinalJumpVelocity;
	//
	// // 设置角色状态为跳跃
	// ChangeBPState(ECharacterAnimState::Jump);

	// 输出调试日志
	//UE_LOG(LogTemp, Log, TEXT("PlayerCharacter::StartJump - Applied jump velocity: %.2f"), FinalJumpVelocity);
}

void APlayerCharacter::OnStateChange(ECharacterAnimState OldState, ECharacterAnimState NewState)
{
	// 输出状态变化日志
	UE_LOG(LogTemp, Log, TEXT("BaseCharacter: State changed from %d to %d"), (int32)OldState, (int32)NewState);
	
	// 在此处添加状态变化时的C++逻辑处理
	// 例如：播放音效、粒子效果、同步网络状态等
	

	// 根据新状态执行相关逻辑
	switch (NewState)
	{
	case ECharacterAnimState::Idle:
		// 如果进入待机状态，可以停止移动
		GetCharacterMovement()->StopMovementImmediately();
		break;
        
	case ECharacterAnimState::Walk:
		// 设置行走速度
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		break;
        
	case ECharacterAnimState::Run:
		// 设置奔跑速度
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
		break;
        
	case ECharacterAnimState::Jump:
		// 跳跃逻辑 - 使用MovementMode强制保持浮空状态0.2秒
		//StartFloatingWithMovementMode(0.2f);
		StartJump();
		break;
        
	case ECharacterAnimState::Attack:
		// 播放攻击动画蒙太奇
		PlayAnimMontageByName("AttackMontage");
		break;
        
	case ECharacterAnimState::Dodge:
		// 在这里可以添加闪避相关的逻辑
		break;
        
	case ECharacterAnimState::Death:
		// 处理角色死亡逻辑
		// 例如禁用输入，播放死亡动画等
		GetCharacterMovement()->DisableMovement();
		break;
        
	case ECharacterAnimState::Hit:
		// 处理受击逻辑
		break;
	}
    
}

UAnimMontage* APlayerCharacter::PlayAnimMontageByName(const FString& MontageName, float PlayRate, FName StartSectionName)
{
	// 获取角色的动画实例
	UCharacterAnimInstanceBase* AnimInstance = Cast<UCharacterAnimInstanceBase>(GetMesh()->GetAnimInstance());
	if (!AnimInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter: 无法获取CharacterAnimInstanceBase实例"));
		return nullptr;
	}

	return AnimInstance->PlayAnimMontageByName(MontageName, PlayRate, StartSectionName);
	
}

void APlayerCharacter::StopAnimMontageByName(const FString& MontageName, float BlendOutTime)
{
	// 获取角色的动画实例
	UCharacterAnimInstanceBase* AnimInstance = Cast<UCharacterAnimInstanceBase>(GetMesh()->GetAnimInstance());
	if (!AnimInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter: 无法获取CharacterAnimInstanceBase实例"));
		return;
	}

	AnimInstance->StopAnimMontageByName(MontageName, BlendOutTime);
}

bool APlayerCharacter::IsPlayingMontageByName(const FString& MontageName) const
{
	// 获取角色的动画实例
	UCharacterAnimInstanceBase* AnimInstance = Cast<UCharacterAnimInstanceBase>(GetMesh()->GetAnimInstance());
	if (!AnimInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter: 无法获取CharacterAnimInstanceBase实例"));
		return false;
	}

	if (AnimInstance->IsPlayingMontageByName(MontageName))
	{
		return true;
	}
	
	return false;
}
