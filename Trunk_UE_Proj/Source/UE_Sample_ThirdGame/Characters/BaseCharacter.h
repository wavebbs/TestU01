#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enum/CharacterEnumDefine.h"
#include "BaseCharacter.generated.h"

// 前向声明
class UInputMappingContext;
class UInputAction;
class UHealthComponent;
class UStaminaComponent;
class ABaseAIController;
class ABasePlayerController;
class UAnimInstance;
class UCharacterAnimInstanceBase;
struct FInputActionValue;

UCLASS()
class UE_SAMPLE_THIRDGAME_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();

protected:
	virtual void BeginPlay() override;
	
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
	
	

public:
	// 输入处理函数
	UFUNCTION(BlueprintCallable, Category = "State")
	void Move(const FVector2D MovementVector);


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
	
	
	UFUNCTION(BlueprintCallable, Category = "State")
	virtual void ChangeBPState(ECharacterAnimState NewState);
	
	/** 设置角色动画状态 */
	UFUNCTION(BlueprintCallable, Category = "Animation")
	virtual void SetAnimationState(ECharacterAnimState NewState);

	/** 获取当前动画状态 */
	UFUNCTION(BlueprintPure, Category = "Animation")
	ECharacterAnimState GetAnimationState() const { return CurrentState; }
	
	virtual void Tick(float DeltaTime) override;

	// 获取组件引用
	UFUNCTION(BlueprintPure, Category = "Components")
	UHealthComponent* GetHealthComponent() const { return HealthComponent; }

	UFUNCTION(BlueprintPure, Category = "Components")
	UStaminaComponent* GetStaminaComponent() const { return StaminaComponent; }

	/** 当前角色状态 */
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	ECharacterAnimState CurrentState = ECharacterAnimState::Idle;

	/** 动画蓝图实例 */
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	UCharacterAnimInstanceBase* CharacterAnimBase;

	/** 获取动画蓝图实例 */
	UFUNCTION(BlueprintPure, Category = "Animation")
	UCharacterAnimInstanceBase* GetAnimInstance() const { return CharacterAnimBase; }

	/** 浮空状态定时器句柄 */
	FTimerHandle FloatingTimerHandle;


	/** 基于MovementMode的浮空控制 */
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StartFloatingWithMovementMode(float Duration = 0.2f);

	/** 结束MovementMode浮空状态 */
	UFUNCTION()
	void EndFloatingWithMovementMode();

	/** 状态变化时的回调方法 */
	UFUNCTION()
	virtual void OnStateChange(ECharacterAnimState OldState, ECharacterAnimState NewState);

private:
	/** 浮空状态相关变量 */
	UPROPERTY()
	bool m_bIsFloating = false;
	

	/** 保存原始移动模式 */
	UPROPERTY()
	TEnumAsByte<EMovementMode> m_OriginalMovementMode;

	UPROPERTY()
	FVector m_FloatingStartLocation;

	UPROPERTY()
	float m_FloatingTargetHeight = 0.0f;
};

