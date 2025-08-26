// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/MyGameModeBase.h"
#include "Characters/BaseCharacter.h"
#include "Characters/PlayerCharacter.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerStart.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

AMyGameModeBase::AMyGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// 设置默认角色类
	DefaultCharacterClass = APlayerCharacter::StaticClass();
	
	// 默认游戏设置
	MaxPlayers = 4;
	bAutoRespawn = true;
	RespawnDelay = 3.0f;
	MaxGameTime = 600.0f; // 10分钟
	bIsTimeLimited = false;
	bCanPause = true;
	
	// 初始状态
	CurrentGameState = EGameState::None;
	GameTime = 0.0f;
	bGameHasStarted = false;
	bTimeWarningTriggered = false;
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	// 游戏开始时设置状态
	SetGameState(EGameState::Starting);
	
	// 延迟启动游戏（给玩家准备时间）
	FTimerHandle StartGameTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(StartGameTimerHandle, this, &AMyGameModeBase::StartGame, 2.0f, false);
}

void AMyGameModeBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// 清理定时器
	GetWorld()->GetTimerManager().ClearTimer(GameTimerHandle);
	
	Super::EndPlay(EndPlayReason);
}

void AMyGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// 如果游戏正在进行且启用了时间限制，更新游戏时间
	if (IsGameActive() && bIsTimeLimited)
	{
		UpdateGameTime(DeltaTime);
	}
}

void AMyGameModeBase::StartGame()
{
	if (CurrentGameState != EGameState::Starting)
	{
		return;
	}
	
	bGameHasStarted = true;
	SetGameState(EGameState::Playing);
	
	// 重置游戏时间
	GameTime = 0.0f;
	bTimeWarningTriggered = false;
	
	// 广播游戏开始事件
	OnGameStarted.Broadcast();
	
	UE_LOG(LogTemp, Log, TEXT("Game Started!"));
}

