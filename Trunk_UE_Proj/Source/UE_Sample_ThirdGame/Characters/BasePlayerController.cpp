// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"

ABasePlayerController::ABasePlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// 默认设置
	bShowMouseCursor = false;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	// 创建行为树组件
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	
	// 创建黑板组件
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
}

void ABasePlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 设置输入映射上下文
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// 初始化鼠标光标状态
	SetMouseCursorVisibility(bIsMouseCursorVisible);

	// 如果设置了默认行为树，自动启动
	if (DefaultBehaviorTree)
	{
		StartBehaviorTree(DefaultBehaviorTree);
	}
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// 这里可以设置一些基础的输入绑定
	// 具体的输入绑定通常在继承的类中实现
}

void ABasePlayerController::SetMouseSensitivity(float NewSensitivity)
{
	MouseSensitivity = FMath::Clamp(NewSensitivity, 0.1f, 5.0f);
}

void ABasePlayerController::TogglePause()
{
	bIsGamePaused = !bIsGamePaused;
	
	// 设置游戏暂停状态
	UGameplayStatics::SetGamePaused(GetWorld(), bIsGamePaused);
	
	// 根据暂停状态设置鼠标光标可见性
	if (bIsGamePaused)
	{
		SetMouseCursorVisibility(true);
		SetInputMode(FInputModeGameAndUI());
		
		// 暂停行为树
		if (BehaviorTreeComponent && BehaviorTreeComponent->GetCurrentTree())
		{
			BehaviorTreeComponent->PauseLogic(TEXT("Game Paused"));
		}
	}
	else
	{
		SetMouseCursorVisibility(false);
		SetInputMode(FInputModeGameOnly());
		
		// 恢复行为树
		if (BehaviorTreeComponent && BehaviorTreeComponent->GetCurrentTree())
		{
			BehaviorTreeComponent->ResumeLogic(TEXT("Game Resumed"));
		}
	}
	
	// 广播暂停状态改变事件
	OnGamePauseChanged.Broadcast(bIsGamePaused);
}

void ABasePlayerController::SetMouseCursorVisibility(bool bVisible)
{
	bIsMouseCursorVisible = bVisible;
	bShowMouseCursor = bVisible;
	
	// 设置输入模式
	if (bVisible)
	{
		SetInputMode(FInputModeGameAndUI());
	}
	else
	{
		SetInputMode(FInputModeGameOnly());
	}
	
	// 广播鼠标光标可见性改变事件
	OnMouseCursorVisibilityChanged.Broadcast(bIsMouseCursorVisible);
}

void ABasePlayerController::StartBehaviorTree(UBehaviorTree* BehaviorTree)
{
	if (!BehaviorTreeComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("BehaviorTreeComponent is null!"));
		return;
	}

	// 如果没有指定行为树，使用默认的
	UBehaviorTree* TreeToStart = BehaviorTree ? BehaviorTree : DefaultBehaviorTree;
	
	if (!TreeToStart)
	{
		UE_LOG(LogTemp, Warning, TEXT("No BehaviorTree specified and no DefaultBehaviorTree set!"));
		return;
	}

	// 停止当前运行的行为树（如果有的话）
	if (BehaviorTreeComponent->GetCurrentTree())
	{
		StopBehaviorTree();
	}

	// 初始化黑板（如果行为树有关联的黑板数据）
	if (TreeToStart->BlackboardAsset && BlackboardComponent)
	{
		BlackboardComponent->InitializeBlackboard(*TreeToStart->BlackboardAsset);
	}

	// 启动行为树
	BehaviorTreeComponent->StartTree(*TreeToStart, EBTExecutionMode::Looped);
	
	//if (bSuccess)
	{
		UE_LOG(LogTemp, Log, TEXT("BehaviorTree started successfully: %s"), *TreeToStart->GetName());
		OnBehaviorTreeStarted.Broadcast(TreeToStart);
	}
	
}

void ABasePlayerController::StopBehaviorTree()
{
	if (BehaviorTreeComponent && BehaviorTreeComponent->GetCurrentTree())
	{
		BehaviorTreeComponent->StopTree();
		UE_LOG(LogTemp, Log, TEXT("BehaviorTree stopped"));
		OnBehaviorTreeStopped.Broadcast();
	}
}

void ABasePlayerController::ToggleAIControl()
{
	SetAIControlEnabled(!bIsAIControlEnabled);
}

void ABasePlayerController::SetAIControlEnabled(bool bEnabled)
{
	if (bIsAIControlEnabled == bEnabled)
	{
		return;
	}

	bIsAIControlEnabled = bEnabled;
	
	if (bEnabled)
	{
		// 启用AI控制 - 启动行为树
		if (DefaultBehaviorTree)
		{
			StartBehaviorTree();
		}
		
		// 隐藏鼠标光标，切换到游戏模式
		SetMouseCursorVisibility(false);
	}
	else
	{
		// 禁用AI控制 - 停止行为树
		StopBehaviorTree();
	}
	
	// 广播AI控制状态改变事件
	OnAIControlChanged.Broadcast(bIsAIControlEnabled);
	
	UE_LOG(LogTemp, Log, TEXT("AI Control %s"), bEnabled ? TEXT("Enabled") : TEXT("Disabled"));
}

bool ABasePlayerController::IsRunningBehaviorTree() const
{
	return BehaviorTreeComponent && BehaviorTreeComponent->GetCurrentTree() != nullptr;
}

void ABasePlayerController::SetBlackboardValueAsBool(const FName& KeyName, bool Value)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsBool(KeyName, Value);
	}
}

void ABasePlayerController::SetBlackboardValueAsFloat(const FName& KeyName, float Value)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsFloat(KeyName, Value);
	}
}

void ABasePlayerController::SetBlackboardValueAsInt(const FName& KeyName, int32 Value)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsInt(KeyName, Value);
	}
}

void ABasePlayerController::SetBlackboardValueAsVector(const FName& KeyName, const FVector& Value)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsVector(KeyName, Value);
	}
}

void ABasePlayerController::SetBlackboardValueAsObject(const FName& KeyName, UObject* Value)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsObject(KeyName, Value);
	}
}
