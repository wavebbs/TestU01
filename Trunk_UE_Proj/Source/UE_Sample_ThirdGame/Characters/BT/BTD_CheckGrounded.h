// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_CheckGrounded.generated.h"

/**
 * 检测角色是否落地的行为树装饰器
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API UBTD_CheckGrounded : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTD_CheckGrounded();

protected:
	// 覆盖基类的条件判断方法
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	virtual FString GetStaticDescription() const override;
};
