// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/CharacterFlagManager.h"

#include "GameplayTagContainer.h"
#include "Combat/CombatTypes.h"

UCharacterFlagManager::UCharacterFlagManager()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UCharacterFlagManager::BeginPlay()
{
    Super::BeginPlay();
}

void UCharacterFlagManager::AddFlag(FGameplayTag Flag, float Duration)
{
    if (ActiveFlags.Contains(Flag))
    {
        // 刷新持续时间
        ActiveFlags[Flag].Duration = Duration;
        ActiveFlags[Flag].RemainingTime = Duration;
    }
    else
    {
        ActiveFlags.Add(Flag, FCharacterFlag(Flag, Duration));
    }
}

void UCharacterFlagManager::RemoveFlag(FGameplayTag Flag)
{
    if (ActiveFlags.Contains(Flag))
    {
        if (ActiveFlags[Flag].Duration > 0.0f)
        {
            // 开始倒计时
            ActiveFlags[Flag].RemainingTime = ActiveFlags[Flag].Duration;
        }
        else
        {
            ActiveFlags.Remove(Flag);
        }
    }
}

bool UCharacterFlagManager::HasFlag(FGameplayTag Flag) const
{
    const FCharacterFlag* FoundFlag = ActiveFlags.Find(Flag);
    return FoundFlag != nullptr && (FoundFlag->RemainingTime > 0.0f || FoundFlag->Duration == 0.0f);
}

void UCharacterFlagManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    TArray<FGameplayTag> FlagsToRemove;
    for (auto& Elem : ActiveFlags)
    {
        FCharacterFlag& Flag = Elem.Value;
        if (Flag.Duration > 0.0f && Flag.RemainingTime > 0.0f)
        {
            Flag.RemainingTime -= DeltaTime;
            if (Flag.RemainingTime <= 0.0f)
            {
                FlagsToRemove.Add(Elem.Key);
            }
        }
    }
    for (const FGameplayTag& FlagName : FlagsToRemove)
    {
        ActiveFlags.Remove(FlagName);
    }
}