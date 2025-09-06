#include "BTT_CanChangeState.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "Characters/Player/BasePlayerController.h"
#include "Characters/Player/PlayerCharacter.h"
#include "Engine/Engine.h"
#include "Characters/Enum/CharacterEnumDefine.h"
#include "Characters/Player/PlayerChangeStatusCfg.h"

UBTT_CanChangeState::UBTT_CanChangeState()
{
    NodeName = TEXT("Can Change State");
    

    
    // 初始化状态变更能力为空
    StateChangeAbility.ClearAll();
}

EBTNodeResult::Type UBTT_CanChangeState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

    // 设置新的状态变更能力
    FStateChangeAbility FinalAbility = StateChangeAbility;
    ABasePlayerController* actor = Cast<ABasePlayerController>(	OwnerComp.GetOwner());
    if (!actor)
    {
        return EBTNodeResult::Failed;
    }

    APlayerCharacter* Character = Cast<APlayerCharacter>(actor->GetPawn());
    if (!Character)
    {
        return EBTNodeResult::Failed;
    }

    if (Character->m_PlayerChangeStatusCfg->TryChangeState(StateChangeAbility))
    {
        
        return EBTNodeResult::Succeeded;
    }
    //
    // if (Character->canchangeStatus)
    // {
    //     Character->canchangeStatus->SetStateChangeAbility(FinalAbility);
    // }
    // else
    // {
    //     UE_LOG(LogTemp, Warning, TEXT("BTT_CanChangeState: 角色没有关联的AllowChangeStatus组件"));
    //     return EBTNodeResult::Failed;
    // }
    return EBTNodeResult::Failed;
}

FString UBTT_CanChangeState::GetStaticDescription() const
{
    FString Description = FString::Printf(TEXT("TryChangeState //n"));
        
    // 列出当前设置的状态
    TArray<FString> StateNames;
    
   const UEnum* EnumPtr = StaticEnum<ECharacterAnimState>();
    if (EnumPtr)
    {
        int32 EnumCount = EnumPtr->NumEnums() - 1; // 排除隐藏的"_MAX"或"_MAX_VALUE"
        for (int32 i = 0; i < EnumCount; ++i)
        {
            int64 EnumValue = EnumPtr->GetValueByIndex(i);
            ECharacterAnimState State = static_cast<ECharacterAnimState>(EnumValue);
            if (StateChangeAbility.HasState(State))
            {
                FString StateName = EnumPtr->GetNameStringByIndex(i);
                if (!StateName.IsEmpty())
                {
                    StateNames.Add(StateName);
                }
            }
        }
    }
    
    if (StateNames.Num() > 0)
    {
        Description += FString::Join(StateNames, TEXT(", "));
    }
    else
    {
        Description += TEXT("None");
    }
    
    
    
    return Description;
}

void UBTT_CanChangeState::SetStateChangeAbility(const FStateChangeAbility& NewAbility)
{
    StateChangeAbility = NewAbility;
}

