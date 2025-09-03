// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/BT/BTD_CheckAction.h"
#include "AIController.h"
#include "Characters/BaseCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/PlayerCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Characters/BasePlayerController.h"
#include "GameFramework/Controller.h"

UBTD_CheckAction::UBTD_CheckAction()
{
	NodeName = TEXT("Check Action");
}

bool UBTD_CheckAction::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	ABasePlayerController* actor = Cast<ABasePlayerController>(	OwnerComp.GetOwner());
	if (!actor)
	{
		return false;
	}

	APlayerCharacter* Character = Cast<APlayerCharacter>(actor->GetPawn());
	if (!Character)
	{
		return false;
	}
	if (!CAction)
	{
		return false;
	}

	
	
	return Character->CheckAction(CAction, CheckAnyKeyDown);
	

}

FString UBTD_CheckAction::GetStaticDescription() const
{
	return FString::Printf(TEXT("Check if action %s is active"), *GetNameSafe(CAction));
}

// FName UBTD_CheckAction::GetNodeIconName() const
// {
// 	return FName((TEXT("Check if action %s is active"), *GetNameSafe(CAction)));
// }
