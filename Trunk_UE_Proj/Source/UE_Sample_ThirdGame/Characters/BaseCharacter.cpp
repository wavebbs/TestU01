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
#include "Characters/BasePlayerController.h"
#include "Characters/CharacterAnimInstanceBase.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

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
	PlayerController = Cast<ABasePlayerController>(Controller);
	
	// 初始化动画蓝图实例
	if (GetMesh())
	{
		CharacterAnimBase = Cast<UCharacterAnimInstanceBase>(GetMesh()->GetAnimInstance());
		if (CharacterAnimBase)
		{
			UE_LOG(LogTemp, Log, TEXT("BaseCharacter: Animation Blueprint instance initialized successfully"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("BaseCharacter: Failed to get Animation Blueprint instance"));
		}
	}
	
	
}


void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (CurrentState)
	{
		case ECharacterAnimState::Idle:
			// 如果进入待机状态，可以停止移动
			GetCharacterMovement()->StopMovementImmediately();
			break;
		
		default:
			break;
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

void ABaseCharacter::SetAnimationState(ECharacterAnimState NewState)
{
  
	CharacterAnimBase->SetCurrentAnimState(NewState);
	
    
    // 打印日志，便于调试
    //UE_LOG(LogTemp, Log, TEXT("%s animation state changed: %s -> %s"),
     //      *GetName(),
     //      *UEnum::GetValueAsString(TEXT("ECharacterAnimState"), PreviousState),
     //      *UEnum::GetValueAsString(TEXT("ECharacterAnimState"), NewState));
}


void ABaseCharacter::ChangeBPState(ECharacterAnimState NewState)
{
	// 如果状态没有变化，直接返回
	if (CurrentState == NewState)
	{
		return;
	}
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
		// 跳跃逻辑可能已经在Jump()函数中实现
		break;
        
	case ECharacterAnimState::Attack:
		// 在这里可以添加攻击相关的逻辑
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
    
	
	CurrentState = NewState;

	PlayerController->GetBlackboardComponent()->SetValueAsEnum(FName("CurrentState"), (uint8)NewState);	
}
