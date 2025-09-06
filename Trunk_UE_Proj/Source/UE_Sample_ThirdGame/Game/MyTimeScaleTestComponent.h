// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "MyTimeScaleTestComponent.generated.h"

class UMyTimeScaleManager;

/**
 * @brief 时间缩放测试组件，用于演示如何使用时间缩放管理器
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UE_SAMPLE_THIRDGAME_API UMyTimeScaleTestComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UMyTimeScaleTestComponent();

    /** 测试子弹时间效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale Test")
    void TestBulletTime();
    
    /** 测试慢动作效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale Test")
    void TestSlowMotion();

    /** 停止所有时间缩放效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale Test")
    void StopAllEffects();

    /** 获取当前时间缩放值 */
    UFUNCTION(BlueprintPure, Category = "TimeScale Test")
    float GetCurrentTimeScale() const;

protected:
    virtual void BeginPlay() override;

private:
    /** 时间缩放管理器引用 */
    UPROPERTY()
    TWeakObjectPtr<UMyTimeScaleManager> m_TimeScaleManager;

    /** 当前活跃的效果ID */
    TArray<int32> m_ActiveEffectIDs;
};
