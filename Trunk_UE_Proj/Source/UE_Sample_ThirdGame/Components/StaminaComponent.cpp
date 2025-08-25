#include "StaminaComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

UStaminaComponent::UStaminaComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

	// 初始化耐力值
	CurrentStamina = MaxStamina;
}

void UStaminaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 如果正在消耗耐力，减少耐力值
	if (bIsDrainingStamina)
	{
		ConsumeStamina(StaminaDrainRate * DeltaTime);
	}
	else
	{
		// 如果不在消耗耐力，尝试恢复耐力
		if (CurrentStamina < MaxStamina)
		{
			RestoreStamina(StaminaRegenRate * DeltaTime);
		}
	}
}

void UStaminaComponent::StartDrainingStamina()
{
	if (!bIsDrainingStamina)
	{
		bIsDrainingStamina = true;
		
		// 清除恢复延迟计时器
		GetWorld()->GetTimerManager().ClearTimer(StaminaRegenDelayTimerHandle);
	}
}

void UStaminaComponent::StopDrainingStamina()
{
	if (bIsDrainingStamina)
	{
		bIsDrainingStamina = false;
		
		// 设置恢复延迟
		if (StaminaRegenDelay > 0.0f)
		{
			GetWorld()->GetTimerManager().SetTimer(StaminaRegenDelayTimerHandle, this, &UStaminaComponent::OnStaminaRegenDelayEnded, StaminaRegenDelay, false);
		}
		else
		{
			StartStaminaRegeneration();
		}
	}
}

void UStaminaComponent::ConsumeStamina(float Amount)
{
	if (Amount <= 0.0f)
	{
		return;
	}

	float OldStamina = CurrentStamina;
	CurrentStamina = FMath::Max(0.0f, CurrentStamina - Amount);

	// 广播耐力变化事件
	OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina, GetStaminaPercent());

	// 如果耐力耗尽，广播事件
	if (CurrentStamina <= 0.0f && OldStamina > 0.0f)
	{
		OnStaminaDepleted.Broadcast();
	}
}

void UStaminaComponent::RestoreStamina(float Amount)
{
	if (Amount <= 0.0f || IsStaminaFull())
	{
		return;
	}

	float OldStamina = CurrentStamina;
	CurrentStamina = FMath::Min(MaxStamina, CurrentStamina + Amount);

	// 广播耐力变化事件
	OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina, GetStaminaPercent());

	// 如果耐力完全恢复，广播事件
	if (CurrentStamina >= MaxStamina && OldStamina < MaxStamina)
	{
		OnStaminaReplenished.Broadcast();
	}
}

void UStaminaComponent::SetMaxStamina(float NewMaxStamina)
{
	if (NewMaxStamina <= 0.0f)
	{
		return;
	}

	MaxStamina = NewMaxStamina;
	
	// 如果当前耐力值超过新的最大耐力值，调整当前耐力值
	if (CurrentStamina > MaxStamina)
	{
		CurrentStamina = MaxStamina;
	}

	// 广播耐力变化事件
	OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina, GetStaminaPercent());
}

void UStaminaComponent::SetStamina(float NewStamina)
{
	NewStamina = FMath::Clamp(NewStamina, 0.0f, MaxStamina);
	
	if (NewStamina != CurrentStamina)
	{
		CurrentStamina = NewStamina;

		// 广播耐力变化事件
		OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina, GetStaminaPercent());
	}
}

void UStaminaComponent::ResetStamina()
{
	SetStamina(MaxStamina);
}

void UStaminaComponent::StartStaminaRegeneration()
{
	// 耐力恢复逻辑在Tick中处理
}

void UStaminaComponent::OnStaminaRegenDelayEnded()
{
	// 延迟结束后开始恢复耐力
	StartStaminaRegeneration();
}
