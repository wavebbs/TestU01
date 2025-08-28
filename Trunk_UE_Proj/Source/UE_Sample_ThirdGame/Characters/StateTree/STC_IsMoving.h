// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeConditionBlueprintBase.h"
#include "StateTreeExecutionContext.h"
#include "Characters/BaseCharacter.h"
#include "STC_IsMoving.generated.h"

/**
 * 状态树条件：检查角色是否在移动
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API USTC_IsMoving : public UStateTreeConditionBlueprintBase
{
	GENERATED_BODY()
	
public:
	// 构造函数
	USTC_IsMoving(const FObjectInitializer& ObjectInitializer);

protected:
	// 判断条件是否满足的实现方法，覆盖基类方法
	virtual bool TestCondition(FStateTreeExecutionContext& Context) const override;

public:
	/** 角色引用 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	ABaseCharacter* BaseCharacter;
};
