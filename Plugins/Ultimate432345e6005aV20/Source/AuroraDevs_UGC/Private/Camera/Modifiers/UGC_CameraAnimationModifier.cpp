// Copyright(c) Aurora Devs 2022-2025. All Rights Reserved.

#include "Camera/Modifiers/UGC_CameraAnimationModifier.h"
#include "Camera/CameraAnimationHelper.h"
#include "Camera/Modifiers/UGC_CameraCollisionModifier.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraAnimationSequence.h"
#include "CameraAnimationSequencePlayer.h"
#include "Components/SkeletalMeshComponent.h"
#include "DisplayDebugHelpers.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "EntitySystem/MovieSceneEntitySystemLinker.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "MovieSceneFwd.h"
#include "Camera/UGC_PlayerCameraManager.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "ProfilingDebugging/CountersTrace.h"
#include "UObject/UObjectGlobals.h"
#include "Runtime/Launch/Resources/Version.h"

namespace UGCCameraAnimationHelper
{
    FCameraAnimationHandle const UGCInvalid(MAX_int16, 0);
    FPenetrationAvoidanceFeeler const CollisionProbe = FPenetrationAvoidanceFeeler(FRotator(+0.00f, +00.00f, 0.00f), 0.50f, 1.00f, 15.00f);
    float constexpr CollisionBlendInTime = 0.05f;
    float constexpr CollisionBlendOutTime = 0.5f;
    FName const CollisionIgnoreActorWithTag = FName("UGC_AnimIgnoreCollision");
}

FCameraAnimationHandle UUGC_CameraAnimationModifier::PlaySingleCameraAnimation(UCameraAnimationSequence* Sequence, FCameraAnimationParams Params, ECameraAnimationResetType ResetType, bool bInterruptOthers, bool bDoCollisionChecks)
{
    if (!ensure(Sequence))
    {
        return UGCCameraAnimationHelper::UGCInvalid;
    }

    TArray<UCameraAnimationSequence*> InterruptedSequences;
    if (IsAnyCameraAnimationSequence())
    {
        if (bInterruptOthers)
        {
            InterruptedSequences.Reserve(ActiveAnimations.Num());
            for (int i = 0; i < ActiveAnimations.Num(); ++i)
            {
                if (ActiveAnimations[i].IsValid() && ActiveAnimations[i].Player != nullptr && ActiveAnimations[i].Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Playing)
                {
                    InterruptedSequences.Add(ActiveAnimations[i].Sequence);
                }
            }
        }
    }

    // Always play one animation only
    int32 const NewIndex = FindInactiveCameraAnimation();
    check(NewIndex < MAX_uint16);

    const uint16 InstanceSerial = NextInstanceSerialNumber++;
    FCameraAnimationHandle InstanceHandle{ (uint16) NewIndex, InstanceSerial };

    FActiveCameraAnimationInfo& NewCameraAnimation = ActiveAnimations[NewIndex];

    // Update UGCAnimInfo size
    if (ActiveAnimations.Num() > UGCAnimInfo.Num())
    {
        int const InfoIndex = UGCAnimInfo.Emplace();
        ensure(InfoIndex == NewIndex);
    }

    UGCAnimInfo[NewIndex].ResetType = ResetType;
    UGCAnimInfo[NewIndex].bWasEasingOut = false;
    UGCAnimInfo[NewIndex].bDoCollisionChecks = bDoCollisionChecks;
    UGCAnimInfo[NewIndex].DistBlockedPct = 1.f;

    NewCameraAnimation.Sequence = Sequence;
    NewCameraAnimation.Params = Params;
    NewCameraAnimation.Handle = InstanceHandle;

    const FName PlayerName = MakeUniqueObjectName(this, UCameraAnimationSequencePlayer::StaticClass(), TEXT("CameraAnimationPlayer"));
    NewCameraAnimation.Player = NewObject<UCameraAnimationSequencePlayer>(this, PlayerName);
    const FName CameraStandInName = MakeUniqueObjectName(this, UCameraAnimationSequenceCameraStandIn::StaticClass(), TEXT("CameraStandIn"));
    NewCameraAnimation.CameraStandIn = NewObject<UCameraAnimationSequenceCameraStandIn>(this, CameraStandInName);

    // Start easing in immediately if there's any defined.
    NewCameraAnimation.bIsEasingIn = (Params.EaseInDuration > 0.f);
    NewCameraAnimation.EaseInCurrentTime = 0.f;
    NewCameraAnimation.bIsEasingOut = false;
    NewCameraAnimation.EaseOutCurrentTime = 0.f;

    // Initialize our stand-in object.
    NewCameraAnimation.CameraStandIn->Initialize(Sequence);

    // Make the player always use our stand-in object whenever a sequence wants to spawn or possess an object.
    NewCameraAnimation.Player->SetBoundObjectOverride(NewCameraAnimation.CameraStandIn);

    // Initialize it and start playing.
    NewCameraAnimation.Player->Initialize(Sequence);
    NewCameraAnimation.Player->Play(Params.bLoop, Params.bRandomStartTime);
    LastIndex = NewIndex;

    if (bInterruptOthers && InterruptedSequences.Num() > 0)
    {
        static bool constexpr bInterrupt = true;
        for (int i = 0; i < InterruptedSequences.Num(); ++i)
        {
            OnAnimationEnded.ExecuteIfBound(InterruptedSequences[i], bInterrupt);
        }
    }

    return InstanceHandle;
}

