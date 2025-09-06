// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/Components/UGC_SpringArmComponentBase.h"
#include "Camera/Data/UGC_CameraData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUGC_SpringArmComponentBase() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_SpringArmComponentBase();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_SpringArmComponentBase_NoRegister();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraCollisionSettings();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_UGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGC_SpringArmComponentBase **********************************************
void UUGC_SpringArmComponentBase::StaticRegisterNativesUUGC_SpringArmComponentBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_SpringArmComponentBase;
UClass* UUGC_SpringArmComponentBase::GetPrivateStaticClass()
{
	using TClass = UUGC_SpringArmComponentBase;
	if (!Z_Registration_Info_UClass_UUGC_SpringArmComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_SpringArmComponentBase"),
			Z_Registration_Info_UClass_UUGC_SpringArmComponentBase.InnerSingleton,
			StaticRegisterNativesUUGC_SpringArmComponentBase,
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
	return Z_Registration_Info_UClass_UUGC_SpringArmComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_SpringArmComponentBase_NoRegister()
{
	return UUGC_SpringArmComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "UGC|Components" },
		{ "ClassGroupNames", "UGC Camera" },
		{ "Comment", "/**\n * Custom SpringArm component with enhanced gravity and collision handling.\n */" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/Components/UGC_SpringArmComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/Components/UGC_SpringArmComponentBase.h" },
		{ "ToolTip", "Custom SpringArm component with enhanced gravity and collision handling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCollisionSettings_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/** Camera collision settings including feelers */" },
		{ "EditCondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Public/Camera/Components/UGC_SpringArmComponentBase.h" },
		{ "ToolTip", "Camera collision settings including feelers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainFramingDuringCollisions_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/* *EXPERIMENTAL* Might cause bugs.\n     * Whether we want the framing to stay the same during collisions. This is useful for games where you need to aim (bow, gun; etc.) since it\n     * allows the center of the screen to not shift during collision.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/Components/UGC_SpringArmComponentBase.h" },
		{ "ToolTip", "*EXPERIMENTAL* Might cause bugs.\n    * Whether we want the framing to stay the same during collisions. This is useful for games where you need to aim (bow, gun; etc.) since it\n    * allows the center of the screen to not shift during collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawCollisionDebug_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/* Whether to draw debug messages regarding the spring arm collision.*/" },
		{ "ModuleRelativePath", "Public/Camera/Components/UGC_SpringArmComponentBase.h" },
		{ "ToolTip", "Whether to draw debug messages regarding the spring arm collision." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraCollisionSettings;
	static void NewProp_bMaintainFramingDuringCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainFramingDuringCollisions;
	static void NewProp_bDrawCollisionDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawCollisionDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_SpringArmComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_CameraCollisionSettings = { "CameraCollisionSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_SpringArmComponentBase, CameraCollisionSettings), Z_Construct_UScriptStruct_FCameraCollisionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCollisionSettings_MetaData), NewProp_CameraCollisionSettings_MetaData) }; // 2557835934
void Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bMaintainFramingDuringCollisions_SetBit(void* Obj)
{
	((UUGC_SpringArmComponentBase*)Obj)->bMaintainFramingDuringCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bMaintainFramingDuringCollisions = { "bMaintainFramingDuringCollisions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUGC_SpringArmComponentBase), &Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bMaintainFramingDuringCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainFramingDuringCollisions_MetaData), NewProp_bMaintainFramingDuringCollisions_MetaData) };
void Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bDrawCollisionDebug_SetBit(void* Obj)
{
	((UUGC_SpringArmComponentBase*)Obj)->bDrawCollisionDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bDrawCollisionDebug = { "bDrawCollisionDebug", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUGC_SpringArmComponentBase), &Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bDrawCollisionDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawCollisionDebug_MetaData), NewProp_bDrawCollisionDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_CameraCollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bMaintainFramingDuringCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::NewProp_bDrawCollisionDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::ClassParams = {
	&UUGC_SpringArmComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_SpringArmComponentBase()
{
	if (!Z_Registration_Info_UClass_UUGC_SpringArmComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_SpringArmComponentBase.OuterSingleton, Z_Construct_UClass_UUGC_SpringArmComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_SpringArmComponentBase.OuterSingleton;
}
UUGC_SpringArmComponentBase::UUGC_SpringArmComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_SpringArmComponentBase);
UUGC_SpringArmComponentBase::~UUGC_SpringArmComponentBase() {}
// ********** End Class UUGC_SpringArmComponentBase ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Components_UGC_SpringArmComponentBase_h__Script_AuroraDevs_UGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGC_SpringArmComponentBase, UUGC_SpringArmComponentBase::StaticClass, TEXT("UUGC_SpringArmComponentBase"), &Z_Registration_Info_UClass_UUGC_SpringArmComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_SpringArmComponentBase), 2872824080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Components_UGC_SpringArmComponentBase_h__Script_AuroraDevs_UGC_924513076(TEXT("/Script/AuroraDevs_UGC"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Components_UGC_SpringArmComponentBase_h__Script_AuroraDevs_UGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Components_UGC_SpringArmComponentBase_h__Script_AuroraDevs_UGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
