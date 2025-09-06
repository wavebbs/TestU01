// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/Modifiers/UGC_CameraAnimationModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUGC_CameraAnimationModifier() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_UGC_API UClass* Z_Construct_UClass_AUGC_PlayerCameraManager_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAnimationModifier();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAnimationModifier_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraCollisionModifier_NoRegister();
AURORADEVS_UGC_API UEnum* Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FUGCActiveAnimationInfo();
ENGINECAMERAS_API UClass* Z_Construct_UClass_UCameraAnimationCameraModifier();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_UGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECameraAnimationResetType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAnimationResetType;
static UEnum* ECameraAnimationResetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraAnimationResetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraAnimationResetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("ECameraAnimationResetType"));
	}
	return Z_Registration_Info_UEnum_ECameraAnimationResetType.OuterSingleton;
}
template<> AURORADEVS_UGC_API UEnum* StaticEnum<ECameraAnimationResetType>()
{
	return ECameraAnimationResetType_StaticEnum();
}
struct Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BackToStart.Name", "ECameraAnimationResetType::BackToStart" },
		{ "BackToStart.ToolTip", "The camera will go back to the position it started from." },
		{ "ContinueFromEnd.Name", "ECameraAnimationResetType::ContinueFromEnd" },
		{ "ContinueFromEnd.ToolTip", "The camera will blend out from the last position of the animation." },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ResetToZero.Name", "ECameraAnimationResetType::ResetToZero" },
		{ "ResetToZero.ToolTip", "The camera's orientation will be reset to zero. This is usually the back of the character. If UseControllerRotationYaw is true, this is forcefully used." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraAnimationResetType::BackToStart", (int64)ECameraAnimationResetType::BackToStart },
		{ "ECameraAnimationResetType::ResetToZero", (int64)ECameraAnimationResetType::ResetToZero },
		{ "ECameraAnimationResetType::ContinueFromEnd", (int64)ECameraAnimationResetType::ContinueFromEnd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	"ECameraAnimationResetType",
	"ECameraAnimationResetType",
	Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType()
{
	if (!Z_Registration_Info_UEnum_ECameraAnimationResetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAnimationResetType.InnerSingleton, Z_Construct_UEnum_AuroraDevs_UGC_ECameraAnimationResetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraAnimationResetType.InnerSingleton;
}
// ********** End Enum ECameraAnimationResetType ***************************************************

// ********** Begin ScriptStruct FUGCActiveAnimationInfo *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo;
class UScriptStruct* FUGCActiveAnimationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCActiveAnimationInfo, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_UGC(), TEXT("UGCActiveAnimationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUGCActiveAnimationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCActiveAnimationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCActiveAnimationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
	nullptr,
	&NewStructOps,
	"UGCActiveAnimationInfo",
	nullptr,
	0,
	sizeof(FUGCActiveAnimationInfo),
	alignof(FUGCActiveAnimationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCActiveAnimationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUGCActiveAnimationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUGCActiveAnimationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo.InnerSingleton, Z_Construct_UScriptStruct_FUGCActiveAnimationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo.InnerSingleton;
}
// ********** End ScriptStruct FUGCActiveAnimationInfo *********************************************

// ********** Begin Class UUGC_CameraAnimationModifier Function GetCurrentCameraAnimations *********
struct Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics
{
	struct UGC_CameraAnimationModifier_eventGetCurrentCameraAnimations_Parms
	{
		TArray<UCameraAnimationSequence*> OutAnimations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Modifiers|Camera Animations" },
		{ "Comment", "/**\n     * Get the current camera animation playing on this modifier.\n     * @return      The current camera animation playing.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ToolTip", "Get the current camera animation playing on this modifier.\n@return      The current camera animation playing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAnimations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnimations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::NewProp_OutAnimations_Inner = { "OutAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::NewProp_OutAnimations = { "OutAnimations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_CameraAnimationModifier_eventGetCurrentCameraAnimations_Parms, OutAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::NewProp_OutAnimations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::NewProp_OutAnimations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC_CameraAnimationModifier, nullptr, "GetCurrentCameraAnimations", Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::UGC_CameraAnimationModifier_eventGetCurrentCameraAnimations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::UGC_CameraAnimationModifier_eventGetCurrentCameraAnimations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC_CameraAnimationModifier::execGetCurrentCameraAnimations)
{
	P_GET_TARRAY_REF(UCameraAnimationSequence*,Z_Param_Out_OutAnimations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentCameraAnimations(Z_Param_Out_OutAnimations);
	P_NATIVE_END;
}
// ********** End Class UUGC_CameraAnimationModifier Function GetCurrentCameraAnimations ***********

// ********** Begin Class UUGC_CameraAnimationModifier Function IsAnyCameraAnimationSequence *******
struct Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics
{
	struct UGC_CameraAnimationModifier_eventIsAnyCameraAnimationSequence_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Modifiers|Camera Animations" },
		{ "Comment", "/**\n     * Returns whether any camera animation is playing on this modifier.\n     * @param Sequence      The Camera Animation Sequence.\n     * @return              Whether any camera animation is playing or not.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ToolTip", "Returns whether any camera animation is playing on this modifier.\n@param Sequence      The Camera Animation Sequence.\n@return              Whether any camera animation is playing or not." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_CameraAnimationModifier_eventIsAnyCameraAnimationSequence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_CameraAnimationModifier_eventIsAnyCameraAnimationSequence_Parms), &Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC_CameraAnimationModifier, nullptr, "IsAnyCameraAnimationSequence", Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::UGC_CameraAnimationModifier_eventIsAnyCameraAnimationSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::UGC_CameraAnimationModifier_eventIsAnyCameraAnimationSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC_CameraAnimationModifier::execIsAnyCameraAnimationSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnyCameraAnimationSequence();
	P_NATIVE_END;
}
// ********** End Class UUGC_CameraAnimationModifier Function IsAnyCameraAnimationSequence *********

// ********** Begin Class UUGC_CameraAnimationModifier Function IsCameraAnimationSequenceActive ****
struct Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics
{
	struct UGC_CameraAnimationModifier_eventIsCameraAnimationSequenceActive_Parms
	{
		UCameraAnimationSequence* Sequence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Modifiers|Camera Animations" },
		{ "Comment", "/**\n     * Returns whether the given camera animation is playing on this modifier.\n     * @param Sequence      The Camera Animation Sequence.\n     * @return              Whether the corresponding camera animation is playing or not.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ToolTip", "Returns whether the given camera animation is playing on this modifier.\n@param Sequence      The Camera Animation Sequence.\n@return              Whether the corresponding camera animation is playing or not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_CameraAnimationModifier_eventIsCameraAnimationSequenceActive_Parms, Sequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_CameraAnimationModifier_eventIsCameraAnimationSequenceActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_CameraAnimationModifier_eventIsCameraAnimationSequenceActive_Parms), &Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC_CameraAnimationModifier, nullptr, "IsCameraAnimationSequenceActive", Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::UGC_CameraAnimationModifier_eventIsCameraAnimationSequenceActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::UGC_CameraAnimationModifier_eventIsCameraAnimationSequenceActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC_CameraAnimationModifier::execIsCameraAnimationSequenceActive)
{
	P_GET_OBJECT(UCameraAnimationSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraAnimationSequenceActive(Z_Param_Sequence);
	P_NATIVE_END;
}
// ********** End Class UUGC_CameraAnimationModifier Function IsCameraAnimationSequenceActive ******

// ********** Begin Class UUGC_CameraAnimationModifier Function StopCameraAnimationSequence ********
struct Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics
{
	struct UGC_CameraAnimationModifier_eventStopCameraAnimationSequence_Parms
	{
		UCameraAnimationSequence* Sequence;
		bool bImmediate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Modifiers|Camera Animation" },
		{ "Comment", "/**\n     * Stops the given camera animation sequence. If nullptr, will stop whatever is currently active.\n     * @param Sequence        The camera sequence animation.\n     * @param bImmediate\x09True to stop it right now and ignore blend out, false to let it blend out as indicated.\n     */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ToolTip", "Stops the given camera animation sequence. If nullptr, will stop whatever is currently active.\n@param Sequence        The camera sequence animation.\n@param bImmediate       True to stop it right now and ignore blend out, false to let it blend out as indicated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_bImmediate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_CameraAnimationModifier_eventStopCameraAnimationSequence_Parms, Sequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::NewProp_bImmediate_SetBit(void* Obj)
{
	((UGC_CameraAnimationModifier_eventStopCameraAnimationSequence_Parms*)Obj)->bImmediate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_CameraAnimationModifier_eventStopCameraAnimationSequence_Parms), &Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::NewProp_bImmediate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC_CameraAnimationModifier, nullptr, "StopCameraAnimationSequence", Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::UGC_CameraAnimationModifier_eventStopCameraAnimationSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::UGC_CameraAnimationModifier_eventStopCameraAnimationSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC_CameraAnimationModifier::execStopCameraAnimationSequence)
{
	P_GET_OBJECT(UCameraAnimationSequence,Z_Param_Sequence);
	P_GET_UBOOL(Z_Param_bImmediate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCameraAnimationSequence(Z_Param_Sequence,Z_Param_bImmediate);
	P_NATIVE_END;
}
// ********** End Class UUGC_CameraAnimationModifier Function StopCameraAnimationSequence **********

// ********** Begin Class UUGC_CameraAnimationModifier *********************************************
void UUGC_CameraAnimationModifier::StaticRegisterNativesUUGC_CameraAnimationModifier()
{
	UClass* Class = UUGC_CameraAnimationModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentCameraAnimations", &UUGC_CameraAnimationModifier::execGetCurrentCameraAnimations },
		{ "IsAnyCameraAnimationSequence", &UUGC_CameraAnimationModifier::execIsAnyCameraAnimationSequence },
		{ "IsCameraAnimationSequenceActive", &UUGC_CameraAnimationModifier::execIsCameraAnimationSequenceActive },
		{ "StopCameraAnimationSequence", &UUGC_CameraAnimationModifier::execStopCameraAnimationSequence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC_CameraAnimationModifier;
UClass* UUGC_CameraAnimationModifier::GetPrivateStaticClass()
{
	using TClass = UUGC_CameraAnimationModifier;
	if (!Z_Registration_Info_UClass_UUGC_CameraAnimationModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_CameraAnimationModifier"),
			Z_Registration_Info_UClass_UUGC_CameraAnimationModifier.InnerSingleton,
			StaticRegisterNativesUUGC_CameraAnimationModifier,
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
	return Z_Registration_Info_UClass_UUGC_CameraAnimationModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_CameraAnimationModifier_NoRegister()
{
	return UUGC_CameraAnimationModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UGC Camera Modifiers" },
		{ "Comment", "/**\n * Gameplay Camera Animation Modifier which plays in the correct transform space in rgeards to the owning player.\n */" },
		{ "IncludePath", "Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ToolTip", "Gameplay Camera Animation Modifier which plays in the correct transform space in rgeards to the owning player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionModifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCAnimInfo_MetaData[] = {
		{ "Comment", "/** How should the camera behave after the current animation is over. */" },
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
		{ "ToolTip", "How should the camera behave after the current animation is over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Camera/Modifiers/UGC_CameraAnimationModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UGCCameraManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionModifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCAnimInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UGCAnimInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGC_CameraAnimationModifier_GetCurrentCameraAnimations, "GetCurrentCameraAnimations" }, // 3860381502
		{ &Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsAnyCameraAnimationSequence, "IsAnyCameraAnimationSequence" }, // 2027163537
		{ &Z_Construct_UFunction_UUGC_CameraAnimationModifier_IsCameraAnimationSequenceActive, "IsCameraAnimationSequenceActive" }, // 2681744934
		{ &Z_Construct_UFunction_UUGC_CameraAnimationModifier_StopCameraAnimationSequence, "StopCameraAnimationSequence" }, // 4271527791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC_CameraAnimationModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_UGCCameraManager = { "UGCCameraManager", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraAnimationModifier, UGCCameraManager), Z_Construct_UClass_AUGC_PlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCCameraManager_MetaData), NewProp_UGCCameraManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_CollisionModifier = { "CollisionModifier", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraAnimationModifier, CollisionModifier), Z_Construct_UClass_UUGC_CameraCollisionModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionModifier_MetaData), NewProp_CollisionModifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_UGCAnimInfo_Inner = { "UGCAnimInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUGCActiveAnimationInfo, METADATA_PARAMS(0, nullptr) }; // 725063780
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_UGCAnimInfo = { "UGCAnimInfo", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraAnimationModifier, UGCAnimInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCAnimInfo_MetaData), NewProp_UGCAnimInfo_MetaData) }; // 725063780
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_LastIndex = { "LastIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC_CameraAnimationModifier, LastIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastIndex_MetaData), NewProp_LastIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_UGCCameraManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_CollisionModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_UGCAnimInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_UGCAnimInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::NewProp_LastIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraAnimationCameraModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::ClassParams = {
	&UUGC_CameraAnimationModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUGC_CameraAnimationModifier()
{
	if (!Z_Registration_Info_UClass_UUGC_CameraAnimationModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC_CameraAnimationModifier.OuterSingleton, Z_Construct_UClass_UUGC_CameraAnimationModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC_CameraAnimationModifier.OuterSingleton;
}
UUGC_CameraAnimationModifier::UUGC_CameraAnimationModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC_CameraAnimationModifier);
UUGC_CameraAnimationModifier::~UUGC_CameraAnimationModifier() {}
// ********** End Class UUGC_CameraAnimationModifier ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraAnimationResetType_StaticEnum, TEXT("ECameraAnimationResetType"), &Z_Registration_Info_UEnum_ECameraAnimationResetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1293159519U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUGCActiveAnimationInfo::StaticStruct, Z_Construct_UScriptStruct_FUGCActiveAnimationInfo_Statics::NewStructOps, TEXT("UGCActiveAnimationInfo"), &Z_Registration_Info_UScriptStruct_FUGCActiveAnimationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGCActiveAnimationInfo), 725063780U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGC_CameraAnimationModifier, UUGC_CameraAnimationModifier::StaticClass, TEXT("UUGC_CameraAnimationModifier"), &Z_Registration_Info_UClass_UUGC_CameraAnimationModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC_CameraAnimationModifier), 2419961393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_1628898768(TEXT("/Script/AuroraDevs_UGC"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_Modifiers_UGC_CameraAnimationModifier_h__Script_AuroraDevs_UGC_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