void UUGC_CameraAnimationModifier::StopCameraAnimationSequence(UCameraAnimationSequence* Sequence, bool bImmediate)
{
    if (!ActiveAnimations.IsEmpty())
    {
        for (int i = 0; i < ActiveAnimations.Num(); ++i)
        {
            if (ActiveAnimations[i].IsValid() && (Sequence == nullptr || ActiveAnimations[i].Sequence == Sequence))
            {
                if (UCameraAnimationSequence* InterruptedSequence = ActiveAnimations[i].Sequence)
                {
                    StopCameraAnimation(ActiveAnimations[i].Handle, bImmediate);
                    static bool constexpr bInterrupt = true;
                    OnAnimationEnded.ExecuteIfBound(InterruptedSequence, bInterrupt);
                }
        }
        }
    }
}

void UUGC_CameraAnimationModifier::GetCurrentCameraAnimations(TArray<UCameraAnimationSequence*>& OutAnimations) const
{
    if (!ActiveAnimations.IsEmpty())
    {
        for (int i = 0; i < ActiveAnimations.Num(); ++i)
        {
            if (ActiveAnimations[i].IsValid() && ActiveAnimations[i].Player && ActiveAnimations[i].Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Playing)
            {
                OutAnimations.Add(ActiveAnimations[i].Sequence);
            }
        }
    }
}

bool UUGC_CameraAnimationModifier::IsCameraAnimationSequenceActive(UCameraAnimationSequence* Sequence) const
{
    if (!ActiveAnimations.IsEmpty())
    {
        for (int i = 0; i < ActiveAnimations.Num(); ++i)
        {
            if (ActiveAnimations[i].IsValid() && ActiveAnimations[i].Sequence == Sequence && ActiveAnimations[i].Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Playing)
            {
                return true;
            }
        }
    }
    return false;
}

bool UUGC_CameraAnimationModifier::IsAnyCameraAnimationSequence() const
{
    if (!ActiveAnimations.IsEmpty())
    {
        for (int i = 0; i < ActiveAnimations.Num(); ++i)
        {
            if (ActiveAnimations[i].IsValid() && ActiveAnimations[i].Player && ActiveAnimations[i].Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Playing)
            {
                return true;
            }
        }
    }
    return false;
}

bool UUGC_CameraAnimationModifier::ModifyCamera(float DeltaTime, FMinimalViewInfo& InOutPOV)
{
    UCameraModifier::ModifyCamera(DeltaTime, InOutPOV);
    if (UGCCameraManager)
    {
        bool const bAnyActive = IsAnyCameraAnimationSequence();
        if (!CollisionModifier)
        {
            CollisionModifier = UGCCameraManager->FindCameraModifierOfType<UUGC_CameraCollisionModifier>();
        }

        if (CollisionModifier)
        {
            bAnyActive ? CollisionModifier->AddSingleRayOverrider(this) : CollisionModifier->RemoveSingleRayOverrider(this);
        }
    }
    UGCTickActiveAnimation(DeltaTime, InOutPOV);
    return false;
}

