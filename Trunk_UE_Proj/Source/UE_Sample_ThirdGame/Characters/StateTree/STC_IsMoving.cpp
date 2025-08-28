// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/StateTree/STC_IsMoving.h"
#include "Characters/BaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

USTC_IsMoving::USTC_IsMoving(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
    // 初始化成员变量
    BaseCharacter = nullptr;
}

bool USTC_IsMoving::TestCondition(FStateTreeExecutionContext& Context) const
{
    // 检查角色是否有效
    if (!BaseCharacter)
    {
        return false;
    }

    // 获取角色移动组件
    UCharacterMovementComponent* MovementComponent = BaseCharacter->GetCharacterMovement();
    if (!MovementComponent)
    {
        return false;
    }

    // 判断角色是否在移动（速度大于0）
    float Speed = MovementComponent->Velocity.Size();
    return Speed > 0.0f;
}
