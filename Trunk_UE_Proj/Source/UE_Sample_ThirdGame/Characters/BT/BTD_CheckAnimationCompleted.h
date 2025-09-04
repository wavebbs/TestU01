// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_CheckAnimationCompleted.generated.h"

class APlayerCharacter;
class UCharacterAnimInstanceBase;
/**
 * 检测指定动画是否播放完毕的行为树装饰器
 * 使用PlayerCharacter中的动画检测方法
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API UBTD_CheckAnimationCompleted : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTD_CheckAnimationCompleted();

protected:
	/** 要检测的动画名称 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FString AnimationName;

	/** 是否检测动画完全播放完毕 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	bool bCheckCompleted = true;

	/** 如果为false则检测动画是否正在播放 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (EditCondition = "!bCheckCompleted"))
	bool bCheckPlaying = false;

	// 覆盖基类的条件判断方法
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	virtual FString GetStaticDescription() const override;

private:
	/** 获取角色的动画实例 */
	UCharacterAnimInstanceBase* GetCharacterAnimInstance(UBehaviorTreeComponent& OwnerComp) const;
};
