// Fill out your copyright notice in the Description page of Project Settings.
#include "Combat/CharacterBeHitLogicComponent.h"
#include "Combat/AttackData.h"
#include "Combat/BeHitData.h"
#include "Combat/CharacterDataComponent.h"
#include "Combat/CombatFormulaSubsystem.h"
#include "Combat/CombatTypes.h"
#include "Combat/HitStopSubsystem.h"
#include "GameFramework/Character.h"


UCharacterBeHitLogicComponent::UCharacterBeHitLogicComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UCharacterBeHitLogicComponent::BeginPlay()
{
    Super::BeginPlay();

    // 找角色身上的数据组件
    if (AActor* Owner = GetOwner())
    {
        CharacterDataComp = Owner->FindComponentByClass<UCharacterDataComponent>();
    }
}

FHitResultData UCharacterBeHitLogicComponent::OnHit(
    const UAttackData* AttackData,
    const UBeHitData* BeHitData,
    const FAttackInfo& AttackInfo)
{
    FHitResultData Result;
    if (!AttackData || !BeHitData || !CharacterDataComp)
        return Result;
    
    UCombatFormulaSubsystem* FormulaSys = GetWorld()->GetGameInstance()->GetSubsystem<UCombatFormulaSubsystem>();
    UHitStopSubsystem* HitStopSys = GetWorld()->GetSubsystem<UHitStopSubsystem>();
    
    // 1. 计算最终防御打断等级
    // int32 FinalDefense = GetFinalDefenseBreakLevel();

    // 2. 打断判定
    //bool bInterrupted = (AttackData->BreakLevel > FinalDefense);

    // 3. 伤害计算（这里简化，实际应调用 GameFormulaSubsystem）
    float FinalDamage = FormulaSys->CalcFinalDamage(AttackData, BeHitData, CharacterDataComp->GetCharacterData());
   
    FVector Knockback = FormulaSys->CalcKnockbackVector(AttackData, BeHitData);

    // 应用到角色数据
    CharacterDataComp->ApplyDamage(FinalDamage);

    if (HitStopSys)
    {
        HitStopSys->ApplyHitStop(0.05f, GetOwner());
    }
    
    // 4. 组织结果
    Result.Attacker = AttackInfo.Attacker;
    Result.Victim   = GetOwner<ACharacter>();
    Result.DamageApplied = FinalDamage;
    Result.FinalHitDirection = AttackData->AttackDirection;
    Result.bKilledTarget = (CharacterDataComp->GetCharacterData()->CurrentHP <= 0);
    // Result.NodeType = BeHitData->NodeType;

    if (ACharacter* VictimChar = Cast<ACharacter>(GetOwner()))
    {
        VictimChar->LaunchCharacter(Knockback, true, true);
    }
    
    //if (bInterrupted){}

    return Result;
}

// bool UCharacterBeHitLogicComponent::CanInterrupt(const UAttackData* AttackData) const
// {
//     if (!AttackData) return false;
//     return AttackData->BreakLevel > GetFinalDefenseBreakLevel();
// }

// int32 UCharacterBeHitLogicComponent::GetFinalDefenseBreakLevel() const
// {
//     if (!CharacterDataComp) return 0;
//     const UCharacterData* Data = CharacterDataComp->GetCharacterData();
//     if (!Data) return 0;
//
//     int32 AnimationDefenseBonus = 0;
//     return Data->BaseDefenseBreakLevel + AnimationDefenseBonus;
// }


