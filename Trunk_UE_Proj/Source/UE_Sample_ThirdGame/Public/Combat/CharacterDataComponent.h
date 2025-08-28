// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterData.h"   // 定义了 UCharacterData
#include "CharacterDataComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHPChanged, float, OldHP, float, NewHP);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharacterDied);

UCLASS(ClassGroup=(Combat), meta=(BlueprintSpawnableComponent))
class UE_SAMPLE_THIRDGAME_API UCharacterDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCharacterDataComponent();

protected:
	virtual void BeginPlay() override;

	/** 配置数据（可在蓝图/资产中赋值） */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category="Character")
	UCharacterData* CharacterData;

public:
	/** 当前 HP （运行时值） */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Character")
	float CurrentHP;

	/** HP 改变事件 */
	UPROPERTY(BlueprintAssignable, Category="Character")
	FOnHPChanged OnHPChanged;

	/** 角色死亡事件 */
	UPROPERTY(BlueprintAssignable, Category="Character")
	FOnCharacterDied OnCharacterDied;

	/** 获取配置数据 */
	UFUNCTION(BlueprintCallable, Category="Character")
	FORCEINLINE UCharacterData* GetCharacterData() const { return CharacterData; }

	/** 获取当前 HP */
	UFUNCTION(BlueprintCallable, Category="Character")
	FORCEINLINE float GetCurrentHP() const { return CurrentHP; }

	/** 应用伤害 */
	UFUNCTION(BlueprintCallable, Category="Character")
	void ApplyDamage(float Damage);

	/** 回复 HP */
	UFUNCTION(BlueprintCallable, Category="Character")
	void Heal(float HealAmount);

	/** 是否存活 */
	UFUNCTION(BlueprintCallable, Category="Character")
	bool IsAlive() const { return CurrentHP > 0.f; }

	/** 重置数据（如复活） */
	UFUNCTION(BlueprintCallable, Category="Character")
	void ResetData();
};
