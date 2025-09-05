// Fill out your copyright notice in the Description page of Project Settings.

#include "MyTimeScaleManager.h"
#include "MyCharacterManager.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

void UMyTimeScaleManager::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    // 初始化默认值
    m_CurrentTimeScale = m_DefaultTimeScale;
    m_NextEffectID = 1;
    m_bEffectsPaused = false;
    
    if (m_bEnableDebugOutput)
    {
        UE_LOG(LogTemp, Warning, TEXT("UMyTimeScaleManager 已初始化"));
    }
}

void UMyTimeScaleManager::Deinitialize()
{
    // 清理所有效果
    ClearAllTimeScaleEffects();
    
    // 恢复默认时间缩放
    if (UWorld* World = GetWorld())
    {
        UGameplayStatics::SetGlobalTimeDilation(World, 1.0f);
    }
    
    Super::Deinitialize();
}

UMyTimeScaleManager* UMyTimeScaleManager::Get(const UObject* WorldContext)
{
    if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull))
    {
        if (UGameInstance* GameInstance = World->GetGameInstance())
        {
            return GameInstance->GetSubsystem<UMyTimeScaleManager>();
        }
    }
    return nullptr;
}

int32 UMyTimeScaleManager::ApplyTimeScaleEffect(const FTimeScaleEffectData& EffectData)
{
    if (m_bEffectsPaused)
    {
        return -1;
    }

    // 创建新的活跃效果
    FActiveTimeScaleEffect NewEffect;
    NewEffect.EffectData = EffectData;
    NewEffect.EffectID = m_NextEffectID++;
    NewEffect.StartTime = GetWorld()->GetTimeSeconds();
    NewEffect.CurrentPhase = FActiveTimeScaleEffect::EPhase::FadeIn;
    NewEffect.RemainingTime = EffectData.FadeInTime;

    // 如果没有渐入时间，直接进入保持阶段
    if (EffectData.FadeInTime <= 0.0f)
    {
        NewEffect.CurrentPhase = FActiveTimeScaleEffect::EPhase::Hold;
        NewEffect.RemainingTime = EffectData.Duration;
    }

    // 添加到活跃效果列表
    m_ActiveEffects.Add(NewEffect);

    // 重新计算时间缩放
    CalculateCurrentTimeScale();

    if (m_bEnableDebugOutput)
    {
        UE_LOG(LogTemp, Warning, TEXT("应用时间缩放效果 ID: %d, 类型: %d, 目标缩放: %.2f"), 
               NewEffect.EffectID, (int32)EffectData.EffectType, EffectData.TargetTimeScale);
    }

    return NewEffect.EffectID;
}

bool UMyTimeScaleManager::RemoveTimeScaleEffect(int32 EffectID)
{
    for (int32 i = 0; i < m_ActiveEffects.Num(); ++i)
    {
        if (m_ActiveEffects[i].EffectID == EffectID)
        {
            if (m_bEnableDebugOutput)
            {
                UE_LOG(LogTemp, Warning, TEXT("移除时间缩放效果 ID: %d"), EffectID);
            }
            
            m_ActiveEffects.RemoveAt(i);
            CalculateCurrentTimeScale();
            return true;
        }
    }
    return false;
}

void UMyTimeScaleManager::RemoveTimeScaleEffectsByType(ETimeScaleEffectType EffectType)
{
    int32 RemovedCount = 0;
    for (int32 i = m_ActiveEffects.Num() - 1; i >= 0; --i)
    {
        if (m_ActiveEffects[i].EffectData.EffectType == EffectType)
        {
            m_ActiveEffects.RemoveAt(i);
            RemovedCount++;
        }
    }
    
    if (RemovedCount > 0)
    {
        CalculateCurrentTimeScale();
        
        if (m_bEnableDebugOutput)
        {
            UE_LOG(LogTemp, Warning, TEXT("移除了 %d 个类型为 %d 的时间缩放效果"), RemovedCount, (int32)EffectType);
        }
    }
}

