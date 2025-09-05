// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/World.h"
#include "MyTimeScaleManager.generated.h"

class UMyCharacterManager;

/**
 * @brief 时间缩放效果类型
 */
UENUM(BlueprintType)
enum class ETimeScaleEffectType : uint8
{
    None            UMETA(DisplayName = "无效果"),
    BulletTime      UMETA(DisplayName = "子弹时间"),
    HitFreeze       UMETA(DisplayName = "击中定帧"),
    GamePause       UMETA(DisplayName = "游戏暂停"),
    SlowMotion      UMETA(DisplayName = "慢动作")
};

/**
 * @brief 时间缩放效果数据
 */
USTRUCT(BlueprintType)
struct UE_SAMPLE_THIRDGAME_API FTimeScaleEffectData
{
    GENERATED_BODY()

    /** 效果类型 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale")
    ETimeScaleEffectType EffectType = ETimeScaleEffectType::None;

    /** 目标时间缩放值 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale", meta = (ClampMin = "0.0", ClampMax = "5.0"))
    float TargetTimeScale = 1.0f;

    /** 效果持续时间（秒，-1表示无限持续） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale")
    float Duration = 1.0f;

    /** 渐入时间（秒） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale", meta = (ClampMin = "0.0"))
    float FadeInTime = 0.1f;

    /** 渐出时间（秒） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale", meta = (ClampMin = "0.0"))
    float FadeOutTime = 0.1f;

    /** 优先级（数值越高优先级越高） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale")
    int32 Priority = 0;

    /** 是否影响角色动画 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale")
    bool bAffectCharacterAnimation = true;

    /** 是否影响特效 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale")
    bool bAffectParticles = true;

    /** 是否影响音效 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeScale")
    bool bAffectAudio = true;

    FTimeScaleEffectData()
    {
        EffectType = ETimeScaleEffectType::None;
        TargetTimeScale = 1.0f;
        Duration = 1.0f;
        FadeInTime = 0.1f;
        FadeOutTime = 0.1f;
        Priority = 0;
        bAffectCharacterAnimation = true;
        bAffectParticles = true;
        bAffectAudio = true;
    }
};

/**
 * @brief 活跃的时间缩放效果实例
 */
USTRUCT()
struct FActiveTimeScaleEffect
{
    GENERATED_BODY()

    /** 效果数据 */
    FTimeScaleEffectData EffectData;

    /** 效果开始时间 */
    float StartTime = 0.0f;

    /** 当前阶段剩余时间 */
    float RemainingTime = 0.0f;

    /** 当前效果阶段 */
    enum class EPhase : uint8
    {
        FadeIn,
        Hold,
        FadeOut,
        Finished
    } CurrentPhase = EPhase::FadeIn;

    /** 效果唯一ID */
    int32 EffectID = 0;

    FActiveTimeScaleEffect()
    {
        StartTime = 0.0f;
        RemainingTime = 0.0f;
        CurrentPhase = EPhase::FadeIn;
        EffectID = 0;
    }
};

/**
 * @brief 时间缩放管理器
 * 负责管理游戏中的各种时间缩放效果，如子弹时间、击中定帧、慢动作等
 */
UCLASS(BlueprintType, Blueprintable)
class UE_SAMPLE_THIRDGAME_API UMyTimeScaleManager : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // USubsystem interface
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    /** 获取时间缩放管理器实例 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale", CallInEditor, meta = (WorldContext = "WorldContext"))
    static UMyTimeScaleManager* Get(const UObject* WorldContext);

    /** 应用时间缩放效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale")
    int32 ApplyTimeScaleEffect(const FTimeScaleEffectData& EffectData);

    /** 移除指定ID的时间缩放效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale")
    bool RemoveTimeScaleEffect(int32 EffectID);

    /** 移除指定类型的所有时间缩放效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale")
    void RemoveTimeScaleEffectsByType(ETimeScaleEffectType EffectType);

    /** 清除所有时间缩放效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale")
    void ClearAllTimeScaleEffects();

    /** 暂停/恢复时间缩放效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale")
    void PauseTimeScaleEffects(bool bPause);

    /** 检查是否有指定类型的活跃效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale", BlueprintPure)
    bool HasActiveEffectOfType(ETimeScaleEffectType EffectType) const;

    /** 获取当前时间缩放值 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale", BlueprintPure)
    float GetCurrentTimeScale() const { return m_CurrentTimeScale; }

    /** 获取默认时间缩放值 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale", BlueprintPure)
    float GetDefaultTimeScale() const { return m_DefaultTimeScale; }

    /** 设置默认时间缩放值 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale")
    void SetDefaultTimeScale(float NewDefaultTimeScale) { m_DefaultTimeScale = NewDefaultTimeScale; }

    /** 获取活跃效果数量 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale", BlueprintPure)
    int32 GetActiveEffectCount() const { return m_ActiveEffects.Num(); }

    // 便捷函数：应用常用的时间缩放效果

    /** 应用子弹时间效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale|QuickEffects")
    int32 ApplyBulletTimeEffect(float TimeScale = 0.3f, float Duration = 2.0f, int32 Priority = 100);

    /** 应用击中定帧效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale|QuickEffects")
    int32 ApplyHitFreezeEffect(float FreezeTime = 0.1f, int32 Priority = 200);

    /** 应用游戏暂停效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale|QuickEffects")
    int32 ApplyGamePauseEffect(int32 Priority = 1000);

    /** 应用慢动作效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale|QuickEffects")
    int32 ApplySlowMotionEffect(float TimeScale = 0.5f, float Duration = 3.0f, int32 Priority = 50);

    /** 手动更新时间缩放效果 */
    UFUNCTION(BlueprintCallable, Category = "TimeScale")
    void Tick(float DeltaTime);

protected:
    /** 更新所有活跃的时间缩放效果 */
    void UpdateTimeScaleEffects(float DeltaTime);

    /** 计算当前应用的时间缩放值 */
    void CalculateCurrentTimeScale();

    /** 将时间缩放应用到世界 */
    void ApplyTimeScaleToWorld();

    /** 将时间缩放应用到角色 */
    void ApplyTimeScaleToCharacters();

    /** 获取角色管理器 */
    UMyCharacterManager* GetCharacterManager();

    /** 计算插值后的时间缩放值 */
    float CalculateInterpolatedTimeScale(const FActiveTimeScaleEffect& Effect, float DeltaTime);

private:
    /** 默认时间缩放值 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TimeScale", meta = (AllowPrivateAccess = "true", ClampMin = "0.1", ClampMax = "5.0"))
    float m_DefaultTimeScale = 1.0f;

    /** 当前时间缩放值 */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeScale", meta = (AllowPrivateAccess = "true"))
    float m_CurrentTimeScale = 1.0f;

    /** 活跃的时间缩放效果列表 */
    UPROPERTY(VisibleAnywhere, Category = "TimeScale", meta = (AllowPrivateAccess = "true"))
    TArray<FActiveTimeScaleEffect> m_ActiveEffects;

    /** 下一个效果ID */
    int32 m_NextEffectID = 1;

    /** 是否暂停效果更新 */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeScale", meta = (AllowPrivateAccess = "true"))
    bool m_bEffectsPaused = false;

    /** 是否启用调试输出 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TimeScale|Debug", meta = (AllowPrivateAccess = "true"))
    bool m_bEnableDebugOutput = false;

    /** 角色管理器的弱引用 */
    TWeakObjectPtr<UMyCharacterManager> m_CharacterManager;
};
