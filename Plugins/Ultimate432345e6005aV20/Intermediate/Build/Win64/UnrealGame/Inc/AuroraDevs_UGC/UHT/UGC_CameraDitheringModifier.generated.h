// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/Modifiers/UGC_CameraDitheringModifier.h"

#ifdef AURORADEVS_UGC_UGC_CameraDitheringModifier_generated_h
#error "UGC_CameraDitheringModifier.generated.h already included, missing '#pragma once' in UGC_CameraDitheringModifier.h"
#endif
#define AURORADEVS_UGC_UGC_CameraDitheringModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDitheredActorState ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDitheredActorState_Statics; \
	AURORADEVS_UGC_API static class UScriptStruct* StaticStruct();


struct FDitheredActorState;
// ********** End ScriptStruct FDitheredActorState *************************************************

// ********** Begin Class UUGC_CameraDitheringModifier *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResetDitheredActors_Implementation(); \
	DECLARE_FUNCTION(execResetDitheredActors);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_CALLBACK_WRAPPERS
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraDitheringModifier_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGC_CameraDitheringModifier(); \
	friend struct Z_Construct_UClass_UUGC_CameraDitheringModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraDitheringModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_CameraDitheringModifier, UUGC_CameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_CameraDitheringModifier_NoRegister) \
	DECLARE_SERIALIZER(UUGC_CameraDitheringModifier)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_CameraDitheringModifier(UUGC_CameraDitheringModifier&&) = delete; \
	UUGC_CameraDitheringModifier(const UUGC_CameraDitheringModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC_CameraDitheringModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_CameraDitheringModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUGC_CameraDitheringModifier) \
	NO_API virtual ~UUGC_CameraDitheringModifier();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_59_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_CameraDitheringModifier;

// ********** End Class UUGC_CameraDitheringModifier ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraDitheringModifier_h

// ********** Begin Enum EDitherType ***************************************************************
#define FOREACH_ENUM_EDITHERTYPE(op) \
	op(EDitherType::None) \
	op(EDitherType::BlockingLOS) \
	op(EDitherType::OverlappingCamera) 

enum class EDitherType : uint8;
template<> struct TIsUEnumClass<EDitherType> { enum { Value = true }; };
template<> AURORADEVS_UGC_API UEnum* StaticEnum<EDitherType>();
// ********** End Enum EDitherType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