void UMyTimeScaleManager::ClearAllTimeScaleEffects()
{
    int32 EffectCount = m_ActiveEffects.Num();
    m_ActiveEffects.Empty();
    m_CurrentTimeScale = m_DefaultTimeScale;
    ApplyTimeScaleToWorld();
    
    if (m_bEnableDebugOutput && EffectCount > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("清除了所有时间缩放效果，共 %d 个"), EffectCount);
    }
}

void UMyTimeScaleManager::PauseTimeScaleEffects(bool bPause)
{
    m_bEffectsPaused = bPause;
    
    if (m_bEnableDebugOutput)
    {
        UE_LOG(LogTemp, Warning, TEXT("时间缩放效果 %s"), bPause ? TEXT("已暂停") : TEXT("已恢复"));
    }
}

bool UMyTimeScaleManager::HasActiveEffectOfType(ETimeScaleEffectType EffectType) const
{
    for (const FActiveTimeScaleEffect& Effect : m_ActiveEffects)
    {
        if (Effect.EffectData.EffectType == EffectType)
        {
            return true;
        }
    }
    return false;
}

void UMyTimeScaleManager::Tick(float DeltaTime)
{
    if (m_bEffectsPaused || m_ActiveEffects.Num() == 0)
    {
        return;
    }

    UpdateTimeScaleEffects(DeltaTime);
    CalculateCurrentTimeScale();
    ApplyTimeScaleToWorld();
    ApplyTimeScaleToCharacters();
}

int32 UMyTimeScaleManager::ApplyBulletTimeEffect(float TimeScale, float Duration, int32 Priority)
{
    FTimeScaleEffectData EffectData;
    EffectData.EffectType = ETimeScaleEffectType::BulletTime;
    EffectData.TargetTimeScale = TimeScale;
    EffectData.Duration = Duration;
    EffectData.FadeInTime = 0.2f;
    EffectData.FadeOutTime = 0.3f;
    EffectData.Priority = Priority;
    EffectData.bAffectCharacterAnimation = true;
    EffectData.bAffectParticles = true;
    EffectData.bAffectAudio = true;
    
    return ApplyTimeScaleEffect(EffectData);
}

int32 UMyTimeScaleManager::ApplyHitFreezeEffect(float FreezeTime, int32 Priority)
{
    FTimeScaleEffectData EffectData;
    EffectData.EffectType = ETimeScaleEffectType::HitFreeze;
    EffectData.TargetTimeScale = 0.0f;
    EffectData.Duration = FreezeTime;
    EffectData.FadeInTime = 0.02f;
    EffectData.FadeOutTime = 0.05f;
    EffectData.Priority = Priority;
    EffectData.bAffectCharacterAnimation = true;
    EffectData.bAffectParticles = false; // 击中特效通常不受影响
    EffectData.bAffectAudio = false;
    
    return ApplyTimeScaleEffect(EffectData);
}

int32 UMyTimeScaleManager::ApplyGamePauseEffect(int32 Priority)
{
    FTimeScaleEffectData EffectData;
    EffectData.EffectType = ETimeScaleEffectType::GamePause;
    EffectData.TargetTimeScale = 0.0f;
    EffectData.Duration = -1.0f; // 无限持续
    EffectData.FadeInTime = 0.0f;
    EffectData.FadeOutTime = 0.1f;
    EffectData.Priority = Priority;
    EffectData.bAffectCharacterAnimation = true;
    EffectData.bAffectParticles = true;
    EffectData.bAffectAudio = true;
    
    return ApplyTimeScaleEffect(EffectData);
}

int32 UMyTimeScaleManager::ApplySlowMotionEffect(float TimeScale, float Duration, int32 Priority)
{
    FTimeScaleEffectData EffectData;
    EffectData.EffectType = ETimeScaleEffectType::SlowMotion;
    EffectData.TargetTimeScale = TimeScale;
    EffectData.Duration = Duration;
    EffectData.FadeInTime = 0.5f;
    EffectData.FadeOutTime = 0.5f;
    EffectData.Priority = Priority;
    EffectData.bAffectCharacterAnimation = true;
    EffectData.bAffectParticles = true;
    EffectData.bAffectAudio = true;
    
    return ApplyTimeScaleEffect(EffectData);
}

