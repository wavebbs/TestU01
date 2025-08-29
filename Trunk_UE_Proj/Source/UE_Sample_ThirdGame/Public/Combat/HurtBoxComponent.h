// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "HurtBoxComponent.generated.h"


class UBeHitData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_SAMPLE_THIRDGAME_API UHurtBoxComponent : public UBoxComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHurtBoxComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

protected:
	// 受击框配置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category="HurtBox")
	UBeHitData* BeHitData;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	const UBeHitData* GetBeHitData() const { return BeHitData; }

	// 	// 判断是否允许从某个方向攻击
	// 	UFUNCTION(BlueprintCallable, Category="HurtBox")
	// 	bool IsSomeAllowed(const FVector& FromAttacker) const;
};
