#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Interfaces/InteractableInterface.h"
#include "InteractableActor.generated.h"

class UStaticMeshComponent;
class UWidgetComponent;

UCLASS()
class UE_SAMPLE_THIRDGAME_API AInteractableActor : public AActor, public IInteractableInterface
{
	GENERATED_BODY()

public:
	AInteractableActor();

protected:
	virtual void BeginPlay() override;

	// 组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UWidgetComponent* InteractionWidget;

	// 交互参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	FText InteractionText = FText::FromString("Press E to Interact");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	float InteractionDistance = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	bool bCanInteract = true;

	// 交互逻辑
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual void OnInteract_Implementation(ABaseCharacter* InteractingCharacter) override;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual bool CanInteract_Implementation(ABaseCharacter* InteractingCharacter) const override;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual FText GetInteractionText_Implementation() const override;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual float GetInteractionDistance_Implementation() const override;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual void ShowInteractionPrompt_Implementation(ABaseCharacter* InteractingCharacter) override;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	virtual void HideInteractionPrompt_Implementation(ABaseCharacter* InteractingCharacter) override;

	// 蓝图可重写的交互函数
	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnInteractBlueprint(ABaseCharacter* InteractingCharacter);
	virtual void OnInteractBlueprint_Implementation(ABaseCharacter* InteractingCharacter);

public:
	virtual void Tick(float DeltaTime) override;

	// 设置交互状态
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetCanInteract(bool bNewCanInteract);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetInteractionText(const FText& NewText);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetInteractionDistance(float NewDistance);
};
