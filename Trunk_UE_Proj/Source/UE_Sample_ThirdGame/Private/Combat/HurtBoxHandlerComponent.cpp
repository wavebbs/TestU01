// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/HurtBoxHandlerComponent.h"

#include "Combat/AttackData.h"
#include "Combat/HurtBoxComponent.h"

// Sets default values for this component's properties
UHurtBoxHandlerComponent::UHurtBoxHandlerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHurtBoxHandlerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHurtBoxHandlerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHurtBoxHandlerComponent::RegisterHurtBox(UHurtBoxComponent* HurtBox)
{
	if (HurtBox && !HurtBoxes.Contains(HurtBox))
	{
		HurtBoxes.Add(HurtBox);
	}
}

void UHurtBoxHandlerComponent::UnregisterHurtBox(UHurtBoxComponent* HurtBox)
{
	HurtBoxes.Remove(HurtBox);
}

const UBeHitData* UHurtBoxHandlerComponent::SelectBeHitBox(const TArray<UHurtBoxComponent*>& Candidates,
                                                           const UAttackData* AttackData) const
{
	if (Candidates.Num() == 0 || !AttackData)
	{
		return nullptr;
	}

	// Test one be hurt box.
	if (Candidates.Num() > 0)
	{
		return  Candidates[0]->GetBeHitData();
	}

	return nullptr;
}

