#pragma once

#include "CoreMinimal.h"
#include "CombatTypes.h"
#include "Components/ActorComponent.h"
#include "CharacterBeHitLogicComponent.generated.h"

class UAttackData;
class UBeHitData;
class UCharacterDataComponent;

/** 受击多播代理声明 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReceiveAttackDelegate, const UAttackData*, AttackData, const UBeHitData*, BeHitData, ACharacter*, Attacker);

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
	//FHitResultData OnHit(const UAttackData* AttackData, const UBeHitData* BeHitData, const FAttackInfo& AttackInfo);
	FHitResultData OnHit(const UAttackData* AttackData, const UBeHitData* BeHitData, ACharacter* InAttacker) const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnReceiveAttackEvent(const UAttackData* InAttackData, const UBeHitData* InBeHitData, ACharacter* InAttacker) const;
	
	UPROPERTY(BlueprintAssignable, Category = "Combat")
	FOnReceiveAttackDelegate OnReceiveAttack;
	
	/** 是否能被打断 */
	// bool CanInterrupt(const UAttackData* AttackData) const;

	/** 获取最终防御打断等级 */
	// int32 GetFinalDefenseBreakLevel() const;
};
