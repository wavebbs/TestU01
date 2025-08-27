#pragma once
#include "AttackData.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class UE_SAMPLE_THIRDGAME_API UAttackData : public UDataAsset
{
    GENERATED_BODY()
    
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    float Damage = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    float StiffTime = 0.f;   // 攻击造成硬直时间

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    float LaunchPower = 0.f; // 击飞/击退力度

    // 攻击来源角色
    UPROPERTY(BlueprintReadWrite, Category="Attack")
    TWeakObjectPtr<ACharacter> Attacker;

    // 攻击附加属性
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
    // AttackTag;

    // 攻击方向
    UPROPERTY(BlueprintReadWrite, Category="Attack")
    FVector AttackDirection;
};
