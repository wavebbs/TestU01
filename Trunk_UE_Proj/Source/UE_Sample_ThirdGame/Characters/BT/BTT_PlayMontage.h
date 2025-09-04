// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_PlayMontage.generated.h"

// 前向声明
class UAnimMontage;
class ABaseCharacter;

/**
 * 播放动画蒙太奇的行为树任务节点
 * 支持通过名称指定要播放的蒙太奇，并可设置播放速率和开始片段
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API UBTT_PlayMontage : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTT_PlayMontage();

	/** 执行任务的主要逻辑 */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	/** 任务被中止时调用 */
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	/** 获取任务的静态描述 */
	virtual FString GetStaticDescription() const override;

protected:
	/** 要播放的蒙太奇名称 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (DisplayName = "蒙太奇名称"))
	FString MontageName;

	/** 播放速率，1.0为正常速度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (DisplayName = "播放速率", ClampMin = "0.1", ClampMax = "5.0"))
	float PlayRate = 1.0f;

	/** 开始播放的片段名称（可选） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (DisplayName = "开始片段"))
	FString StartSectionName;

	/** 是否等待蒙太奇播放完成 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (DisplayName = "等待播放完成"))
	bool bWaitForCompletion = true;

	/** 混合输出时间（当任务被中止时） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (DisplayName = "混合输出时间", ClampMin = "0.0", ClampMax = "2.0"))
	float BlendOutTime = 0.25f;

private:
	/** 蒙太奇播放完成时的回调 */
	UFUNCTION()
	void OnMontageCompleted(UAnimMontage* Montage, bool bInterrupted);

	/** 存储当前播放的蒙太奇引用 */
	UPROPERTY()
	UAnimMontage* CurrentPlayingMontage = nullptr;

	/** 存储行为树组件的弱引用 */
	TWeakObjectPtr<UBehaviorTreeComponent> CachedOwnerComp;

	/** 任务是否完成的标志 */
	bool bTaskCompleted = false;
};
