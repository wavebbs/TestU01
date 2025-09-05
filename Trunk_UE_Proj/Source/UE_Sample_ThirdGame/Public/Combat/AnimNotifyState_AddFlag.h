// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_AddFlag.generated.h"


UCLASS()
class UE_SAMPLE_THIRDGAME_API UAnimNotifyState_AddFlag : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

	/** 编辑器显示的通知名称 */
	virtual FString GetNotifyName_Implementation() const override
	{
		return FlagTag.IsValid() ? FlagTag.ToString() : TEXT("Add Flag Tag");
	}

	/** 编辑器显示颜色 */
	virtual FLinearColor GetEditorColor() override
	{
		return FLinearColor(0.95f, 1.0f, 0.45f, 1.0f);
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag FlagTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration = 0.f;
};
