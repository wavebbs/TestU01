// HitStopSubsystem.h
#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "HitStopSubsystem.generated.h"

UCLASS()
class UE_SAMPLE_THIRDGAME_API UHitStopSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	/** 执行定格效果 */
	UFUNCTION(BlueprintCallable, Category="Combat|HitStop")
	void ApplyHitStop(float Duration, AActor* AffectedActor);

	/** 是否正在定格 */
	UFUNCTION(BlueprintCallable, Category="Combat|HitStop")
	bool IsInHitStop() const { return bInHitStop; }

private:
	bool bInHitStop = false;
	FTimerHandle TimerHandle_HitStop;
};
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
