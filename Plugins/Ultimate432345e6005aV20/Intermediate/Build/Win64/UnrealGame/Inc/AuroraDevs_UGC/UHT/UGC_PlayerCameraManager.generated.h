// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/UGC_PlayerCameraManager.h"

#ifdef AURORADEVS_UGC_UGC_PlayerCameraManager_generated_h
#error "UGC_PlayerCameraManager.generated.h already included, missing '#pragma once' in UGC_PlayerCameraManager.h"
#endif
#define AURORADEVS_UGC_UGC_PlayerCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class UCameraAnimationSequence;
class UCameraModifier;
class USpringArmComponent;
class UUGC_CameraDataAssetBase;
struct FLinearColor;
struct FUGCCameraAnimationParams;

// ********** Begin Class AUGC_PlayerCameraManager *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetMovementControlInput_Implementation() const; \
	virtual FRotator GetRotationInput_Implementation() const; \
	virtual void UpdateInternalVariables_Implementation(float DeltaTime); \
	virtual void OnCameraDataStackChanged_Implementation(UUGC_CameraDataAssetBase* CameraDA, bool bBlendCameraProperties); \
	DECLARE_FUNCTION(execOnLevelSequenceEnded); \
	DECLARE_FUNCTION(execOnLevelSequenceStarted); \
	DECLARE_FUNCTION(execGetMovementControlInput); \
	DECLARE_FUNCTION(execGetRotationInput); \
	DECLARE_FUNCTION(execUpdateInternalVariables); \
	DECLARE_FUNCTION(execFindCameraModifierOfClass); \
	DECLARE_FUNCTION(execSetSpringArmComponent); \
	DECLARE_FUNCTION(execComputeOwnerLookAndMovementDot); \
	DECLARE_FUNCTION(execComputeOwnerSlopeAngle); \
	DECLARE_FUNCTION(execComputeOwnerFloorNormal); \
	DECLARE_FUNCTION(execIsOwnerMovingOnGround); \
	DECLARE_FUNCTION(execIsOwnerStrafing); \
	DECLARE_FUNCTION(execIsOwnerFalling); \
	DECLARE_FUNCTION(execComputeOwnerFloorDist); \
	DECLARE_FUNCTION(execGetOwnerVelocity); \
	DECLARE_FUNCTION(execIsPlayingAnyCameraAnimation); \
	DECLARE_FUNCTION(execDrawDebugSpringArm); \
	DECLARE_FUNCTION(execDrawGameDebugCamera); \
	DECLARE_FUNCTION(execDrawRealDebugCamera); \
	DECLARE_FUNCTION(execOnCameraDataStackChanged); \
	DECLARE_FUNCTION(execPopCameraData); \
	DECLARE_FUNCTION(execPopCameraDataHead); \
	DECLARE_FUNCTION(execPushCameraData); \
	DECLARE_FUNCTION(execGetCurrentCameraDataAsset); \
	DECLARE_FUNCTION(execGetOwnerSpringArmComponent); \
	DECLARE_FUNCTION(execToggleAllModifiersDebug); \
	DECLARE_FUNCTION(execToggleAllUGCModifiersDebug); \
	DECLARE_FUNCTION(execToggleCameraModifiers); \
	DECLARE_FUNCTION(execToggleUGCCameraModifiers); \
	DECLARE_FUNCTION(execPlayCameraAnimation); \
	DECLARE_FUNCTION(execIsPlayingAnyLevelSequence); \
	DECLARE_FUNCTION(execRefreshLevelSequences); \
	DECLARE_FUNCTION(execPostPossess); \
	DECLARE_FUNCTION(execPrePossess); \
	DECLARE_FUNCTION(execGetRealCameraView);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_CALLBACK_WRAPPERS
AURORADEVS_UGC_API UClass* Z_Construct_UClass_AUGC_PlayerCameraManager_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUGC_PlayerCameraManager(); \
	friend struct Z_Construct_UClass_AUGC_PlayerCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_AUGC_PlayerCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AUGC_PlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_AUGC_PlayerCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AUGC_PlayerCameraManager)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUGC_PlayerCameraManager(AUGC_PlayerCameraManager&&) = delete; \
	AUGC_PlayerCameraManager(const AUGC_PlayerCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUGC_PlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUGC_PlayerCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUGC_PlayerCameraManager) \
	NO_API virtual ~AUGC_PlayerCameraManager();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUGC_PlayerCameraManager;

// ********** End Class AUGC_PlayerCameraManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
