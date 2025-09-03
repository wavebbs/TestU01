#include "CharacterAnimInstanceBase.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"

void UCharacterAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	// 初始化动画属性默认值
	Speed = 0.0f;
	bIsMoving = false;
	MoveDirection = FVector::ZeroVector;
	FacingRotation = FRotator::ZeroRotator;
	
	// 初始化新增字段
	bIsInAir = false;
	CurrentSpeed = FVector::ZeroVector;
	Roll = 0.0f;
	Pitch = 0.0f;
	Yaw = 0.0f;
	YawDelta = 0.0f;
	PreviousYaw = 0.0f;

	// 调用蓝图初始化事件
	BlueprintInitializeAnimation();
}

void UCharacterAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* OwnerPawn = TryGetPawnOwner();
	if (!OwnerPawn)
	{
		Speed = 0.f;
		bIsMoving = false;
		MoveDirection = FVector::ZeroVector;
		FacingRotation = FRotator::ZeroRotator;
		
		// 重置新增字段
		bIsInAir = false;
		CurrentSpeed = FVector::ZeroVector;
		Roll = 0.0f;
		Pitch = 0.0f;
		Yaw = 0.0f;
		YawDelta = 0.0f;
		
		return;
	}

	// 更新基础移动信息
	CurrentSpeed = OwnerPawn->GetVelocity();
	Speed = CurrentSpeed.Size();
	bIsMoving = Speed > 3.f; // 可根据实际情况调整阈值
	MoveDirection = Speed > 0.f ? CurrentSpeed.GetSafeNormal() : FVector::ZeroVector;
	FacingRotation = OwnerPawn->GetActorRotation();
	
	// 获取角色组件，用于获取更多详细信息
	ACharacter* Character = Cast<ACharacter>(OwnerPawn);
	if (Character)
	{
		// 更新是否在空中
		bIsInAir = Character->GetMovementComponent() ? 
			Character->GetMovementComponent()->IsFalling() : false;
		
		// 更新旋转信息
		Roll = FacingRotation.Roll;
		Pitch = FacingRotation.Pitch;
		Yaw = FacingRotation.Yaw;
		
		// 计算Yaw变化量（角度）
		YawDelta = FMath::FindDeltaAngleDegrees(PreviousYaw, Yaw);
		PreviousYaw = Yaw; // 更新上一帧的Yaw值
		
	}
}

void UCharacterAnimInstanceBase::SetCurrentAnimState(ECharacterAnimState NewState)
{
	// 如果状态没有变化，直接返回
	if (CurrentState == NewState)
	{
		return;
	}
	
	CurrentState = NewState;
}

bool UCharacterAnimInstanceBase::CheckState(ECharacterAnimState State) const
{
	return CurrentState == State;
}

float UCharacterAnimInstanceBase::GetAnimationProgress(const FString& AnimationName) const
{
	// 遍历所有正在播放的蒙太奇，查找匹配名称的动画
	//const TArray<FAnimMontageInstance*>& MontageInstances = GetActiveMontageInstances();
	
	for (const FAnimMontageInstance* MontageInstance : MontageInstances)
	{
		if (MontageInstance && MontageInstance->Montage)
		{
			// 检查蒙太奇名称是否匹配
			FString MontageName = MontageInstance->Montage->GetName();
			if (MontageName.Contains(AnimationName))
			{
				// 计算播放进度：当前位置 / 总长度
				float CurrentPosition = MontageInstance->GetPosition();
				float TotalLength = MontageInstance->Montage->GetPlayLength();
				
				if (TotalLength > 0.0f)
				{
					return CurrentPosition / TotalLength;
				}
			}
		}
	}
	
	// 如果没有找到匹配的动画，返回 -1 表示未播放
	return -1.0f;
}

bool UCharacterAnimInstanceBase::IsAnimationPlaying(const FString& AnimationName) const
{
	float Progress = GetAnimationProgress(AnimationName);
	return Progress >= 0.0f && Progress <= 1.0f;
}

bool UCharacterAnimInstanceBase::IsAnimationCompleted(const FString& AnimationName) const
{
	float Progress = GetAnimationProgress(AnimationName);
	return Progress > 1.0f;
}

float UCharacterAnimInstanceBase::GetMontageProgress(UAnimMontage* Montage) const
{
	if (!Montage)
	{
		return -1.0f;
	}
	
	// 查找指定蒙太奇的播放实例
	//const TArray<FAnimMontageInstance*>& MontageInstances = GetActiveMontageInstances();
	
	for (const FAnimMontageInstance* MontageInstance : MontageInstances)
	{
		if (MontageInstance && MontageInstance->Montage == Montage)
		{
			// 计算播放进度
			float CurrentPosition = MontageInstance->GetPosition();
			float TotalLength = Montage->GetPlayLength();
			
			if (TotalLength > 0.0f)
			{
				return CurrentPosition / TotalLength;
			}
		}
	}
	
	return -1.0f;
}
