// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BasePlayerController.generated.h"

// 前向声明
class UBehaviorTree;
class UBlackboardData;

/**
 * 基础玩家控制器类
 * 处理玩家输入和UI交互，支持行为树控制
 */
UCLASS()
class UE_SAMPLE_THIRDGAME_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABasePlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// 输入映射上下文
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	// 鼠标灵敏度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	float MouseSensitivity = 1.0f;

	// 行为树组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UBehaviorTreeComponent* BehaviorTreeComponent;

	// 黑板组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UBlackboardComponent* BlackboardComponent;

	// 默认行为树
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* DefaultBehaviorTree;

	// 是否启用AI控制模式
	UPROPERTY(BlueprintReadWrite, Category = "AI")
	bool bIsAIControlEnabled = false;

public:
	// 获取鼠标灵敏度
	UFUNCTION(BlueprintPure, Category = "Input")
	float GetMouseSensitivity() const { return MouseSensitivity; }

	// 设置鼠标灵敏度
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetMouseSensitivity(float NewSensitivity);

	// 暂停/恢复游戏
	UFUNCTION(BlueprintCallable, Category = "Game")
	void TogglePause();

	// 显示/隐藏鼠标光标
	UFUNCTION(BlueprintCallable, Category = "UI")
	void SetMouseCursorVisibility(bool bVisible);

	// 行为树相关方法
	UFUNCTION(BlueprintCallable, Category = "AI")
	void StartBehaviorTree(UBehaviorTree* BehaviorTree = nullptr);

	UFUNCTION(BlueprintCallable, Category = "AI")
	void StopBehaviorTree();

	UFUNCTION(BlueprintCallable, Category = "AI")
	void ToggleAIControl();

	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetAIControlEnabled(bool bEnabled);

	// 获取黑板组件
	UFUNCTION(BlueprintPure, Category = "AI")
	UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }

	// 获取行为树组件
	UFUNCTION(BlueprintPure, Category = "AI")
	UBehaviorTreeComponent* GetBehaviorTreeComponent() const { return BehaviorTreeComponent; }

	// 检查是否正在运行行为树
	UFUNCTION(BlueprintPure, Category = "AI")
	bool IsRunningBehaviorTree() const;

	// 设置黑板值（便捷方法）
	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetBlackboardValueAsBool(const FName& KeyName, bool Value);

	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetBlackboardValueAsFloat(const FName& KeyName, float Value);

	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetBlackboardValueAsInt(const FName& KeyName, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetBlackboardValueAsVector(const FName& KeyName, const FVector& Value);

	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetBlackboardValueAsObject(const FName& KeyName, UObject* Value);

protected:
	// 当前是否暂停
	UPROPERTY(BlueprintReadOnly, Category = "Game State")
	bool bIsGamePaused = false;

	// 鼠标光标是否可见
	UPROPERTY(BlueprintReadOnly, Category = "UI")
	bool bIsMouseCursorVisible = false;

public:
	// 游戏暂停状态改变事件
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePauseChanged, bool, bIsPaused);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGamePauseChanged OnGamePauseChanged;

	// 鼠标光标可见性改变事件
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMouseCursorVisibilityChanged, bool, bIsVisible);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnMouseCursorVisibilityChanged OnMouseCursorVisibilityChanged;

	// AI控制状态改变事件
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAIControlChanged, bool, bIsAIEnabled);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnAIControlChanged OnAIControlChanged;

	// 行为树启动事件
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBehaviorTreeStarted, UBehaviorTree*, BehaviorTree);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnBehaviorTreeStarted OnBehaviorTreeStarted;

	// 行为树停止事件
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBehaviorTreeStopped);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnBehaviorTreeStopped OnBehaviorTreeStopped;
};
