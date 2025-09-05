// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameInstance.h"
#include "MyTimeScaleManager.h"
#include "Engine/World.h"

UMyGameInstance::UMyGameInstance()
{
    // 初始化默认值
    m_bTimerSetup = false;
    m_bEnableTimeScaleAutoUpdate = true;
    m_TimeScaleUpdateRate = 0.0f;
    m_bEnableDebugLog = false;
}

void UMyGameInstance::Init()
{
    Super::Init();
    
    if (m_bEnableDebugLog)
    {
        UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: 开始初始化"));
    }
    
    // 初始化所有子系统
    InitializeSubsystems();

  //  StartGameInstance();
}

void UMyGameInstance::OnStart()
{
    Super::OnStart();
    
    // 游戏开始时设置定时器
    if (m_bEnableTimeScaleAutoUpdate)
    {
        SetupTickTimer();
    }
    
    if (m_bEnableDebugLog)
    {
        UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: OnStart called"));
    }
}

void UMyGameInstance::StartGameInstance()
{
    Super::StartGameInstance();
    
  
    if (m_bEnableDebugLog)
    {
        UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: 游戏实例已启动"));
    }
}

void UMyGameInstance::Shutdown()
{
    if (m_bEnableDebugLog)
    {
        UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: 开始关闭"));
    }
    
    // 清理定时器
    ClearTickTimer();
    
    // 清理所有子系统
    CleanupSubsystems();
    
    Super::Shutdown();
}

void UMyGameInstance::TickTimeScaleManager(float DeltaTime)
{
    // 更新时间缩放管理器
    if (m_TimeScaleManager.IsValid())
    {
        m_TimeScaleManager->Tick(DeltaTime);
    }
}

UMyTimeScaleManager* UMyGameInstance::GetTimeScaleManager() const
{
    return m_TimeScaleManager.Get();
}

void UMyGameInstance::SetupTickTimer()
{
    if (m_bTimerSetup)
    {
        return; // 已经设置过定时器了
    }
    
    if (UWorld* World = GetWorld())
    {
        // 设置定时器来驱动时间缩放管理器更新
        World->GetTimerManager().SetTimer(
            m_TickTimerHandle,
            [this]()
            {
                if (UWorld* CurrentWorld = GetWorld())
                {
                    float DeltaTime = CurrentWorld->GetDeltaSeconds();
                    TickTimeScaleManager(DeltaTime);
                }
            },
            m_TimeScaleUpdateRate,  // 更新频率
            true                    // 循环执行
        );
        
        m_bTimerSetup = true;
        
        if (m_bEnableDebugLog)
        {
            UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: 时间缩放管理器定时器已设置，更新频率: %.3f秒"), m_TimeScaleUpdateRate);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MyGameInstance: 无法获取World对象，定时器设置失败"));
    }
}

void UMyGameInstance::ClearTickTimer()
{
    if (m_bTimerSetup)
    {
        if (UWorld* World = GetWorld())
        {
            World->GetTimerManager().ClearTimer(m_TickTimerHandle);
            m_bTimerSetup = false;
            
            if (m_bEnableDebugLog)
            {
                UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: 时间缩放管理器定时器已清理"));
            }
        }
    }
}

void UMyGameInstance::InitializeSubsystems()
{
    // 获取时间缩放管理器引用
    m_TimeScaleManager = GetSubsystem<UMyTimeScaleManager>();
    
    if (m_TimeScaleManager.IsValid())
    {
        if (m_bEnableDebugLog)
        {
            UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: 时间缩放管理器初始化成功"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MyGameInstance: 无法获取时间缩放管理器"));
    }
    
    // 这里可以初始化其他子系统
    // 例如：音频管理器、输入管理器等
}

void UMyGameInstance::CleanupSubsystems()
{
    // 清理时间缩放管理器
    if (m_TimeScaleManager.IsValid())
    {
        m_TimeScaleManager->ClearAllTimeScaleEffects();
        
        if (m_bEnableDebugLog)
        {
            UE_LOG(LogTemp, Warning, TEXT("MyGameInstance: 时间缩放管理器已清理"));
        }
    }
    
    // 重置引用
    m_TimeScaleManager.Reset();
    
    // 这里可以清理其他子系统
}
