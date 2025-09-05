// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/BT/BTT_PlayMontage.h"
#include "Characters/BaseCharacter.h"
#include "Characters/Player/PlayerCharacter.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

UBTT_PlayMontage::UBTT_PlayMontage()
{
	NodeName = TEXT("Play Montage");
	
	// 设置为可以在执行期间被中止
	bNotifyTick = false;
	bNotifyTaskFinished = true;
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTT_PlayMontage::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// 重置任务状态
	bTaskCompleted = false;
	CurrentPlayingMontage = nullptr;
	CachedOwnerComp = &OwnerComp;

	AController* actor = Cast<AController>(	OwnerComp.GetOwner());
	if (!actor)
	{
		return EBTNodeResult::Failed;
	}

	ABaseCharacter* Character = Cast<ABaseCharacter>(actor->GetPawn());


	if (!Character)
	{
		UE_LOG(LogTemp, Warning, TEXT("BTT_PlayMontage: 无法获取角色对象"));
		return EBTNodeResult::Failed;
	}

	// 检查蒙太奇名称是否有效
	if (MontageName.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("BTT_PlayMontage: 蒙太奇名称为空"));
		return EBTNodeResult::Failed;
	}

	// 尝试播放蒙太奇
	UAnimMontage* PlayedMontage = nullptr;

	// 如果是PlayerCharacter，使用其专门的播放方法
	if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(Character))
	{
		FName SectionName = StartSectionName.IsEmpty() ? NAME_None : FName(*StartSectionName);
		PlayedMontage = PlayerCharacter->PlayAnimMontageByName(MontageName, PlayRate, SectionName);
	}
	else
	{
		// 对于其他角色类型，使用通用方法
		UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();
		if (!AnimInstance)
		{
			UE_LOG(LogTemp, Warning, TEXT("BTT_PlayMontage: 无法获取动画实例"));
			return EBTNodeResult::Failed;
		}

		// 尝试加载蒙太奇资源
		FString MontageAssetPath = FString::Printf(TEXT("/Game/Content/Animations/%s"), *MontageName);
		UAnimMontage* MontageAsset = LoadObject<UAnimMontage>(nullptr, *MontageAssetPath);
		
		if (!MontageAsset)
		{
			UE_LOG(LogTemp, Warning, TEXT("BTT_PlayMontage: 无法加载蒙太奇资源 '%s'"), *MontageName);
			return EBTNodeResult::Failed;
		}

		// 播放蒙太奇
		float MontageLength = AnimInstance->Montage_Play(MontageAsset, PlayRate);
		if (MontageLength > 0.0f)
		{
			PlayedMontage = MontageAsset;
			
			// 如果指定了开始片段，跳转到该片段
			if (!StartSectionName.IsEmpty())
			{
				AnimInstance->Montage_JumpToSection(FName(*StartSectionName), MontageAsset);
			}
		}
	}

	// 检查播放是否成功
	if (!PlayedMontage)
	{
		UE_LOG(LogTemp, Warning, TEXT("BTT_PlayMontage: 播放蒙太奇 '%s' 失败"), *MontageName);
		return EBTNodeResult::Failed;
	}

	CurrentPlayingMontage = PlayedMontage;

	// 如果不需要等待播放完成，立即返回成功
	if (!bWaitForCompletion)
	{
		UE_LOG(LogTemp, Log, TEXT("BTT_PlayMontage: 成功开始播放蒙太奇 '%s'（不等待完成）"), *MontageName);
		return EBTNodeResult::Succeeded;
	}

	// 绑定蒙太奇完成回调
	UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AnimInstance->OnMontageEnded.AddDynamic(this, &UBTT_PlayMontage::OnMontageCompleted);
	}

	UE_LOG(LogTemp, Log, TEXT("BTT_PlayMontage: 开始播放蒙太奇 '%s'，等待播放完成"), *MontageName);
	
	// 返回正在进行状态，等待蒙太奇播放完成
	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTT_PlayMontage::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	AController* actor = Cast<AController>(	OwnerComp.GetOwner());
	if (!actor)
	{
		return EBTNodeResult::Failed;
	}

	if (actor)
	{
		ABaseCharacter* Character = Cast<ABaseCharacter>(actor->GetPawn());
		if (Character && CurrentPlayingMontage)
		{
			UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				// 停止播放蒙太奇
				AnimInstance->Montage_Stop(BlendOutTime, CurrentPlayingMontage);
				
				// 解除回调绑定
				AnimInstance->OnMontageEnded.RemoveDynamic(this, &UBTT_PlayMontage::OnMontageCompleted);
				
				UE_LOG(LogTemp, Log, TEXT("BTT_PlayMontage: 任务被中止，停止播放蒙太奇 '%s'"), *MontageName);
			}
		}
	}

	// 重置状态
	CurrentPlayingMontage = nullptr;
	CachedOwnerComp = nullptr;
	bTaskCompleted = false;

	return EBTNodeResult::Aborted;
}

FString UBTT_PlayMontage::GetStaticDescription() const
{
	FString Description = FString::Printf(TEXT("播放蒙太奇: %s"), 
		MontageName.IsEmpty() ? TEXT("未设置") : *MontageName);
	
	if (PlayRate != 1.0f)
	{
		Description += FString::Printf(TEXT(" (速率: %.1fx)"), PlayRate);
	}
	
	if (!StartSectionName.IsEmpty())
	{
		Description += FString::Printf(TEXT(" (从片段: %s)"), *StartSectionName);
	}
	
	if (!bWaitForCompletion)
	{
		Description += TEXT(" (不等待完成)");
	}
	
	return Description;
}

void UBTT_PlayMontage::OnMontageCompleted(UAnimMontage* Montage, bool bInterrupted)
{
	// 检查是否是我们正在播放的蒙太奇
	if (Montage != CurrentPlayingMontage)
	{
		return;
	}

	// 避免重复处理
	if (bTaskCompleted)
	{
		return;
	}

	bTaskCompleted = true;

	// 解除回调绑定
	if (UBehaviorTreeComponent* OwnerComp = CachedOwnerComp.Get())
	{
		AController* actor = Cast<AController>(	OwnerComp->GetOwner());

		if (actor)
		{
			ABaseCharacter* Character = Cast<ABaseCharacter>(actor->GetPawn());
			if (Character)
			{
				UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();
				if (AnimInstance)
				{
					AnimInstance->OnMontageEnded.RemoveDynamic(this, &UBTT_PlayMontage::OnMontageCompleted);
				}
			}
		}

		// 通知行为树任务完成
		EBTNodeResult::Type Result = bInterrupted ? EBTNodeResult::Failed : EBTNodeResult::Succeeded;
		
		UE_LOG(LogTemp, Log, TEXT("BTT_PlayMontage: 蒙太奇 '%s' 播放完成，结果: %s"), 
			*MontageName, 
			Result == EBTNodeResult::Succeeded ? TEXT("成功") : TEXT("被中断"));

		FinishLatentTask(*OwnerComp, Result);
	}

	// 重置状态
	CurrentPlayingMontage = nullptr;
	CachedOwnerComp = nullptr;
}
