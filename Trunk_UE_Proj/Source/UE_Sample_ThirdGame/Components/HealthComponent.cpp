#include "HealthComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// 初始化健康值
	CurrentHealth = MaxHealth;
}

void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UHealthComponent::TakeDamage(float Damage, AActor* DamageInstigator)
{
	if (bIsInvulnerable || IsDead() || Damage <= 0.0f)
	{
		return;
	}

	// 计算新的健康值
	float OldHealth = CurrentHealth;
	CurrentHealth = FMath::Max(0.0f, CurrentHealth - Damage);

	// 广播健康变化事件
	OnHealthChanged.Broadcast(CurrentHealth, MaxHealth, GetHealthPercent(), Damage);

	// 如果健康值降到0或以下，触发死亡
	if (CurrentHealth <= 0.0f && OldHealth > 0.0f)
	{
		OnHealthReachedZero();
	}

	// 设置短暂无敌时间
	if (InvulnerabilityTime > 0.0f)
	{
		bIsInvulnerable = true;
		GetWorld()->GetTimerManager().SetTimer(InvulnerabilityTimerHandle, this, &UHealthComponent::EndInvulnerability, InvulnerabilityTime, false);
	}
}

void UHealthComponent::Heal(float HealAmount)
{
	if (IsDead() || HealAmount <= 0.0f)
	{
		return;
	}

	float OldHealth = CurrentHealth;
	CurrentHealth = FMath::Min(MaxHealth, CurrentHealth + HealAmount);

	// 广播健康变化事件
	OnHealthChanged.Broadcast(CurrentHealth, MaxHealth, GetHealthPercent(), -HealAmount);
}

void UHealthComponent::SetMaxHealth(float NewMaxHealth)
{
	if (NewMaxHealth <= 0.0f)
	{
		return;
	}

	MaxHealth = NewMaxHealth;
	
	// 如果当前健康值超过新的最大健康值，调整当前健康值
	if (CurrentHealth > MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}

	// 广播健康变化事件
	OnHealthChanged.Broadcast(CurrentHealth, MaxHealth, GetHealthPercent(), 0.0f);
}

void UHealthComponent::SetHealth(float NewHealth)
{
	NewHealth = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
	
	if (NewHealth != CurrentHealth)
	{
		float OldHealth = CurrentHealth;
		CurrentHealth = NewHealth;

		// 广播健康变化事件
		OnHealthChanged.Broadcast(CurrentHealth, MaxHealth, GetHealthPercent(), OldHealth - NewHealth);

		// 如果健康值降到0或以下，触发死亡
		if (CurrentHealth <= 0.0f && OldHealth > 0.0f)
		{
			OnHealthReachedZero();
		}
	}
}

void UHealthComponent::ResetHealth()
{
	SetHealth(MaxHealth);
}

void UHealthComponent::SetInvulnerable(bool bInvulnerable)
{
	bIsInvulnerable = bInvulnerable;

	// 如果取消无敌，清除计时器
	if (!bInvulnerable)
	{
		GetWorld()->GetTimerManager().ClearTimer(InvulnerabilityTimerHandle);
	}
}

void UHealthComponent::EndInvulnerability()
{
	bIsInvulnerable = false;
}

void UHealthComponent::OnHealthReachedZero()
{
	// 广播死亡事件
	OnDeath.Broadcast(GetOwner());
}
