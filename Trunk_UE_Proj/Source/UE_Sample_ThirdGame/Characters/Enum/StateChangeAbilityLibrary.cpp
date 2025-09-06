// Fill out your copyright notice in the Description page of Project Settings.

#include "StateChangeAbilityLibrary.h"

bool UStateChangeAbilityLibrary::HasState(const FStateChangeAbility& Ability, ECharacterAnimState State)
{
	return Ability.HasState(State);
}

FStateChangeAbility UStateChangeAbilityLibrary::AddState(const FStateChangeAbility& Ability, ECharacterAnimState State)
{
	FStateChangeAbility Result = Ability;
	Result.AddState(State);
	return Result;
}

FStateChangeAbility UStateChangeAbilityLibrary::RemoveState(const FStateChangeAbility& Ability, ECharacterAnimState State)
{
	FStateChangeAbility Result = Ability;
	Result.RemoveState(State);
	return Result;
}

FStateChangeAbility UStateChangeAbilityLibrary::ToggleState(const FStateChangeAbility& Ability, ECharacterAnimState State)
{
	FStateChangeAbility Result = Ability;
	Result.ToggleState(State);
	return Result;
}

FStateChangeAbility UStateChangeAbilityLibrary::ClearAllStates(const FStateChangeAbility& Ability)
{
	FStateChangeAbility Result = Ability;
	Result.ClearAll();
	return Result;
}

FStateChangeAbility UStateChangeAbilityLibrary::SetAllStates()
{
	FStateChangeAbility Result;
	Result.SetAll();
	return Result;
}

bool UStateChangeAbilityLibrary::IsEqual(const FStateChangeAbility& A, const FStateChangeAbility& B)
{
	return A == B;
}

FStateChangeAbility UStateChangeAbilityLibrary::CombineStates(const FStateChangeAbility& A, const FStateChangeAbility& B)
{
	return A | B;
}

FStateChangeAbility UStateChangeAbilityLibrary::GetIntersection(const FStateChangeAbility& A, const FStateChangeAbility& B)
{
	return A & B;
}

bool UStateChangeAbilityLibrary::HasAnyState(const FStateChangeAbility& Ability)
{
	return Ability.Value != ECharacterAnimState::None;
}

bool UStateChangeAbilityLibrary::HasAllStates(const FStateChangeAbility& Ability, const FStateChangeAbility& RequiredStates)
{
	return (Ability.Value & RequiredStates.Value) == RequiredStates.Value;
}

bool UStateChangeAbilityLibrary::HasAnyOfStates(const FStateChangeAbility& Ability, const FStateChangeAbility& TestStates)
{
	return (Ability.Value & TestStates.Value) != 0;
}

FStateChangeAbility UStateChangeAbilityLibrary::MakeStateAbilityFromInt(int32 Value)
{
	return FStateChangeAbility(Value);
}

int32 UStateChangeAbilityLibrary::GetStateAbilityValue(const FStateChangeAbility& Ability)
{
	return Ability.Value;
}

FString UStateChangeAbilityLibrary::StateAbilityToString(const FStateChangeAbility& Ability)
{
	TArray<FString> StateNames;
	
	// const UEnum* enumPtr = StaticEnum<ECharacterAnimState>();
	// if (enumPtr)
	// {
	//     int32 enumCount = enumPtr->NumEnums() - 1; // 排除 _MAX 或隐藏项
	//     for (int32 i = 0; i < enumCount; ++i)
	//     {
	//         ECharacterAnimState state = static_cast<ECharacterAnimState>(enumPtr->GetValueByIndex(i));
	//         if (Ability.HasState(state))
	//         {
	//             FString stateName = enumPtr->GetNameStringByIndex(i);
	//             StateNames.Add(FString::Printf(TEXT("Can%s"), *stateName));
	//         }
	//     }
	// }

	
	if (StateNames.Num() == 0)
	{
		return TEXT("None");
	}
	
	return FString::Join(StateNames, TEXT(", "));
}
