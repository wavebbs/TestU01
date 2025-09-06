// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/UGC_EditorNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUGC_EditorNodes() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_UGCEDITOR_API UClass* Z_Construct_UClass_UUGC_PlayCameraAnimation();
AURORADEVS_UGCEDITOR_API UClass* Z_Construct_UClass_UUGC_PlayCameraAnimation_NoRegister();
AURORADEVS_UGCEDITOR_API UClass* Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier();
AURORADEVS_UGCEDITOR_API UClass* Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_NoRegister();
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_UGCEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGC_PlayCameraAnimation *************************************************
void UUGC_PlayCameraAnimation::StaticRegisterNativesUUGC_PlayCameraAnimation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_PlayCameraAnimation;
UClass* UUGC_PlayCameraAnimation::GetPrivateStaticClass()
{
	using TClass = UUGC_PlayCameraAnimation;
	if (!Z_Registration_Info_UClass_UUGC_PlayCameraAnimation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_PlayCameraAnimation"),
			Z_Registration_Info_UClass_UUGC_PlayCameraAnimation.InnerSingleton,
			StaticRegisterNativesUUGC_PlayCameraAnimation,
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
	return Z_Registration_Info_UClass_UUGC_PlayCameraAnimation.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_PlayCameraAnimation_NoRegister()
{
	return UUGC_PlayCameraAnimation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_PlayCameraAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UGC Camera Animations" },
		{ "IncludePath", "UGC_EditorNodes.h" },
		{ "ModuleRelativePath", "Public/UGC_EditorNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_PlayCameraAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUGC_PlayCameraAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGCEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_PlayCameraAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_PlayCameraAnimation_Statics::ClassParams = {
	&UUGC_PlayCameraAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_PlayCameraAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_PlayCameraAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_PlayCameraAnimation()
{
	if (!Z_Registration_Info_UClass_UUGC_PlayCameraAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_PlayCameraAnimation.OuterSingleton, Z_Construct_UClass_UUGC_PlayCameraAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_PlayCameraAnimation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_PlayCameraAnimation);
UUGC_PlayCameraAnimation::~UUGC_PlayCameraAnimation() {}
// ********** End Class UUGC_PlayCameraAnimation ***************************************************

// ********** Begin Class UUGC_PlayCameraAnimationWithModifier *************************************
void UUGC_PlayCameraAnimationWithModifier::StaticRegisterNativesUUGC_PlayCameraAnimationWithModifier()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier;
UClass* UUGC_PlayCameraAnimationWithModifier::GetPrivateStaticClass()
{
	using TClass = UUGC_PlayCameraAnimationWithModifier;
	if (!Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_PlayCameraAnimationWithModifier"),
			Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier.InnerSingleton,
			StaticRegisterNativesUUGC_PlayCameraAnimationWithModifier,
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
	return Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_NoRegister()
{
	return UUGC_PlayCameraAnimationWithModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UGC Camera Animations" },
		{ "IncludePath", "UGC_EditorNodes.h" },
		{ "ModuleRelativePath", "Public/UGC_EditorNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_PlayCameraAnimationWithModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGCEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_Statics::ClassParams = {
	&UUGC_PlayCameraAnimationWithModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier()
{
	if (!Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier.OuterSingleton, Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_PlayCameraAnimationWithModifier);
UUGC_PlayCameraAnimationWithModifier::~UUGC_PlayCameraAnimationWithModifier() {}
// ********** End Class UUGC_PlayCameraAnimationWithModifier ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGCEditor_Public_UGC_EditorNodes_h__Script_AuroraDevs_UGCEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGC_PlayCameraAnimation, UUGC_PlayCameraAnimation::StaticClass, TEXT("UUGC_PlayCameraAnimation"), &Z_Registration_Info_UClass_UUGC_PlayCameraAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_PlayCameraAnimation), 1713162585U) },
		{ Z_Construct_UClass_UUGC_PlayCameraAnimationWithModifier, UUGC_PlayCameraAnimationWithModifier::StaticClass, TEXT("UUGC_PlayCameraAnimationWithModifier"), &Z_Registration_Info_UClass_UUGC_PlayCameraAnimationWithModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_PlayCameraAnimationWithModifier), 3626925405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGCEditor_Public_UGC_EditorNodes_h__Script_AuroraDevs_UGCEditor_1737997823(TEXT("/Script/AuroraDevs_UGCEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGCEditor_Public_UGC_EditorNodes_h__Script_AuroraDevs_UGCEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGCEditor_Public_UGC_EditorNodes_h__Script_AuroraDevs_UGCEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
