#include "CharacterData.generated.h"

UCLASS(BlueprintType)
class UCharacterData : public UObject
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Character")
    float MaxHP = 100.f;

    UPROPERTY(BlueprintReadWrite, Category="Character")
    float CurrentHP = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Character")
    float Defense = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Character")
    float Toughness = 0.f; 

    // 标签
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Character")
    // Tags;

    // 方法：是否处于霸体/无敌
    // UFUNCTION(BlueprintCallable)
    // bool IsInvincible() const { return ; }

    // UFUNCTION(BlueprintCallable)
    // bool IsSuperArmor() const { return ; }
};
