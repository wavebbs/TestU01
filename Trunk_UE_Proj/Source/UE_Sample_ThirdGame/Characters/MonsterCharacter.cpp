// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MonsterCharacter.h"

#include "AIController.h"
#include "Combat/CharacterBeHitLogicComponent.h"
#include "Combat/CharacterDataComponent.h"
#include "Combat/HurtBoxHandlerComponent.h"

/**
 * \brief 构造函数，创建并附加各组件
 */
AMonsterCharacter::AMonsterCharacter()
{
	// TODO
	if (!CharacterBeHitLogic)
	{
		CharacterBeHitLogic = CreateDefaultSubobject<UCharacterBeHitLogicComponent>(TEXT("CharacterBeHitLogicComponent"));
	}

	// 检查并创建 HurtBoxHandlerComponent，避免重复创建
	if (!HurtBoxHandler)
	{
		HurtBoxHandler = CreateDefaultSubobject<UHurtBoxHandlerComponent>(TEXT("HurtBoxHandlerComponent"));
	}

	// 检查并创建 CharacterDataComponent，避免重复创建
	if (!CharacterData)
	{
		CharacterData = CreateDefaultSubobject<UCharacterDataComponent>(TEXT("CharacterDataComponent"));
	}
	
	AIControllerClass = AAIController::StaticClass();
}