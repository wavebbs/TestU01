// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatTypes.h"
#include "Components/BoxComponent.h"
#include "AttackHitBoxComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_SAMPLE_THIRDGAME_API UAttackHitBoxComponent : public UBoxComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttackHitBoxComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="HitBox")
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category="HitBox")
	UAttackData* BaseAttackData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="HitBox")
	FAttackInfo AttackInfo;
	
	UPROPERTY(Transient)
	UAttackData* CurAttackData;

	/** 攻击窗口激活状态 */
	bool bAttackWindowActive = false; // 增加攻击窗口状态变量

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="HitBox")
	void BeginAttackWindow(UAttackData* InData, FAttackInfo& InInfo);
	
	UFUNCTION(BlueprintCallable, Category="HitBox")
	void EndAttackWindow();

private:
	
	UFUNCTION()
	void OnHitBoxOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult);
};
