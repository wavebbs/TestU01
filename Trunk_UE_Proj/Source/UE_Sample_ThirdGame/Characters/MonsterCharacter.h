// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "MonsterCharacter.generated.h"

// class UHurtBoxComponent;
class UCharacterBeHitLogicComponent;
class UHurtBoxHandlerComponent;
class UCharacterDataComponent;
/**
 * 
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API AMonsterCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	/** 构造函数 */
	AMonsterCharacter();

	// /** 受击盒组件 */
	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	// TObjectPtr<class UHurtBoxComponent> HurtBoxComponent;

	/** 受击逻辑组件 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	TObjectPtr<class UCharacterBeHitLogicComponent> CharacterBeHitLogic;

	/** 受击盒处理器 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	TObjectPtr<class UHurtBoxHandlerComponent> HurtBoxHandler;

	/** 角色数据组件 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	TObjectPtr<class UCharacterDataComponent> CharacterData;
};