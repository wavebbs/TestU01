// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/Modifiers/UGC_CameraAnimationModifier.h"

#ifdef AURORADEVS_UGC_UGC_CameraAnimationModifier_generated_h
#error "UGC_CameraAnimationModifier.generated.h already included, missing '#pragma once' in UGC_CameraAnimationModifier.h"
#endif
#define AURORADEVS_UGC_UGC_CameraAnimationModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCameraAnimationSequence;

// ********** Begin ScriptStruct FUGCActiveAnimationInfo *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCActiveAnimationInfo_Statics; \
	AURORADEVS_UGC_API static class UScriptStruct* StaticStruct();


struct FUGCActiveAnimationInfo;
// ********** End ScriptStruct FUGCActiveAnimationInfo *********************************************

// ********** Begin Class UUGC_CameraAnimationModifier *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAnyCameraAnimationSequence); \
	DECLARE_FUNCTION(execIsCameraAnimationSequenceActive); \
	DECLARE_FUNCTION(execGetCurrentCameraAnimations); \
	DECLARE_FUNCTION(execStopCameraAnimationSequence);


AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAnimationModifier_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGC_CameraAnimationModifier(); \
	friend struct Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAnimationModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_CameraAnimationModifier, UCameraAnimationCameraModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_CameraAnimationModifier_NoRegister) \
	DECLARE_SERIALIZER(UUGC_CameraAnimationModifier)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGC_CameraAnimationModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_CameraAnimationModifier(UUGC_CameraAnimationModifier&&) = delete; \
	UUGC_CameraAnimationModifier(const UUGC_CameraAnimationModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC_CameraAnimationModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_CameraAnimationModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC_CameraAnimationModifier) \
	NO_API virtual ~UUGC_CameraAnimationModifier();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_47_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_50_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_CameraAnimationModifier;

// ********** End Class UUGC_CameraAnimationModifier ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h

// ********** Begin Enum ECameraAnimationResetType *************************************************
#define FOREACH_ENUM_ECAMERAANIMATIONRESETTYPE(op) \
	op(ECameraAnimationResetType::BackToStart) \
	op(ECameraAnimationResetType::ResetToZero) \
	op(ECameraAnimationResetType::ContinueFromEnd) 

enum class ECameraAnimationResetType : uint8;
template<> struct TIsUEnumClass<ECameraAnimationResetType> { enum { Value = true }; };
template<> AURORADEVS_UGC_API UEnum* StaticEnum<ECameraAnimationResetType>();
// ********** End Enum ECameraAnimationResetType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
