#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "BTD_CheckFlag.generated.h"

/**
 * 行为树装饰器：检查角色是否拥有指定的Flag
 * 使用CharacterFlagManager组件实现Flag检测
 */
UCLASS(Blueprintable, Category = "AI|Decorators")
class UE_SAMPLE_THIRDGAME_API UBTD_CheckFlag : public UBTDecorator
{
	GENERATED_BODY()

public:
	/** 构造函数 */
	UBTD_CheckFlag();

	/** 要检查的Flag标签 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag", meta = (DisplayName = "Flag to Check"))
	FGameplayTag FlagToCheck;

	/** 是否反转结果（即检查角色没有该Flag） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag", meta = (DisplayName = "Invert Condition"))
	bool bInvertCondition;

protected:
	/**
	 * 计算装饰器条件是否满足
	 * @param OwnerComp 行为树组件
	 * @param NodeMemory 节点内存
	 * @return 条件是否满足
	 */
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	/**
	 * 获取静态描述文本（在编辑器中显示）
	 * @return 描述文本
	 */
	virtual FString GetStaticDescription() const override;

#if WITH_EDITOR
	/** 自定义细节面板设置 */
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
#endif
};
