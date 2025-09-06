// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pawn/UGC_PawnInterface.h"

#ifdef AURORADEVS_UGC_UGC_PawnInterface_generated_h
#error "UGC_PawnInterface.generated.h already included, missing '#pragma once' in UGC_PawnInterface.h"
#endif
#define AURORADEVS_UGC_UGC_PawnInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUGC_PawnInterface ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_CALLBACK_WRAPPERS
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_PawnInterface_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURORADEVS_UGC_API UUGC_PawnInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_PawnInterface(UUGC_PawnInterface&&) = delete; \
	UUGC_PawnInterface(const UUGC_PawnInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURORADEVS_UGC_API, UUGC_PawnInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_PawnInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC_PawnInterface) \
	virtual ~UUGC_PawnInterface() = default;


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUGC_PawnInterface(); \
	friend struct Z_Construct_UClass_UUGC_PawnInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_PawnInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_PawnInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_PawnInterface_NoRegister) \
	DECLARE_SERIALIZER(UUGC_PawnInterface)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUGC_PawnInterface() {} \
public: \
	typedef UUGC_PawnInterface UClassType; \
	typedef IUGC_PawnInterface ThisClass; \
	static FVector Execute_GetMovementInput(const UObject* O); \
	static FRotator Execute_GetRotationInput(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_10_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_PawnInterface;

// ********** End Interface UUGC_PawnInterface *****************************************************

// ********** Begin Interface UUGC_PawnMovementInterface *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_CALLBACK_WRAPPERS
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_PawnMovementInterface_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURORADEVS_UGC_API UUGC_PawnMovementInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGC_PawnMovementInterface(UUGC_PawnMovementInterface&&) = delete; \
	UUGC_PawnMovementInterface(const UUGC_PawnMovementInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURORADEVS_UGC_API, UUGC_PawnMovementInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC_PawnMovementInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC_PawnMovementInterface) \
	virtual ~UUGC_PawnMovementInterface() = default;


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUGC_PawnMovementInterface(); \
	friend struct Z_Construct_UClass_UUGC_PawnMovementInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_PawnMovementInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGC_PawnMovementInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AuroraDevs_UGC"), Z_Construct_UClass_UUGC_PawnMovementInterface_NoRegister) \
	DECLARE_SERIALIZER(UUGC_PawnMovementInterface)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUGC_PawnMovementInterface() {} \
public: \
	typedef UUGC_PawnMovementInterface UClassType; \
	typedef IUGC_PawnMovementInterface ThisClass; \
	static FVector Execute_GetOwnerVelocity(const UObject* O); \
	static bool Execute_IsOwnerFalling(const UObject* O); \
	static bool Execute_IsOwnerMovingOnGround(const UObject* O); \
	static bool Execute_IsOwnerStrafing(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_34_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGC_PawnMovementInterface;

// ********** End Interface UUGC_PawnMovementInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Pawn_UGC_PawnInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
