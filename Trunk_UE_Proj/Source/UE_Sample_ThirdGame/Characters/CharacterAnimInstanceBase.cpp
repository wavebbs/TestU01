#include "CharacterAnimInstanceBase.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"

void UCharacterAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* OwnerPawn = TryGetPawnOwner();
	if (!OwnerPawn)
	{
		Speed = 0.f;
		bIsMoving = false;
		MoveDirection = FVector::ZeroVector;
		FacingRotation = FRotator::ZeroRotator;
		return;
	}

	Speed = OwnerPawn->GetVelocity().Size();
	bIsMoving = Speed > 3.f; // 可根据实际情况调整阈值
	MoveDirection = OwnerPawn->GetVelocity().GetSafeNormal();
	FacingRotation = OwnerPawn->GetActorRotation();
}

