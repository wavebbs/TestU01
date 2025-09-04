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
	
	// 自动清理已完成的蒙太奇状态
	UpdatePlayingMontageStates();
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
				// 记录蒙太奇名称和开始播放的帧号
				PlayingMontageFrames.Add(MontageName, 0);
				
				UE_LOG(LogTemp, Log, TEXT("CharacterAnimInstanceBase: 开始播放蒙太奇 '%s'，播放时长: %.2f秒，帧号: %llu"), 
					*MontageName, Duration, GFrameCounter);
				
				// Start at a given Section.
				if( StartSectionName != NAME_None )
				{
					Montage_JumpToSection(StartSectionName, *FoundMontage);
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CharacterAnimInstanceBase: 播放蒙太奇 '%s' 失败"), *MontageName);
			}
		}	
		
		return *FoundMontage;
	}

	UE_LOG(LogTemp, Warning, TEXT("CharacterAnimInstanceBase: 无法找到名称为 '%s' 的蒙太奇"), *MontageName);
	return nullptr;
	
	
}

void UCharacterAnimInstanceBase::StopAnimMontageByName(const FString& MontageName, float BlendOutTime)
{
	UAnimMontage** FoundMontage = AnimMontageMap.Find(MontageName);
	if (FoundMontage && *FoundMontage)
	{
		Montage_Stop(BlendOutTime, *FoundMontage);
		
		// 从播放蒙太奇映射中移除
		PlayingMontageFrames.Remove(MontageName);
		
		UE_LOG(LogTemp, Log, TEXT("CharacterAnimInstanceBase: 停止播放蒙太奇 '%s'"), *MontageName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CharacterAnimInstanceBase: 无法找到要停止的蒙太奇 '%s'"), *MontageName);
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

bool UCharacterAnimInstanceBase::IsMontageCompleted(const FString& MontageName) const
{
	// 首先检查蒙太奇是否在我们的跟踪列表中
	if (!PlayingMontageFrames.Contains(MontageName))
	{
		// 如果不在播放列表中，说明从未开始播放或已经完成
		UE_LOG(LogTemp, Verbose, TEXT("CharacterAnimInstanceBase: 蒙太奇 '%s' 不在播放列表中，认为已完成"), *MontageName);
		return true;
	}
	
	// 从映射中查找蒙太奇
	UAnimMontage* const* FoundMontagePtr = AnimMontageMap.Find(MontageName);
	
	if (!FoundMontagePtr || !*FoundMontagePtr)
	{
		// 如果找不到蒙太奇，从播放列表中移除并认为已完成
		const_cast<UCharacterAnimInstanceBase*>(this)->PlayingMontageFrames.Remove(MontageName);
		UE_LOG(LogTemp, Warning, TEXT("CharacterAnimInstanceBase: 无法找到名称为 '%s' 的蒙太奇，从播放列表中移除"), *MontageName);
		return true;
	}
    const int32* frame = PlayingMontageFrames.Find(MontageName);
	
	if (*frame == 0)
	{
		return false;
	}
	
	UAnimMontage* TargetMontage = *FoundMontagePtr;
	
	// 检查蒙太奇是否还在播放
	if (!Montage_IsPlaying(TargetMontage))
	{
		// 如果蒙太奇已经停止播放，从播放列表中移除并认为已完成
		const_cast<UCharacterAnimInstanceBase*>(this)->PlayingMontageFrames.Remove(MontageName);
		UE_LOG(LogTemp, Log, TEXT("CharacterAnimInstanceBase: 蒙太奇 '%s' 已停止播放，标记为完成"), *MontageName);
		return true;
	}
	
	// 获取蒙太奇的播放信息
	float CurrentPosition = Montage_GetPosition(TargetMontage);
	float MontageLength = TargetMontage->GetPlayLength();
	
	// 计算播放进度百分比
	float PlaybackProgress = (MontageLength > 0.0f) ? (CurrentPosition / MontageLength) : 0.0f;
	
	// 如果播放进度达到99%以上，或者播放位置接近结束，认为播放完毕
	// 使用99%而不是100%是为了提供一些容错空间，避免由于浮点精度问题导致判断失误
	const float CompletionThreshold = 0.99f;
	bool bIsCompleted = (PlaybackProgress >= CompletionThreshold) || (CurrentPosition >= (MontageLength - 0.1f));
	
	// 如果播放完成，从播放列表中移除
	if (bIsCompleted)
	{
		const_cast<UCharacterAnimInstanceBase*>(this)->PlayingMontageFrames.Remove(MontageName);
		UE_LOG(LogTemp, Log, TEXT("CharacterAnimInstanceBase: 蒙太奇 '%s' 播放完成，从播放列表中移除"), *MontageName);
	}
	
	UE_LOG(LogTemp, Verbose, TEXT("CharacterAnimInstanceBase: 蒙太奇 '%s' 播放进度: %.2f%%, 当前位置: %.2f, 总长度: %.2f, 是否完成: %s"), 
		*MontageName, PlaybackProgress * 100.0f, CurrentPosition, MontageLength, bIsCompleted ? TEXT("是") : TEXT("否"));
	
	return bIsCompleted;
}

void UCharacterAnimInstanceBase::UpdatePlayingMontageStates()
{
	if (PlayingMontageFrames.Num() == 0)
	{
		// 如果没有正在播放的蒙太奇，直接返回
		return;
	}

	// 创建一个临时数组来存储需要移除的蒙太奇名称
	// 避免在遍历过程中修改集合导致的问题
	TArray<FString> CompletedMontages;

	// 遍历所有正在播放的蒙太奇
	for (auto& MontagePair : PlayingMontageFrames)
	{
		const FString& MontageName = MontagePair.Key;
		const int32 StartFrame = MontagePair.Value;
		
		// 检查是否为同帧播放的蒙太奇，如果是则跳过检查
		if (StartFrame == GFrameCounter)
		{
			UE_LOG(LogTemp, Verbose, TEXT("CharacterAnimInstanceBase: 跳过同帧清理检查 - 蒙太奇 '%s'，当前帧号: %llu"), 
				*MontageName, GFrameCounter);
			continue;
		}

		// 从映射中查找蒙太奇
		UAnimMontage* const* TargetMontage = AnimMontageMap.Find(MontageName);
		
		if (!TargetMontage || !*TargetMontage)
		{
			// 如果找不到蒙太奇资源，标记为需要移除
			CompletedMontages.Add(MontageName);
			UE_LOG(LogTemp, Warning, TEXT("CharacterAnimInstanceBase: 自动清理 - 无法找到蒙太奇 '%s'，标记为移除"), *MontageName);
			continue;
		}
		

		if (StartFrame == 0)
		{
			if (Montage_IsPlaying(*TargetMontage))
			{
				MontagePair.Value = GFrameCounter;
			}

			continue;
		}
		// 检查蒙太奇是否还在播放
		else if (!Montage_IsPlaying(*TargetMontage))
		{
			// 如果已经停止播放，标记为需要移除
			CompletedMontages.Add(MontageName);
			UE_LOG(LogTemp, Log, TEXT("CharacterAnimInstanceBase: 自动清理 - 蒙太奇 '%s' 已停止播放"), *MontageName);
			continue;
		}

		// 检查播放进度
		float CurrentPosition = Montage_GetPosition(*TargetMontage);
		float MontageLength = (*TargetMontage)->GetPlayLength();
		
		if (MontageLength > 0.0f)
		{
			float PlaybackProgress = CurrentPosition / MontageLength;
			const float CompletionThreshold = 0.99f;
			
			// 检查是否接近完成
			if (PlaybackProgress >= CompletionThreshold || CurrentPosition >= (MontageLength - 0.1f))
			{
				CompletedMontages.Add(MontageName);
				UE_LOG(LogTemp, Log, TEXT("CharacterAnimInstanceBase: 自动清理 - 蒙太奇 '%s' 播放完成，进度: %.2f%%"), 
					*MontageName, PlaybackProgress * 100.0f);
			}
		}
	}

	// 移除已完成的蒙太奇记录
	for (const FString& CompletedMontage : CompletedMontages)
	{
		PlayingMontageFrames.Remove(CompletedMontage);
	}

	// 如果有蒙太奇被清理，输出调试信息
	if (CompletedMontages.Num() > 0)
	{
		UE_LOG(LogTemp, Verbose, TEXT("CharacterAnimInstanceBase: 自动清理完成，移除了 %d 个蒙太奇，剩余播放中: %d 个"), 
			CompletedMontages.Num(), PlayingMontageFrames.Num());
	}
}
