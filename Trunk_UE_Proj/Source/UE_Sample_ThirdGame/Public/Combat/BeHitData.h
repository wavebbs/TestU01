#pragma once

#include "BeHitData.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class UE_SAMPLE_THIRDGAME_API UBeHitData : public UDataAsset
{
    GENERATED_BODY()
    
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    float DefenceDamage = 0.f;

    // 受击来源
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    TWeakObjectPtr<ACharacter> Instigator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    int32 CharacterBaseInstanceId = 0;

    // 受击框类型
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    EHitBoxType HurtBoxType = EHitBoxType::Normal;

    // 伤害倍率
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    float DamageRate = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    USoundBase* HurtEffectConfiguration = nullptr;
    
    // 标签
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BeHit")
    // BeHitTags;
};
