// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/AttackHitBoxComponent.h"

#include "Combat/BeHitData.h"
#include "Combat/CharacterBeHitLogicComponent.h"
#include "Combat/HurtBoxComponent.h"
#include "Combat/HurtBoxHandlerComponent.h"
#include "GameFramework/Character.h"

class UCharacterBeHitLogicComponent;
class UHurtBoxHandlerComponent;
// Sets default values for this component's properties
UAttackHitBoxComponent::UAttackHitBoxComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	SetGenerateOverlapEvents(false);
	UPrimitiveComponent::SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// UPrimitiveComponent::SetCollisionResponseToAllChannels(ECR_Ignore);
	// UPrimitiveComponent::SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
}

// Called when the game starts
void UAttackHitBoxComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAttackHitBoxComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAttackHitBoxComponent::BeginAttackWindow(UAttackData* InData, FAttackInfo& InInfo)
{
	if (InData != nullptr)
	{
		CurAttackData = InData;
	}
	else
	{
		CurAttackData = BaseAttackData;
	}

	SetGenerateOverlapEvents(true);
	UPrimitiveComponent::SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	if (!OnComponentBeginOverlap.IsAlreadyBound(this, &UAttackHitBoxComponent::OnHitBoxOverlap))
	{
		OnComponentBeginOverlap.AddDynamic(this, &UAttackHitBoxComponent::OnHitBoxOverlap);
		
	}
}

void UAttackHitBoxComponent::EndAttackWindow()
{
	SetGenerateOverlapEvents(false);
	UPrimitiveComponent::SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CurAttackData = nullptr;
}

void UAttackHitBoxComponent::OnHitBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("AttackData Damage: start"));
	// if (!CurAttackData || !OtherComp || !OtherActor)
	if (!CurAttackData || !OtherComp || !OtherActor || OtherActor == GetOwner())
	{
		return;
	}
		
	// Step1: 判断是否是 HurtBox
	UHurtBoxComponent* HurtBox = Cast<UHurtBoxComponent>(OtherComp);
	if (!HurtBox) return;
	
	// Step2: 获取角色身上的 Handler
	ACharacter* VictimCharacter = Cast<ACharacter>(OtherActor);
	if (!VictimCharacter) return;

	UHurtBoxHandlerComponent* Handler = VictimCharacter->FindComponentByClass<UHurtBoxHandlerComponent>();
	if (!Handler) return;

	// Step3: 让 Handler 选中最终生效的 BeHitData
	TArray<UHurtBoxComponent*> Candidates;
	Candidates.Add(HurtBox);

	const UBeHitData* FinalBeHit = Handler->SelectBeHitBox(Candidates, CurAttackData);
	if (!FinalBeHit) return;

	// Step4: 调用受击逻辑
	UCharacterBeHitLogicComponent* BeHitLogic = VictimCharacter->FindComponentByClass<UCharacterBeHitLogicComponent>();
	if (!BeHitLogic) return;

	FHitResultData Result = BeHitLogic->OnHit(CurAttackData, FinalBeHit, AttackInfo);

	const float TestDamage = CurAttackData->Damage - HurtBox->GetBeHitData()->DefenceDamage;
	// DebugResult.
	UE_LOG(LogTemp, Log, TEXT("AttackData Damage: %f - DefenceDamage %f = Result Damage : %f"), CurAttackData->Damage, HurtBox->GetBeHitData()->DefenceDamage, TestDamage);

}

