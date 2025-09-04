// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/SampleHitInfoManager.h"

#include "Combat/BeHitData.h"
#include "Combat/CharacterBeHitLogicComponent.h"
#include "Combat/CombatTypes.h"
#include "GameFramework/Character.h"

class UCharacterBeHitLogicComponent;

void USampleHitInfoManager::Tick(float DeltaTime)
{
	UpdateCollisions();
}

void USampleHitInfoManager::AddCollisionInfo(const FAttackCollisionInfo& Info)
{
	if (CheckCollisionValid(Info))
	{
		AttackCollisionInfos.Add(Info);
	}
}

bool USampleHitInfoManager::CheckCollisionValid(const FAttackCollisionInfo& Info) const
{
	// TODO: 根据 Attacker/Victim 的阵营、无敌状态等过滤
	return Info.Attacker.IsValid() && Info.Victim.IsValid();
}

void USampleHitInfoManager::UpdateCollisions()
{
	if (AttackCollisionInfos.Num() == 0) return;

	// 分类 Victim
	TMap<AActor*, TArray<FAttackCollisionInfo>> VictimMap;
	for (const auto& Info : AttackCollisionInfos)
	{
		if (Info.Victim.IsValid())
		{
			VictimMap.FindOrAdd(Info.Victim.Get()).Add(Info);
		}
	}

	// 遍历每个 Victim 的信息
	for (auto& Elem : VictimMap)
	{
		AActor* Victim = Elem.Key;
		TArray<FAttackCollisionInfo>& Infos = Elem.Value;

		Infos.Sort([](const FAttackCollisionInfo& A, const FAttackCollisionInfo& B)
		{
			if (!A.BeHitData && !B.BeHitData)
			{
				return A.DistanceSq < B.DistanceSq;
			}
			if (!A.BeHitData)
			{
				return false;
			}
			if (!B.BeHitData)
			{
				return true;
			}
			
			// 优先级规则
			if (A.BeHitData->HurtBoxType != B.BeHitData->HurtBoxType)
			{
				return A.BeHitData->HurtBoxType < B.BeHitData->HurtBoxType; // Shield > Weak > Normal
			}
			return A.DistanceSq < B.DistanceSq; // 同优先级比距离
		});

		// 取第一个作为最终结果
		if (Infos.Num() > 0)
		{
			const FAttackCollisionInfo& FinalInfo = Infos[0];

			if (UCharacterBeHitLogicComponent* BeHitComp = Victim->FindComponentByClass<UCharacterBeHitLogicComponent>())
			{
				ACharacter* AttackerCharacter = Cast<ACharacter>(FinalInfo.Attacker.Get());
				BeHitComp->OnHit(FinalInfo.AttackData, FinalInfo.BeHitData, AttackerCharacter);
				// BeHitComp->OnHit(FinalInfo.AttackData, FinalInfo.BeHitData, FinalInfo.Attacker.Get());
			}
		}
	}

	AttackCollisionInfos.Empty();
}

