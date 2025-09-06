// Fill out your copyright notice in the Description page of Project Settings.

#include "MyTimeScaleTestComponent.h"
#include "Engine/World.h"
#include "MyTimeScaleManager.h"

UMyTimeScaleTestComponent::UMyTimeScaleTestComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UMyTimeScaleTestComponent::BeginPlay()
{
    Super::BeginPlay();
    
    // 获取时间缩放管理器实例
    m_TimeScaleManager = UMyTimeScaleManager::Get(this);
    
    if (!m_TimeScaleManager.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("UMyTimeScaleTestComponent: 无法获取时间缩放管理器"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UMyTimeScaleTestComponent: 成功获取时间缩放管理器"));
    }
}

void UMyTimeScaleTestComponent::TestBulletTime()
{
    if (m_TimeScaleManager.IsValid())
    {
        int32 EffectID = m_TimeScaleManager->ApplyBulletTimeEffect(0.2f, 1.5f, 100);
        m_ActiveEffectIDs.Add(EffectID);
        UE_LOG(LogTemp, Warning, TEXT("应用子弹时间效果，ID: %d, 时间缩放: 0.2, 持续时间: 3秒"), EffectID);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("无法应用子弹时间效果：时间缩放管理器无效"));
    }
}


void UMyTimeScaleTestComponent::TestSlowMotion()
{
    if (m_TimeScaleManager.IsValid())
    {
        int32 EffectID = m_TimeScaleManager->ApplySlowMotionEffect(0.4f, 5.0f, 50);
        m_ActiveEffectIDs.Add(EffectID);
        UE_LOG(LogTemp, Warning, TEXT("应用慢动作效果，ID: %d, 时间缩放: 0.4, 持续时间: 5秒"), EffectID);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("无法应用慢动作效果：时间缩放管理器无效"));
    }
}

void UMyTimeScaleTestComponent::StopAllEffects()
{
    if (m_TimeScaleManager.IsValid())
    {
        m_TimeScaleManager->ClearAllTimeScaleEffects();
        m_ActiveEffectIDs.Empty();
        UE_LOG(LogTemp, Warning, TEXT("清除所有时间缩放效果"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("无法清除时间缩放效果：时间缩放管理器无效"));
    }
}

float UMyTimeScaleTestComponent::GetCurrentTimeScale() const
{
    if (m_TimeScaleManager.IsValid())
    {
        return m_TimeScaleManager->GetCurrentTimeScale();
    }
    return 1.0f;
}
