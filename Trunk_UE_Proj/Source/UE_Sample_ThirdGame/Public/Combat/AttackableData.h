// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatTypes.h"
#include "Engine/DataAsset.h"
#include "AttackableData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class UE_SAMPLE_THIRDGAME_API UAttackableData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attackable")
	EBeHitType HurtAnimationOnGround = EBeHitType::BeHitSmall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attackable")
	EBeHitType HurtAnimationOnAir = EBeHitType::BeHitSmall;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attackable")
	EInterruptLevel InterruptLevel = EInterruptLevel::Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Common Movement")
	FVector Movement = FVector(2, 0, 0);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Common Movement")
	float MoveTime = 0.15f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Common Movement")
	bool bFallDown = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Common Movement")
	UCurveFloat* SpeedCurve = nullptr;
	
};
