/**
 * 行为树装饰器：检测BaseCharacter当前状态是否等于指定值
 */
#include "BTD_CheckCharacterState.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Characters/BaseCharacter.h"

UBTD_CheckCharacterState::UBTD_CheckCharacterState()
{
    NodeName = TEXT("Check Character State");
    TargetState = ECharacterAnimState::Idle;
}

bool UBTD_CheckCharacterState::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
    AController* actor = Cast<AController>(	OwnerComp.GetOwner());
    if (!actor)
    {
        return EBTNodeResult::Failed;
    }


    ABaseCharacter* Character = Cast<ABaseCharacter>(actor->GetPawn());
    if (!Character)
    {
        UE_LOG(LogTemp, Warning, TEXT("BTD_CheckCharacterState: Pawn不是BaseCharacter类型"));
        return false;
    }
    // 检查当前状态
    bool result = (Character->CurrentState == TargetState);
    UE_LOG(LogTemp, Log, TEXT("BTD_CheckCharacterState: 当前状态=%d, 目标状态=%d, 结果=%s"), (int32)Character->CurrentState, (int32)TargetState, result ? TEXT("true") : TEXT("false"));
    return result;
}

FString UBTD_CheckCharacterState::GetStaticDescription() const
{
    const UEnum* enumPtr = StaticEnum<ECharacterAnimState>();
    FString stateName = enumPtr ? enumPtr->GetNameStringByValue((int64)TargetState) : FString::Printf(TEXT("%d"), (int32)TargetState);
    return FString::Printf(TEXT("检测角色当前状态是否为: %s"), *stateName);
}
