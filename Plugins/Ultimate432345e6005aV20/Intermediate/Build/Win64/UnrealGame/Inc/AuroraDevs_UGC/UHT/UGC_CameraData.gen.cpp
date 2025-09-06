// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/Data/UGC_CameraData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUGC_CameraData() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAddOnModifierSettings();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraDataAssetBase();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_IFocusTargetMethod_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_IGetActorsMethod_NoRegister();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraArmLagSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraArmLengthSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraArmOffsetSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraCollisionSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraDitheringSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFOVSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraPitchConstraintSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraPitchFollowSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraYawConstraintSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FCameraYawFollowSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FUGCCameraFocusSettings();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_UGC();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCameraYawFollowSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings;
class UScriptStruct* FCameraYawFollowSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraYawFollowSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraYawFollowSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of the camera yaw follow. This is useful for player who don't like to control the camera too much.\n * The YawFollowModifier in blueprint will adjust the yaw to face the movement direction (Used by AAA games like Hogwarts Legacy, Witcher, etc).\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the camera yaw follow. This is useful for player who don't like to control the camera too much.\n* The YawFollowModifier in blueprint will adjust the yaw to face the movement direction (Used by AAA games like Hogwarts Legacy, Witcher, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableYawMovementFollow_MetaData[] = {
		{ "Category", "Camera Yaw Follow" },
		{ "Comment", "// Whether the yaw should follow the character, when they are moving.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether the yaw should follow the character, when they are moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetThresholdTimerWhenNoMovement_MetaData[] = {
		{ "Category", "Camera Yaw Follow" },
		{ "Comment", "// Whether the yaw threshold timer should be reset when the character stop moving.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether the yaw threshold timer should be reset when the character stop moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawFollowSpeed_MetaData[] = {
		{ "Category", "Camera Yaw Follow" },
		{ "Comment", "// The speed at which the camera rotates its yaw in the movement direction of the character.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The speed at which the camera rotates its yaw in the movement direction of the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawFollowTimeThreshold_MetaData[] = {
		{ "Category", "Camera Yaw Follow" },
		{ "Comment", "/* The minimum time the player shouldn't rotate the camera manually before the yaw follow kicks in.\n\x09 * The timer can be reset when the character stops moving by enabling `bResetThresholdTimerWhenNoMovement`.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The minimum time the player shouldn't rotate the camera manually before the yaw follow kicks in.\n       * The timer can be reset when the character stops moving by enabling `bResetThresholdTimerWhenNoMovement`." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawFollowAngleThreshold_MetaData[] = {
		{ "Category", "Camera Yaw Follow" },
		{ "Comment", "// Threshold yaw angle above which we trigger the yaw follow modifier.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Threshold yaw angle above which we trigger the yaw follow modifier." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableYawMovementFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableYawMovementFollow;
	static void NewProp_bResetThresholdTimerWhenNoMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetThresholdTimerWhenNoMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawFollowSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawFollowTimeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawFollowAngleThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraYawFollowSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bEnableYawMovementFollow_SetBit(void* Obj)
{
	((FCameraYawFollowSettings*)Obj)->bEnableYawMovementFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bEnableYawMovementFollow = { "bEnableYawMovementFollow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraYawFollowSettings), &Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bEnableYawMovementFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableYawMovementFollow_MetaData), NewProp_bEnableYawMovementFollow_MetaData) };
void Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement_SetBit(void* Obj)
{
	((FCameraYawFollowSettings*)Obj)->bResetThresholdTimerWhenNoMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement = { "bResetThresholdTimerWhenNoMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraYawFollowSettings), &Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetThresholdTimerWhenNoMovement_MetaData), NewProp_bResetThresholdTimerWhenNoMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_YawFollowSpeed = { "YawFollowSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawFollowSettings, YawFollowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawFollowSpeed_MetaData), NewProp_YawFollowSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_YawFollowTimeThreshold = { "YawFollowTimeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawFollowSettings, YawFollowTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawFollowTimeThreshold_MetaData), NewProp_YawFollowTimeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_YawFollowAngleThreshold = { "YawFollowAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawFollowSettings, YawFollowAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawFollowAngleThreshold_MetaData), NewProp_YawFollowAngleThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bEnableYawMovementFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_YawFollowSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_YawFollowTimeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewProp_YawFollowAngleThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraYawFollowSettings",
	Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::PropPointers),
	sizeof(FCameraYawFollowSettings),
	alignof(FCameraYawFollowSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraYawFollowSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraYawFollowSettings ********************************************

// ********** Begin ScriptStruct FCameraPitchFollowSettings ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings;
class UScriptStruct* FCameraPitchFollowSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraPitchFollowSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraPitchFollowSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of the camera pitch follow. This is useful for player who don't like to control the camera too much.\n * The PitchFollowModifier in blueprint will adjust the pitch to face slopes, falling and reset the pitch if it's left untouched for long enough.\n * (Used by AAA games like Red Dead Redemption, Hogwarts Legacy, Witcher, etc)\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the camera pitch follow. This is useful for player who don't like to control the camera too much.\n* The PitchFollowModifier in blueprint will adjust the pitch to face slopes, falling and reset the pitch if it's left untouched for long enough.\n* (Used by AAA games like Red Dead Redemption, Hogwarts Legacy, Witcher, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePitchMovementFollow_MetaData[] = {
		{ "Category", "Camera Pitch Follow" },
		{ "Comment", "/** Whether the pitch should reset to the resting pitch when the character is moving. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether the pitch should reset to the resting pitch when the character is moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchFollowSpeed_MetaData[] = {
		{ "Category", "Camera Pitch Follow" },
		{ "Comment", "/** The speed at which the camera rotates its pitch to follow when falling/moving. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The speed at which the camera rotates its pitch to follow when falling/moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchFollowTimeThreshold_MetaData[] = {
		{ "Category", "Camera Pitch Follow" },
		{ "Comment", "/** The minimum time the player shouldn't rotate the camera manually before the pitch follow kicks in. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The minimum time the player shouldn't rotate the camera manually before the pitch follow kicks in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetThresholdTimerWhenNoMovement_MetaData[] = {
		{ "Category", "Camera Pitch Follow" },
		{ "Comment", "/** Whether the pitch threshold timer should be reset when the character stop moving. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether the pitch threshold timer should be reset when the character stop moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchFollowAngleThreshold_MetaData[] = {
		{ "Category", "Movement Follow" },
		{ "Comment", "/** Threshold pitch angle above which we trigger the pitch follow modifier to reset the pitch to RestingPitch. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Threshold pitch angle above which we trigger the pitch follow modifier to reset the pitch to RestingPitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestingPitch_MetaData[] = {
		{ "Category", "Movement Follow" },
		{ "Comment", "/** The pitch to go to when the the character is moving without controlling the camera's pitch is messed up. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The pitch to go to when the the character is moving without controlling the camera's pitch is messed up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerWhenFalling_MetaData[] = {
		{ "Category", "Falling" },
		{ "Comment", "/** Should the camera look down when the character is falling for at least TimeThresholdWhenFalling in seconds and the floor is at least MinDistanceFromGround centimeters away ? */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Should the camera look down when the character is falling for at least TimeThresholdWhenFalling in seconds and the floor is at least MinDistanceFromGround centimeters away ?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchFollowTimeThresholdWhenFalling_MetaData[] = {
		{ "Category", "Falling" },
		{ "Comment", "/** The minimun duration of time the character should fall before the modifier is triggered. */" },
		{ "EditCondition", "bTriggerWhenFalling" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The minimun duration of time the character should fall before the modifier is triggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceFromGroundToTriggerWhenFalling_MetaData[] = {
		{ "Category", "Falling" },
		{ "Comment", "/** The minimum distance we should be above the ground to trigger the pitch follow when falling. */" },
		{ "EditCondition", "bTriggerWhenFalling" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The minimum distance we should be above the ground to trigger the pitch follow when falling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplierWhenFalling_MetaData[] = {
		{ "Category", "Falling" },
		{ "Comment", "/** A multiplier to apply to the follow speed of the camera when we're feeling. */" },
		{ "EditCondition", "bTriggerWhenFalling" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "A multiplier to apply to the follow speed of the camera when we're feeling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnSlopes_MetaData[] = {
		{ "Category", "Slopes" },
		{ "Comment", "/** Should the camera pitch look toward the inclination of the slope the character is walking on? */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Should the camera pitch look toward the inclination of the slope the character is walking on?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlopeMinIncline_MetaData[] = {
		{ "Category", "Slopes" },
		{ "Comment", "/** The minimum slope pitch inclination angle so that the pitch follow modifier is triggered (so that it's not triggered for small bumps). */" },
		{ "EditCondition", "bTriggerOnSlopes" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The minimum slope pitch inclination angle so that the pitch follow modifier is triggered (so that it's not triggered for small bumps)." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePitchMovementFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePitchMovementFollow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchFollowSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchFollowTimeThreshold;
	static void NewProp_bResetThresholdTimerWhenNoMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetThresholdTimerWhenNoMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchFollowAngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestingPitch;
	static void NewProp_bTriggerWhenFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerWhenFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchFollowTimeThresholdWhenFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceFromGroundToTriggerWhenFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplierWhenFalling;
	static void NewProp_bTriggerOnSlopes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnSlopes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeMinIncline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraPitchFollowSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bEnablePitchMovementFollow_SetBit(void* Obj)
{
	((FCameraPitchFollowSettings*)Obj)->bEnablePitchMovementFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bEnablePitchMovementFollow = { "bEnablePitchMovementFollow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraPitchFollowSettings), &Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bEnablePitchMovementFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePitchMovementFollow_MetaData), NewProp_bEnablePitchMovementFollow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowSpeed = { "PitchFollowSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, PitchFollowSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchFollowSpeed_MetaData), NewProp_PitchFollowSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowTimeThreshold = { "PitchFollowTimeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, PitchFollowTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchFollowTimeThreshold_MetaData), NewProp_PitchFollowTimeThreshold_MetaData) };
void Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement_SetBit(void* Obj)
{
	((FCameraPitchFollowSettings*)Obj)->bResetThresholdTimerWhenNoMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement = { "bResetThresholdTimerWhenNoMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraPitchFollowSettings), &Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetThresholdTimerWhenNoMovement_MetaData), NewProp_bResetThresholdTimerWhenNoMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowAngleThreshold = { "PitchFollowAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, PitchFollowAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchFollowAngleThreshold_MetaData), NewProp_PitchFollowAngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_RestingPitch = { "RestingPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, RestingPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestingPitch_MetaData), NewProp_RestingPitch_MetaData) };
void Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerWhenFalling_SetBit(void* Obj)
{
	((FCameraPitchFollowSettings*)Obj)->bTriggerWhenFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerWhenFalling = { "bTriggerWhenFalling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraPitchFollowSettings), &Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerWhenFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerWhenFalling_MetaData), NewProp_bTriggerWhenFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowTimeThresholdWhenFalling = { "PitchFollowTimeThresholdWhenFalling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, PitchFollowTimeThresholdWhenFalling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchFollowTimeThresholdWhenFalling_MetaData), NewProp_PitchFollowTimeThresholdWhenFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_MinDistanceFromGroundToTriggerWhenFalling = { "MinDistanceFromGroundToTriggerWhenFalling", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, MinDistanceFromGroundToTriggerWhenFalling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceFromGroundToTriggerWhenFalling_MetaData), NewProp_MinDistanceFromGroundToTriggerWhenFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_SpeedMultiplierWhenFalling = { "SpeedMultiplierWhenFalling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, SpeedMultiplierWhenFalling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplierWhenFalling_MetaData), NewProp_SpeedMultiplierWhenFalling_MetaData) };
void Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerOnSlopes_SetBit(void* Obj)
{
	((FCameraPitchFollowSettings*)Obj)->bTriggerOnSlopes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerOnSlopes = { "bTriggerOnSlopes", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraPitchFollowSettings), &Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerOnSlopes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerOnSlopes_MetaData), NewProp_bTriggerOnSlopes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_SlopeMinIncline = { "SlopeMinIncline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchFollowSettings, SlopeMinIncline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlopeMinIncline_MetaData), NewProp_SlopeMinIncline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bEnablePitchMovementFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowTimeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bResetThresholdTimerWhenNoMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_RestingPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerWhenFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_PitchFollowTimeThresholdWhenFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_MinDistanceFromGroundToTriggerWhenFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_SpeedMultiplierWhenFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_bTriggerOnSlopes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewProp_SlopeMinIncline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraPitchFollowSettings",
	Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::PropPointers),
	sizeof(FCameraPitchFollowSettings),
	alignof(FCameraPitchFollowSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraPitchFollowSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraPitchFollowSettings ******************************************

// ********** Begin ScriptStruct FCameraArmOffsetSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings;
class UScriptStruct* FCameraArmOffsetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraArmOffsetSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraArmOffsetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of the camera Arm Offset.\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the camera Arm Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmSocketOffset_MetaData[] = {
		{ "Category", "Camera Arm Offset Modifier" },
		{ "Comment", "/** Offset at the end of the spring arm. Use this instead of the relative-space *rotation* so that the UE camera system works as expected. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Offset at the end of the spring arm. Use this instead of the relative-space *rotation* so that the UE camera system works as expected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmSocketOffsetBlendTime_MetaData[] = {
		{ "Category", "Camera Arm Offset Modifier" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How long does it take to blend to the current ArmSocketOffset. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How long does it take to blend to the current ArmSocketOffset." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmSocketOffsetBlendCurve_MetaData[] = {
		{ "Category", "Camera Arm Offset Modifier" },
		{ "Comment", "/** Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmTargetOffset_MetaData[] = {
		{ "Category", "Camera Arm Offset Modifier" },
		{ "Comment", "/** Offset at start of spring, applied in world space. Use this if you want a world-space offset from the parent component instead of the usual relative-space location. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Offset at start of spring, applied in world space. Use this if you want a world-space offset from the parent component instead of the usual relative-space location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmTargetOffsetBlendTime_MetaData[] = {
		{ "Category", "Camera Arm Offset Modifier" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How long does it take to blend to the current ArmTargetOffset. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How long does it take to blend to the current ArmTargetOffset." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmTargetOffsetBlendCurve_MetaData[] = {
		{ "Category", "Camera Arm Offset Modifier" },
		{ "Comment", "/** Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmSocketOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmSocketOffsetBlendTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmSocketOffsetBlendCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmTargetOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmTargetOffsetBlendTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmTargetOffsetBlendCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraArmOffsetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmSocketOffset = { "ArmSocketOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmOffsetSettings, ArmSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmSocketOffset_MetaData), NewProp_ArmSocketOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmSocketOffsetBlendTime = { "ArmSocketOffsetBlendTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmOffsetSettings, ArmSocketOffsetBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmSocketOffsetBlendTime_MetaData), NewProp_ArmSocketOffsetBlendTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmSocketOffsetBlendCurve = { "ArmSocketOffsetBlendCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmOffsetSettings, ArmSocketOffsetBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmSocketOffsetBlendCurve_MetaData), NewProp_ArmSocketOffsetBlendCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmTargetOffset = { "ArmTargetOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmOffsetSettings, ArmTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmTargetOffset_MetaData), NewProp_ArmTargetOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmTargetOffsetBlendTime = { "ArmTargetOffsetBlendTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmOffsetSettings, ArmTargetOffsetBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmTargetOffsetBlendTime_MetaData), NewProp_ArmTargetOffsetBlendTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmTargetOffsetBlendCurve = { "ArmTargetOffsetBlendCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmOffsetSettings, ArmTargetOffsetBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmTargetOffsetBlendCurve_MetaData), NewProp_ArmTargetOffsetBlendCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmSocketOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmSocketOffsetBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmSocketOffsetBlendCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmTargetOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmTargetOffsetBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewProp_ArmTargetOffsetBlendCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraArmOffsetSettings",
	Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::PropPointers),
	sizeof(FCameraArmOffsetSettings),
	alignof(FCameraArmOffsetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraArmOffsetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraArmOffsetSettings ********************************************

// ********** Begin ScriptStruct FCameraPitchToArmAndFOVCurveSettings ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings;
class UScriptStruct* FCameraPitchToArmAndFOVCurveSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraPitchToArmAndFOVCurveSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n * This makes the Arm Length and FOV change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.).\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n* This makes the Arm Length and FOV change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "Camera Pitch to Arm and FOV Modifier" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchToArmLengthCurve_MetaData[] = {
		{ "Category", "Camera Pitch to Arm and FOV Modifier" },
		{ "Comment", "/** Curve with X and Y between -1.0 and 1.0. This maps the LocalMinPitch (X=-1.0) and LocalMaxPitch (X=1.0) to the MinArmLength and MaxArmLength. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Curve with X and Y between -1.0 and 1.0. This maps the LocalMinPitch (X=-1.0) and LocalMaxPitch (X=1.0) to the MinArmLength and MaxArmLength." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchToFOVCurve_MetaData[] = {
		{ "Category", "Camera Pitch to Arm and FOV Modifier" },
		{ "Comment", "/** Curve with X and Y between -1.0 and 1.0. This maps the LocalMinPitch (X=-1.0) and LocalMaxPitch (X=1.0) to the MinFOV and MaxFOV. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Curve with X and Y between -1.0 and 1.0. This maps the LocalMinPitch (X=-1.0) and LocalMaxPitch (X=1.0) to the MinFOV and MaxFOV." },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchToArmLengthCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchToFOVCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraPitchToArmAndFOVCurveSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FCameraPitchToArmAndFOVCurveSettings*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraPitchToArmAndFOVCurveSettings), &Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_PitchToArmLengthCurve = { "PitchToArmLengthCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchToArmAndFOVCurveSettings, PitchToArmLengthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchToArmLengthCurve_MetaData), NewProp_PitchToArmLengthCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_PitchToFOVCurve = { "PitchToFOVCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchToArmAndFOVCurveSettings, PitchToFOVCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchToFOVCurve_MetaData), NewProp_PitchToFOVCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_PitchToArmLengthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewProp_PitchToFOVCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraPitchToArmAndFOVCurveSettings",
	Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::PropPointers),
	sizeof(FCameraPitchToArmAndFOVCurveSettings),
	alignof(FCameraPitchToArmAndFOVCurveSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraPitchToArmAndFOVCurveSettings ********************************

// ********** Begin ScriptStruct FCameraArmLengthSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings;
class UScriptStruct* FCameraArmLengthSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraArmLengthSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraArmLengthSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The settings of the camera Arm Length. Defines the range of the Arm Length and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n* This makes the Arm Length change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.).\n*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the camera Arm Length. Defines the range of the Arm Length and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n* This makes the Arm Length change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinArmLength_MetaData[] = {
		{ "Category", "Camera Arm Length" },
		{ "Comment", "/** The minimum arm length value. The length of the arm will change depending on the current pitch of the camera and the PitchToArmLengthCurve. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The minimum arm length value. The length of the arm will change depending on the current pitch of the camera and the PitchToArmLengthCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmLength_MetaData[] = {
		{ "Category", "Camera Arm Length" },
		{ "Comment", "/** The maximum arm length value. The length of the arm will change depending on the current pitch of the camera and the PitchToArmLengthCurve. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The maximum arm length value. The length of the arm will change depending on the current pitch of the camera and the PitchToArmLengthCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmRangeBlendTime_MetaData[] = {
		{ "Category", "Camera Arm Length" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How long does it take to blend to the current Arm Length range. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How long does it take to blend to the current Arm Length range." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmRangeBlendCurve_MetaData[] = {
		{ "Category", "Camera Arm Length" },
		{ "Comment", "/** Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmRangeBlendTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmRangeBlendCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraArmLengthSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_MinArmLength = { "MinArmLength", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmLengthSettings, MinArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinArmLength_MetaData), NewProp_MinArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_MaxArmLength = { "MaxArmLength", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmLengthSettings, MaxArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmLength_MetaData), NewProp_MaxArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_ArmRangeBlendTime = { "ArmRangeBlendTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmLengthSettings, ArmRangeBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmRangeBlendTime_MetaData), NewProp_ArmRangeBlendTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_ArmRangeBlendCurve = { "ArmRangeBlendCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmLengthSettings, ArmRangeBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmRangeBlendCurve_MetaData), NewProp_ArmRangeBlendCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_MinArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_MaxArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_ArmRangeBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewProp_ArmRangeBlendCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraArmLengthSettings",
	Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::PropPointers),
	sizeof(FCameraArmLengthSettings),
	alignof(FCameraArmLengthSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraArmLengthSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraArmLengthSettings ********************************************

// ********** Begin ScriptStruct FCameraFOVSettings ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraFOVSettings;
class UScriptStruct* FCameraFOVSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraFOVSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraFOVSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFOVSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraFOVSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraFOVSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraFOVSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of the camera FOV. Defines the range of the FOV and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n * This makes the FOV change when the character is looking up/down (Used by many AAA games like GTA IV).\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the camera FOV. Defines the range of the FOV and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n* This makes the FOV change when the character is looking up/down (Used by many AAA games like GTA IV)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFOV_MetaData[] = {
		{ "Category", "Camera FOV" },
		{ "Comment", "/** The minimum FOV value. The FOV of the camera will change depending on the current pitch of the camera and the PitchToFOVCurve. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The minimum FOV value. The FOV of the camera will change depending on the current pitch of the camera and the PitchToFOVCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFOV_MetaData[] = {
		{ "Category", "Camera FOV" },
		{ "Comment", "/** The maximum FOV value. The FOV of the camera will change depending on the current pitch of the camera and the PitchToFOVCurve. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The maximum FOV value. The FOV of the camera will change depending on the current pitch of the camera and the PitchToFOVCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVRangeBlendTime_MetaData[] = {
		{ "Category", "Camera FOV" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A tolerance in degrees above which the Angle Constraints modifier will start decelerating the camera. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "A tolerance in degrees above which the Angle Constraints modifier will start decelerating the camera." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVRangeBlendCurve_MetaData[] = {
		{ "Category", "Camera FOV" },
		{ "Comment", "/** Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVRangeBlendTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FOVRangeBlendCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFOVSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_MinFOV = { "MinFOV", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVSettings, MinFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFOV_MetaData), NewProp_MinFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_MaxFOV = { "MaxFOV", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVSettings, MaxFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFOV_MetaData), NewProp_MaxFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_FOVRangeBlendTime = { "FOVRangeBlendTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVSettings, FOVRangeBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVRangeBlendTime_MetaData), NewProp_FOVRangeBlendTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_FOVRangeBlendCurve = { "FOVRangeBlendCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVSettings, FOVRangeBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVRangeBlendCurve_MetaData), NewProp_FOVRangeBlendCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_MinFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_MaxFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_FOVRangeBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewProp_FOVRangeBlendCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraFOVSettings",
	Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::PropPointers),
	sizeof(FCameraFOVSettings),
	alignof(FCameraFOVSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraFOVSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraFOVSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraFOVSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraFOVSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraFOVSettings **************************************************

// ********** Begin ScriptStruct FCameraYawConstraintSettings **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings;
class UScriptStruct* FCameraYawConstraintSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraYawConstraintSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraYawConstraintSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of the camera yaw contraints. This is useful to limit how much the character can look left/right.\n * The looking input action needs to have a UGC_CameraTurnRateModifier for the camera to decelerate when close to the constraints.\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the camera yaw contraints. This is useful to limit how much the character can look left/right.\n* The looking input action needs to have a UGC_CameraTurnRateModifier for the camera to decelerate when close to the constraints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainYaw_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/** Whether the yaw should be constrained to LocalMinYaw and LocalMaxYaw. If the yaw was already out of the new range, it will blend into range using the BlendTime and BlendCurve. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Whether the yaw should be constrained to LocalMinYaw and LocalMaxYaw. If the yaw was already out of the new range, it will blend into range using the BlendTime and BlendCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawConstraintTolerance_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How close in degrees to the YawMin or YawMax should the camera start decelerating? */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How close in degrees to the YawMin or YawMax should the camera start decelerating?" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMinYaw_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/** How much can the character look right (angle in degrees). */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How much can the character look right (angle in degrees)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMaxYaw_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/** How much can the character look left (angle in degrees). */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How much can the character look left (angle in degrees)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawConstraintsBlendTime_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How fast should we blend from one Yaw constraint range to this one. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How fast should we blend from one Yaw constraint range to this one." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawConstraintsBlendCurve_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/** Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure." },
	};
#endif // WITH_METADATA
	static void NewProp_bConstrainYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawConstraintTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalMinYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalMaxYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawConstraintsBlendTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YawConstraintsBlendCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraYawConstraintSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_bConstrainYaw_SetBit(void* Obj)
{
	((FCameraYawConstraintSettings*)Obj)->bConstrainYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_bConstrainYaw = { "bConstrainYaw", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraYawConstraintSettings), &Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_bConstrainYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainYaw_MetaData), NewProp_bConstrainYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_YawConstraintTolerance = { "YawConstraintTolerance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawConstraintSettings, YawConstraintTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawConstraintTolerance_MetaData), NewProp_YawConstraintTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_LocalMinYaw = { "LocalMinYaw", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawConstraintSettings, LocalMinYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMinYaw_MetaData), NewProp_LocalMinYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_LocalMaxYaw = { "LocalMaxYaw", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawConstraintSettings, LocalMaxYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMaxYaw_MetaData), NewProp_LocalMaxYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_YawConstraintsBlendTime = { "YawConstraintsBlendTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawConstraintSettings, YawConstraintsBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawConstraintsBlendTime_MetaData), NewProp_YawConstraintsBlendTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_YawConstraintsBlendCurve = { "YawConstraintsBlendCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraYawConstraintSettings, YawConstraintsBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawConstraintsBlendCurve_MetaData), NewProp_YawConstraintsBlendCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_bConstrainYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_YawConstraintTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_LocalMinYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_LocalMaxYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_YawConstraintsBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewProp_YawConstraintsBlendCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraYawConstraintSettings",
	Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::PropPointers),
	sizeof(FCameraYawConstraintSettings),
	alignof(FCameraYawConstraintSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraYawConstraintSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraYawConstraintSettings ****************************************

// ********** Begin ScriptStruct FCameraPitchConstraintSettings ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings;
class UScriptStruct* FCameraPitchConstraintSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraPitchConstraintSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraPitchConstraintSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of the camera pitch contraints. This is useful to limit how much the character can look up/down. AAA games usually do not allow the entire 180 degrees range.\n * The looking input action needs to have a UGC_CameraTurnRateModifier for the camera to decelerate when close to the constraints.\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the camera pitch contraints. This is useful to limit how much the character can look up/down. AAA games usually do not allow the entire 180 degrees range.\n* The looking input action needs to have a UGC_CameraTurnRateModifier for the camera to decelerate when close to the constraints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainPitch_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/** Whether the pitch should be constrained to LocalMinPitch and LocalMaxPitch. If the yaw was already out of the new range, it will blend into range using the BlendTime and BlendCurve. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Whether the pitch should be constrained to LocalMinPitch and LocalMaxPitch. If the yaw was already out of the new range, it will blend into range using the BlendTime and BlendCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchConstraintTolerance_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How close in degrees to the PitchMin or PitchMax should the camera start decelerating? */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How close in degrees to the PitchMin or PitchMax should the camera start decelerating?" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMinPitch_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "// How much can the character look down (angle in degrees).\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How much can the character look down (angle in degrees)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMaxPitch_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "// How much can the character look up (angle in degrees).\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How much can the character look up (angle in degrees)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchConstraintsBlendTime_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How fast should we blend from one Pitch constraint range to this one. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How fast should we blend from one Pitch constraint range to this one." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchConstraintsBlendCurve_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/** Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Controls the acceleration/deceleration of the blend. The curve has to be normalized (going from 0 to 1). Leave empty or use Hermite if unsure." },
	};
#endif // WITH_METADATA
	static void NewProp_bConstrainPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchConstraintTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalMinPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalMaxPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchConstraintsBlendTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchConstraintsBlendCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraPitchConstraintSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_bConstrainPitch_SetBit(void* Obj)
{
	((FCameraPitchConstraintSettings*)Obj)->bConstrainPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_bConstrainPitch = { "bConstrainPitch", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraPitchConstraintSettings), &Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_bConstrainPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainPitch_MetaData), NewProp_bConstrainPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_PitchConstraintTolerance = { "PitchConstraintTolerance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchConstraintSettings, PitchConstraintTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchConstraintTolerance_MetaData), NewProp_PitchConstraintTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_LocalMinPitch = { "LocalMinPitch", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchConstraintSettings, LocalMinPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMinPitch_MetaData), NewProp_LocalMinPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_LocalMaxPitch = { "LocalMaxPitch", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchConstraintSettings, LocalMaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMaxPitch_MetaData), NewProp_LocalMaxPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_PitchConstraintsBlendTime = { "PitchConstraintsBlendTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchConstraintSettings, PitchConstraintsBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchConstraintsBlendTime_MetaData), NewProp_PitchConstraintsBlendTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_PitchConstraintsBlendCurve = { "PitchConstraintsBlendCurve", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraPitchConstraintSettings, PitchConstraintsBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchConstraintsBlendCurve_MetaData), NewProp_PitchConstraintsBlendCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_bConstrainPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_PitchConstraintTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_LocalMinPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_LocalMaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_PitchConstraintsBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewProp_PitchConstraintsBlendCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraPitchConstraintSettings",
	Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::PropPointers),
	sizeof(FCameraPitchConstraintSettings),
	alignof(FCameraPitchConstraintSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraPitchConstraintSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraPitchConstraintSettings **************************************

// ********** Begin ScriptStruct FUGCCameraFocusSettings *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings;
class UScriptStruct* FUGCCameraFocusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCCameraFocusSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("UGCCameraFocusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of the focus camera. This is used for hard-lock in games.\n * Has a function which retrieves the target we want the camera to look at. (Uses the Strategy Design Pattern)\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of the focus camera. This is used for hard-lock in games.\n* Has a function which retrieves the target we want the camera to look at. (Uses the Strategy Design Pattern)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** Whether the focus camera is enabled. If it is, this will use the Focus Target Method to get the target's location.*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Whether the focus camera is enabled. If it is, this will use the Focus Target Method to get the target's location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** How fast the camera will focus the target.*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How fast the camera will focus the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** An offset in degrees applied on the pitch and yaw. This is useful if you want the focused location to always be on the left/right or looked down/up.*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "An offset in degrees applied on the pitch and yaw. This is useful if you want the focused location to always be on the left/right or looked down/up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCameraInput_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** Whether the camera input should be ignored during focus.*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Whether the camera input should be ignored during focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateYawOnly_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** Whether we should rotatet only the yaw angle of the camera or the pitch as well.\n\x09 * You can set this to true and combine it with the Rotation Offset if you want the cam to stay at a specific pitch. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Whether we should rotatet only the yaw angle of the camera or the pitch as well.\nYou can set this to true and combine it with the Rotation Offset if you want the cam to stay at a specific pitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopIfBlockedLOS_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** Whether we should stop focusing if the Line of Sight is occluded.*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Whether we should stop focusing if the Line of Sight is occluded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedLOSTimeThreshold_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** How long should the line of sight be occluded before we stop focusing trying to focus target.*/" },
		{ "EditCondition", "bStopIfBlockedLOS" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "How long should the line of sight be occluded before we stop focusing trying to focus target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceFromTarget_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** The distance from the target below which we will stop focusing the target. If this is too low, the camera might start rotating crazily around the target.*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The distance from the target below which we will stop focusing the target. If this is too low, the camera might start rotating crazily around the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFromTarget_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** The distance from the target above which we will stop focusing the target.*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The distance from the target above which we will stop focusing the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusTargetMethod_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** Function which retrieves the target we want the camera to look at. (Uses the Strategy Design Pattern) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Function which retrieves the target we want the camera to look at. (Uses the Strategy Design Pattern)" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static void NewProp_bIgnoreCameraInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCameraInput;
	static void NewProp_bRotateYawOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateYawOnly;
	static void NewProp_bStopIfBlockedLOS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopIfBlockedLOS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockedLOSTimeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceFromTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFromTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusTargetMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCCameraFocusSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FUGCCameraFocusSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUGCCameraFocusSettings), &Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCCameraFocusSettings, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCCameraFocusSettings, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
void Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bIgnoreCameraInput_SetBit(void* Obj)
{
	((FUGCCameraFocusSettings*)Obj)->bIgnoreCameraInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bIgnoreCameraInput = { "bIgnoreCameraInput", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUGCCameraFocusSettings), &Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bIgnoreCameraInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreCameraInput_MetaData), NewProp_bIgnoreCameraInput_MetaData) };
void Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bRotateYawOnly_SetBit(void* Obj)
{
	((FUGCCameraFocusSettings*)Obj)->bRotateYawOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bRotateYawOnly = { "bRotateYawOnly", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUGCCameraFocusSettings), &Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bRotateYawOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateYawOnly_MetaData), NewProp_bRotateYawOnly_MetaData) };
void Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bStopIfBlockedLOS_SetBit(void* Obj)
{
	((FUGCCameraFocusSettings*)Obj)->bStopIfBlockedLOS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bStopIfBlockedLOS = { "bStopIfBlockedLOS", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUGCCameraFocusSettings), &Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bStopIfBlockedLOS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopIfBlockedLOS_MetaData), NewProp_bStopIfBlockedLOS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_BlockedLOSTimeThreshold = { "BlockedLOSTimeThreshold", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCCameraFocusSettings, BlockedLOSTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedLOSTimeThreshold_MetaData), NewProp_BlockedLOSTimeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_MinDistanceFromTarget = { "MinDistanceFromTarget", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCCameraFocusSettings, MinDistanceFromTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceFromTarget_MetaData), NewProp_MinDistanceFromTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_MaxDistanceFromTarget = { "MaxDistanceFromTarget", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCCameraFocusSettings, MaxDistanceFromTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceFromTarget_MetaData), NewProp_MaxDistanceFromTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_FocusTargetMethod = { "FocusTargetMethod", nullptr, (EPropertyFlags)0x011600000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCCameraFocusSettings, FocusTargetMethod), Z_Construct_UClass_UUGC_IFocusTargetMethod_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusTargetMethod_MetaData), NewProp_FocusTargetMethod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bIgnoreCameraInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bRotateYawOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_bStopIfBlockedLOS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_BlockedLOSTimeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_MinDistanceFromTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_MaxDistanceFromTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewProp_FocusTargetMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"UGCCameraFocusSettings",
	Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::PropPointers),
	sizeof(FUGCCameraFocusSettings),
	alignof(FUGCCameraFocusSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUGCCameraFocusSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings.InnerSingleton, Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings.InnerSingleton;
}
// ********** End ScriptStruct FUGCCameraFocusSettings *********************************************

// ********** Begin ScriptStruct FUGCCameraSettingsWithGetActorsMethod *****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod;
class UScriptStruct* FUGCCameraSettingsWithGetActorsMethod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("UGCCameraSettingsWithGetActorsMethod"));
	}
	return Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings of a camera modifier which needs to retrieve a list of actors.\n * Has a function which retrieves the all actors relevant for some camera modifier with settings inheriting from this class. (Uses the Strategy Design Pattern)\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* The settings of a camera modifier which needs to retrieve a list of actors.\n* Has a function which retrieves the all actors relevant for some camera modifier with settings inheriting from this class. (Uses the Strategy Design Pattern)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetActorsMethod_MetaData[] = {
		{ "Category", "Camera Focus" },
		{ "Comment", "/** Function which retrieves the all actors relevant for some camera modifier with settings inheriting from this class. (Uses the Strategy Design Pattern) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Function which retrieves the all actors relevant for some camera modifier with settings inheriting from this class. (Uses the Strategy Design Pattern)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GetActorsMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCCameraSettingsWithGetActorsMethod>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::NewProp_GetActorsMethod = { "GetActorsMethod", nullptr, (EPropertyFlags)0x011600000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCCameraSettingsWithGetActorsMethod, GetActorsMethod), Z_Construct_UClass_UUGC_IGetActorsMethod_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetActorsMethod_MetaData), NewProp_GetActorsMethod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::NewProp_GetActorsMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"UGCCameraSettingsWithGetActorsMethod",
	Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::PropPointers),
	sizeof(FUGCCameraSettingsWithGetActorsMethod),
	alignof(FUGCCameraSettingsWithGetActorsMethod),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod.InnerSingleton, Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod.InnerSingleton;
}
// ********** End ScriptStruct FUGCCameraSettingsWithGetActorsMethod *******************************

// ********** Begin ScriptStruct FCameraDitheringSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraDitheringSettings;
class UScriptStruct* FCameraDitheringSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraDitheringSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraDitheringSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraDitheringSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraDitheringSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraDitheringSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Dithering settings used to dither/hide/fade objects colliding with the camera either occluding the line of sight to the player or overlapping the camera directly.\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "* Dithering settings used to dither/hide/fade objects colliding with the camera either occluding the line of sight to the player or overlapping the camera directly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOpacityParameterName_MetaData[] = {
		{ "Category", "UGC Camera Dithering" },
		{ "Comment", "// The name of the scalar material parameter to blend in/out.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The name of the scalar material parameter to blend in/out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMaterialPlayerPosition_MetaData[] = {
		{ "Category", "UGC Camera Dithering" },
		{ "Comment", "// Whether the material has a vector parameter which should be updated to the player location.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether the material has a vector parameter which should be updated to the player location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPlayerPositionParameterName_MetaData[] = {
		{ "Category", "UGC Camera Dithering" },
		{ "Comment", "// The name of the vector parameter to set to the player position inside the Material Parameter Collection.\n" },
		{ "EditCondition", "bUpdateMaterialPlayerPosition" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The name of the vector parameter to set to the player position inside the Material Parameter Collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDitherMinimum_MetaData[] = {
		{ "Category", "UGC Camera Dithering" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// The minimum value of the material's Opacity when dithered.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The minimum value of the material's Opacity when dithered." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitherInSpeed_MetaData[] = {
		{ "Category", "UGC Camera Dithering" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Controls the speed of the blend when starting to dither an object.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Controls the speed of the blend when starting to dither an object." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitherOutSpeed_MetaData[] = {
		{ "Category", "UGC Camera Dithering" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Controls the speed of the blend when finishing to dither an object.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Controls the speed of the blend when finishing to dither an object." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreDitheringTag_MetaData[] = {
		{ "Category", "UGC Camera Dithering" },
		{ "Comment", "// Actors with this tag will not be dithered even if they overlap DitherLOSChannel and DitherOverlapChannel.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Actors with this tag will not be dithered even if they overlap DitherLOSChannel and DitherOverlapChannel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDitherChildActors_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions" },
		{ "Comment", "// Whether we should dither the child actors attached to the obstacle.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether we should dither the child actors attached to the obstacle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDitherAttachedComponents_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions" },
		{ "Comment", "// Whether we should dither the components attached to the obstacle.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether we should dither the components attached to the obstacle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDitherLineOfSight_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Line Of Sight" },
		{ "Comment", "// Whether we should dither objects that block the LINE OF SIGHT of the camera.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether we should dither objects that block the LINE OF SIGHT of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitherLOSChannel_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Line Of Sight" },
		{ "Comment", "// The collision channel to use when checking for what the LINE OF SIGHT of the camera is colliding with. The other objects have to Overlap this channel in order to be dithered!\n" },
		{ "EditCondition", "bDitherLineOfSight" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The collision channel to use when checking for what the LINE OF SIGHT of the camera is colliding with. The other objects have to Overlap this channel in order to be dithered!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOSProbeSize_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Line Of Sight" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// The width of the probe when testing if any object is blocking the LINE OF SIGHT from the player to the camera. The other objects have to Overlap this channel in order to be dithered!\n" },
		{ "EditCondition", "bDitherLineOfSight" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The width of the probe when testing if any object is blocking the LINE OF SIGHT from the player to the camera. The other objects have to Overlap this channel in order to be dithered!" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTimeThreshold_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Line Of Sight" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// The minimum amount of time the camera LINE OF SIGHT has to collide with an object for it to be dithered.\n" },
		{ "EditCondition", "bDitherLineOfSight" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The minimum amount of time the camera LINE OF SIGHT has to collide with an object for it to be dithered." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDitherOverlaps_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Overlaps" },
		{ "Comment", "// Whether we should dither objects that OVERLAP the actual camera component.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether we should dither objects that OVERLAP the actual camera component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDitherOwner_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Overlaps" },
		{ "Comment", "// Whether we should dither the owner character when the actual camera overlaps with them.\n" },
		{ "EditCondition", "bDitherOverlaps" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Whether we should dither the owner character when the actual camera overlaps with them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitherOverlapChannel_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Overlaps" },
		{ "Comment", "// The collision channel to use when checking for what the actual camera is overlapping with. The other objects have to Overlap this channel in order to be dithered!\n" },
		{ "EditCondition", "bDitherOverlaps" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The collision channel to use when checking for what the actual camera is overlapping with. The other objects have to Overlap this channel in order to be dithered!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRadius_MetaData[] = {
		{ "Category", "UGC Camera Dithering|Collisions|Overlaps" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// The radius around the camera where we check for collisions.\n" },
		{ "EditCondition", "bDitherOverlaps" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The radius around the camera where we check for collisions." },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialOpacityParameterName;
	static void NewProp_bUpdateMaterialPlayerPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMaterialPlayerPosition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialPlayerPositionParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialDitherMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DitherInSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DitherOutSpeed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoreDitheringTag;
	static void NewProp_bDitherChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherChildActors;
	static void NewProp_bDitherAttachedComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherAttachedComponents;
	static void NewProp_bDitherLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherLineOfSight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DitherLOSChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOSProbeSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionTimeThreshold;
	static void NewProp_bDitherOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherOverlaps;
	static void NewProp_bDitherOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherOwner;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DitherOverlapChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraDitheringSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_MaterialOpacityParameterName = { "MaterialOpacityParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, MaterialOpacityParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOpacityParameterName_MetaData), NewProp_MaterialOpacityParameterName_MetaData) };
void Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bUpdateMaterialPlayerPosition_SetBit(void* Obj)
{
	((FCameraDitheringSettings*)Obj)->bUpdateMaterialPlayerPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bUpdateMaterialPlayerPosition = { "bUpdateMaterialPlayerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraDitheringSettings), &Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bUpdateMaterialPlayerPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateMaterialPlayerPosition_MetaData), NewProp_bUpdateMaterialPlayerPosition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_MaterialPlayerPositionParameterName = { "MaterialPlayerPositionParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, MaterialPlayerPositionParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPlayerPositionParameterName_MetaData), NewProp_MaterialPlayerPositionParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_MaterialDitherMinimum = { "MaterialDitherMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, MaterialDitherMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDitherMinimum_MetaData), NewProp_MaterialDitherMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherInSpeed = { "DitherInSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, DitherInSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitherInSpeed_MetaData), NewProp_DitherInSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherOutSpeed = { "DitherOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, DitherOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitherOutSpeed_MetaData), NewProp_DitherOutSpeed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_IgnoreDitheringTag = { "IgnoreDitheringTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, IgnoreDitheringTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreDitheringTag_MetaData), NewProp_IgnoreDitheringTag_MetaData) };
void Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherChildActors_SetBit(void* Obj)
{
	((FCameraDitheringSettings*)Obj)->bDitherChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherChildActors = { "bDitherChildActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraDitheringSettings), &Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDitherChildActors_MetaData), NewProp_bDitherChildActors_MetaData) };
void Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherAttachedComponents_SetBit(void* Obj)
{
	((FCameraDitheringSettings*)Obj)->bDitherAttachedComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherAttachedComponents = { "bDitherAttachedComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraDitheringSettings), &Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherAttachedComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDitherAttachedComponents_MetaData), NewProp_bDitherAttachedComponents_MetaData) };
void Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherLineOfSight_SetBit(void* Obj)
{
	((FCameraDitheringSettings*)Obj)->bDitherLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherLineOfSight = { "bDitherLineOfSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraDitheringSettings), &Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDitherLineOfSight_MetaData), NewProp_bDitherLineOfSight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherLOSChannel = { "DitherLOSChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, DitherLOSChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitherLOSChannel_MetaData), NewProp_DitherLOSChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_LOSProbeSize = { "LOSProbeSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, LOSProbeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOSProbeSize_MetaData), NewProp_LOSProbeSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_CollisionTimeThreshold = { "CollisionTimeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, CollisionTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTimeThreshold_MetaData), NewProp_CollisionTimeThreshold_MetaData) };
void Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOverlaps_SetBit(void* Obj)
{
	((FCameraDitheringSettings*)Obj)->bDitherOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOverlaps = { "bDitherOverlaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraDitheringSettings), &Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOverlaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDitherOverlaps_MetaData), NewProp_bDitherOverlaps_MetaData) };
void Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOwner_SetBit(void* Obj)
{
	((FCameraDitheringSettings*)Obj)->bDitherOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOwner = { "bDitherOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraDitheringSettings), &Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDitherOwner_MetaData), NewProp_bDitherOwner_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherOverlapChannel = { "DitherOverlapChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, DitherOverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitherOverlapChannel_MetaData), NewProp_DitherOverlapChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_SphereCollisionRadius = { "SphereCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraDitheringSettings, SphereCollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollisionRadius_MetaData), NewProp_SphereCollisionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_MaterialOpacityParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bUpdateMaterialPlayerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_MaterialPlayerPositionParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_MaterialDitherMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherInSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_IgnoreDitheringTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherChildActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherAttachedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherLOSChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_LOSProbeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_CollisionTimeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOverlaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_bDitherOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_DitherOverlapChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewProp_SphereCollisionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraDitheringSettings",
	Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::PropPointers),
	sizeof(FCameraDitheringSettings),
	alignof(FCameraDitheringSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraDitheringSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraDitheringSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraDitheringSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraDitheringSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraDitheringSettings ********************************************

// ********** Begin ScriptStruct FPenetrationAvoidanceFeeler ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler;
class UScriptStruct* FPenetrationAvoidanceFeeler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("PenetrationAvoidanceFeeler"));
	}
	return Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct defining a feeler ray used for camera penetration avoidance. The feeler uses sphere sweeps.\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Struct defining a feeler ray used for camera penetration avoidance. The feeler uses sphere sweeps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentRot_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "Comment", "// FRotator describing deviance from main ray.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "FRotator describing deviance from main ray." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// How much this feeler affects the final position if it hits the world.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "How much this feeler affects the final position if it hits the world." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// How much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all).\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "How much this feeler affects the final position if it hits a APawn (setting to 0 will not attempt to collide with pawns at all)." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeRadius_MetaData[] = {
		{ "Category", "PenetrationAvoidanceFeeler" },
		{ "Comment", "// The radius of this feeler probe.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The radius of this feeler probe." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustmentRot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PawnWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPenetrationAvoidanceFeeler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot = { "AdjustmentRot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceFeeler, AdjustmentRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustmentRot_MetaData), NewProp_AdjustmentRot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight = { "WorldWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceFeeler, WorldWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldWeight_MetaData), NewProp_WorldWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight = { "PawnWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceFeeler, PawnWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnWeight_MetaData), NewProp_PawnWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_ProbeRadius = { "ProbeRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceFeeler, ProbeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeRadius_MetaData), NewProp_ProbeRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_AdjustmentRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_WorldWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_PawnWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewProp_ProbeRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"PenetrationAvoidanceFeeler",
	Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::PropPointers),
	sizeof(FPenetrationAvoidanceFeeler),
	alignof(FPenetrationAvoidanceFeeler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler()
{
	if (!Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler.InnerSingleton, Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler.InnerSingleton;
}
// ********** End ScriptStruct FPenetrationAvoidanceFeeler *****************************************

// ********** Begin ScriptStruct FCameraCollisionSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraCollisionSettings;
class UScriptStruct* FCameraCollisionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraCollisionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraCollisionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraCollisionSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraCollisionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraCollisionSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera collision settings which define how the camera avoidance uses collision feelers or whiskers to avoid camera clipping through obstacles.\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Camera collision settings which define how the camera avoidance uses collision feelers or whiskers to avoid camera clipping through obstacles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendInTime_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/* The time the camera takes to go to the safe location after a collision has been detected. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The time the camera takes to go to the safe location after a collision has been detected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendOutTime_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/* The time the camera takes to go back to its normal position after the collision has finished. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The time the camera takes to go back to its normal position after the collision has finished." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventPenetration_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// If true, does collision checks to keep the camera out of the world.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "If true, does collision checks to keep the camera out of the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoPredictiveAvoidance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping.\n" },
		{ "EditCondition", "bPreventPenetration" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationAvoidanceFeelers_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * These are the feeler rays that are used to find where to place the camera.\n\x09 * Index: 0  : This is the normal feeler we use to prevent collisions.\n\x09 * Index: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player\n\x09 *             were to rotate towards that direction and primitively collide the camera so that it pulls in before\n\x09 *             impacting the occluder.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "These are the feeler rays that are used to find where to place the camera.\nIndex: 0  : This is the normal feeler we use to prevent collisions.\nIndex: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player\n            were to rotate towards that direction and primitively collide the camera so that it pulls in before\n            impacting the occluder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreCameraCollisionTag_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Actors with this tag will ignore camera collisions.\n" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Actors with this tag will ignore camera collisions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendOutTime;
	static void NewProp_bPreventPenetration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventPenetration;
	static void NewProp_bDoPredictiveAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPredictiveAvoidance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PenetrationAvoidanceFeelers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PenetrationAvoidanceFeelers;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoreCameraCollisionTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraCollisionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationBlendInTime = { "PenetrationBlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraCollisionSettings, PenetrationBlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationBlendInTime_MetaData), NewProp_PenetrationBlendInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationBlendOutTime = { "PenetrationBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraCollisionSettings, PenetrationBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationBlendOutTime_MetaData), NewProp_PenetrationBlendOutTime_MetaData) };
void Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bPreventPenetration_SetBit(void* Obj)
{
	((FCameraCollisionSettings*)Obj)->bPreventPenetration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bPreventPenetration = { "bPreventPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraCollisionSettings), &Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bPreventPenetration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventPenetration_MetaData), NewProp_bPreventPenetration_MetaData) };
void Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bDoPredictiveAvoidance_SetBit(void* Obj)
{
	((FCameraCollisionSettings*)Obj)->bDoPredictiveAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bDoPredictiveAvoidance = { "bDoPredictiveAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraCollisionSettings), &Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bDoPredictiveAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoPredictiveAvoidance_MetaData), NewProp_bDoPredictiveAvoidance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationAvoidanceFeelers_Inner = { "PenetrationAvoidanceFeelers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler, METADATA_PARAMS(0, nullptr) }; // 1557893221
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationAvoidanceFeelers = { "PenetrationAvoidanceFeelers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraCollisionSettings, PenetrationAvoidanceFeelers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationAvoidanceFeelers_MetaData), NewProp_PenetrationAvoidanceFeelers_MetaData) }; // 1557893221
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_IgnoreCameraCollisionTag = { "IgnoreCameraCollisionTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraCollisionSettings, IgnoreCameraCollisionTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreCameraCollisionTag_MetaData), NewProp_IgnoreCameraCollisionTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationBlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationBlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bPreventPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_bDoPredictiveAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationAvoidanceFeelers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_PenetrationAvoidanceFeelers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewProp_IgnoreCameraCollisionTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraCollisionSettings",
	Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::PropPointers),
	sizeof(FCameraCollisionSettings),
	alignof(FCameraCollisionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraCollisionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraCollisionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraCollisionSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraCollisionSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraCollisionSettings ********************************************

// ********** Begin ScriptStruct FCameraArmLagSettings *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraArmLagSettings;
class UScriptStruct* FCameraArmLagSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraArmLagSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraArmLagSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraArmLagSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("CameraArmLagSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraArmLagSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera settings for the spring arm component.\n */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Camera settings for the spring arm component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpringArmComponentSettings_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/**\n\x09* If true, these settings will be used and the settings authored directly in the spring arm will be ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "If true, these settings will be used and the settings authored directly in the spring arm will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLag_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/**\n\x09* If true, camera lags behind target position to smooth its movement.\n\x09* @see CameraLagSpeed\n\x09*/" },
		{ "editcondition", "bOverrideSpringArmComponentSettings" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "If true, camera lags behind target position to smooth its movement.\n@see CameraLagSpeed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraRotationLag_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/**\n\x09 * If true, camera lags behind target rotation to smooth its movement.\n\x09 * @see CameraRotationLagSpeed\n\x09 */" },
		{ "editcondition", "bOverrideSpringArmComponentSettings" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "If true, camera lags behind target rotation to smooth its movement.\n@see CameraRotationLagSpeed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If bEnableCameraLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag). */" },
		{ "editcondition", "bEnableCameraLag && bOverrideSpringArmComponentSettings" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "If bEnableCameraLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationLagSpeed_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If bEnableCameraRotationLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag). */" },
		{ "editcondition", "bEnableCameraRotationLag && bOverrideSpringArmComponentSettings" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "If bEnableCameraRotationLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxDistance_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Max distance the camera target may lag behind the current location. If set to zero, no max distance is enforced. */" },
		{ "editcondition", "bEnableCameraLag && bOverrideSpringArmComponentSettings" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Max distance the camera target may lag behind the current location. If set to zero, no max distance is enforced." },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideSpringArmComponentSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpringArmComponentSettings;
	static void NewProp_bEnableCameraLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLag;
	static void NewProp_bEnableCameraRotationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraRotationLag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraArmLagSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bOverrideSpringArmComponentSettings_SetBit(void* Obj)
{
	((FCameraArmLagSettings*)Obj)->bOverrideSpringArmComponentSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bOverrideSpringArmComponentSettings = { "bOverrideSpringArmComponentSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraArmLagSettings), &Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bOverrideSpringArmComponentSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpringArmComponentSettings_MetaData), NewProp_bOverrideSpringArmComponentSettings_MetaData) };
void Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraLag_SetBit(void* Obj)
{
	((FCameraArmLagSettings*)Obj)->bEnableCameraLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraLag = { "bEnableCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraArmLagSettings), &Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraLag_MetaData), NewProp_bEnableCameraLag_MetaData) };
void Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraRotationLag_SetBit(void* Obj)
{
	((FCameraArmLagSettings*)Obj)->bEnableCameraRotationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraRotationLag = { "bEnableCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraArmLagSettings), &Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraRotationLag_MetaData), NewProp_bEnableCameraRotationLag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmLagSettings, CameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData), NewProp_CameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_CameraRotationLagSpeed = { "CameraRotationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmLagSettings, CameraRotationLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationLagSpeed_MetaData), NewProp_CameraRotationLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_CameraLagMaxDistance = { "CameraLagMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraArmLagSettings, CameraLagMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagMaxDistance_MetaData), NewProp_CameraLagMaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bOverrideSpringArmComponentSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_bEnableCameraRotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_CameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_CameraRotationLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewProp_CameraLagMaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"CameraArmLagSettings",
	Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::PropPointers),
	sizeof(FCameraArmLagSettings),
	alignof(FCameraArmLagSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraArmLagSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraArmLagSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraArmLagSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraArmLagSettings.InnerSingleton;
}
// ********** End ScriptStruct FCameraArmLagSettings ***********************************************

// ********** Begin Class UUGC_CameraAddOnModifierSettings *****************************************
void UUGC_CameraAddOnModifierSettings::StaticRegisterNativesUUGC_CameraAddOnModifierSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings;
UClass* UUGC_CameraAddOnModifierSettings::GetPrivateStaticClass()
{
	using TClass = UUGC_CameraAddOnModifierSettings;
	if (!Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_CameraAddOnModifierSettings"),
			Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings.InnerSingleton,
			StaticRegisterNativesUUGC_CameraAddOnModifierSettings,
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
	return Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_NoRegister()
{
	return UUGC_CameraAddOnModifierSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UGC|Add On|Settings" },
		{ "Comment", "/**\n * Generic data class which holds settings for an associated Camera Add-On Modifier.\n */" },
		{ "IncludePath", "Camera/Data/UGC_CameraData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Generic data class which holds settings for an associated Camera Add-On Modifier." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_CameraAddOnModifierSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_Statics::ClassParams = {
	&UUGC_CameraAddOnModifierSettings::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_CameraAddOnModifierSettings()
{
	if (!Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings.OuterSingleton, Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings.OuterSingleton;
}
UUGC_CameraAddOnModifierSettings::UUGC_CameraAddOnModifierSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_CameraAddOnModifierSettings);
UUGC_CameraAddOnModifierSettings::~UUGC_CameraAddOnModifierSettings() {}
// ********** End Class UUGC_CameraAddOnModifierSettings *******************************************

// ********** Begin Class UUGC_CameraDataAssetBase *************************************************
void UUGC_CameraDataAssetBase::StaticRegisterNativesUUGC_CameraDataAssetBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_CameraDataAssetBase;
UClass* UUGC_CameraDataAssetBase::GetPrivateStaticClass()
{
	using TClass = UUGC_CameraDataAssetBase;
	if (!Z_Registration_Info_UClass_UUGC_CameraDataAssetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_CameraDataAssetBase"),
			Z_Registration_Info_UClass_UUGC_CameraDataAssetBase.InnerSingleton,
			StaticRegisterNativesUUGC_CameraDataAssetBase,
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
	return Z_Registration_Info_UClass_UUGC_CameraDataAssetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister()
{
	return UUGC_CameraDataAssetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Camera Data Asset holding all of the camera settings. */" },
		{ "IncludePath", "Camera/Data/UGC_CameraData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Camera Data Asset holding all of the camera settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthSettings_MetaData[] = {
		{ "Category", "Camera Arm" },
		{ "Comment", "/**\n\x09 * The settings of the camera Arm Length. Defines the range of the Arm Length and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n\x09 * This makes the Arm Length change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the camera Arm Length. Defines the range of the Arm Length and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\nThis makes the Arm Length change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVSettings_MetaData[] = {
		{ "Category", "Camera FOV" },
		{ "Comment", "/**\n\x09 * The settings of the camera FOV. Defines the range of the FOV and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\n\x09 * This makes the FOV change when the character is looking up/down (Used by many AAA games like GTA IV).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the camera FOV. Defines the range of the FOV and how to blend from one range to this one. This is used by the PitchToArmLengthAndFOV Camera Modifier in blueprint.\nThis makes the FOV change when the character is looking up/down (Used by many AAA games like GTA IV)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "CameraCollisions" },
		{ "Comment", "/** Camera collision settings which define how the camera avoidance uses collision feelers or whiskers to avoid camera clipping through obstacles. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Camera collision settings which define how the camera avoidance uses collision feelers or whiskers to avoid camera clipping through obstacles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitheringSettings_MetaData[] = {
		{ "Category", "Camera Dithering" },
		{ "Comment", "/** Dithering settings used to dither/hide/fade objects colliding with the camera either occluding the line of sight to the player or overlapping the camera directly. */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Dithering settings used to dither/hide/fade objects colliding with the camera either occluding the line of sight to the player or overlapping the camera directly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchFollowSettings_MetaData[] = {
		{ "Category", "Camera Movement Follow|Pitch" },
		{ "Comment", "/**\n\x09 * The settings of the camera pitch follow. This is useful for player who don't like to control the camera too much.\n\x09 * The PitchFollowModifier in blueprint will adjust the pitch to face slopes, falling and reset the pitch if it's left untouched for long enough.\n\x09 * (Used by AAA games like Red Dead Redemption, Hogwarts Legacy, Witcher, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the camera pitch follow. This is useful for player who don't like to control the camera too much.\nThe PitchFollowModifier in blueprint will adjust the pitch to face slopes, falling and reset the pitch if it's left untouched for long enough.\n(Used by AAA games like Red Dead Redemption, Hogwarts Legacy, Witcher, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawFollowSettings_MetaData[] = {
		{ "Category", "Camera Movement Follow|Yaw" },
		{ "Comment", "/**\n\x09 * The settings of the camera yaw follow. This is useful for player who don't like to control the camera too much.\n\x09 * The YawFollowModifier in blueprint will adjust the yaw to face the movement direction (Used by AAA games like Hogwarts Legacy, Witcher, etc).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the camera yaw follow. This is useful for player who don't like to control the camera too much.\nThe YawFollowModifier in blueprint will adjust the yaw to face the movement direction (Used by AAA games like Hogwarts Legacy, Witcher, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmOffsetSettings_MetaData[] = {
		{ "Category", "Camera Arm" },
		{ "Comment", "/** The settings of the camera Spring Arm Offset. Offset at the end of the spring arm. Use this instead of the relative world location so that the UE camera system works as exptected */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the camera Spring Arm Offset. Offset at the end of the spring arm. Use this instead of the relative world location so that the UE camera system works as exptected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchConstraints_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/**\n\x09 * The settings of the camera pitch contraints. This is useful to limit how much the character can look up/down. AAA games usually do not allow the entire 180 degrees range.\n\x09 * The looking input action needs to have a UGC_CameraSlowDownInputModifier for the camera to decelerate when close to the constraints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the camera pitch contraints. This is useful to limit how much the character can look up/down. AAA games usually do not allow the entire 180 degrees range.\nThe looking input action needs to have a UGC_CameraSlowDownInputModifier for the camera to decelerate when close to the constraints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawConstraints_MetaData[] = {
		{ "Category", "Camera Angle Constraints" },
		{ "Comment", "/**\n\x09 * The settings of the camera yaw contraints. This is useful to limit how much the character can look left/right.\n\x09 *  The looking input action needs to have a UGC_CameraSlowDownInputModifier for the camera to decelerate when close to the constraints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the camera yaw contraints. This is useful to limit how much the character can look left/right.\n The looking input action needs to have a UGC_CameraSlowDownInputModifier for the camera to decelerate when close to the constraints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[] = {
		{ "Category", "CameraFocus" },
		{ "Comment", "/**\n\x09 * The settings of the focus camera. This is used for hard-lock in games.\n\x09 * Has a function which retrieves the target we want the camera to look at. (Uses the Strategy Design Pattern)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "The settings of the focus camera. This is used for hard-lock in games.\nHas a function which retrieves the target we want the camera to look at. (Uses the Strategy Design Pattern)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchToArmAndFOVCurveSettings_MetaData[] = {
		{ "Category", "PitchToArmLengthAndFOVCurv" },
		{ "Comment", "/** This makes the Arm Length and FOV change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.). */" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "This makes the Arm Length and FOV change when the character is looking up/down (Used by many AAA games like all GTA games, Red Dead Redemption Assassin's Creed, Hogwarts Legacy, etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLagSettings_MetaData[] = {
		{ "Category", "Camera Arm" },
		{ "Comment", "/** Arm lag settings of the camera. Need to be enabled by checking `bOverrideSpringArmComponentSettings`, otherwise the settings of the component are used instead. **/" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "ToolTip", "Arm lag settings of the camera. Need to be enabled by checking `bOverrideSpringArmComponentSettings`, otherwise the settings of the component are used instead. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddOnsSettings_Inner_MetaData[] = {
		{ "Category", "Add Ons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddOnsSettings_MetaData[] = {
		{ "Category", "Add Ons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/Data/UGC_CameraData.h" },
		{ "MultiLine", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmLengthSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FOVSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DitheringSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchFollowSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawFollowSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmOffsetSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchConstraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawConstraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchToArmAndFOVCurveSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmLagSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddOnsSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddOnsSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_CameraDataAssetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_ArmLengthSettings = { "ArmLengthSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, ArmLengthSettings), Z_Construct_UScriptStruct_FCameraArmLengthSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLengthSettings_MetaData), NewProp_ArmLengthSettings_MetaData) }; // 3929232046
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_FOVSettings = { "FOVSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, FOVSettings), Z_Construct_UScriptStruct_FCameraFOVSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVSettings_MetaData), NewProp_FOVSettings_MetaData) }; // 2734127627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, CollisionSettings), Z_Construct_UScriptStruct_FCameraCollisionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSettings_MetaData), NewProp_CollisionSettings_MetaData) }; // 2557835934
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_DitheringSettings = { "DitheringSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, DitheringSettings), Z_Construct_UScriptStruct_FCameraDitheringSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitheringSettings_MetaData), NewProp_DitheringSettings_MetaData) }; // 3280089371
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_PitchFollowSettings = { "PitchFollowSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, PitchFollowSettings), Z_Construct_UScriptStruct_FCameraPitchFollowSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchFollowSettings_MetaData), NewProp_PitchFollowSettings_MetaData) }; // 1851837920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_YawFollowSettings = { "YawFollowSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, YawFollowSettings), Z_Construct_UScriptStruct_FCameraYawFollowSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawFollowSettings_MetaData), NewProp_YawFollowSettings_MetaData) }; // 2236395756
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_ArmOffsetSettings = { "ArmOffsetSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, ArmOffsetSettings), Z_Construct_UScriptStruct_FCameraArmOffsetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmOffsetSettings_MetaData), NewProp_ArmOffsetSettings_MetaData) }; // 267987153
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_PitchConstraints = { "PitchConstraints", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, PitchConstraints), Z_Construct_UScriptStruct_FCameraPitchConstraintSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchConstraints_MetaData), NewProp_PitchConstraints_MetaData) }; // 2200028219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_YawConstraints = { "YawConstraints", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, YawConstraints), Z_Construct_UScriptStruct_FCameraYawConstraintSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawConstraints_MetaData), NewProp_YawConstraints_MetaData) }; // 2623398619
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010008000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, FocusSettings), Z_Construct_UScriptStruct_FUGCCameraFocusSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusSettings_MetaData), NewProp_FocusSettings_MetaData) }; // 2372141275
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_PitchToArmAndFOVCurveSettings = { "PitchToArmAndFOVCurveSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, PitchToArmAndFOVCurveSettings), Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchToArmAndFOVCurveSettings_MetaData), NewProp_PitchToArmAndFOVCurveSettings_MetaData) }; // 3756840739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_ArmLagSettings = { "ArmLagSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, ArmLagSettings), Z_Construct_UScriptStruct_FCameraArmLagSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLagSettings_MetaData), NewProp_ArmLagSettings_MetaData) }; // 464697431
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_AddOnsSettings_Inner = { "AddOnsSettings", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUGC_CameraAddOnModifierSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddOnsSettings_Inner_MetaData), NewProp_AddOnsSettings_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_AddOnsSettings = { "AddOnsSettings", nullptr, (EPropertyFlags)0x011400800001000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraDataAssetBase, AddOnsSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddOnsSettings_MetaData), NewProp_AddOnsSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_ArmLengthSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_FOVSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_CollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_DitheringSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_PitchFollowSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_YawFollowSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_ArmOffsetSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_PitchConstraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_YawConstraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_FocusSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_PitchToArmAndFOVCurveSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_ArmLagSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_AddOnsSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::NewProp_AddOnsSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::ClassParams = {
	&UUGC_CameraDataAssetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_CameraDataAssetBase()
{
	if (!Z_Registration_Info_UClass_UUGC_CameraDataAssetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_CameraDataAssetBase.OuterSingleton, Z_Construct_UClass_UUGC_CameraDataAssetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_CameraDataAssetBase.OuterSingleton;
}
UUGC_CameraDataAssetBase::UUGC_CameraDataAssetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_CameraDataAssetBase);
UUGC_CameraDataAssetBase::~UUGC_CameraDataAssetBase() {}
// ********** End Class UUGC_CameraDataAssetBase ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Data_UGC_CameraData_h__Script_AuroraDevs_UGC_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraYawFollowSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraYawFollowSettings_Statics::NewStructOps, TEXT("CameraYawFollowSettings"), &Z_Registration_Info_UScriptStruct_FCameraYawFollowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraYawFollowSettings), 2236395756U) },
		{ FCameraPitchFollowSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraPitchFollowSettings_Statics::NewStructOps, TEXT("CameraPitchFollowSettings"), &Z_Registration_Info_UScriptStruct_FCameraPitchFollowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraPitchFollowSettings), 1851837920U) },
		{ FCameraArmOffsetSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraArmOffsetSettings_Statics::NewStructOps, TEXT("CameraArmOffsetSettings"), &Z_Registration_Info_UScriptStruct_FCameraArmOffsetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraArmOffsetSettings), 267987153U) },
		{ FCameraPitchToArmAndFOVCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings_Statics::NewStructOps, TEXT("CameraPitchToArmAndFOVCurveSettings"), &Z_Registration_Info_UScriptStruct_FCameraPitchToArmAndFOVCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraPitchToArmAndFOVCurveSettings), 3756840739U) },
		{ FCameraArmLengthSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraArmLengthSettings_Statics::NewStructOps, TEXT("CameraArmLengthSettings"), &Z_Registration_Info_UScriptStruct_FCameraArmLengthSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraArmLengthSettings), 3929232046U) },
		{ FCameraFOVSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraFOVSettings_Statics::NewStructOps, TEXT("CameraFOVSettings"), &Z_Registration_Info_UScriptStruct_FCameraFOVSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFOVSettings), 2734127627U) },
		{ FCameraYawConstraintSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraYawConstraintSettings_Statics::NewStructOps, TEXT("CameraYawConstraintSettings"), &Z_Registration_Info_UScriptStruct_FCameraYawConstraintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraYawConstraintSettings), 2623398619U) },
		{ FCameraPitchConstraintSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraPitchConstraintSettings_Statics::NewStructOps, TEXT("CameraPitchConstraintSettings"), &Z_Registration_Info_UScriptStruct_FCameraPitchConstraintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraPitchConstraintSettings), 2200028219U) },
		{ FUGCCameraFocusSettings::StaticStruct, Z_Construct_UScriptStruct_FUGCCameraFocusSettings_Statics::NewStructOps, TEXT("UGCCameraFocusSettings"), &Z_Registration_Info_UScriptStruct_FUGCCameraFocusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGCCameraFocusSettings), 2372141275U) },
		{ FUGCCameraSettingsWithGetActorsMethod::StaticStruct, Z_Construct_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod_Statics::NewStructOps, TEXT("UGCCameraSettingsWithGetActorsMethod"), &Z_Registration_Info_UScriptStruct_FUGCCameraSettingsWithGetActorsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGCCameraSettingsWithGetActorsMethod), 2398732839U) },
		{ FCameraDitheringSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraDitheringSettings_Statics::NewStructOps, TEXT("CameraDitheringSettings"), &Z_Registration_Info_UScriptStruct_FCameraDitheringSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraDitheringSettings), 3280089371U) },
		{ FPenetrationAvoidanceFeeler::StaticStruct, Z_Construct_UScriptStruct_FPenetrationAvoidanceFeeler_Statics::NewStructOps, TEXT("PenetrationAvoidanceFeeler"), &Z_Registration_Info_UScriptStruct_FPenetrationAvoidanceFeeler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPenetrationAvoidanceFeeler), 1557893221U) },
		{ FCameraCollisionSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraCollisionSettings_Statics::NewStructOps, TEXT("CameraCollisionSettings"), &Z_Registration_Info_UScriptStruct_FCameraCollisionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraCollisionSettings), 2557835934U) },
		{ FCameraArmLagSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraArmLagSettings_Statics::NewStructOps, TEXT("CameraArmLagSettings"), &Z_Registration_Info_UScriptStruct_FCameraArmLagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraArmLagSettings), 464697431U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGC_CameraAddOnModifierSettings, UUGC_CameraAddOnModifierSettings::StaticClass, TEXT("UUGC_CameraAddOnModifierSettings"), &Z_Registration_Info_UClass_UUGC_CameraAddOnModifierSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_CameraAddOnModifierSettings), 1469273086U) },
		{ Z_Construct_UClass_UUGC_CameraDataAssetBase, UUGC_CameraDataAssetBase::StaticClass, TEXT("UUGC_CameraDataAssetBase"), &Z_Registration_Info_UClass_UUGC_CameraDataAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_CameraDataAssetBase), 1173461167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Data_UGC_CameraData_h__Script_AuroraDevs_UGC_2473679081(TEXT("/Script/AuroraDevs_UGC"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Data_UGC_CameraData_h__Script_AuroraDevs_UGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Data_UGC_CameraData_h__Script_AuroraDevs_UGC_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Data_UGC_CameraData_h__Script_AuroraDevs_UGC_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Data_UGC_CameraData_h__Script_AuroraDevs_UGC_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
