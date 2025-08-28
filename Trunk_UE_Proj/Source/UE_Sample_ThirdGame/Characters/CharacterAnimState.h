#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimState.generated.h"

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
