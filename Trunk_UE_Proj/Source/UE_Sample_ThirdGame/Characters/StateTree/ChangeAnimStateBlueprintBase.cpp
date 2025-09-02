// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/StateTree/ChangeAnimStateBlueprintBase.h"
#include "Characters/BaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"

UChangeAnimStateBlueprintBase::UChangeAnimStateBlueprintBase(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // 初始化成员变量
    Character = nullptr;
    TargetAnimState = ECharacterAnimState::Idle;
}

EStateTreeRunStatus UChangeAnimStateBlueprintBase::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{
    if (!Character)
    {
        // 尝试从上下文中获取角色
        if (UObject* OwnerObject = Context.GetOwner())
        {
            if (ABaseCharacter* OwnerCharacter = Cast<ABaseCharacter>(OwnerObject))
            {
                Character = OwnerCharacter;
            }
            else if (UActorComponent* OwnerComponent = Cast<UActorComponent>(OwnerObject))
            {
                Character = Cast<ABaseCharacter>(OwnerComponent->GetOwner());
            }
        }
    }

    // 检查角色是否有效
    if (!Character)
    {
        // 如果没有设置角色，任务失败
        UE_LOG(LogTemp, Warning, TEXT("ChangeAnimStateBlueprintBase: Character is null"));
        return EStateTreeRunStatus::Failed;
    }
    
    // 设置角色的动画状态
    SetAnimState(Character, TargetAnimState);

    // 返回完成状态，表示任务已执行完毕
    return EStateTreeRunStatus::Succeeded;
}

void UChangeAnimStateBlueprintBase::SetAnimState(ABaseCharacter* InCharacter, ECharacterAnimState InAnimState)
{
    if (!InCharacter)
    {
        return;
    }

    // 调用角色的 SetAnimationState 方法
    InCharacter->SetAnimationState(InAnimState);

    // 记录状态更改
    //UE_LOG(LogTemp, Log, TEXT("%s animation state changed to %s"), 
        //   *InCharacter->GetName(), 
         //  *UEnum::GetValueAsString(TEXT("ECharacterAnimState"), InAnimState));
}
