#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerManager.h"
#include "HealthComponent.generated.h"

// 前向声明
class AActor;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChanged, float, Health, float, MaxHealth, float, HealthPercent, float, Damage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, AActor*, DeadActor);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UE_SAMPLE_THIRDGAME_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();

protected:
	virtual void BeginPlay() override;

	// 健康参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth = 100.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Health")
	float CurrentHealth;

	// 是否无敌
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	bool bIsInvulnerable = false;

	// 无敌时间（秒）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float InvulnerabilityTime = 0.5f;

	// 无敌计时器
	FTimerHandle InvulnerabilityTimerHandle;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 健康相关函数
	UFUNCTION(BlueprintCallable, Category = "Health")
	void TakeDamage(float Damage, AActor* DamageInstigator = nullptr);

	UFUNCTION(BlueprintCallable, Category = "Health")
	void Heal(float HealAmount);

	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetMaxHealth(float NewMaxHealth);

	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetHealth(float NewHealth);

	UFUNCTION(BlueprintCallable, Category = "Health")
	void ResetHealth();

	// 健康检查函数
	UFUNCTION(BlueprintPure, Category = "Health")
	bool IsDead() const { return CurrentHealth <= 0.0f; }

	UFUNCTION(BlueprintPure, Category = "Health")
	bool IsAlive() const { return CurrentHealth > 0.0f; }

	UFUNCTION(BlueprintPure, Category = "Health")
	bool IsFullHealth() const { return CurrentHealth >= MaxHealth; }

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealthPercent() const { return MaxHealth > 0.0f ? CurrentHealth / MaxHealth : 0.0f; }

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetMaxHealth() const { return MaxHealth; }

	// 无敌相关函数
	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetInvulnerable(bool bInvulnerable);

	UFUNCTION(BlueprintPure, Category = "Health")
	bool IsInvulnerable() const { return bIsInvulnerable; }

	// 事件委托
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDeath OnDeath;

protected:
	// 内部函数
	void EndInvulnerability();
	void OnHealthReachedZero();
};
