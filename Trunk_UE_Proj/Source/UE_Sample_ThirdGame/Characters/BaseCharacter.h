#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterAnimState.h"
#include "BaseCharacter.generated.h"

// 前向声明
class UInputMappingContext;
class UInputAction;
class UHealthComponent;
class UStaminaComponent;
struct FInputActionValue;

UCLASS()
class UE_SAMPLE_THIRDGAME_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	// 输入映射上下文
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	// 输入动作
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* SprintAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* CrouchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* InteractAction;

	
	
	// 输入处理函数
	UFUNCTION()
	void Move(const FInputActionValue& Value);

	UFUNCTION()
	void Look(const FInputActionValue& Value);

	UFUNCTION()
	void OnJumpPressed(const FInputActionValue& Value);

	UFUNCTION()
	void OnJumpReleased(const FInputActionValue& Value);

	UFUNCTION()
	void OnSprintPressed(const FInputActionValue& Value);

	UFUNCTION()
	void OnSprintReleased(const FInputActionValue& Value);

	UFUNCTION()
	void OnCrouchPressed(const FInputActionValue& Value);

	UFUNCTION()
	void OnInteractPressed(const FInputActionValue& Value);



public:
	
	// 角色组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaminaComponent* StaminaComponent;

	// 移动参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float SprintSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float CrouchSpeed = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float JumpForce = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MouseSensitivity = 1.0f;

	// 状态标志
	UPROPERTY(BlueprintReadOnly, Category = "State")
	bool bIsSprinting = false;

	UPROPERTY(BlueprintReadOnly, Category = "State")
	bool bIsCrouching = false;

	UPROPERTY(BlueprintReadOnly, Category = "State")
	bool bCanJump = true;

	
	// 移动逻辑函数
	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void StartSprint();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void StopSprint();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void StartCrouch();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void StopCrouch();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void PerformJump();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual void PerformInteraction();

	// 状态检查函数
	UFUNCTION(BlueprintPure, Category = "State")
	bool IsSprinting() const { return bIsSprinting; }

	UFUNCTION(BlueprintPure, Category = "State")
	bool IsCrouching() const { return bIsCrouching; }

	UFUNCTION(BlueprintPure, Category = "State")
	bool CanPerformJump() const { return bCanJump; }

	/** 设置角色动画状态 */
	UFUNCTION(BlueprintCallable, Category = "Animation")
	virtual void SetAnimationState(ECharacterAnimState NewState);

	/** 获取当前动画状态 */
	UFUNCTION(BlueprintPure, Category = "Animation")
	ECharacterAnimState GetAnimationState() const { return CurrentAnimState; }

	/** 动画状态改变事件 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimStateChanged, ECharacterAnimState, PreviousState, ECharacterAnimState, NewState);
	UPROPERTY(BlueprintAssignable, Category = "Events|Animation")
	FOnAnimStateChanged OnAnimStateChanged;

	// 事件委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSprintChanged);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnSprintChanged OnSprintChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCrouchChanged);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnCrouchChanged OnCrouchChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJumpPerformed);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnJumpPerformed OnJumpPerformed;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractionPerformed);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnInteractionPerformed OnInteractionPerformed;
	
	virtual void Tick(float DeltaTime) override;

	// 获取组件引用
	UFUNCTION(BlueprintPure, Category = "Components")
	UHealthComponent* GetHealthComponent() const { return HealthComponent; }

	UFUNCTION(BlueprintPure, Category = "Components")
	UStaminaComponent* GetStaminaComponent() const { return StaminaComponent; }

	/** 当前角色动画状态 */
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	ECharacterAnimState CurrentAnimState = ECharacterAnimState::Idle;
};
