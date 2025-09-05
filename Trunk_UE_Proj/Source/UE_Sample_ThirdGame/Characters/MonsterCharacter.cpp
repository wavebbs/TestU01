// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MonsterCharacter.h"

#include "Combat/CharacterBeHitLogicComponent.h"
#include "Combat/CharacterDataComponent.h"
#include "Combat/HurtBoxComponent.h"
#include "Combat/HurtBoxHandlerComponent.h"

/**
 * \brief 构造函数，创建并附加各组件
 */
AMonsterCharacter::AMonsterCharacter()
	: CharacterBeHitLogic(CreateDefaultSubobject<UCharacterBeHitLogicComponent>(TEXT("CharacterBeHitLogicComponent")))
	, HurtBoxHandler(CreateDefaultSubobject<UHurtBoxHandlerComponent>(TEXT("HurtBoxHandlerComponent")))
	, CharacterData(CreateDefaultSubobject<UCharacterDataComponent>(TEXT("CharacterDataComponent")))
	//, HurtBoxComponent(CreateDefaultSubobject<UHurtBoxComponent>(TEXT("HurtBoxComponent")))
{
	// TODO
}