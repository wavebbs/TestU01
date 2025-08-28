#pragma once

#include "CoreMinimal.h"
#include "CombatTypes.generated.h"

USTRUCT(BlueprintType)
struct FAttackInfo {
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<ACharacter> Attacker;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SkillID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ActionName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageRate;
};

USTRUCT(BlueprintType)
struct FHitResultData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category="HitResult")
	TWeakObjectPtr<ACharacter> Attacker;

	UPROPERTY(BlueprintReadWrite, Category="HitResult")
	TWeakObjectPtr<ACharacter> Victim;

	UPROPERTY(BlueprintReadWrite, Category="HitResult")
	float DamageApplied = 0.f;

	UPROPERTY(BlueprintReadWrite, Category="HitResult")
	bool bKilledTarget = false;

	UPROPERTY(BlueprintReadWrite, Category="HitResult")
	bool bBlocked = false;

	UPROPERTY(BlueprintReadWrite, Category="HitResult")
	FVector FinalHitDirection;

	// UPROPERTY(BlueprintReadWrite, Category="HitResult")
	// EBeHitType BeHitType;
};