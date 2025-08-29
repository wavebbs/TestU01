// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Characters/Enum/CharacterEnumDefine.h"
#include "StateChangeAbilityLibrary.generated.h"

/**
 * 状态变化能力蓝图函数库
 * 提供在蓝图中操作FStateChangeAbility的便捷方法
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API UStateChangeAbilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// 检查是否包含指定状态
	UFUNCTION(BlueprintPure, Category = "State Change Ability", CallInEditor)
	static bool HasState(const FStateChangeAbility& Ability, ECanChangeState State);

	// 添加状态
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility AddState(const FStateChangeAbility& Ability, ECanChangeState State);

	// 移除状态
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility RemoveState(const FStateChangeAbility& Ability, ECanChangeState State);

	// 切换状态
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility ToggleState(const FStateChangeAbility& Ability, ECanChangeState State);

	// 清空所有状态
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility ClearAllStates(const FStateChangeAbility& Ability);

	// 设置所有状态
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility SetAllStates();

	// 检查两个状态能力是否相等
	UFUNCTION(BlueprintPure, Category = "State Change Ability", CallInEditor)
	static bool IsEqual(const FStateChangeAbility& A, const FStateChangeAbility& B);

	// 组合两个状态能力（OR运算）
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility CombineStates(const FStateChangeAbility& A, const FStateChangeAbility& B);

	// 获取交集状态（AND运算）
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility GetIntersection(const FStateChangeAbility& A, const FStateChangeAbility& B);

	// 检查是否有任何状态
	UFUNCTION(BlueprintPure, Category = "State Change Ability", CallInEditor)
	static bool HasAnyState(const FStateChangeAbility& Ability);

	// 检查是否包含所有指定状态
	UFUNCTION(BlueprintPure, Category = "State Change Ability", CallInEditor)
	static bool HasAllStates(const FStateChangeAbility& Ability, const FStateChangeAbility& RequiredStates);

	// 检查是否包含任意指定状态
	UFUNCTION(BlueprintPure, Category = "State Change Ability", CallInEditor)
	static bool HasAnyOfStates(const FStateChangeAbility& Ability, const FStateChangeAbility& TestStates);

	// 从整数创建状态能力
	UFUNCTION(BlueprintCallable, Category = "State Change Ability", CallInEditor)
	static FStateChangeAbility MakeStateAbilityFromInt(int32 Value);

	// 获取状态能力的整数值
	UFUNCTION(BlueprintPure, Category = "State Change Ability", CallInEditor)
	static int32 GetStateAbilityValue(const FStateChangeAbility& Ability);

	// 转换为字符串（用于调试）
	UFUNCTION(BlueprintPure, Category = "State Change Ability", CallInEditor)
	static FString StateAbilityToString(const FStateChangeAbility& Ability);
};
