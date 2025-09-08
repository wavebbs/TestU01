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
	//CharacterBeHitLogicComponent
	CharacterBeHitLogic = CreateDefaultSubobject<UCharacterBeHitLogicComponent>(TEXT("CharacterBeHitLogicComponent"));

	// HurtBoxHandlerComponent
	HurtBoxHandler = CreateDefaultSubobject<UHurtBoxHandlerComponent>(TEXT("HurtBoxHandlerComponent"));

	// CharacterDataComponent
	CharacterData = CreateDefaultSubobject<UCharacterDataComponent>(TEXT("CharacterDataComponent"));
	
	AIControllerClass = AAIController::StaticClass();
}

void AMonsterCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (!IsValid(CharacterData))
    {
        UE_LOG(LogTemp, Warning, TEXT("CharacterDataComponent is NULL! 请检查构造函数或蓝图设置。"));
    }
}