void UUGC_CameraAnimationModifier::CameraAnimation_SetEasingOutDelegate(FOnCameraAnimationEaseOutStarted& InOnAnimationEaseOutStarted, FCameraAnimationHandle AnimationHandle)
{
    if (AnimationHandle.IsValid() && IsCameraAnimationActive(AnimationHandle))
    {
        OnAnimationEaseOutStarted = InOnAnimationEaseOutStarted;
    }
}

void UUGC_CameraAnimationModifier::CameraAnimation_SetEndedDelegate(FOnCameraAnimationEnded& InOnAnimationEnded, FCameraAnimationHandle AnimationHandle)
{
    if (AnimationHandle.IsValid() && IsCameraAnimationActive(AnimationHandle))
    {
        OnAnimationEnded = InOnAnimationEnded;
    }
}

void UUGC_CameraAnimationModifier::UGCDeactivateCameraAnimation(FActiveCameraAnimationInfo& ActiveAnimation)
{
    for (auto& a : ActiveAnimations)
    {
        if (a.Handle == ActiveAnimation.Handle)
        {
            if (a.Player && !ensure(a.Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Stopped))
            {
                a.Player->Stop();
            }

            a = FActiveCameraAnimationInfo();
        }
    }
}

void UUGC_CameraAnimationModifier::UGCTickActiveAnimation(float DeltaTime, FMinimalViewInfo& InOutPOV)
{
    UGCCameraManager = Cast<AUGC_PlayerCameraManager>(CameraOwner);
    ensureMsgf(UGCCameraManager, TEXT("Please use UGC Camera Modifiers only with a player camera manager inheriting from UGC_PlayerCameraManager."));
    if (!UGCCameraManager)
    {
        return;
    }

    if (ActiveAnimations.Num() >= 1)
    {
        for (int i = 0; i < ActiveAnimations.Num(); ++i)
        {

            FActiveCameraAnimationInfo& ActiveAnimation = ActiveAnimations[i];
            if (ActiveAnimation.IsValid())
            {
#if ENABLE_DRAW_DEBUG
                UGCDebugAnimation(ActiveAnimation, DeltaTime);
#endif
                // float const Dilation = UGameplayStatics::GetGlobalTimeDilation(GetWorld());
                // float const UndilatedDeltaTime = FMath::IsNearlyZero(Dilation) ? 0.f : DeltaTime / Dilation;
                UGCTickAnimation(ActiveAnimation, DeltaTime, InOutPOV, i);
                UGCTickAnimCollision(ActiveAnimation, DeltaTime, InOutPOV, i);

                if (ActiveAnimation.Player->GetPlaybackStatus() == EMovieScenePlayerStatus::Stopped)
                {
                    // Here animation has just finished (ease out has completed as well)
                    UGCDeactivateCameraAnimation(ActiveAnimation);
                    static bool constexpr bInterrupt = false;
                    OnAnimationEnded.ExecuteIfBound(ActiveAnimation.Sequence, bInterrupt);
                }
            }
        }
    }
}

