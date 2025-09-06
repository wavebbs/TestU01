// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/Methods/UGC_IFocusTargetMethod.h"

#ifdef AURORADEVS_UGC_UGC_IFocusTargetMethod_generated_h
#error "UGC_IFocusTargetMethod.generated.h already included, missing '#pragma once' in UGC_IFocusTargetMethod.h"
#endif
#define AURORADEVS_UGC_UGC_IFocusTargetMethod_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class UUGC_IFocusTargetMethod **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AActor* GetTargetLocation_Implementation(AActor* InOwner, FVector OwnerLocation, FVector ViewPointLocation, FRotator ViewPointRotation, FVector& OutTargetLocation); \
	DECLARE_FUNCTION(execGetTargetLocation);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_CALLBACK_WRAPPERS
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_IFocusTargetMethod_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGC_IFocusTargetMethod(); \
	friend struct Z_Construct_UClass_UUGC_IFocusTargetMethod_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_IFocusTargetMethod_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_IFocusTargetMethod, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_IFocusTargetMethod_NoRegister) \
	DECLARE_SERIALIZER(UUGC_IFocusTargetMethod)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGC_IFocusTargetMethod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_IFocusTargetMethod(UUGC_IFocusTargetMethod&&) = delete; \
	UUGC_IFocusTargetMethod(const UUGC_IFocusTargetMethod&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC_IFocusTargetMethod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_IFocusTargetMethod); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC_IFocusTargetMethod) \
	NO_API virtual ~UUGC_IFocusTargetMethod();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_IFocusTargetMethod;

// ********** End Class UUGC_IFocusTargetMethod ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Methods_UGC_IFocusTargetMethod_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
