// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CombatFormulaSubsystem.generated.h"

class UAttackData;
class UBeHitData;
class UCharacterData;

UCLASS()
class UE_SAMPLE_THIRDGAME_API UCombatFormulaSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	/** 计算最终伤害 */
	UFUNCTION(BlueprintCallable, Category="Combat|Formula")
	float CalcFinalDamage(const UAttackData* Attack, const UBeHitData* BeHit, const UCharacterData* VictimData);

	/** 计算击退向量 */
	UFUNCTION(BlueprintCallable, Category="Combat|Formula")
	FVector CalcKnockbackVector(const UAttackData* Attack, const UBeHitData* BeHit);

	/** 计算硬直时间 */
	// UFUNCTION(BlueprintCallable, Category="Combat|Formula")
	// float CalcStunDuration(const UAttackData* Attack, const UBeHitData* BeHit);
};

