#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Characters/Enum/CharacterEnumDefine.h"
#include "BTT_CanChangeState.generated.h"

// Forward declarations
class UBehaviorTreeComponent;
class UBlackboardComponent;

/**
 * 行为树Task：设置角色可变更状态能力
 * 使用FStateChangeAbility支持多选状态，可在蓝图中配置
 */
UCLASS(Blueprintable, Category = "AI|Tasks")
class UE_SAMPLE_THIRDGAME_API UBTT_CanChangeState : public UBTTaskNode
{
    GENERATED_BODY()

public:
    /** 构造函数 */
    UBTT_CanChangeState();



    /** 状态变更能力配置 - 支持多选状态 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State", 
        meta = (DisplayName = "State Change Ability"))
    FStateChangeAbility StateChangeAbility;

 

protected:
    /**
     * Execute the main task logic
     * @param OwnerComp Behavior tree component
     * @param NodeMemory Node memory
     * @return Task execution result
     */
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    /**
     * Get task description text (displayed in editor)
     * @return Description text
     */
    virtual FString GetStaticDescription() const override;

public:
    /** Blueprint interface: Set state change ability */
    UFUNCTION(BlueprintCallable, Category = "State")
    void SetStateChangeAbility(const FStateChangeAbility& NewAbility);

    /** 蓝图接口：获取当前状态变更能力 */
    UFUNCTION(BlueprintPure, Category = "State")
    FStateChangeAbility GetStateChangeAbility() const { return StateChangeAbility; }

 
};
