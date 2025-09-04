// Fill out your copyright notice in the Description page of Project Settings.

#include "BTD_CheckAnimationCompleted.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "../CharacterAnimInstanceBase.h"

UBTD_CheckAnimationCompleted::UBTD_CheckAnimationCompleted()
{
	NodeName = "Check Animation Completed";
	
	// 设置为观察者模式，当条件变化时自动重新评估
	bNotifyBecomeRelevant = true;
	bNotifyCeaseRelevant = true;
	
	// 默认设置
	AnimationName = TEXT("");
	bCheckCompleted = true;
	bCheckPlaying = false;
}

bool UBTD_CheckAnimationCompleted::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	// 获取角色的动画实例
	UCharacterAnimInstanceBase* AnimInstance = GetCharacterAnimInstance(OwnerComp);
	if (!AnimInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("BTD_CheckAnimationCompleted: 无法获取角色动画实例"));
		return false;
	}

	// 检查动画名称是否有效
	if (AnimationName.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("BTD_CheckAnimationCompleted: 动画名称为空"));
		return false;
	}

	// 根据设置选择检测方式
	if (bCheckCompleted)
	{
		// 检测动画是否播放完毕（进度 > 1.0）
		bool bIsCompleted = AnimInstance->IsAnimationCompleted(AnimationName);
		UE_LOG(LogTemp, Log, TEXT("BTD_CheckAnimationCompleted: 检测动画 [%s] 是否完成播放，结果: %s"), 
			*AnimationName, bIsCompleted ? TEXT("是") : TEXT("否"));
		return bIsCompleted;
	}
	else if (bCheckPlaying)
	{
		// 检测动画是否正在播放
		bool bIsPlaying = AnimInstance->IsAnimationPlaying(AnimationName);
		UE_LOG(LogTemp, Log, TEXT("BTD_CheckAnimationCompleted: 检测动画 [%s] 是否正在播放，结果: %s"), 
			*AnimationName, bIsPlaying ? TEXT("是") : TEXT("否"));
		return bIsPlaying;
	}
	else
	{
		// 获取动画播放进度
		float Progress = AnimInstance->GetAnimationProgress(AnimationName);
		UE_LOG(LogTemp, Log, TEXT("BTD_CheckAnimationCompleted: 动画 [%s] 播放进度: %f"), 
			*AnimationName, Progress);
		return Progress >= 0.0f; // 进度大于等于0表示动画存在
	}
}

FString UBTD_CheckAnimationCompleted::GetStaticDescription() const
{
	FString Description = FString::Printf(TEXT("动画: %s"), 
		AnimationName.IsEmpty() ? TEXT("未设置") : *AnimationName);

	if (bCheckCompleted)
	{
		Description += TEXT(" (检测是否播放完毕)");
	}
	else if (bCheckPlaying)
	{
		Description += TEXT(" (检测是否正在播放)");
	}
	else
	{
		Description += TEXT(" (检测是否存在)");
	}

	return Description;
}

UCharacterAnimInstanceBase* UBTD_CheckAnimationCompleted::GetCharacterAnimInstance(UBehaviorTreeComponent& OwnerComp) const
{
	AController* actor = Cast<AController>(	OwnerComp.GetOwner());
	if (!actor)
	{
		return nullptr;
	}


	// 获取被控制的角色
	ACharacter* Character = Cast<ACharacter>(actor->GetPawn());
	if (!Character)
	{
		return nullptr;
	}

	// 获取角色的骨骼网格组件
	USkeletalMeshComponent* MeshComponent = Character->GetMesh();
	if (!MeshComponent)
	{
		return nullptr;
	}

	// 获取角色的动画实例
	UAnimInstance* AnimInstance = MeshComponent->GetAnimInstance();
	return Cast<UCharacterAnimInstanceBase>(AnimInstance);
}
