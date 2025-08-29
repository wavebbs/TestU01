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

    // CurAttackData = nullptr;

    // 新逻辑：统一处理收集到的碰撞
    ProcessPendingHits();
    PendingHits.Empty();
    CurAttackData = nullptr;
}

void UAttackHitBoxComponent::OnHitBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // 收集数据
    if (!CurAttackData || !OtherComp || !OtherActor || OtherActor == GetOwner())
    {
        return;
    }
    FPendingHitData HitData;
    HitData.OtherActor = OtherActor;
    HitData.OtherComp = OtherComp;
    HitData.SweepResult = SweepResult;
    PendingHits.Add(HitData);
}

void UAttackHitBoxComponent::ProcessPendingHits()
{
    if (!CurAttackData)
    {
        return;
    }

    TArray<UHurtBoxComponent*> candidates;
    TMap<UHurtBoxComponent*, ACharacter*> hurtBoxToCharacter;

    // 收集所有合法的HurtBox和对应的VictimCharacter
    for (const FPendingHitData& hitData : PendingHits)
    {
        UHurtBoxComponent* hurtBox = Cast<UHurtBoxComponent>(hitData.OtherComp);
        if (!hurtBox) continue;

        ACharacter* victimCharacter = Cast<ACharacter>(hitData.OtherActor);
        if (!victimCharacter) continue;

        candidates.AddUnique(hurtBox);
        hurtBoxToCharacter.Add(hurtBox, victimCharacter);
    }

    if (candidates.Num() == 0)
    {
        return;
    }

    FVector hitPoint = GetOwner()->GetActorLocation();
    UE_LOG(LogTemp, Warning, TEXT("HitPoint Attack Test: (%s)"), *hitPoint.ToString());

    // 以第一个VictimCharacter查找Handler（假设同一批HurtBox属于同一角色）
    UHurtBoxHandlerComponent* handler = nullptr;
    if (ACharacter* firstVictim = hurtBoxToCharacter.FindRef(candidates[0]))
    {
        handler = firstVictim->FindComponentByClass<UHurtBoxHandlerComponent>();
    }
    if (!handler)
    {
        return;
    }

    const UBeHitData* finalBeHit = handler->SelectBeHitBox(hitPoint, candidates, CurAttackData);
    if (!finalBeHit)
    {
        return;
    }

    // 找到最优HurtBox对应的VictimCharacter
    UHurtBoxComponent* bestHurtBox = nullptr;
    for (UHurtBoxComponent* hurtBox : candidates)
    {
        if (handler->SelectBeHitBox(hitPoint, {hurtBox}, CurAttackData) == finalBeHit)
        {
            bestHurtBox = hurtBox;
            break;
        }
    }
    if (!bestHurtBox)
    {
        return;
    }

    ACharacter* victimCharacter = hurtBoxToCharacter.FindRef(bestHurtBox);
    if (!victimCharacter)
    {
        return;
    }

    UCharacterBeHitLogicComponent* beHitLogic = victimCharacter->FindComponentByClass<UCharacterBeHitLogicComponent>();
    if (!beHitLogic)
    {
        return;
    }

    FHitResultData result = beHitLogic->OnHit(CurAttackData, finalBeHit, AttackInfo);

    const float testDamage = CurAttackData->Damage - finalBeHit->DefenceDamage;
    UE_LOG(LogTemp, Log, TEXT("Damage Attack Test: %f - DefenceDamage %f = Result Damage : %f"), CurAttackData->Damage, finalBeHit->DefenceDamage, testDamage);
}