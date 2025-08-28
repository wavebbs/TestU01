// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/BT/BTD_CheckAction.h"
#include "AIController.h"
#include "Characters/BaseCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTD_CheckAction::UBTD_CheckAction()
{
	NodeName = TEXT("Check Action");
}

bool UBTD_CheckAction::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController)
	{
		return false;
	}

	ABaseCharacter* Character = Cast<ABaseCharacter>(AIController->GetPawn());
	if (!Character)
	{
		return false;
	}

	// 在这里添加您的具体条件检查逻辑
	// 例如：检查角色的某个状态
	// bool bCondition = Character->IsInAction();
	// return bCondition;

	// 作为示例，暂时返回 true
	return true;
}
