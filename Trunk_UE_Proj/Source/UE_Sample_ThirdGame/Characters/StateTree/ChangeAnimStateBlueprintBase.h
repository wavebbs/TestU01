// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "StateTreeExecutionContext.h"
#include "Characters/BaseCharacter.h"
#include "Characters/Enum/CharacterEnumDefine.h"
#include "ChangeAnimStateBlueprintBase.generated.h"

/**
 * 状态树任务：改变角色的动画状态
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API UChangeAnimStateBlueprintBase : public UStateTreeTaskBlueprintBase
{
	GENERATED_BODY()
	
public:
	// 构造函数
	UChangeAnimStateBlueprintBase(const FObjectInitializer& ObjectInitializer);

	// 执行任务
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) override;

public:
	/** 角色引用 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	ABaseCharacter* Character;
	
	/** 目标动画状态 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	ECharacterAnimState TargetAnimState;

protected:
	// 设置角色动画状态的实现函数
	UFUNCTION(BlueprintCallable, Category = "Animation")
	virtual void SetAnimState(ABaseCharacter* InCharacter, ECharacterAnimState InAnimState);
};