void UUGC_CameraAnimationModifier::UGCTickAnimation(FActiveCameraAnimationInfo& CameraAnimation, float DeltaTime, FMinimalViewInfo& InOutPOV, int Index)
{
    check(CameraAnimation.Player);
    check(CameraAnimation.CameraStandIn);

    const FCameraAnimationParams Params = CameraAnimation.Params;
    UCameraAnimationSequencePlayer* Player = CameraAnimation.Player;
    UCameraAnimationSequenceCameraStandIn* CameraStandIn = CameraAnimation.CameraStandIn;

    const FFrameRate InputRate = Player->GetInputRate();
    const FFrameTime CurrentPosition = Player->GetCurrentPosition();
    const float CurrentTime = InputRate.AsSeconds(CurrentPosition);
    const float DurationTime = InputRate.AsSeconds(Player->GetDuration()) * Params.PlayRate;

    const float ScaledDeltaTime = DeltaTime * Params.PlayRate;

    const float NewTime = CurrentTime + ScaledDeltaTime;
    const FFrameTime NewPosition = CurrentPosition + DeltaTime * Params.PlayRate * InputRate;

    // Advance any easing times.
    if (CameraAnimation.bIsEasingIn)
    {
        CameraAnimation.EaseInCurrentTime += DeltaTime;
    }
    if (CameraAnimation.bIsEasingOut)
    {
        CameraAnimation.EaseOutCurrentTime += DeltaTime;
    }

    ECameraAnimationResetType ResetType = UGCAnimInfo[Index].ResetType;
    bool const bWasEasingOut = UGCAnimInfo[Index].bWasEasingOut;

    // Start easing out if we're nearing the end.
    // CameraAnimation may already be easing out if StopCameraAnimation has been called.
    if (!Player->GetIsLooping() && !CameraAnimation.bIsEasingOut)
    {
        const float BlendOutStartTime = DurationTime - Params.EaseOutDuration;
        if (NewTime > BlendOutStartTime)
        {
            CameraAnimation.bIsEasingOut = true;
            CameraAnimation.EaseOutCurrentTime = NewTime - BlendOutStartTime;

            if (!bWasEasingOut)
            {
                // Here animation has just started easing out but hasn't finished yet
                OnAnimationEaseOutStarted.ExecuteIfBound(CameraAnimation.Sequence);
            }
        }
    }

    // Check if we're done easing in or out.
    bool bIsDoneEasingOut = false;
    if (CameraAnimation.bIsEasingIn)
    {
        if (CameraAnimation.EaseInCurrentTime > Params.EaseInDuration || Params.EaseInDuration == 0.f)
        {
            CameraAnimation.bIsEasingIn = false;
        }
    }
    if (CameraAnimation.bIsEasingOut)
    {
        if (CameraAnimation.EaseOutCurrentTime > Params.EaseOutDuration)
        {
            bIsDoneEasingOut = true;
        }
    }

    // Figure out the final easing weight.
    const float EasingInT = FMath::Clamp((CameraAnimation.EaseInCurrentTime / Params.EaseInDuration), 0.f, 1.f);
    const float EasingInWeight = CameraAnimation.bIsEasingIn ?
        EvaluateEasing(Params.EaseInType, EasingInT) : 1.f;

    const float EasingOutT = FMath::Clamp((1.f - CameraAnimation.EaseOutCurrentTime / Params.EaseOutDuration), 0.f, 1.f);
    const float EasingOutWeight = CameraAnimation.bIsEasingOut ?
        EvaluateEasing(Params.EaseOutType, EasingOutT) : 1.f;

    const float TotalEasingWeight = FMath::Min(EasingInWeight, EasingOutWeight);

    // We might be done playing. Normally the player will stop on its own, but there are other situation in which
    // the responsibility falls to this code:
    // - If the animation is looping and waiting for an explicit Stop() call on us.
    // - If there was a Stop() call with bImmediate=false to let an animation blend out.
    if (bIsDoneEasingOut || TotalEasingWeight <= 0.f)
    {
        Player->Stop();
        return;
    }

    UMovieSceneEntitySystemLinker* Linker = Player->GetEvaluationTemplate().GetEntitySystemLinker();
    CameraStandIn->Reset(InOutPOV, Linker);

    // Get the "unanimated" properties that need to be treated additively.
    const float OriginalFieldOfView = CameraStandIn->FieldOfView;

    // Update the sequence.
    Player->Update(NewPosition);

    // Recalculate properties that might be invalidated by other properties having been animated.
    CameraStandIn->RecalcDerivedData();

    // Grab the final animated (animated) values, figure out the delta, apply scale, and feed that into the result.
    // Transform is always treated as a local, additive value. The data better be good.
    const float Scale = Params.Scale * TotalEasingWeight;
    const FTransform AnimatedTransform = CameraStandIn->GetTransform();
    FVector AnimatedLocation = AnimatedTransform.GetLocation() * Scale;
    FRotator AnimatedRotation = AnimatedTransform.GetRotation().Rotator() * Scale;
    const FCameraAnimationHelperOffset CameraOffset{ AnimatedLocation, AnimatedRotation };

    FVector OwnerLocation = GetViewTarget()->GetActorLocation();

    // If using a character, camera should start from the pivot location of the mesh.
    {
        ACharacter* OwnerCharacter = GetViewTargetAs<ACharacter>();
        if (OwnerCharacter && OwnerCharacter->GetMesh())
        {
            OwnerLocation = OwnerCharacter->GetMesh()->GetComponentLocation();
        }
    }

    // TO DO #GravityCompatibility
    FRotator const OwnerRot = FRotator(0.f, GetViewTarget()->GetActorRotation().Yaw, 0.f);
    const FMatrix OwnerRotationMatrix = FRotationMatrix(OwnerRot);

    FMinimalViewInfo InPOV = InOutPOV;

    // Blend from current camera location to actor location
    InPOV.Location = FMath::Lerp(InOutPOV.Location, OwnerLocation, Scale);
    InPOV.Rotation = FMath::Lerp(InOutPOV.Rotation, OwnerRot, Scale);

    FCameraAnimationHelper::ApplyOffset(OwnerRotationMatrix, InPOV, CameraOffset, AnimatedLocation, AnimatedRotation);

    InOutPOV.Location = AnimatedLocation;
    InOutPOV.Rotation = AnimatedRotation;

    // Blend back depending on reset type
    if (ResetType != ECameraAnimationResetType::BackToStart
        && CameraOwner && CameraOwner->GetOwningPlayerController() && CameraAnimation.bIsEasingOut && !bWasEasingOut)
    {
        FRotator TargetRot = OwnerRot;
        switch (ResetType)
        {
            case ECameraAnimationResetType::ContinueFromEnd:
            {
                bool const bIsStrafing = UGCCameraManager->IsOwnerStrafing();
                if (!bIsStrafing)
                {
                    // TO DO #GravityCompatibility
                    TargetRot = FRotator(InOutPOV.Rotation.Pitch, InOutPOV.Rotation.Yaw, 0.f);
                }
                break;
            }
            default:
                break;
        }
        CameraOwner->GetOwningPlayerController()->SetControlRotation(TargetRot);
    }

    // FieldOfView follows the current camera's value every frame, so we can compute how much the animation is
    // changing it.
    const float AnimatedFieldOfView = CameraStandIn->FieldOfView;
    const float DeltaFieldOfView = AnimatedFieldOfView - OriginalFieldOfView;
    InOutPOV.FOV = OriginalFieldOfView + DeltaFieldOfView * Scale;

    // Add the post-process settings.
    if (CameraOwner != nullptr && CameraStandIn->PostProcessBlendWeight > 0.f)
    {
        CameraOwner->AddCachedPPBlend(CameraStandIn->PostProcessSettings, CameraStandIn->PostProcessBlendWeight);
    }

    UGCAnimInfo[Index].bWasEasingOut = CameraAnimation.bIsEasingOut;
}

