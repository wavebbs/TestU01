// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"

#include "BTD_CheckAction.generated.h"

class UInputAction;
/**
 * 
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API UBTD_CheckAction : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTD_CheckAction();

	// 输入动作
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* CAction;

protected:
	// 覆盖基类的条件判断方法
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	virtual FString GetStaticDescription() const override;

	// virtual FName GetNodeIconName() const override;
};
