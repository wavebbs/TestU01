// Fill out your copyright notice in the Description page of Project Settings.


#include "MCBase.h"

// Sets default values
AMCBase::AMCBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMCBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMCBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMCBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

