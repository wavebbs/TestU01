// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Enum/CharacterEnumDefine.h"
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

	// 是否在空中
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsInAir;

	// 当前速度矢量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector CurrentSpeed;

	// 角色Roll角度（横滚）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	float Roll;

	// 角色Pitch角度（俯仰）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	float Pitch;

	// 角色Yaw角度（偏航）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	float Yaw;

	// 角色Yaw变化量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	float YawDelta;

	// 判断角色是否在移动
	UFUNCTION(BlueprintCallable, Category = "Movement")
	bool IsMoving() const { return bIsMoving; }

	/** 当前动画蓝图角色状态 */
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	ECharacterAnimState CurrentState = ECharacterAnimState::Idle;

	
	// Tick 更新动画属性
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	// 初始化动画
	virtual void NativeInitializeAnimation() override;

	// 切换动画状态
	UFUNCTION(BlueprintCallable, Category = "Animation")
	void SetCurrentAnimState(ECharacterAnimState NewState);
	
	UFUNCTION(BlueprintPure, Category = "Animation")
	bool CheckState(ECharacterAnimState NewState) const;
	
	/** 通过名称播放动画蒙太奇 */
	UFUNCTION(BlueprintCallable, Category = "Animation")
	UAnimMontage* PlayAnimMontageByName(const FString& MontageName, float PlayRate = 1.0f, FName StartSectionName = NAME_None);

	// /** 通过蒙太奇对象播放动画 */
	// UFUNCTION(BlueprintCallable, Category = "Animation")
	// UAnimMontage* PlayAnimMontage(UAnimMontage* MontageToPlay, float PlayRate = 1.0f, FName StartSectionName = NAME_None);

	/** 停止指定名称的蒙太奇 */
	UFUNCTION(BlueprintCallable, Category = "Animation")
	void StopAnimMontageByName(const FString& MontageName, float BlendOutTime = 0.25f);

	/** 检查指定名称的蒙太奇是否正在播放 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Animation")
	bool IsPlayingMontageByName(const FString& MontageName) const;

	/** 检查指定名称的蒙太奇是否播放完毕 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Animation")
	bool IsMontageCompleted(const FString& MontageName) const;
	
protected:
	/** 存储可用的动画蒙太奇映射，名称 -> 蒙太奇资源 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	TMap<FString, UAnimMontage*> AnimMontageMap;

	/** 跟踪正在播放的蒙太奇名称及其开始播放的帧号 */
	UPROPERTY()
	TMap<FString, int32> PlayingMontageFrames;

	/** 自动更新和清理播放中的蒙太奇状态 */
	void UpdatePlayingMontageStates();
	
private:
	// 上一帧的Yaw值，用于计算YawDelta
	float PreviousYaw;
};
