// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

class UMyTimeScaleManager;

/**
 * @brief 自定义游戏实例类
 * 负责管理全局系统，包括时间缩放管理器等核心游戏功能
 */
UCLASS(BlueprintType, Blueprintable)
class UE_SAMPLE_THIRDGAME_API UMyGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    /** 构造函数 */
    UMyGameInstance();

    /** 初始化游戏实例 */
    virtual void Init() override;

    virtual void OnStart() override;

    /** 游戏实例销毁时调用 */
    virtual void Shutdown() override;

    /** 开始播放时调用 */
    virtual void StartGameInstance() override;

    /** 每帧更新时间缩放管理器 */
    UFUNCTION(BlueprintCallable, Category = "Game Systems")
    void TickTimeScaleManager(float DeltaTime);

    /** 获取时间缩放管理器实例 */
    UFUNCTION(BlueprintPure, Category = "Game Systems")
    UMyTimeScaleManager* GetTimeScaleManager() const;

    /** 是否启用时间缩放系统自动更新 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Systems")
    bool m_bEnableTimeScaleAutoUpdate = true;

protected:
    /** 设置定时器来驱动时间缩放管理器更新 */
    void SetupTickTimer();

    /** 清理定时器 */
    void ClearTickTimer();

    /** 初始化所有子系统 */
    void InitializeSubsystems();

    /** 清理所有子系统 */
    void CleanupSubsystems();

private:
    /** 时间缩放管理器的弱引用 */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game Systems", meta = (AllowPrivateAccess = "true"))
    TWeakObjectPtr<UMyTimeScaleManager> m_TimeScaleManager;

    /** 定时器句柄，用于驱动时间缩放系统更新 */
    FTimerHandle m_TickTimerHandle;

    /** 是否已设置定时器 */
    bool m_bTimerSetup = false;

    /** 时间缩放系统更新频率（秒） */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Systems|Performance", meta = (AllowPrivateAccess = "true", ClampMin = "0.0", ClampMax = "1.0"))
    float m_TimeScaleUpdateRate = 0.016f; // 0表示每帧更新

    /** 是否启用调试日志 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Systems|Debug", meta = (AllowPrivateAccess = "true"))
    bool m_bEnableDebugLog = true;
};
