// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/BT/BTD_CheckGrounded.h"
#include "AIController.h"
#include "Characters/BaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTD_CheckGrounded::UBTD_CheckGrounded()
{
	NodeName = TEXT("Check Grounded");
}

bool UBTD_CheckGrounded::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{

	AController* actor = Cast<AController>(	OwnerComp.GetOwner());
	if (!actor)
	{
		return false;
	}

	ABaseCharacter* Character = Cast<ABaseCharacter>(actor->GetPawn());
	
	if (!Character)
	{
		return false;
	}

	// 获取角色移动组件
	UCharacterMovementComponent* MovementComponent = Character->GetCharacterMovement();
	if (!MovementComponent)
	{
		return false;
	}

	// 检查角色是否在地面上
	return MovementComponent->IsMovingOnGround();
}

FString UBTD_CheckGrounded::GetStaticDescription() const
{
	return FString(TEXT("Check if character is grounded"));
}
