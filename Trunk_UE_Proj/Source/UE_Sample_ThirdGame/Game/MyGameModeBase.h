// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

// 前向声明
class APlayerCharacter;
class ABaseCharacter;

// 游戏状态枚举
UENUM(BlueprintType)
enum class EGameState : uint8
{
	None		UMETA(DisplayName = "None"),
	Starting	UMETA(DisplayName = "Starting"),
	Playing		UMETA(DisplayName = "Playing"),
	Paused		UMETA(DisplayName = "Paused"),
	GameOver	UMETA(DisplayName = "Game Over"),
	Victory		UMETA(DisplayName = "Victory")
};

/**
 * 游戏模式基类，管理游戏的核心逻辑和规则
 */
UCLASS(BlueprintType, Blueprintable)
class UE_SAMPLE_THIRDGAME_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyGameModeBase();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// 游戏状态
	UPROPERTY(BlueprintReadOnly, Category = "Game State")
	EGameState CurrentGameState = EGameState::None;

	// 游戏时间
	UPROPERTY(BlueprintReadOnly, Category = "Game Time")
	float GameTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Time")
	float MaxGameTime = 600.0f; // 10分钟默认游戏时间

	// 玩家管理
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Players")
	int32 MaxPlayers = 4;

	UPROPERTY(BlueprintReadOnly, Category = "Players")
	TArray<APlayerController*> ConnectedPlayers;

	// 生成点管理
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TSubclassOf<ABaseCharacter> DefaultCharacterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	bool bAutoRespawn = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	float RespawnDelay = 3.0f;

	// 游戏规则
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
	bool bIsTimeLimited = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rules")
	bool bCanPause = true;

	// 游戏状态管理函数
	UFUNCTION(BlueprintCallable, Category = "Game State")
	virtual void StartGame();

	UFUNCTION(BlueprintCallable, Category = "Game State")
	virtual void PauseGame();

	UFUNCTION(BlueprintCallable, Category = "Game State")
	virtual void ResumeGame();

	UFUNCTION(BlueprintCallable, Category = "Game State")
	virtual void EndGame(bool bVictory = false);

	UFUNCTION(BlueprintCallable, Category = "Game State")
	virtual void RestartGame();

	// 玩家管理函数
	UFUNCTION(BlueprintCallable, Category = "Player Management")
	virtual void OnPlayerJoined(APlayerController* NewPlayer);

	UFUNCTION(BlueprintCallable, Category = "Player Management")
	virtual void OnPlayerLeft(APlayerController* LeavingPlayer);

	UFUNCTION(BlueprintCallable, Category = "Player Management")
	virtual void RespawnPlayer(APlayerController* PlayerController);

	// 游戏时间管理
	UFUNCTION(BlueprintCallable, Category = "Game Time")
	virtual void UpdateGameTime(float DeltaTime);

	UFUNCTION(BlueprintPure, Category = "Game Time")
	float GetRemainingTime() const;

	UFUNCTION(BlueprintPure, Category = "Game Time")
	float GetGameProgress() const; // 返回0-1的游戏进度

	// 状态检查函数
	UFUNCTION(BlueprintPure, Category = "Game State")
	EGameState GetCurrentGameState() const { return CurrentGameState; }

	UFUNCTION(BlueprintPure, Category = "Game State")
	bool IsGameActive() const { return CurrentGameState == EGameState::Playing; }

	UFUNCTION(BlueprintPure, Category = "Game State")
	bool IsGamePaused() const { return CurrentGameState == EGameState::Paused; }

	UFUNCTION(BlueprintPure, Category = "Game State")
	bool IsGameOver() const { return CurrentGameState == EGameState::GameOver || CurrentGameState == EGameState::Victory; }

	// 重写基类函数
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) override;

public:
	virtual void Tick(float DeltaTime) override;

	// 游戏事件委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStateChanged, EGameState, NewState);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGameStateChanged OnGameStateChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerJoinedDelegate, APlayerController*, NewPlayer);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerJoinedDelegate OnPlayerJoinedDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLeftDelegate, APlayerController*, LeavingPlayer);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerLeftDelegate OnPlayerLeftDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStarted);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGameStarted OnGameStarted;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameEnded, bool, bVictory);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGameEnded OnGameEnded;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeWarning, float, RemainingTime);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnTimeWarning OnTimeWarning;

private:
	// 内部状态变量
	bool bGameHasStarted = false;
	bool bTimeWarningTriggered = false;
	FTimerHandle GameTimerHandle;

	// 内部辅助函数
	void SetGameState(EGameState NewState);
	void HandleTimeWarning();
};
