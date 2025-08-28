#pragma once

#include "CoreMinimal.h"
#include "CombatTypes.h"
#include "Components/ActorComponent.h"
#include "CharacterBeHitLogicComponent.generated.h"

class UAttackData;
class UBeHitData;
class UCharacterDataComponent;

UCLASS(ClassGroup=(Combat), meta=(BlueprintSpawnableComponent))
class UE_SAMPLE_THIRDGAME_API UCharacterBeHitLogicComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterBeHitLogicComponent();

protected:
	virtual void BeginPlay() override;

	// 引用角色的基础数据组件
	UPROPERTY()
	UCharacterDataComponent* CharacterDataComp;

public:
	/** 受击入口 */
	UFUNCTION(BlueprintCallable, Category="BeHit")
	FHitResultData OnHit(const UAttackData* AttackData, const UBeHitData* BeHitData, const FAttackInfo& AttackInfo);

	/** 是否能被打断 */
	// bool CanInterrupt(const UAttackData* AttackData) const;

	/** 获取最终防御打断等级 */
	// int32 GetFinalDefenseBreakLevel() const;
};
