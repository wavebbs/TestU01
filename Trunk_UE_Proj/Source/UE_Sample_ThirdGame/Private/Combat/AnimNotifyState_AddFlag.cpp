// Copyright Epic Games, Inc. All Rights Reserved.


#include "Combat/AnimNotifyState_AddFlag.h"
#include "Combat/CharacterFlagManager.h"
#include "Components/SkeletalMeshComponent.h"

void UAnimNotifyState_AddFlag::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	if (AActor* Owner = MeshComp->GetOwner())
	{
		if (UCharacterFlagManager* FlagMgr = Owner->FindComponentByClass<UCharacterFlagManager>())
		{
			// 开始时立即激活
			FlagMgr->AddFlag(FlagName, 0.f);
		}
	}
}

void UAnimNotifyState_AddFlag::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (AActor* Owner = MeshComp->GetOwner())
	{
		if (UCharacterFlagManager* FlagMgr = Owner->FindComponentByClass<UCharacterFlagManager>())
		{
			// 如果有额外 Duration，加上
			if (Duration > 0.f)
			{
				FlagMgr->AddFlag(FlagName, Duration);
			}
			else
			{
				FlagMgr->RemoveFlag(FlagName);
			}
		}
	}
}
