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

void UHurtBoxHandlerComponent::RegisterHurtBox(UHurtBoxComponent* HurtBox, const UBeHitData* InHitData)
{
	if (HurtBox && !HurtBoxes.Contains(HurtBox))
	{
		HurtBoxes.Add(HurtBox, InHitData);
	}
}

void UHurtBoxHandlerComponent::UnregisterHurtBox(const UHurtBoxComponent* HurtBox)
{
	HurtBoxes.Remove(HurtBox);
}

const UBeHitData* UHurtBoxHandlerComponent::SelectBeHitBox(const FVector InHitLocation,
                                                           const TArray<UHurtBoxComponent*>& Candidates,
                                                           const UAttackData* AttackData) const
{
	if (Candidates.Num() == 0 || !AttackData)
	{
		return nullptr;
	}

	const UBeHitData* Result = nullptr;
	float BestDistance = FLT_MAX;

	UHurtBoxComponent* bestHurtBox = nullptr;
	
	for (UHurtBoxComponent* HurtBox : Candidates)
	{
		if (const UBeHitData* const* Found = HurtBoxes.Find(HurtBox))
		{
			const UBeHitData* Data = *Found;
			if (!Data) continue;
			
			FVector Center = HurtBox->GetComponentLocation();
			const float CurDistance = FVector::DistSquared(InHitLocation, Center);

			// Distance 
			const bool bBetter = CurDistance < BestDistance;
			
			if (bBetter)
			{
				BestDistance = CurDistance;
				Result = Data;
				bestHurtBox = HurtBox;
			}
		}
	}

	// 高亮最近的 HurtBox
	for (UHurtBoxComponent* hurtBox : Candidates)
	{
		if (hurtBox)
		{
			hurtBox->SetRenderCustomDepth(hurtBox == bestHurtBox);
		}
	}

	return Result;
}