FVector UUGC_CameraAnimationModifier::GetTraceSafeLocation(FMinimalViewInfo const& InPOV)
{
    AActor* TargetActor = GetViewTarget();
    FVector SafeLocation = TargetActor ? TargetActor->GetActorLocation() : FVector::Zero();
    if (TargetActor && UGCCameraManager)
    {
        if (USpringArmComponent* SpringArm = UGCCameraManager->GetOwnerSpringArmComponent())
        {
            SafeLocation = SpringArm->GetComponentLocation() + SpringArm->TargetOffset;
        }
        else if (UPrimitiveComponent const* PPActorRootComponent = Cast<UPrimitiveComponent>(TargetActor->GetRootComponent()))
        {
            // Attempt at picking SafeLocation automatically, so we reduce camera translation when aiming.
            // Our camera is our reticle, so we want to preserve our aim and keep that as steady and smooth as possible.
            // Pick closest point on capsule to our aim line.
            FVector ClosestPointOnLineToCapsuleCenter;
            FMath::PointDistToLine(SafeLocation, InPOV.Rotation.Vector(), InPOV.Location, ClosestPointOnLineToCapsuleCenter);

            // Adjust Safe distance height to be same as aim line, but within capsule.
            float const PushInDistance = UGCCameraAnimationHelper::CollisionProbe.ProbeRadius;
            float const MaxHalfHeight = TargetActor->GetSimpleCollisionHalfHeight() - PushInDistance;
            SafeLocation.Z = FMath::Clamp(ClosestPointOnLineToCapsuleCenter.Z, SafeLocation.Z - MaxHalfHeight, SafeLocation.Z + MaxHalfHeight);

            float DistanceSqr = 0.f;
            PPActorRootComponent->GetSquaredDistanceToCollision(ClosestPointOnLineToCapsuleCenter, DistanceSqr, SafeLocation);
            // Push back inside capsule to avoid initial penetration when doing line checks.
            SafeLocation += (SafeLocation - ClosestPointOnLineToCapsuleCenter).GetSafeNormal() * PushInDistance;
        }
    }
    return SafeLocation;
}

