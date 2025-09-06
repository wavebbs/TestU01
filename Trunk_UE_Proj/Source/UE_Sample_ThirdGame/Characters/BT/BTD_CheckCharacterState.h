// 行为树装饰器：检测角色当前动画状态
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Characters/BaseCharacter.h"
#include "BTD_CheckCharacterState.generated.h"

/**
 * 行为树装饰器：检测BaseCharacter当前状态是否等于指定值
 */
UCLASS(Blueprintable, Category = "Character")
class UE_SAMPLE_THIRDGAME_API UBTD_CheckCharacterState : public UBTDecorator
{
    GENERATED_BODY()

public:
    /** 构造函数 */
    UBTD_CheckCharacterState();

    /** 要检测的目标状态 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State", meta = (DisplayName = "Target State"))
    TEnumAsByte<ECharacterAnimState>  TargetState;

protected:
    /**
     * 检查条件是否满足
     */
    virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

    /**
     * 编辑器描述文本
     */
    virtual FString GetStaticDescription() const override;
};

