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

UAnimMontage* UCharacterAnimInstanceBase::PlayAnimMontageByName(const FString& MontageName, float PlayRate, FName StartSectionName)
{
	// 从映射中查找蒙太奇
	UAnimMontage** FoundMontage = AnimMontageMap.Find(MontageName);
	
	if (FoundMontage && *FoundMontage)
	{
		{
			float const Duration = Montage_Play(*FoundMontage, PlayRate);

			if (Duration > 0.f)
			{
				// Start at a given Section.
				if( StartSectionName != NAME_None )
				{
					Montage_JumpToSection(StartSectionName, *FoundMontage);
				}
			}
		}	
		
		return *FoundMontage;
	}

	return nullptr;
	
	
}

void UCharacterAnimInstanceBase::StopAnimMontageByName(const FString& MontageName, float BlendOutTime)
{
	UAnimMontage** FoundMontage = AnimMontageMap.Find(MontageName);
	if (FoundMontage && *FoundMontage)
	{
			Montage_Stop(BlendOutTime, *FoundMontage);
			UE_LOG(LogTemp, Log, TEXT("PlayerCharacter: 停止播放蒙太奇 '%s'"), *MontageName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter: 无法找到要停止的蒙太奇 '%s'"), *MontageName);
	}
}

bool UCharacterAnimInstanceBase::IsPlayingMontageByName(const FString& MontageName) const
{
	UAnimMontage* const* foundMontagePtr = AnimMontageMap.Find(MontageName);
	
	if (foundMontagePtr && *foundMontagePtr)
	{
		return Montage_IsPlaying(*foundMontagePtr);

	}
	
	return false;
}