void UUGC_CameraAnimationModifier::UGCTickAnimCollision(FActiveCameraAnimationInfo& CameraAnimation, float DeltaTime, FMinimalViewInfo& InOutPOV, int Index)
{
    if (!UGCAnimInfo[Index].bDoCollisionChecks)
    {
        return;
    }

    check(CameraAnimation.Player);
    check(CameraAnimation.CameraStandIn);
    const FCameraAnimationParams& Params = CameraAnimation.Params;
    const float BlendInTime = FMath::Max(UGCCameraAnimationHelper::CollisionBlendInTime, UE_KINDA_SMALL_NUMBER);
    float BlendOutTime = FMath::Max(UGCCameraAnimationHelper::CollisionBlendOutTime, UE_KINDA_SMALL_NUMBER);
    if (CameraAnimation.bIsEasingOut)
    {
        BlendOutTime = FMath::Min(Params.EaseOutDuration - CameraAnimation.EaseOutCurrentTime, UGCCameraAnimationHelper::CollisionBlendOutTime);
        BlendOutTime = FMath::Max(BlendOutTime, UE_KINDA_SMALL_NUMBER);
    }

    FVector SafeLoc = GetTraceSafeLocation(InOutPOV);

    const FVector CameraLoc = InOutPOV.Location;
    const FVector BaseRay = CameraLoc - SafeLoc;

    if (BaseRay.IsNearlyZero())
    {
        return;
    }

    const FRotationMatrix BaseMatrix(BaseRay.Rotation());
    const FVector Right = BaseMatrix.GetUnitAxis(EAxis::Y);
    const FVector Up = BaseMatrix.GetUnitAxis(EAxis::Z);

    float HardBlockedPct = UGCAnimInfo[Index].DistBlockedPct;
    float SoftBlockedPct = UGCAnimInfo[Index].DistBlockedPct;
    float BlockedThisFrame = 1.f;

    UWorld* World = GetWorld();
    int32 NbrHits = 0;
    const AActor* OwningActor = GetViewTarget();

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(CameraPen), false, OwningActor);
    QueryParams.AddIgnoredActor(OwningActor);

    {
        const FPenetrationAvoidanceFeeler& Feeler = UGCCameraAnimationHelper::CollisionProbe;
        const FRotator OffsetRot = Feeler.AdjustmentRot;

        FVector RayTarget = BaseRay.RotateAngleAxis(OffsetRot.Yaw, Up).RotateAngleAxis(OffsetRot.Pitch, Right) + SafeLoc;

        FHitResult Hit;
        FCollisionShape Shape = FCollisionShape::MakeSphere(Feeler.ProbeRadius);
        bool bHit = World->SweepSingleByChannel(Hit, SafeLoc, RayTarget, FQuat::Identity, ECollisionChannel::ECC_Camera, Shape, QueryParams);

        if (bHit && Hit.GetActor())
        {
            if (Hit.GetActor()->ActorHasTag(UGCCameraAnimationHelper::CollisionIgnoreActorWithTag))
            {
                QueryParams.AddIgnoredActor(Hit.GetActor());
            }
            else
            {
                ++NbrHits;
                const float Weight = Hit.GetActor()->IsA<APawn>() ? Feeler.PawnWeight : Feeler.WorldWeight;
                float NewBlockPct = Hit.Time + (1.f - Hit.Time) * (1.f - Weight);
                NewBlockPct = (Hit.Location - SafeLoc).Size() / (RayTarget - SafeLoc).Size();

                BlockedThisFrame = FMath::Min(NewBlockPct, BlockedThisFrame);
                HardBlockedPct = BlockedThisFrame;
            }
        }
    }
