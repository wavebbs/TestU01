#pragma once

#include "BeHitData.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class UBeHitData : public UObject
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    float DefenceDamage = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    float FinalDamage = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    float StiffTime = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    bool bIsKnockDown = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    bool bIsLaunched = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    FVector HitDirection;

    // 受击来源
    UPROPERTY(BlueprintReadWrite, Category="BeHit")
    TWeakObjectPtr<ACharacter> Instigator;

    // 标签
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    // BeHitTags;
};
