// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/HitStopSubsystem.h"

void UHitStopSubsystem::ApplyHitStop(float Duration, AActor* AffectedActor)
{
	if (!GetWorld() || Duration <= 0.f) return;

	if (bInHitStop) return; // 避免叠加
	bInHitStop = true;

	// Just For test.
	// GetWorld()->GetWorldSettings()->SetTimeDilation(0.f);
	//
	// // 设置定时器恢复
	// GetWorld()->GetTimerManager().SetTimer(
	// 	TimerHandle_HitStop,
	// 	[this]()
	// 	{
	// 		if (GetWorld())
	// 		{
	// 			GetWorld()->GetWorldSettings()->SetTimeDilation(1.f);
	// 		}
	// 		bInHitStop = false;
	// 	},
	// 	Duration,
	// 	false
	// );
}