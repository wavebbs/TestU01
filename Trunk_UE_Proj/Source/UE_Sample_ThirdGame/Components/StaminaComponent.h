#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerManager.h"
#include "StaminaComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStaminaChanged, float, Stamina, float, MaxStamina, float, StaminaPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStaminaDepleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStaminaReplenished);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UE_SAMPLE_THIRDGAME_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UStaminaComponent();

protected:
	virtual void BeginPlay() override;

	// 耐力参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float MaxStamina = 100.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Stamina")
	float CurrentStamina;

	// 耐力消耗速率（每秒）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float StaminaDrainRate = 20.0f;

	// 耐力恢复速率（每秒）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float StaminaRegenRate = 15.0f;

	// 开始恢复的延迟时间（秒）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float StaminaRegenDelay = 1.0f;

	// 是否正在消耗耐力
	UPROPERTY(BlueprintReadOnly, Category = "Stamina")
	bool bIsDrainingStamina = false;

	// 恢复延迟计时器
	FTimerHandle StaminaRegenDelayTimerHandle;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 耐力相关函数
	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void StartDrainingStamina();

	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void StopDrainingStamina();

	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void ConsumeStamina(float Amount);

	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void RestoreStamina(float Amount);

	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void SetMaxStamina(float NewMaxStamina);

	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void SetStamina(float NewStamina);

	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void ResetStamina();

	// 耐力检查函数
	UFUNCTION(BlueprintPure, Category = "Stamina")
	bool HasStamina() const { return CurrentStamina > 0.0f; }

	UFUNCTION(BlueprintPure, Category = "Stamina")
	bool IsStaminaDepleted() const { return CurrentStamina <= 0.0f; }

	UFUNCTION(BlueprintPure, Category = "Stamina")
	bool IsStaminaFull() const { return CurrentStamina >= MaxStamina; }

	UFUNCTION(BlueprintPure, Category = "Stamina")
	float GetStaminaPercent() const { return MaxStamina > 0.0f ? CurrentStamina / MaxStamina : 0.0f; }

	UFUNCTION(BlueprintPure, Category = "Stamina")
	float GetCurrentStamina() const { return CurrentStamina; }

	UFUNCTION(BlueprintPure, Category = "Stamina")
	float GetMaxStamina() const { return MaxStamina; }

	UFUNCTION(BlueprintPure, Category = "Stamina")
	bool IsDrainingStamina() const { return bIsDrainingStamina; }

	// 事件委托
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnStaminaChanged OnStaminaChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnStaminaDepleted OnStaminaDepleted;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnStaminaReplenished OnStaminaReplenished;

protected:
	// 内部函数
	void StartStaminaRegeneration();
	void OnStaminaRegenDelayEnded();
};
