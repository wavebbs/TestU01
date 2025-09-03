#pragma once
#include "AttackableData.h"
#include "CombatTypes.h"
#include "AttackData.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class UE_SAMPLE_THIRDGAME_API UAttackData : public UDataAsset
{
    GENERATED_BODY()
    
public:
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    float Damage = 20.f;

    // UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    UPROPERTY()
    float KnockbackStrength = 20.f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    EAttackType AttackType = EAttackType::Normal;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    bool bRepeatTrigger = false; // 是否允许重复触发
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    float RepeatIntervalTime = 0.1f; // 重复触发间隔时间，<=0表示不允许重复触发
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    float DamagerRate = 1.f; // 伤害倍率

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    EHitSlowDownType HitSlowDownType = EHitSlowDownType::Normal;

    // 攻击来源角色
    // UPROPERTY(BlueprintReadWrite, Category="Attack")
    // TWeakObjectPtr<ACharacter> Attacker;

    // 攻击附加属性
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    // AttackTag;

    // 攻击方向
    UPROPERTY(BlueprintReadWrite, Category="Attack")
    FVector AttackDirection;
};
