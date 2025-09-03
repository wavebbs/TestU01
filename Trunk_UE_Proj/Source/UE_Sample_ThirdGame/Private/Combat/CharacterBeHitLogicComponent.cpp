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
    ACharacter* InAttacker) const
{
    FHitResultData Result;
    if (!AttackData || !BeHitData || !CharacterDataComp)
        return Result;
    
    UCombatFormulaSubsystem* FormulaSys = GetWorld()->GetGameInstance()->GetSubsystem<UCombatFormulaSubsystem>();
    UHitStopSubsystem* HitStopSys = GetWorld()->GetSubsystem<UHitStopSubsystem>();

    //打断
    //bool bInterrupted = (AttackData->BreakLevel > FinalDefense);

    // 计算最终伤害
    float FinalDamage = 0.0f;
    FVector Knockback = FVector::ZeroVector;
    if (FormulaSys)
    {
        FinalDamage = FormulaSys->CalcFinalDamage(AttackData, BeHitData, CharacterDataComp->GetCharacterData());
        Knockback = FormulaSys->CalcKnockbackVector(AttackData, BeHitData);
    }

    // 应用到角色数据
    CharacterDataComp->ApplyDamage(FinalDamage);

    if (HitStopSys)
    {
        HitStopSys->ApplyHitStop(0.05f, GetOwner());
    } 
    
    // 4. 组织结果
    Result.Attacker = InAttacker;
    Result.Victim   = GetOwner<ACharacter>();
    Result.DamageApplied = FinalDamage;
    Result.bKilledTarget = (CharacterDataComp->GetCharacterData()->CurrentHP <= 0);

    if (ACharacter* VictimChar = Cast<ACharacter>(GetOwner()))
    {
        VictimChar->LaunchCharacter(Knockback, true, true);
    }
    
    OnReceiveAttackEvent(AttackData, BeHitData, InAttacker); // 蓝图事件
    OnReceiveAttack.Broadcast(AttackData, BeHitData, InAttacker);
    
    return Result;
}



