#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Enum/CharacterEnumDefine.h"
#include "AllowChangeStatus.generated.h"

// 前向声明
class UInputAction;
class APlayerCharacter;

/**
 * 状态配置项 - 包含每个状态的相关数据
 * 包括状态改变能力、输入动作和对应的动画状态
 */
USTRUCT(BlueprintType)
struct UE_SAMPLE_THIRDGAME_API FStateConfigItem
{
    GENERATED_BODY()

    /** 状态变化能力，定义该状态可以转换到哪些其他状态 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Configuration")
    TEnumAsByte<ECanChangeState> CanChangeTo;

    /** 触发此状态的输入动作 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Configuration")
    UInputAction* InputAction;

    /** 此配置项对应的动画状态 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Configuration")
    ECharacterAnimState AnimState;

    /** 状态优先级，数值越高优先级越高 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Configuration", meta = (ClampMin = "0", ClampMax = "100"))
    int32 Priority = 0;
    
    /** 是否为默认状态 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Configuration")
    bool bIsDefault = false;

    FStateConfigItem()
        : CanChangeTo(ECanChangeState::None)
        , InputAction(nullptr)
        , AnimState(ECharacterAnimState::Idle)
        , Priority(0)
        , bIsDefault(false)
    {
    }
};

/**
 * 角色状态配置组件
 * 用于配置和管理角色可用的状态以及状态之间的转换关系
 * 可以直接挂载在角色上作为组件使用
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, DisplayName = "允许状态改变配置组件"))
class UE_SAMPLE_THIRDGAME_API UAllowChangeStatus : public UActorComponent
{
    GENERATED_BODY()

public:
    /** 构造函数 */
    UAllowChangeStatus();

    /** 组件初始化 */
    virtual void BeginPlay() override;

    /** 获取所属玩家角色 */
    UFUNCTION(BlueprintCallable, Category = "State Configuration")
    APlayerCharacter* GetOwnerPlayerCharacter() const;

    /** 状态配置列表 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Configuration")
    TArray<FStateConfigItem> StateConfigs;

    /** 拥有该组件的玩家角色引用 */
    UPROPERTY(BlueprintReadOnly, Category = "State Configuration")
    APlayerCharacter* OwnerPlayerCharacter;

  
    /**
     * 检查从当前状态是否可以转换到目标状态
     * @param CurrentState 当前动画状态
     * @param TargetState 目标动画状态
     * @return 如果可以转换则返回true，否则返回false
     */
    UFUNCTION(BlueprintCallable, Category = "State Configuration")
    bool CanChangeState(FStateChangeAbility StateChangeAbility) const;
    
};
