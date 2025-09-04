// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/AttackHitBoxComponent.h"

#include "Combat/AttackData.h"
#include "Combat/BeHitData.h"
#include "Combat/HurtBoxComponent.h"
#include "Combat/SampleHitInfoManager.h"
#include "GameFramework/Character.h"

class UCharacterBeHitLogicComponent;
class UHurtBoxHandlerComponent;
// Sets default values for this component's properties
UAttackHitBoxComponent::UAttackHitBoxComponent()
{
	PrimaryComponentTick.bCanEverTick = false; // 设为 false，按需开启

	SetGenerateOverlapEvents(false);
	UPrimitiveComponent::SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void UAttackHitBoxComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UAttackHitBoxComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UAttackHitBoxComponent::BeginAttackWindow(UAttackData* InData, FAttackInfo& InInfo)
{
	CurAttackData = InData ? InData : BaseAttackData;

	bAttackWindowActive = true;

	SetGenerateOverlapEvents(true);
	UPrimitiveComponent::SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	if (!OnComponentBeginOverlap.IsAlreadyBound(this, &UAttackHitBoxComponent::OnHitBoxOverlap))
	{
		OnComponentBeginOverlap.AddDynamic(this, &UAttackHitBoxComponent::OnHitBoxOverlap);
	}
}

void UAttackHitBoxComponent::EndAttackWindow()
{
	bAttackWindowActive = false;
	
    SetGenerateOverlapEvents(false);
    UPrimitiveComponent::SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (OnComponentBeginOverlap.IsAlreadyBound(this, &UAttackHitBoxComponent::OnHitBoxOverlap))
	{
		OnComponentBeginOverlap.RemoveDynamic(this, &UAttackHitBoxComponent::OnHitBoxOverlap);
	}
}

void UAttackHitBoxComponent::OnHitBoxOverlap(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult)
{
	if (!bAttackWindowActive)
	{
		return;
	}	
	
    if (!CurAttackData || !OtherComp || !OtherActor || OtherActor == GetOwner())
    {
        UE_LOG(LogTemp, Warning, TEXT("OnHitBoxOverlap: 参数无效或自碰撞，忽略。"));
        return;
    }

    USampleHitInfoManager* HitInfoSys = GetWorld()->GetSubsystem<USampleHitInfoManager>();
    if (!HitInfoSys)
    {
        UE_LOG(LogTemp, Warning, TEXT("OnHitBoxOverlap: 未找到HitInfoSubsystem。"));
        return;
    }

    ACharacter* Attacker = Cast<ACharacter>(GetOwner());
    ACharacter* Victim = Cast<ACharacter>(OtherActor);

    // 获取受击数据
    const UHurtBoxComponent* HurtBox = Cast<UHurtBoxComponent>(OtherComp);
    const UBeHitData* BeHitData = nullptr;
    if (HurtBox)
    {
        BeHitData = HurtBox->GetBeHitData();
    }

    FAttackCollisionInfo CollisionInfo;
    CollisionInfo.Attacker = Attacker;
    CollisionInfo.Victim = Victim;
    CollisionInfo.AttackData = CurAttackData;
    CollisionInfo.BeHitData = BeHitData;
	CollisionInfo.DistanceSq = HurtBox ? FVector::DistSquared(GetOwner()->GetActorLocation(), HurtBox->GetComponentLocation()) : 0.0f;

    HitInfoSys->AddCollisionInfo(CollisionInfo);

    // UE_LOG(LogTemp, Log, TEXT("OnHitBoxOverlap: Attacker=%s, Victim=%s, HurtBox=%s, DefenceDamage=%d"),
    //     *GetNameSafe(Attacker), *GetNameSafe(Victim), *GetNameSafe(HurtBox), static_cast<int32>(CollisionInfo.BeHitData->DefenceDamage));
}