// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/UGC_InputAccelerationModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUGC_InputAccelerationModifier() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_InputAccelerationModifier();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_InputAccelerationModifier_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_UGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGC_InputAccelerationModifier *******************************************
void UUGC_InputAccelerationModifier::StaticRegisterNativesUUGC_InputAccelerationModifier()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_InputAccelerationModifier;
UClass* UUGC_InputAccelerationModifier::GetPrivateStaticClass()
{
	using TClass = UUGC_InputAccelerationModifier;
	if (!Z_Registration_Info_UClass_UUGC_InputAccelerationModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_InputAccelerationModifier"),
			Z_Registration_Info_UClass_UUGC_InputAccelerationModifier.InnerSingleton,
			StaticRegisterNativesUUGC_InputAccelerationModifier,
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
	return Z_Registration_Info_UClass_UUGC_InputAccelerationModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_InputAccelerationModifier_NoRegister()
{
	return UUGC_InputAccelerationModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UGC Input Modifiers" },
		{ "Comment", "/**\n * Apply an acceleration curve to your input so that it accelerates as time goes by. The given curve should be time-normalized, i.e., between 0 and 1.\n */" },
		{ "IncludePath", "Input/UGC_InputAccelerationModifier.h" },
		{ "ModuleRelativePath", "Public/Input/UGC_InputAccelerationModifier.h" },
		{ "ToolTip", "Apply an acceleration curve to your input so that it accelerates as time goes by. The given curve should be time-normalized, i.e., between 0 and 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The time it takes to reach full speed.\n" },
		{ "ModuleRelativePath", "Public/Input/UGC_InputAccelerationModifier.h" },
		{ "ToolTip", "The time it takes to reach full speed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Apply an acceleration curve to your input so that it accelerates as time goes by. The given curve should be time-normalized, i.e., between 0 and 1.\n" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/Input/UGC_InputAccelerationModifier.h" },
		{ "ToolTip", "Apply an acceleration curve to your input so that it accelerates as time goes by. The given curve should be time-normalized, i.e., between 0 and 1." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelerationTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccelerationCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_InputAccelerationModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::NewProp_AccelerationTime = { "AccelerationTime", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_InputAccelerationModifier, AccelerationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationTime_MetaData), NewProp_AccelerationTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::NewProp_AccelerationCurve = { "AccelerationCurve", nullptr, (EPropertyFlags)0x0114000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_InputAccelerationModifier, AccelerationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationCurve_MetaData), NewProp_AccelerationCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::NewProp_AccelerationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::NewProp_AccelerationCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::ClassParams = {
	&UUGC_InputAccelerationModifier::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_InputAccelerationModifier()
{
	if (!Z_Registration_Info_UClass_UUGC_InputAccelerationModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_InputAccelerationModifier.OuterSingleton, Z_Construct_UClass_UUGC_InputAccelerationModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_InputAccelerationModifier.OuterSingleton;
}
UUGC_InputAccelerationModifier::UUGC_InputAccelerationModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_InputAccelerationModifier);
UUGC_InputAccelerationModifier::~UUGC_InputAccelerationModifier() {}
// ********** End Class UUGC_InputAccelerationModifier *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Input_UGC_InputAccelerationModifier_h__Script_AuroraDevs_UGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGC_InputAccelerationModifier, UUGC_InputAccelerationModifier::StaticClass, TEXT("UUGC_InputAccelerationModifier"), &Z_Registration_Info_UClass_UUGC_InputAccelerationModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_InputAccelerationModifier), 1235200877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Input_UGC_InputAccelerationModifier_h__Script_AuroraDevs_UGC_2969920831(TEXT("/Script/AuroraDevs_UGC"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Input_UGC_InputAccelerationModifier_h__Script_AuroraDevs_UGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Input_UGC_InputAccelerationModifier_h__Script_AuroraDevs_UGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
