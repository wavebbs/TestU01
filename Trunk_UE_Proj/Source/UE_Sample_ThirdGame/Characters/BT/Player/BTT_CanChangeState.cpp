#include "BTT_CanChangeState.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "Characters/Player/BasePlayerController.h"
#include "Characters/Player/PlayerCharacter.h"
#include "Engine/Engine.h"
#include "Characters/Enum/CharacterEnumDefine.h"

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
    return EBTNodeResult::Succeeded;
}

FString UBTT_CanChangeState::GetStaticDescription() const
{
    FString Description = FString::Printf(TEXT("CanChangeState //n"));
        
    // 列出当前设置的状态
    TArray<FString> StateNames;
    if (StateChangeAbility.HasState(ECanChangeState::CanIdle)) StateNames.Add(TEXT("Idle"));
    if (StateChangeAbility.HasState(ECanChangeState::CanWalk)) StateNames.Add(TEXT("Walk"));
    if (StateChangeAbility.HasState(ECanChangeState::CanRun)) StateNames.Add(TEXT("Run"));
    if (StateChangeAbility.HasState(ECanChangeState::CanJump)) StateNames.Add(TEXT("Jump"));
    if (StateChangeAbility.HasState(ECanChangeState::CanAttack)) StateNames.Add(TEXT("Attack"));
    if (StateChangeAbility.HasState(ECanChangeState::CanDodge)) StateNames.Add(TEXT("Dodge"));
    if (StateChangeAbility.HasState(ECanChangeState::CanDeath)) StateNames.Add(TEXT("Death"));
    if (StateChangeAbility.HasState(ECanChangeState::CanHit)) StateNames.Add(TEXT("Hit"));
    
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

