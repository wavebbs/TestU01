#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

// 前向声明
class UInputAction;
struct FInputActionValue;

UCLASS(NotBlueprintType)//(Blueprintable,BlueprintType)
class UE_SAMPLE_THIRDGAME_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	// 玩家特有的输入动作
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* AttackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* BlockAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* InventoryAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* PauseAction;
	
	// 玩家特有的状态
	UPROPERTY(BlueprintReadOnly, Category = "Player State")
	bool bIsAttacking = false;

	UPROPERTY(BlueprintReadOnly, Category = "Player State")
	bool bIsBlocking = false;

	UPROPERTY(BlueprintReadOnly, Category = "Player State")
	bool bIsInventoryOpen = false;

	UPROPERTY(BlueprintReadOnly, Category = "Player State")
	bool bIsPaused = false;

	// 攻击相关参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackDamage = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackRange = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float BlockDamageReduction = 0.5f;

	// 输入处理函数
	UFUNCTION()
	void OnAttackPressed(const FInputActionValue& Value);

	UFUNCTION()
	void OnBlockPressed(const FInputActionValue& Value);

	UFUNCTION()
	void OnBlockReleased(const FInputActionValue& Value);

	UFUNCTION()
	void OnInventoryPressed(const FInputActionValue& Value);

	UFUNCTION()
	void OnPausePressed(const FInputActionValue& Value);

	UFUNCTION()
	void OnMove(const FInputActionValue& Value);

	// 战斗逻辑函数
	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void PerformAttack();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void StartBlock();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void StopBlock();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void ToggleInventory();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void TogglePause();

	// 重写基类函数
	virtual void StartSprint() override;
	virtual void StopSprint() override;

public:
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintPure, Category = "Player State")
	bool CheckAction(UInputAction* Action) const;
	// 状态检查函数
	UFUNCTION(BlueprintPure, Category = "Player State")
	bool IsAttacking() const { return bIsAttacking; }

	UFUNCTION(BlueprintPure, Category = "Player State")
	bool IsBlocking() const { return bIsBlocking; }

	UFUNCTION(BlueprintPure, Category = "Player State")
	bool IsInventoryOpen() const { return bIsInventoryOpen; }

	UFUNCTION(BlueprintPure, Category = "Player State")
	bool IsPaused() const { return bIsPaused; }

	// 相机组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* FollowCamera;

	// 获取组件引用
	UFUNCTION(BlueprintPure, Category = "Camera")
	UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UFUNCTION(BlueprintPure, Category = "Camera")
	USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// 事件委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackPerformed);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnAttackPerformed OnAttackPerformed;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlockStateChanged, bool, bIsBlocking);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnBlockStateChanged OnBlockStateChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryToggled, bool, bIsOpen);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnInventoryToggled OnInventoryToggled;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPauseToggled, bool, bIsPaused);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPauseToggled OnPauseToggled;
};
