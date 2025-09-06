// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/Modifiers/UGC_CameraCollisionModifier.h"
#include "Camera/Data/UGC_CameraData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUGC_CameraCollisionModifier() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraCollisionModifier();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraCollisionModifier_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraModifier();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraCollisionSettings();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_UGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGC_CameraCollisionModifier Function AddSingleRayOverrider **************
struct Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics
{
	struct UGC_CameraCollisionModifier_eventAddSingleRayOverrider_Parms
	{
		UCameraModifier* OverridingModifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Modifiers|Collision" },
		{ "Comment", "// Force collision modifier to use a single ray by another modifier. Do not use this if you're not familiar with it.\n" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraCollisionModifier.h" },
		{ "ToolTip", "Force collision modifier to use a single ray by another modifier. Do not use this if you're not familiar with it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridingModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverridingModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::NewProp_OverridingModifier = { "OverridingModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_CameraCollisionModifier_eventAddSingleRayOverrider_Parms, OverridingModifier), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridingModifier_MetaData), NewProp_OverridingModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::NewProp_OverridingModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC_CameraCollisionModifier, nullptr, "AddSingleRayOverrider", Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::UGC_CameraCollisionModifier_eventAddSingleRayOverrider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::UGC_CameraCollisionModifier_eventAddSingleRayOverrider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC_CameraCollisionModifier::execAddSingleRayOverrider)
{
	P_GET_OBJECT(UCameraModifier,Z_Param_OverridingModifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSingleRayOverrider(Z_Param_OverridingModifier);
	P_NATIVE_END;
}
// ********** End Class UUGC_CameraCollisionModifier Function AddSingleRayOverrider ****************

// ********** Begin Class UUGC_CameraCollisionModifier Function RemoveSingleRayOverrider ***********
struct Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics
{
	struct UGC_CameraCollisionModifier_eventRemoveSingleRayOverrider_Parms
	{
		UCameraModifier* OverridingModifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Modifiers|Collision" },
		{ "Comment", "// Remove single ray modifier override. Do not use this if you're not familiar with it.\n" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraCollisionModifier.h" },
		{ "ToolTip", "Remove single ray modifier override. Do not use this if you're not familiar with it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridingModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverridingModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::NewProp_OverridingModifier = { "OverridingModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_CameraCollisionModifier_eventRemoveSingleRayOverrider_Parms, OverridingModifier), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridingModifier_MetaData), NewProp_OverridingModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::NewProp_OverridingModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC_CameraCollisionModifier, nullptr, "RemoveSingleRayOverrider", Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::UGC_CameraCollisionModifier_eventRemoveSingleRayOverrider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::UGC_CameraCollisionModifier_eventRemoveSingleRayOverrider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC_CameraCollisionModifier::execRemoveSingleRayOverrider)
{
	P_GET_OBJECT(UCameraModifier,Z_Param_OverridingModifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSingleRayOverrider(Z_Param_OverridingModifier);
	P_NATIVE_END;
}
// ********** End Class UUGC_CameraCollisionModifier Function RemoveSingleRayOverrider *************

// ********** Begin Class UUGC_CameraCollisionModifier *********************************************
void UUGC_CameraCollisionModifier::StaticRegisterNativesUUGC_CameraCollisionModifier()
{
	UClass* Class = UUGC_CameraCollisionModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSingleRayOverrider", &UUGC_CameraCollisionModifier::execAddSingleRayOverrider },
		{ "RemoveSingleRayOverrider", &UUGC_CameraCollisionModifier::execRemoveSingleRayOverrider },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_CameraCollisionModifier;
UClass* UUGC_CameraCollisionModifier::GetPrivateStaticClass()
{
	using TClass = UUGC_CameraCollisionModifier;
	if (!Z_Registration_Info_UClass_UUGC_CameraCollisionModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_CameraCollisionModifier"),
			Z_Registration_Info_UClass_UUGC_CameraCollisionModifier.InnerSingleton,
			StaticRegisterNativesUUGC_CameraCollisionModifier,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUGC_CameraCollisionModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_CameraCollisionModifier_NoRegister()
{
	return UUGC_CameraCollisionModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UGC Camera Modifiers" },
		{ "Comment", "/**\n * Camera Modifier which does camera avoidance using predictive collision feelers.\n */" },
		{ "Deprecated", "5.500000" },
		{ "IncludePath", "Camera/Modifiers/UGC_CameraCollisionModifier.h" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraCollisionModifier.h" },
		{ "ToolTip", "Camera Modifier which does camera avoidance using predictive collision feelers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "UGC|Modifiers|Collision" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraCollisionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimLineToDesiredPosBlockedPct_MetaData[] = {
		{ "Comment", "// If you don't want the camera to start close to the character and smoothly pan out once your character is spawned, default-initialize this variable to 1.f.\n" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraCollisionModifier.h" },
		{ "ToolTip", "If you don't want the camera to start close to the character and smoothly pan out once your character is spawned, default-initialize this variable to 1.f." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugActorsHitDuringCameraPenetration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraCollisionModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimLineToDesiredPosBlockedPct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugActorsHitDuringCameraPenetration_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugActorsHitDuringCameraPenetration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGC_CameraCollisionModifier_AddSingleRayOverrider, "AddSingleRayOverrider" }, // 4133405149
		{ &Z_Construct_UFunction_UUGC_CameraCollisionModifier_RemoveSingleRayOverrider, "RemoveSingleRayOverrider" }, // 324212303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_CameraCollisionModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraCollisionModifier, CollisionSettings), Z_Construct_UScriptStruct_FCameraCollisionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSettings_MetaData), NewProp_CollisionSettings_MetaData) }; // 2557835934
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_AimLineToDesiredPosBlockedPct = { "AimLineToDesiredPosBlockedPct", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraCollisionModifier, AimLineToDesiredPosBlockedPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimLineToDesiredPosBlockedPct_MetaData), NewProp_AimLineToDesiredPosBlockedPct_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_DebugActorsHitDuringCameraPenetration_Inner = { "DebugActorsHitDuringCameraPenetration", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_DebugActorsHitDuringCameraPenetration = { "DebugActorsHitDuringCameraPenetration", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraCollisionModifier, DebugActorsHitDuringCameraPenetration), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugActorsHitDuringCameraPenetration_MetaData), NewProp_DebugActorsHitDuringCameraPenetration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_CollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_AimLineToDesiredPosBlockedPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_DebugActorsHitDuringCameraPenetration_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::NewProp_DebugActorsHitDuringCameraPenetration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUGC_CameraModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::ClassParams = {
	&UUGC_CameraCollisionModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_CameraCollisionModifier()
{
	if (!Z_Registration_Info_UClass_UUGC_CameraCollisionModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_CameraCollisionModifier.OuterSingleton, Z_Construct_UClass_UUGC_CameraCollisionModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_CameraCollisionModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_CameraCollisionModifier);
UUGC_CameraCollisionModifier::~UUGC_CameraCollisionModifier() {}
// ********** End Class UUGC_CameraCollisionModifier ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraCollisionModifier_h__Script_AuroraDevs_UGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGC_CameraCollisionModifier, UUGC_CameraCollisionModifier::StaticClass, TEXT("UUGC_CameraCollisionModifier"), &Z_Registration_Info_UClass_UUGC_CameraCollisionModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_CameraCollisionModifier), 1807287720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraCollisionModifier_h__Script_AuroraDevs_UGC_2860841823(TEXT("/Script/AuroraDevs_UGC"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraCollisionModifier_h__Script_AuroraDevs_UGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraCollisionModifier_h__Script_AuroraDevs_UGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