void UMyTimeScaleManager::UpdateTimeScaleEffects(float DeltaTime)
{
    for (int32 i = m_ActiveEffects.Num() - 1; i >= 0; --i)
    {
        FActiveTimeScaleEffect& Effect = m_ActiveEffects[i];
        
        // 使用真实时间更新效果
        float RealDeltaTime = DeltaTime / m_CurrentTimeScale;
        Effect.RemainingTime -= RealDeltaTime;
        
        // 检查阶段转换
        if (Effect.RemainingTime <= 0.0f)
        {
            switch (Effect.CurrentPhase)
            {
                case FActiveTimeScaleEffect::EPhase::FadeIn:
                    Effect.CurrentPhase = FActiveTimeScaleEffect::EPhase::Hold;
                    Effect.RemainingTime = Effect.EffectData.Duration;
                    
                    // 如果持续时间为0或负数，直接进入渐出阶段
                    if (Effect.EffectData.Duration <= 0.0f && Effect.EffectData.Duration != -1.0f)
                    {
                        Effect.CurrentPhase = FActiveTimeScaleEffect::EPhase::FadeOut;
                        Effect.RemainingTime = Effect.EffectData.FadeOutTime;
                    }
                    break;
                    
                case FActiveTimeScaleEffect::EPhase::Hold:
                    if (Effect.EffectData.Duration == -1.0f)
                    {
                        // 无限持续，保持在Hold阶段
                        Effect.RemainingTime = 1.0f;
                    }
                    else
                    {
                        Effect.CurrentPhase = FActiveTimeScaleEffect::EPhase::FadeOut;
                        Effect.RemainingTime = Effect.EffectData.FadeOutTime;
                    }
                    break;
                    
                case FActiveTimeScaleEffect::EPhase::FadeOut:
                    Effect.CurrentPhase = FActiveTimeScaleEffect::EPhase::Finished;
                    Effect.RemainingTime = 0.0f;
                    break;
                    
                case FActiveTimeScaleEffect::EPhase::Finished:
                    // 移除已完成的效果
                    m_ActiveEffects.RemoveAt(i);
                    break;
            }
        }
    }
}

void UMyTimeScaleManager::CalculateCurrentTimeScale()
{
    if (m_ActiveEffects.Num() == 0)
    {
        m_CurrentTimeScale = m_DefaultTimeScale;
        return;
    }
    
    // 找到优先级最高的效果
    const FActiveTimeScaleEffect* HighestPriorityEffect = nullptr;
    int32 HighestPriority = INT32_MIN;
    
    for (const FActiveTimeScaleEffect& Effect : m_ActiveEffects)
    {
        if (Effect.EffectData.Priority > HighestPriority)
        {
            HighestPriority = Effect.EffectData.Priority;
            HighestPriorityEffect = &Effect;
        }
    }
    
    if (HighestPriorityEffect)
    {
        // 根据当前阶段计算插值后的时间缩放值
        float InterpolatedTimeScale = CalculateInterpolatedTimeScale(*HighestPriorityEffect, 0.0f);
        m_CurrentTimeScale = FMath::Clamp(InterpolatedTimeScale, 0.0f, 5.0f);
    }
    else
    {
        m_CurrentTimeScale = m_DefaultTimeScale;
    }
}

void UMyTimeScaleManager::ApplyTimeScaleToWorld()
{
    if (UWorld* World = GetWorld())
    {
        UGameplayStatics::SetGlobalTimeDilation(World, m_CurrentTimeScale);

       UE_LOG(LogTemp, Warning, TEXT("ApplyTimeScaleToWorld %.2f"), m_CurrentTimeScale);
    }
}

