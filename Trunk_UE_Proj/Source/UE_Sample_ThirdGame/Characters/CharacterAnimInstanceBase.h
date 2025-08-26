// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API UCharacterAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	// 角色移动速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Speed;

	// 是否在移动
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsMoving;

	// 移动方向（世界空间）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector MoveDirection;

	// 角色朝向（世界空间）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FRotator FacingRotation;

	// Tick 更新动画属性
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
