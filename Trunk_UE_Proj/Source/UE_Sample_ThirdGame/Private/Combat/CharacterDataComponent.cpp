// CharacterDataComponent.cpp
#include "Combat/CharacterDataComponent.h"
#include "Combat/CharacterData.h"

UCharacterDataComponent::UCharacterDataComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	CurrentHP = 0.f;
	CharacterData = CreateDefaultSubobject<UCharacterData>(TEXT("DefaultCharacterData"));
}

void UCharacterDataComponent::BeginPlay()
{
	Super::BeginPlay();

	if (CharacterData)
	{
		CurrentHP = CharacterData->MaxHP;
	}
}

void UCharacterDataComponent::ApplyDamage(float Damage)
{
	if (Damage <= 0.f || !CharacterData || !IsAlive()) return;

	float OldHP = CurrentHP;
	CurrentHP = FMath::Clamp(CurrentHP - Damage, 0.f, CharacterData->MaxHP);

	OnHPChanged.Broadcast(OldHP, CurrentHP);

	if (CurrentHP <= 0.f)
	{
		OnCharacterDied.Broadcast();
		UE_LOG(LogTemp, Log, TEXT("%s died"), *GetOwner()->GetName());
	}
}

void UCharacterDataComponent::Heal(float HealAmount)
{
	if (HealAmount <= 0.f || !CharacterData || !IsAlive())
		return;

	float OldHP = CurrentHP;
	CurrentHP = FMath::Clamp(CurrentHP + HealAmount, 0.f, CharacterData->MaxHP);

	OnHPChanged.Broadcast(OldHP, CurrentHP);
}

void UCharacterDataComponent::ResetData()
{
	if (CharacterData)
	{
		CurrentHP = CharacterData->MaxHP;
		OnHPChanged.Broadcast(0.f, CurrentHP);
	}
}
