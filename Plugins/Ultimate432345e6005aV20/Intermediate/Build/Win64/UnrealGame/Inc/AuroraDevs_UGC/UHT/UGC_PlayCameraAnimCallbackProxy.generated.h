// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/Modifiers/UGC_PlayCameraAnimCallbackProxy.h"

#ifdef AURORADEVS_UGC_UGC_PlayCameraAnimCallbackProxy_generated_h
#error "UGC_PlayCameraAnimCallbackProxy.generated.h already included, missing '#pragma once' in UGC_PlayCameraAnimCallbackProxy.h"
#endif
#define AURORADEVS_UGC_UGC_PlayCameraAnimCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerCameraManager;
class UCameraAnimationSequence;
class UUGC_CameraAnimationModifier;
class UUGC_PlayCameraAnimCallbackProxy;
struct FCameraAnimationHandle;
struct FUGCCameraAnimationParams;

// ********** Begin Delegate FOnCameraAnimationPlayDelegate ****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_13_DELEGATE \
AURORADEVS_UGC_API void FOnCameraAnimationPlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCameraAnimationPlayDelegate);


// ********** End Delegate FOnCameraAnimationPlayDelegate ******************************************

// ********** Begin ScriptStruct FUGCCameraAnimationParams *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCCameraAnimationParams_Statics; \
	AURORADEVS_UGC_API static class UScriptStruct* StaticStruct();


struct FUGCCameraAnimationParams;
// ********** End ScriptStruct FUGCCameraAnimationParams *******************************************

// ********** Begin Class UUGC_PlayCameraAnimCallbackProxy *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_49_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnCameraAnimationEnded); \
	DECLARE_FUNCTION(execOnCameraAnimationEasingOut); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayCameraAnimForModifier); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayCameraAnim);


AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_PlayCameraAnimCallbackProxy_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUUGC_PlayCameraAnimCallbackProxy(); \
	friend struct Z_Construct_UClass_UUGC_PlayCameraAnimCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_PlayCameraAnimCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_PlayCameraAnimCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_PlayCameraAnimCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UUGC_PlayCameraAnimCallbackProxy)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGC_PlayCameraAnimCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC_PlayCameraAnimCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC_PlayCameraAnimCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_PlayCameraAnimCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_PlayCameraAnimCallbackProxy(UUGC_PlayCameraAnimCallbackProxy&&) = delete; \
	UUGC_PlayCameraAnimCallbackProxy(const UUGC_PlayCameraAnimCallbackProxy&) = delete; \
	NO_API virtual ~UUGC_PlayCameraAnimCallbackProxy();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_46_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_49_RPC_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_49_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_PlayCameraAnimCallbackProxy;

// ********** End Class UUGC_PlayCameraAnimCallbackProxy *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_PlayCameraAnimCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
