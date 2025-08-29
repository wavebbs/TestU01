// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/HurtBoxComponent.h"

#include "Combat/HurtBoxHandlerComponent.h"

// Sets default values for this component's properties
UHurtBoxComponent::UHurtBoxComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHurtBoxComponent::BeginPlay()
{
	Super::BeginPlay();

	if (AActor* Owner = GetOwner())
	{
		if (UHurtBoxHandlerComponent* Handler = Owner->FindComponentByClass<UHurtBoxHandlerComponent>())
		{
			Handler->RegisterHurtBox(this, BeHitData); // Register.
		}
	}
	
}

void UHurtBoxComponent::EndPlay(EEndPlayReason::Type Reason)
{
	if (AActor* Owner = GetOwner())
	{
		if (UHurtBoxHandlerComponent* Handler = Owner->FindComponentByClass<UHurtBoxHandlerComponent>())
		{
			Handler->UnregisterHurtBox(this); //Unregister.
		}
	}
	
	Super::EndPlay(Reason);
}


// Called every frame
void UHurtBoxComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