void UMyTimeScaleManager::ApplyTimeScaleToCharacters()
{
    UMyCharacterManager* CharacterManager = GetCharacterManager();
    if (!CharacterManager)
    {
        return;
    }
    
    // 获取当前最高优先级效果的设置
    bool bAffectAnimation = true;
    bool bAffectParticles = true;
    bool bAffectAudio = true;
    
    if (m_ActiveEffects.Num() > 0)
    {
        // 找到优先级最高的效果
        const FActiveTimeScaleEffect* HighestPriorityEffect = nullptr;
        int32 HighestPriority = INT32_MIN;
        
        for (const FActiveTimeScaleEffect& Effect : m_ActiveEffects)
        {
            if (Effect.EffectData.Priority > HighestPriority)
            {
                HighestPriority = Effect.EffectData.Priority;
                HighestPriorityEffect = &Effect;
            }
        }
        
        if (HighestPriorityEffect)
        {
            bAffectAnimation = HighestPriorityEffect->EffectData.bAffectCharacterAnimation;
            bAffectParticles = HighestPriorityEffect->EffectData.bAffectParticles;
            bAffectAudio = HighestPriorityEffect->EffectData.bAffectAudio;
        }
    }
    
    // 应用到所有角色
    TArray<AActor*> Characters = CharacterManager->GetGameCharacters();
    for (AActor* Character : Characters)
    {
        if (!IsValid(Character))
        {
            continue;
        }
        
        // 应用到角色动画
        if (bAffectAnimation)
        {
            if (USkeletalMeshComponent* SkeletalMesh = Character->FindComponentByClass<USkeletalMeshComponent>())
            {
                if (UAnimInstance* AnimInstance = SkeletalMesh->GetAnimInstance())
                {
                    // 注意：这里需要使用倒数，因为AnimInstance的播放速率是倒数关系
                    float AnimPlayRate = (m_CurrentTimeScale > 0.0f) ? (1.0f / m_CurrentTimeScale) : 0.0f;
                    // 这里可能需要根据具体的动画系统调整实现方式
                    // AnimInstance->SetPlayRate(AnimPlayRate);
                }
            }
        }
        
        // 应用到特效系统
        if (bAffectParticles)
        {
            // 传统粒子系统
            TArray<UParticleSystemComponent*> ParticleComponents;
            Character->GetComponents<UParticleSystemComponent>(ParticleComponents);
            for (UParticleSystemComponent* ParticleComp : ParticleComponents)
            {
                if (IsValid(ParticleComp))
                {
                    // ParticleComp->SetFloatParameter(FName("TimeScale"), m_CurrentTimeScale);
                }
            }
        }
        
        // 应用到音效
        if (bAffectAudio)
        {
            TArray<UAudioComponent*> AudioComponents;
            Character->GetComponents<UAudioComponent>(AudioComponents);
            for (UAudioComponent* AudioComp : AudioComponents)
            {
                if (IsValid(AudioComp))
                {
                    AudioComp->SetPitchMultiplier(m_CurrentTimeScale);
                }
            }
        }
    }
}

UMyCharacterManager* UMyTimeScaleManager::GetCharacterManager()
{
    if (!m_CharacterManager.IsValid())
    {
        if (UGameInstance* GameInstance = GetGameInstance())
        {
            m_CharacterManager = GameInstance->GetSubsystem<UMyCharacterManager>();
        }
    }
    
    return m_CharacterManager.Get();
}

float UMyTimeScaleManager::CalculateInterpolatedTimeScale(const FActiveTimeScaleEffect& Effect, float DeltaTime)
{
    float Alpha = 1.0f;
    
    switch (Effect.CurrentPhase)
    {
        case FActiveTimeScaleEffect::EPhase::FadeIn:
            if (Effect.EffectData.FadeInTime > 0.0f)
            {
                float Progress = 1.0f - (Effect.RemainingTime / Effect.EffectData.FadeInTime);
                Alpha = FMath::Clamp(Progress, 0.0f, 1.0f);
            }
            break;
            
        case FActiveTimeScaleEffect::EPhase::Hold:
            Alpha = 1.0f;
            break;
            
        case FActiveTimeScaleEffect::EPhase::FadeOut:
            if (Effect.EffectData.FadeOutTime > 0.0f)
            {
                float Progress = Effect.RemainingTime / Effect.EffectData.FadeOutTime;
                Alpha = FMath::Clamp(Progress, 0.0f, 1.0f);
            }
            else
            {
                Alpha = 0.0f;
            }
            break;
            
        case FActiveTimeScaleEffect::EPhase::Finished:
            Alpha = 0.0f;
            break;
    }
    
    // 在默认时间缩放和目标时间缩放之间插值
    return FMath::Lerp(m_DefaultTimeScale, Effect.EffectData.TargetTimeScale, Alpha);
}
