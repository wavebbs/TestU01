#include "Characters/BT/BTD_CheckFlag.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/BaseCharacter.h"
#include "AIController.h"
#include "Combat/CharacterFlagManager.h"

UBTD_CheckFlag::UBTD_CheckFlag()
{
    NodeName = TEXT("Check Character Flag");
    
    // 默认设置
    bInvertCondition = false;
}

bool UBTD_CheckFlag::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
    AController* actor = Cast<AController>(	OwnerComp.GetOwner());
    if (!actor)
    {
        return EBTNodeResult::Failed;
    }


    ABaseCharacter* Character = Cast<ABaseCharacter>(actor->GetPawn());
    
    
    // 获取角色的Flag管理器组件
    UCharacterFlagManager* FlagManager = Character->CharacterFlagManager;
    if (!FlagManager)
    {
        UE_LOG(LogTemp, Warning, TEXT("BTD_CheckFlag: CharacterFlagManager component not found on %s"), *Character->GetName());
        return false;
    }

    // 检查Flag是否存在
    bool bHasFlag = FlagManager->HasFlag(FlagToCheck);
    
    // 应用反转条件
    return bInvertCondition ? !bHasFlag : bHasFlag;
}

FString UBTD_CheckFlag::GetStaticDescription() const
{
    FString Description;
    
    if (FlagToCheck.IsValid())
    {
        if (bInvertCondition)
        {
            Description = FString::Printf(TEXT("检查角色【没有】Flag: %s"), *FlagToCheck.ToString());
        }
        else
        {
            Description = FString::Printf(TEXT("检查角色【拥有】Flag: %s"), *FlagToCheck.ToString());
        }
    }
    else
    {
        Description = TEXT("请设置要检查的Flag！");
    }
    
    return Description;
}

#if WITH_EDITOR
void UBTD_CheckFlag::InitializeFromAsset(UBehaviorTree& Asset)
{
    Super::InitializeFromAsset(Asset);
    
    // 这里可以添加编辑器相关初始化逻辑
    // 例如：验证FlagToCheck是否合法
}
#endif
