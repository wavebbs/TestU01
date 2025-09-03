// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "SampleHitInfoManager.generated.h"

/**
 * 
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API USampleHitInfoManager : public UWorldSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:
	// 添加一个碰撞信息（Overlap 时调用）
	void AddCollisionInfo(const FAttackCollisionInfo& Info);

	// Tick 末统一处理
	void UpdateCollisions();

	virtual void Tick(float DeltaTime) override;
	
	virtual bool IsTickable() const override{ return true; }

	/** 获取统计 ID（必须实现） */
	virtual TStatId GetStatId() const override
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(USampleHitInfoSubsystem, STATGROUP_Tickables);
	}
	
private:
	UPROPERTY()
	TArray<FAttackCollisionInfo> AttackCollisionInfos;

	bool CheckCollisionValid(const FAttackCollisionInfo& Info) const;
};
