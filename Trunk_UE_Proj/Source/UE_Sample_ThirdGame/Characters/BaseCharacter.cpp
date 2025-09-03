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

#include "Characters/CharacterAnimInstanceBase.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Game/MyCharacterManager.h"

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

	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (UMyCharacterManager* CharacterManager = GameInstance->GetSubsystem<UMyCharacterManager>())
			{
				CharacterManager->RegisterCharacter(this);
			}
		}
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
		case ECharacterAnimState::Walk:
			// 设置行走速度
			GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
			break;
		case ECharacterAnimState::Run:
			// 设置奔跑速度
			GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	
			break;
		default:
			break;
	}
}

void ABaseCharacter::Move(const FVector2D MovementVector)
{
	UE_LOG(LogTemp, Warning, TEXT("MovementVector: %s"), *MovementVector.ToString());
	// 确保有控制器并且有输入
	if (Controller && (MovementVector.X != 0.f || MovementVector.Y != 0.f))
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

	// 保存旧状态
	ECharacterAnimState OldState = CurrentState;

	// 更新当前状态
	CurrentState = NewState;

	// 调用状态变化回调

	OnStateChange(OldState, NewState);
}


void ABaseCharacter::StartFloatingWithMovementMode(float Duration)
{
	if (m_bIsFloating) return;
	
	m_bIsFloating = true;
	
	// 保存当前移动模式
	m_OriginalMovementMode = GetCharacterMovement()->MovementMode;
	m_FloatingStartLocation = GetActorLocation();
	
	// 切换到飞行模式
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	
	
	// 设置定时器，在指定时间后结束浮空状态
	GetWorld()->GetTimerManager().SetTimer(FloatingTimerHandle, this, &ABaseCharacter::EndFloatingWithMovementMode, Duration, false);
	
	UE_LOG(LogTemp, Log, TEXT("BaseCharacter: Started MovementMode floating for %.2f seconds - Mode changed to Flying"), Duration);
}

void ABaseCharacter::EndFloatingWithMovementMode()
{
	// 恢复原始移动模式
	GetCharacterMovement()->SetMovementMode(m_OriginalMovementMode);
	
	// 重置浮空状态
	m_bIsFloating = false;
	
	// 清除定时器
	GetWorld()->GetTimerManager().ClearTimer(FloatingTimerHandle);
	
	UE_LOG(LogTemp, Log, TEXT("BaseCharacter: Ended MovementMode floating - Restored to original movement mode"));
}

void ABaseCharacter::OnStateChange(ECharacterAnimState OldState, ECharacterAnimState NewState)
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
		StartFloatingWithMovementMode(0.2f);
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
    
}
