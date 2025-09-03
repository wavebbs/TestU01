// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/CombatFormulaSubsystem.h"

// CombatFormulaSubsystem.cpp
#include "Combat/CombatFormulaSubsystem.h"

#include "Combat/AttackData.h"
#include "Combat/BeHitData.h"

float UCombatFormulaSubsystem::CalcFinalDamage(
	const UAttackData* Attack,
	const UBeHitData* BeHit,
	const UCharacterData* VictimData)
{
	if (!Attack || !BeHit || !VictimData) return 0.f;

	// 基础伤害 * 攻击倍率 - 防御
	const float BaseDamage = Attack->Damage * Attack->DamagerRate;
	const float BeHitMul   = BeHit->DefenceDamage;

	const float Final = BaseDamage - BeHitMul;
	return FMath::Max(0.f, Final);
}

FVector UCombatFormulaSubsystem::CalcKnockbackVector(
	const UAttackData* Attack,
	const UBeHitData* BeHit)
{
	if (!Attack) return FVector::ZeroVector;

	FVector Dir = Attack->AttackDirection.GetSafeNormal();
	//float Strength = Attack->KnockbackStrength * BeHit->KnockbackDefence;
	return Dir;
}

