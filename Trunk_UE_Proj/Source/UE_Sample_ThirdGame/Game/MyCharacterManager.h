// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCharacterManager.generated.h"


class AActor;

/**
 * @brief 角色管理器，负责管理所有角色对象，支持全局 Tick，不随关卡切换释放
 */
UCLASS(Blueprintable)
class UE_SAMPLE_THIRDGAME_API UMyCharacterManager : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    /** 获取全局单例 */
    // UFUNCTION(BlueprintCallable, Category = "CharacterManager")
    // static UCharacterManager* Get();

    /** 注册角色 */
    UFUNCTION(BlueprintCallable, Category = "CharacterManager")
    void RegisterCharacter(AActor* Character);

    /** 注销角色 */
    UFUNCTION(BlueprintCallable, Category = "CharacterManager")
    void UnregisterCharacter(AActor* Character);

    /** 全局 Tick，由 GameInstance 驱动 */
    void Tick(float DeltaTime);

    /** 是否需要 Tick */
    bool IsTickable() const { return bTickEnabled; }

    UFUNCTION(BlueprintPure, Category = "CharacterManager")
    TArray<AActor*> GetGameCharacters() const;

private:
    /** 角色列表 */
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> GameCharacters;

    /** 是否启用 Tick */
    bool bTickEnabled = true;
};
