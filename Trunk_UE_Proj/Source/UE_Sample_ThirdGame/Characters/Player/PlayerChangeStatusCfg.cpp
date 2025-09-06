#include "PlayerChangeStatusCfg.h"

#include "BasePlayerController.h"
#include "../Enum/CharacterEnumDefine.h"
#include "PlayerCharacter.h"

UPlayerChangeStatusCfg::UPlayerChangeStatusCfg()
{
    // 设置组件默认属性
    PrimaryComponentTick.bCanEverTick = false; // 不需要每帧更新
    bWantsInitializeComponent = true; // 需要初始化
    
    // 初始化玩家角色引用为空
    OwnerPlayerCharacter = nullptr;

    // 创建默认的状态配置，可以在蓝图中进行覆盖和扩展
    // 默认状态配置仅作为示例
    
    // // Idle状态配置
    // FStateConfigItem IdleConfig;
    // IdleConfig.AnimState = ECharacterAnimState::Idle;
    // // 使用位运算创建FStateChangeAbility值
    // int32 StateValue = ECanChangeState::CanWalk | 
    //                    ECanChangeState::CanRun | 
    //                    ECanChangeState::CanJump | 
    //                    ECanChangeState::CanAttack | 
    //                    ECanChangeState::CanDodge;
    // IdleConfig.StateChangeAbility = FStateChangeAbility(StateValue);
    // IdleConfig.InputAction = nullptr; // 默认状态，不需要输入
    // IdleConfig.Priority = 0;
    // IdleConfig.bIsDefault = true;
    // StateConfigs.Add(IdleConfig);
    
    // 其他状态配置在蓝图中添加
}

void UPlayerChangeStatusCfg::BeginPlay()
{
    Super::BeginPlay();
    
    // 获取并初始化拥有者的PlayerCharacter引用
    AActor* Owner = GetOwner();
    if (Owner)
    {
        OwnerPlayerCharacter = Cast<APlayerCharacter>(Owner);
        if (OwnerPlayerCharacter)
        {
            UE_LOG(LogTemp, Log, TEXT("状态配置组件已关联到玩家角色: %s"), *OwnerPlayerCharacter->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("状态配置组件的拥有者不是PlayerCharacter类型"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("状态配置组件没有有效的拥有者"));
    }
    
    // 在组件开始时执行的逻辑
    UE_LOG(LogTemp, Log, TEXT("状态配置组件初始化，已加载 %d 个状态配置"), StateConfigs.Num());
    
    // 确保至少有一个默认状态
    bool bHasDefault = false;
    for (const FStateConfigItem& Config : StateConfigs)
    {
        if (Config.bIsDefault)
        {
            bHasDefault = true;
            break;
        }
    }
    
    if (!bHasDefault && StateConfigs.Num() > 0)
    {
        // 如果没有设置默认状态，将第一个状态设为默认
        StateConfigs[0].bIsDefault = true;
        UE_LOG(LogTemp, Warning, TEXT("未设置默认状态，已将第一个状态设为默认"));
    }
}

APlayerCharacter* UPlayerChangeStatusCfg::GetOwnerPlayerCharacter() const
{
    return OwnerPlayerCharacter;
}

// 检查状态转换
bool UPlayerChangeStatusCfg::TryChangeState(FStateChangeAbility StateChangeAbility) const
{
    // 倒序遍历 StateConfigs
    for (int32 i = StateConfigs.Num() - 1; i >= 0; --i)
    {
        const FStateConfigItem& config = StateConfigs[i];
        // 日志输出当前状态枚举值
        // 正确输出枚举名称，避免警告和崩溃
        if (StateChangeAbility.HasState(config.CanChangeTo))
        {
            APlayerCharacter* ownerCharacter = GetOwnerPlayerCharacter();
            if (ownerCharacter && ownerCharacter->CheckAction(config.InputAction, false))
            {
                ownerCharacter->ChangeBPState(config.AnimState);
                return true;
            }
        }
    }
    return false;
}
