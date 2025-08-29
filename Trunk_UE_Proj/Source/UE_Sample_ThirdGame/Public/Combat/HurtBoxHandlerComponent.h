// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HurtBoxHandlerComponent.generated.h"


class UAttackData;
class UHurtBoxComponent;
class UBeHitData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_SAMPLE_THIRDGAME_API UHurtBoxHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHurtBoxHandlerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// 管理角色身上的所有 HurtBox
	UPROPERTY(BlueprintReadWrite, Category="HurtBox")
	TMap<UHurtBoxComponent*, const UBeHitData*> HurtBoxes;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 注册/注销 HurtBox
	void RegisterHurtBox(UHurtBoxComponent* HurtBox, const UBeHitData* InHitData);
	void UnregisterHurtBox(const UHurtBoxComponent* HurtBox);

	// 按优先级筛选最终生效的受击框
	UFUNCTION(BlueprintCallable, Category="HurtBox")
	const UBeHitData* SelectBeHitBox(FVector InHitLocation, const TArray<UHurtBoxComponent*>& Candidates,
		const UAttackData* AttackData) const;

 };
