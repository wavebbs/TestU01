// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Combat/CombatTypes.h"
#include "Components/ActorComponent.h"
#include "CharacterFlagManager.generated.h"

/**
 * @brief 角色Flag管理器
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UE_SAMPLE_THIRDGAME_API UCharacterFlagManager : public UActorComponent
{
    GENERATED_BODY()

public:
    UCharacterFlagManager();

    /** 添加Flag */
    UFUNCTION(BlueprintCallable, Category="Flag")
    void AddFlag(FName Flag, float Duration = 0.0f);

    /** 移除Flag（会触发Duration倒计时） */
    UFUNCTION(BlueprintCallable, Category="Flag")
    void RemoveFlag(FName Flag);

    /** 检查Flag是否生效 */
    UFUNCTION(BlueprintCallable, Category="Flag")
    bool HasFlag(FName Flag) const;

protected:
    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    /** 当前激活的Flag列表 */
    UPROPERTY()
    TMap<FName, FCharacterFlag> ActiveFlags;
};