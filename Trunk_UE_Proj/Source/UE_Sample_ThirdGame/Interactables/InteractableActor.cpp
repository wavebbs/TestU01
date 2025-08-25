#include "InteractableActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Characters/BaseCharacter.h"
#include "Engine/World.h"

AInteractableActor::AInteractableActor()
{
	PrimaryActorTick.bCanEverTick = false;

	// 创建根组件
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// 创建静态网格组件
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

	// 创建交互提示组件
	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
	InteractionWidget->SetupAttachment(RootComponent);
	InteractionWidget->SetVisibility(false);
	InteractionWidget->SetWidgetSpace(EWidgetSpace::Screen);
}

void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
}

void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInteractableActor::OnInteract_Implementation(ABaseCharacter* InteractingCharacter)
{
	// 默认交互实现
	if (InteractingCharacter)
	{
		// 这里可以添加默认的交互逻辑
		// 例如播放音效、粒子效果等
	}

	// 调用蓝图可重写的函数
	OnInteractBlueprint(InteractingCharacter);
}

bool AInteractableActor::CanInteract_Implementation(ABaseCharacter* InteractingCharacter) const
{
	// 默认检查是否可以交互
	return bCanInteract && InteractingCharacter != nullptr;
}

FText AInteractableActor::GetInteractionText_Implementation() const
{
	return InteractionText;
}

float AInteractableActor::GetInteractionDistance_Implementation() const
{
	return InteractionDistance;
}

void AInteractableActor::ShowInteractionPrompt_Implementation(ABaseCharacter* InteractingCharacter)
{
	// 显示交互提示
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(true);
	}
}

void AInteractableActor::HideInteractionPrompt_Implementation(ABaseCharacter* InteractingCharacter)
{
	// 隐藏交互提示
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(false);
	}
}

void AInteractableActor::OnInteractBlueprint_Implementation(ABaseCharacter* InteractingCharacter)
{
	// 蓝图可重写的默认实现
	// 子类可以在蓝图中重写这个函数
}

void AInteractableActor::SetCanInteract(bool bNewCanInteract)
{
	bCanInteract = bNewCanInteract;
}

void AInteractableActor::SetInteractionText(const FText& NewText)
{
	InteractionText = NewText;
}

void AInteractableActor::SetInteractionDistance(float NewDistance)
{
	InteractionDistance = NewDistance;
}
