#pragma once

#include "CoreMinimal.h"
#include "CombatTypes.generated.h"

USTRUCT(BlueprintType)
struct FAttackInfo {
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SkillID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ActionName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageRate;
};