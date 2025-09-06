#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "CharacterEnumDefine.generated.h"

/**
 * 动画状态枚举，定义角色可能的动画状态
 */
UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum ECharacterAnimState
{
	None = 0 UMETA(DisplayName = "None"),
	Idle  = 1 << 1 UMETA(DisplayName = "Idle"),
	Walk  = 1 << 2 UMETA(DisplayName = "Walk"),
	Run  = 1 << 3 UMETA(DisplayName = "Run"),
	Jump  = 1 << 4 UMETA(DisplayName = "Jump"),
	Attack  = 1 << 5 UMETA(DisplayName = "Attack"),
	Dodge  = 1 << 6 UMETA(DisplayName = "Dodge"),
	Death  = 1 << 7 UMETA(DisplayName = "Dead"),
	Hit  = 1 << 8 UMETA(DisplayName = "BeHit")
};
//
// /**
//  * 状态改变能力位标志枚举，支持多选
//  * 注意：必须使用传统枚举（非enum class）才能在UE中支持多选
//  */
// UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
// enum ECanChangeState
// {
// 	None = 0 UMETA(DisplayName = "None"),
// 	CanIdle = 1 << 0 UMETA(DisplayName = "Can Idle"),
// 	CanWalk = 1 << 1 UMETA(DisplayName = "Can Walk"),
// 	CanRun = 1 << 2 UMETA(DisplayName = "Can Run"),
// 	CanJump = 1 << 3 UMETA(DisplayName = "Can Jump"),
// 	CanAttack = 1 << 4 UMETA(DisplayName = "Can Attack"),
// 	CanDodge = 1 << 5 UMETA(DisplayName = "Can Dodge"),
// 	CanDeath = 1 << 6 UMETA(DisplayName = "Can Death"),
// 	CanHit = 1 << 7 UMETA(DisplayName = "Can Hit")
// };

/**
 * 状态变化能力结构体 - 在蓝图中支持多选的位标志
 * 这个结构体包装了位标志枚举，提供了蓝图友好的接口
 */
USTRUCT(BlueprintType)
struct UE_SAMPLE_THIRDGAME_API FStateChangeAbility
{
	GENERATED_BODY()

public:
	FStateChangeAbility()
		: Value(ECharacterAnimState::None)
	{
	}

	FStateChangeAbility(int32 InValue)
		: Value(InValue)
	{
	}

	// 位标志值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State", meta = (Bitmask, BitmaskEnum = "ECharacterAnimState"))
	int32 Value;

	// 检查是否包含指定状态
	FORCEINLINE bool HasState(ECharacterAnimState State) const
	{
		return (Value & State) != 0;
	}

	// 添加状态
	FORCEINLINE void AddState(ECharacterAnimState State)
	{
		Value |= State;
	}

	// 移除状态
	FORCEINLINE void RemoveState(ECharacterAnimState State)
	{
		Value &= ~State;
	}

	// 切换状态
	FORCEINLINE void ToggleState(ECharacterAnimState State)
	{
		Value ^= State;
	}

	// 清空所有状态
	FORCEINLINE void ClearAll()
	{
		Value = ECharacterAnimState::None;
	}

	// 设置所有状态
	FORCEINLINE void SetAll()
	{
	Value = ECharacterAnimState::None;
	for (int32 i = 0; i <= static_cast<int32>(ECharacterAnimState::Hit); ++i)
	{
	    if (i != static_cast<int32>(ECharacterAnimState::None))
	    {
	        Value |= (1 << i);
	    }
	}
	}

	// 运算符重载
	FORCEINLINE bool operator==(const FStateChangeAbility& Other) const
	{
		return Value == Other.Value;
	}

	FORCEINLINE bool operator!=(const FStateChangeAbility& Other) const
	{
		return Value != Other.Value;
	}

	FORCEINLINE FStateChangeAbility operator|(const FStateChangeAbility& Other) const
	{
		return FStateChangeAbility(Value | Other.Value);
	}

	FORCEINLINE FStateChangeAbility operator&(const FStateChangeAbility& Other) const
	{
		return FStateChangeAbility(Value & Other.Value);
	}

	FORCEINLINE FStateChangeAbility& operator|=(const FStateChangeAbility& Other)
	{
		Value |= Other.Value;
		return *this;
	}

	FORCEINLINE FStateChangeAbility& operator&=(const FStateChangeAbility& Other)
	{
		Value &= Other.Value;
		return *this;
	}
};
