// Fill out your copyright notice in the Description page of Project Settings.

#include "StateChangeAbilityLibrary.h"

bool UStateChangeAbilityLibrary::HasState(const FStateChangeAbility& Ability, ECanChangeState State)
{
	return Ability.HasState(State);
}

FStateChangeAbility UStateChangeAbilityLibrary::AddState(const FStateChangeAbility& Ability, ECanChangeState State)
{
	FStateChangeAbility Result = Ability;
	Result.AddState(State);
	return Result;
}

FStateChangeAbility UStateChangeAbilityLibrary::RemoveState(const FStateChangeAbility& Ability, ECanChangeState State)
{
	FStateChangeAbility Result = Ability;
	Result.RemoveState(State);
	return Result;
}

FStateChangeAbility UStateChangeAbilityLibrary::ToggleState(const FStateChangeAbility& Ability, ECanChangeState State)
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
	return Ability.Value != ECanChangeState::None;
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
	
	if (Ability.HasState(ECanChangeState::CanIdle))		StateNames.Add(TEXT("CanIdle"));
	if (Ability.HasState(ECanChangeState::CanWalk))		StateNames.Add(TEXT("CanWalk"));
	if (Ability.HasState(ECanChangeState::CanRun))		StateNames.Add(TEXT("CanRun"));
	if (Ability.HasState(ECanChangeState::CanJump))		StateNames.Add(TEXT("CanJump"));
	if (Ability.HasState(ECanChangeState::CanAttack))	StateNames.Add(TEXT("CanAttack"));
	if (Ability.HasState(ECanChangeState::CanDodge))	StateNames.Add(TEXT("CanDodge"));
	if (Ability.HasState(ECanChangeState::CanDeath))	StateNames.Add(TEXT("CanDeath"));
	if (Ability.HasState(ECanChangeState::CanHit))		StateNames.Add(TEXT("CanHit"));
	
	if (StateNames.Num() == 0)
	{
		return TEXT("None");
	}
	
	return FString::Join(StateNames, TEXT(", "));
}