#if ENABLE_DRAW_DEBUG
    if (NbrHits > 0)
    {
        if (bDebug && GEngine != nullptr)
        {

#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 6
            FString const& DebugText = FString::Printf(TEXT("UGC_CameraAnimationModifier: %d feeler%hs colliding."), NbrHits, NbrHits > 1 ? "s" : "");
#else
            FString const& DebugText = FString::Printf(TEXT("UGC_CameraAnimationModifier: %d feeler%s colliding."), NbrHits, NbrHits > 1 ? "s" : "");
#endif
            GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor(150, 150, 200), DebugText);
        }
    }
#endif

    if (UGCAnimInfo[Index].DistBlockedPct < BlockedThisFrame)
    {
        UGCAnimInfo[Index].DistBlockedPct += DeltaTime / BlendOutTime * (BlockedThisFrame - UGCAnimInfo[Index].DistBlockedPct);
    }
    else if (UGCAnimInfo[Index].DistBlockedPct > HardBlockedPct)
    {
        UGCAnimInfo[Index].DistBlockedPct = HardBlockedPct;
    }
    else if (UGCAnimInfo[Index].DistBlockedPct > SoftBlockedPct)
    {
        UGCAnimInfo[Index].DistBlockedPct -= DeltaTime / BlendInTime * (UGCAnimInfo[Index].DistBlockedPct - SoftBlockedPct);
    }

    UGCAnimInfo[Index].DistBlockedPct = FMath::Clamp(UGCAnimInfo[Index].DistBlockedPct, 0.f, 1.f);
    InOutPOV.Location = SafeLoc + (CameraLoc - SafeLoc) * UGCAnimInfo[Index].DistBlockedPct;
}

#if ENABLE_DRAW_DEBUG
void UUGC_CameraAnimationModifier::UGCDebugAnimation(FActiveCameraAnimationInfo& ActiveAnimation, float DeltaTime)
{
    if (bDebug && ActiveAnimation.IsValid() && GEngine)
    {
        const FFrameRate InputRate = ActiveAnimation.Player->GetInputRate();
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 3
        const FFrameTime DurationFrames = ActiveAnimation.Player->GetDuration();
#elif ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION < 3
        const FFrameNumber DurationFrames = ActiveAnimation.Player->GetDuration();
#endif
        const FFrameTime CurrentPosition = ActiveAnimation.Player->GetCurrentPosition();

        const float CurrentTime = InputRate.AsSeconds(CurrentPosition);
        const float DurationSeconds = InputRate.AsSeconds(DurationFrames);

        const FString LoopString = ActiveAnimation.Params.bLoop ? TEXT(" - Looping") : TEXT("");
        const FString EaseInString = ActiveAnimation.bIsEasingIn ? FString::Printf(TEXT(" - Easing In: %f / %f"), ActiveAnimation.EaseInCurrentTime, ActiveAnimation.Params.EaseInDuration) : TEXT("");
        const FString EaseOutString = ActiveAnimation.bIsEasingOut ? FString::Printf(TEXT(" - Easing Out: %f / %f"), ActiveAnimation.EaseOutCurrentTime, ActiveAnimation.Params.EaseOutDuration) : TEXT("");
        const FString DebugText = FString::Printf(TEXT("UGC_CameraAnimationModifier: %s - PlayRate: %f%s - Duration: %f - Elapsed: %f%s%s"), *GetNameSafe(ActiveAnimation.Sequence), ActiveAnimation.Params.PlayRate, *LoopString, DurationSeconds, CurrentTime, *EaseInString, *EaseOutString);

        GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor(49, 61, 255), DebugText);
    }
}
#endif