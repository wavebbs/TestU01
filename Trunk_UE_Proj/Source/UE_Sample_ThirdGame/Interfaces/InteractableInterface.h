#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractableInterface.generated.h"

class ABaseCharacter;

UINTERFACE(MinimalAPI)
class UInteractableInterface : public UInterface
{
	GENERATED_BODY()
};

class UE_SAMPLE_THIRDGAME_API IInteractableInterface
{
	GENERATED_BODY()

public:
	// 当角色与对象交互时调用
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(ABaseCharacter* InteractingCharacter);

	// 检查是否可以交互
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	bool CanInteract(ABaseCharacter* InteractingCharacter) const;

	// 获取交互提示文本
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	FText GetInteractionText() const;

	// 获取交互距离
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	float GetInteractionDistance() const;

	// 显示交互提示
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void ShowInteractionPrompt(ABaseCharacter* InteractingCharacter);

	// 隐藏交互提示
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void HideInteractionPrompt(ABaseCharacter* InteractingCharacter);
};
