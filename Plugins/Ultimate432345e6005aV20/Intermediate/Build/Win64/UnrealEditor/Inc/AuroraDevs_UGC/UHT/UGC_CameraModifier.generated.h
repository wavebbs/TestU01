// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/Modifiers/UGC_CameraModifier.h"

#ifdef AURORADEVS_UGC_UGC_CameraModifier_generated_h
#error "UGC_CameraModifier.generated.h already included, missing '#pragma once' in UGC_CameraModifier.h"
#endif
#define AURORADEVS_UGC_UGC_CameraModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UUGC_CameraAddOnModifierSettings;
struct FMinimalViewInfo;

// ********** Begin Class UUGC_CameraModifier ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ProcessTurnRate_Implementation(float DeltaTime, FRotator InLocalControlRotation, float InPitchTurnRate, float InYawTurnRate, float& OutPitchTurnRate, float& OutYawTurnRate); \
	virtual void OnSetViewTarget_Implementation(bool bImmediate, bool bNewTargetIsOwner); \
	virtual void OnAnyLevelSequenceEnded_Implementation(); \
	virtual void OnAnyLevelSequenceStarted_Implementation(); \
	virtual void PostUpdate_Implementation(float DeltaTime, FVector ViewLocation, FRotator ViewRotation); \
	virtual void ProcessBoomOffsets_Implementation(float DeltaTime, FVector InSocketOffset, FVector InTargetOffset, FVector ViewLocation, FRotator ViewRotation, FVector& OutSocketOffset, FVector& OutTargetOffset); \
	virtual void ProcessBoomLengthAndFOV_Implementation(float DeltaTime, float InFOV, float InArmLength, FVector ViewLocation, FRotator ViewRotation, float& OutFOV, float& OutArmLength); \
	virtual bool ProcessControlRotation_Implementation(AActor* ViewTarget, float DeltaTime, FVector InViewLocation, FRotator InViewRotation, FRotator InLocalControlRotation, FRotator InDeltaRot, FRotator& OutDeltaRot); \
	virtual void OnModifierDisabled_Implementation(FMinimalViewInfo const& LastPOV, bool bWasImmediate); \
	virtual void OnModifierEnabled_Implementation(FMinimalViewInfo const& LastPOV); \
	DECLARE_FUNCTION(execComputeOwnerLookAndMovementDot); \
	DECLARE_FUNCTION(execComputeOwnerSlopeAngle); \
	DECLARE_FUNCTION(execComputeOwnerFloorNormal); \
	DECLARE_FUNCTION(execComputeOwnerFloorDistance); \
	DECLARE_FUNCTION(execIsOwnerMovingOnGround); \
	DECLARE_FUNCTION(execIsOwnerStrafing); \
	DECLARE_FUNCTION(execIsOwnerFalling); \
	DECLARE_FUNCTION(execGetOwnerVelocity); \
	DECLARE_FUNCTION(execProcessTurnRate); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execToggleDebug); \
	DECLARE_FUNCTION(execIsDebugEnabled); \
	DECLARE_FUNCTION(execOnSetViewTarget); \
	DECLARE_FUNCTION(execOnAnyLevelSequenceEnded); \
	DECLARE_FUNCTION(execOnAnyLevelSequenceStarted); \
	DECLARE_FUNCTION(execPostUpdate); \
	DECLARE_FUNCTION(execProcessBoomOffsets); \
	DECLARE_FUNCTION(execProcessBoomLengthAndFOV); \
	DECLARE_FUNCTION(execProcessControlRotation); \
	DECLARE_FUNCTION(execOnModifierDisabled); \
	DECLARE_FUNCTION(execOnModifierEnabled);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_CALLBACK_WRAPPERS
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraModifier_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGC_CameraModifier(); \
	friend struct Z_Construct_UClass_UUGC_CameraModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_CameraModifier, UCameraModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_CameraModifier_NoRegister) \
	DECLARE_SERIALIZER(UUGC_CameraModifier)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGC_CameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_CameraModifier(UUGC_CameraModifier&&) = delete; \
	UUGC_CameraModifier(const UUGC_CameraModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC_CameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_CameraModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC_CameraModifier) \
	NO_API virtual ~UUGC_CameraModifier();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_CameraModifier;

// ********** End Class UUGC_CameraModifier ********************************************************

// ********** Begin Class UUGC_CameraAddOnModifier *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetSettings_Implementation(UUGC_CameraAddOnModifierSettings* InSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_CALLBACK_WRAPPERS
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAddOnModifier_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGC_CameraAddOnModifier(); \
	friend struct Z_Construct_UClass_UUGC_CameraAddOnModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAddOnModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_CameraAddOnModifier, UUGC_CameraModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_CameraAddOnModifier_NoRegister) \
	DECLARE_SERIALIZER(UUGC_CameraAddOnModifier)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGC_CameraAddOnModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_CameraAddOnModifier(UUGC_CameraAddOnModifier&&) = delete; \
	UUGC_CameraAddOnModifier(const UUGC_CameraAddOnModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC_CameraAddOnModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_CameraAddOnModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC_CameraAddOnModifier) \
	NO_API virtual ~UUGC_CameraAddOnModifier();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_218_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h_221_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_CameraAddOnModifier;

// ********** End Class UUGC_CameraAddOnModifier ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
