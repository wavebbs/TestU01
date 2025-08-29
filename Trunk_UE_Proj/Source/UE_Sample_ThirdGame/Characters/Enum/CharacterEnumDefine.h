#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "CharacterEnumDefine.generated.h"

/**
 * 动画状态枚举，定义角色可能的动画状态
 */
UENUM(BlueprintType)
enum class ECharacterAnimState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Walk UMETA(DisplayName = "Walk"),
	Run UMETA(DisplayName = "Run"),
	Jump UMETA(DisplayName = "Jump"),
	Attack UMETA(DisplayName = "Attack"),
	Dodge UMETA(DisplayName = "Dodge"),
	Death UMETA(DisplayName = "Dead"),
	Hit UMETA(DisplayName = "BeHit")
};

/**
 * 状态改变能力位标志枚举，支持多选
 * 注意：必须使用传统枚举（非enum class）才能在UE中支持多选
 */
UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum ECanChangeState
{
	None = 0 UMETA(DisplayName = "None"),
	CanIdle = 1 << 0 UMETA(DisplayName = "Can Idle"),
	CanWalk = 1 << 1 UMETA(DisplayName = "Can Walk"),
	CanRun = 1 << 2 UMETA(DisplayName = "Can Run"),
	CanJump = 1 << 3 UMETA(DisplayName = "Can Jump"),
	CanAttack = 1 << 4 UMETA(DisplayName = "Can Attack"),
	CanDodge = 1 << 5 UMETA(DisplayName = "Can Dodge"),
	CanDeath = 1 << 6 UMETA(DisplayName = "Can Death"),
	CanHit = 1 << 7 UMETA(DisplayName = "Can Hit")
};

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
		: Value(ECanChangeState::None)
	{
	}

	FStateChangeAbility(int32 InValue)
		: Value(InValue)
	{
	}

	// 位标志值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State", meta = (Bitmask, BitmaskEnum = "ECanChangeState"))
	int32 Value;

	// 检查是否包含指定状态
	FORCEINLINE bool HasState(ECanChangeState State) const
	{
		return (Value & State) != 0;
	}

	// 添加状态
	FORCEINLINE void AddState(ECanChangeState State)
	{
		Value |= State;
	}

	// 移除状态
	FORCEINLINE void RemoveState(ECanChangeState State)
	{
		Value &= ~State;
	}

	// 切换状态
	FORCEINLINE void ToggleState(ECanChangeState State)
	{
		Value ^= State;
	}

	// 清空所有状态
	FORCEINLINE void ClearAll()
	{
		Value = ECanChangeState::None;
	}

	// 设置所有状态
	FORCEINLINE void SetAll()
	{
		Value = CanIdle | CanWalk | CanRun | CanJump | CanAttack | CanDodge | CanDeath | CanHit;
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
