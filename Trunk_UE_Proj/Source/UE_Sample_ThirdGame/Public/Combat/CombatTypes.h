#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CombatTypes.generated.h"

class UBeHitData;
class UAttackData;

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

USTRUCT()
struct FPendingHitData
{
    GENERATED_BODY()

    UPROPERTY()
    AActor* OtherActor = nullptr;

    UPROPERTY()
    UPrimitiveComponent* OtherComp = nullptr;

    UPROPERTY()
    FHitResult SweepResult;
};

UENUM(BlueprintType)
enum class EHitBoxType : uint8
{
	Shield  UMETA(DisplayName="Shield"),
	Weak    UMETA(DisplayName="Weak"),
	Normal  UMETA(DisplayName="Normal")
};

USTRUCT(BlueprintType)
struct FAttackCollisionInfo
{
	GENERATED_BODY()

	UPROPERTY()
	TWeakObjectPtr<ACharacter> Attacker;

	UPROPERTY()
	TWeakObjectPtr<AActor> Victim;

	UPROPERTY()
	UAttackData* AttackData = nullptr;

	UPROPERTY()
	const UBeHitData* BeHitData = nullptr;

	UPROPERTY()
	FVector HitLocation = FVector::ZeroVector;

	// 用于排序的距离（命中点到受击点中心）
	float DistanceSq = 0.f;
};

UENUM(BlueprintType)
enum class EAttackType : uint8
{
	Small,
	Normal,
	Big
};

UENUM(BlueprintType)
enum class EHitSlowDownType: uint8
{
	Light,
	Normal,
	Heavy
};

UENUM(BlueprintType)
enum class EInterruptLevel: uint8
{
	Light,
	Normal,
	Heavy
};

UENUM(BlueprintType)
enum class EBeHitType: uint8
{
	BeHitSmall,
	BeHitNormal,
	BeHitBig
};

USTRUCT(BlueprintType)
struct FCharacterFlag
{
	GENERATED_BODY()

	/** Flag名称 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag FlagName;

	/** 持续时间（秒），0为即时关闭 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration = 0.0f;

	/** 内部计时 */
	float RemainingTime = 0.0f;

	FCharacterFlag()
		: FlagName(FGameplayTag::EmptyTag), Duration(0.0f), RemainingTime(0.0f)
	{}

	FCharacterFlag(FGameplayTag InFlagName, float InDuration)
		: FlagName(InFlagName), Duration(InDuration), RemainingTime(InDuration)
	{}
};