// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacterManager.h"

#include "GameFramework/Actor.h"

void UMyCharacterManager::RegisterCharacter(AActor* Character)
{
    if (Character)
    {
        GameCharacters.AddUnique(Character);
    }
}

void UMyCharacterManager::UnregisterCharacter(AActor* Character)
{
    GameCharacters.Remove(Character);
}

void UMyCharacterManager::Tick(float DeltaTime)
{
    if (!bTickEnabled) return;

    for (int32 i = GameCharacters.Num() - 1; i >= 0; --i)
    {
        if (AActor* Character = GameCharacters[i].Get())
        {
            Character->Tick(DeltaTime);
        }
        else
        {
            GameCharacters.RemoveAt(i);
        }
    }
}

TArray<AActor*> UMyCharacterManager::GetGameCharacters() const
{
    TArray<AActor*> Result;
    for (const TWeakObjectPtr<AActor>& WeakPtr : GameCharacters)
    {
        // UE_LOG(LogTemp, Display, TEXT("CharacterManager::GameCharacters Num: %d"), GameCharacters.Num());
        
        if (AActor* Actor = WeakPtr.Get())
        {
            Result.Add(Actor);
            // UE_LOG(LogTemp, Display, TEXT("CharacterManager::GameCharacter: %s"), *Actor->GetName());
        }
    }
    return Result;
}