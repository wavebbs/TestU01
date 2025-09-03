#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

// 前向声明
class UInputAction;
class UEnhancedPlayerInput;
struct FInputActionValue;

UCLASS(NotBlueprintType)//(Blueprintable,BlueprintType)
class UE_SAMPLE_THIRDGAME_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	ABasePlayerController* PlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UEnhancedPlayerInput* EnhancedPlayerInput;
	
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
	

	// 攻击相关参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackDamage = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackRange = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float BlockDamageReduction = 0.5f;
	
	UFUNCTION()
	void Look(const FInputActionValue& Value);

	
	UFUNCTION(BlueprintCallable,Category="Move")
	void OnMoveUpdate();

public:
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintPure, Category = "Player State")
	bool CheckAction(UInputAction* Action, bool anykey) const;


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

	virtual void ChangeBPState(ECharacterAnimState NewState) override;

	/** 开始跳跃，给主角添加跳跃初速度 */
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StartJump(float JumpVelocity = 0.0f);

	/** 跳跃参数 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float CustomJumpVelocity = 600.0f;
	
	virtual void OnStateChange(ECharacterAnimState OldState, ECharacterAnimState NewState) override;
	
};