void AMyGameModeBase::PauseGame()
{
	if (!bCanPause || CurrentGameState != EGameState::Playing)
	{
		return;
	}
	
	SetGameState(EGameState::Paused);
	
	// 暂停所有玩家
	for (APlayerController* PC : ConnectedPlayers)
	{
		if (PC)
		{
			PC->SetPause(true);
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("Game Paused"));
}

void AMyGameModeBase::ResumeGame()
{
	if (CurrentGameState != EGameState::Paused)
	{
		return;
	}
	
	SetGameState(EGameState::Playing);
	
	// 恢复所有玩家
	for (APlayerController* PC : ConnectedPlayers)
	{
		if (PC)
		{
			PC->SetPause(false);
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("Game Resumed"));
}

void AMyGameModeBase::EndGame(bool bVictory)
{
	if (IsGameOver())
	{
		return;
	}
	
	SetGameState(bVictory ? EGameState::Victory : EGameState::GameOver);
	
	// 广播游戏结束事件
	OnGameEnded.Broadcast(bVictory);
	
	UE_LOG(LogTemp, Log, TEXT("Game Ended - Victory: %s"), bVictory ? TEXT("true") : TEXT("false"));
}

void AMyGameModeBase::RestartGame()
{
	// 重置游戏状态
	GameTime = 0.0f;
	bGameHasStarted = false;
	bTimeWarningTriggered = false;
	
	// 重新加载关卡
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void AMyGameModeBase::OnPlayerJoined(APlayerController* NewPlayer)
{
	if (!NewPlayer)
	{
		return;
	}
	
	// 添加到连接的玩家列表
	ConnectedPlayers.AddUnique(NewPlayer);
	
	// 广播玩家加入事件
	OnPlayerJoinedDelegate.Broadcast(NewPlayer);
	
	UE_LOG(LogTemp, Log, TEXT("Player Joined - Total Players: %d"), ConnectedPlayers.Num());
}

void AMyGameModeBase::OnPlayerLeft(APlayerController* LeavingPlayer)
{
	if (!LeavingPlayer)
	{
		return;
	}
	
	// 从连接的玩家列表中移除
	ConnectedPlayers.Remove(LeavingPlayer);
	
	// 广播玩家离开事件
	OnPlayerLeftDelegate.Broadcast(LeavingPlayer);
	
	UE_LOG(LogTemp, Log, TEXT("Player Left - Total Players: %d"), ConnectedPlayers.Num());
}

void AMyGameModeBase::RespawnPlayer(APlayerController* PlayerController)
{
	if (!PlayerController || !bAutoRespawn)
	{
		return;
	}
	
	// 延迟重生
	FTimerHandle RespawnTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(RespawnTimerHandle, [this, PlayerController]()
	{
		if (PlayerController && IsValid(PlayerController))
		{
			// 找到生成点
			AActor* StartSpot = FindPlayerStart(PlayerController);
			if (StartSpot)
			{
				// 生成新的Pawn
				APawn* NewPawn = SpawnDefaultPawnFor(PlayerController, StartSpot);
				if (NewPawn)
				{
					PlayerController->Possess(NewPawn);
					UE_LOG(LogTemp, Log, TEXT("Player Respawned"));
				}
			}
		}
	}, RespawnDelay, false);
}

void AMyGameModeBase::UpdateGameTime(float DeltaTime)
{
	if (!IsGameActive() || !bIsTimeLimited)
	{
		return;
	}
	
	GameTime += DeltaTime;
	
	// 检查时间警告（剩余30秒时触发）
	float RemainingTime = GetRemainingTime();
	if (!bTimeWarningTriggered && RemainingTime <= 30.0f && RemainingTime > 0.0f)
	{
		bTimeWarningTriggered = true;
		OnTimeWarning.Broadcast(RemainingTime);
		HandleTimeWarning();
	}
	
	// 检查时间是否到达
	if (RemainingTime <= 0.0f)
	{
		EndGame(false); // 时间到达，游戏失败
	}
}

float AMyGameModeBase::GetRemainingTime() const
{
	if (!bIsTimeLimited)
	{
		return MaxGameTime; // 无限时间
	}
	
	return FMath::Max(0.0f, MaxGameTime - GameTime);
}

float AMyGameModeBase::GetGameProgress() const
{
	if (!bIsTimeLimited || MaxGameTime <= 0.0f)
	{
		return 0.0f;
	}
	
	return FMath::Clamp(GameTime / MaxGameTime, 0.0f, 1.0f);
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	// 处理玩家加入
	OnPlayerJoined(NewPlayer);
}

void AMyGameModeBase::Logout(AController* Exiting)
{
	// 处理玩家离开
	if (APlayerController* PC = Cast<APlayerController>(Exiting))
	{
		OnPlayerLeft(PC);
	}
	
	Super::Logout(Exiting);
}

APawn* AMyGameModeBase::SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot)
{
	// 使用自定义角色类生成Pawn
	if (DefaultCharacterClass)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = NewPlayer;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		
		FVector SpawnLocation = StartSpot ? StartSpot->GetActorLocation() : FVector::ZeroVector;
		FRotator SpawnRotation = StartSpot ? StartSpot->GetActorRotation() : FRotator::ZeroRotator;
		
		return GetWorld()->SpawnActor<APawn>(DefaultCharacterClass, SpawnLocation, SpawnRotation, SpawnParams);
	}
	
	return Super::SpawnDefaultPawnFor_Implementation(NewPlayer, StartSpot);
}

void AMyGameModeBase::SetGameState(EGameState NewState)
{
	if (CurrentGameState == NewState)
	{
		return;
	}
	
	EGameState OldState = CurrentGameState;
	CurrentGameState = NewState;
	
	// 广播状态变化事件
	OnGameStateChanged.Broadcast(NewState);
	
	UE_LOG(LogTemp, Log, TEXT("Game State Changed: %d -> %d"), (int32)OldState, (int32)NewState);
}

void AMyGameModeBase::HandleTimeWarning()
{
	// 处理时间警告逻辑
	// 这里可以添加音效、UI提示等
	UE_LOG(LogTemp, Warning, TEXT("Time Warning: Only 30 seconds remaining!"));
}
