// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/UGC_PlayerCameraManager.h"
#include "Camera/Modifiers/UGC_PlayCameraAnimCallbackProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUGC_PlayerCameraManager() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_UGC_API UClass* Z_Construct_UClass_AUGC_PlayerCameraManager();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_AUGC_PlayerCameraManager_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraAddOnModifier_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister();
AURORADEVS_UGC_API UClass* Z_Construct_UClass_UUGC_CameraModifier_NoRegister();
AURORADEVS_UGC_API UScriptStruct* Z_Construct_UScriptStruct_FUGCCameraAnimationParams();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_UGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUGC_PlayerCameraManager Function ComputeOwnerFloorDist ******************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics
{
	struct UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms
	{
		float SweepDistance;
		float CapsuleRadius;
		bool bOutFloorExists;
		float OutFloorDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Movement" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static void NewProp_bOutFloorExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutFloorExists;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFloorDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_SweepDistance = { "SweepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms, SweepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms, CapsuleRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_bOutFloorExists_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms*)Obj)->bOutFloorExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_bOutFloorExists = { "bOutFloorExists", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_bOutFloorExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_OutFloorDistance = { "OutFloorDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms, OutFloorDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_SweepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_bOutFloorExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::NewProp_OutFloorDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ComputeOwnerFloorDist", Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::UGC_PlayerCameraManager_eventComputeOwnerFloorDist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execComputeOwnerFloorDist)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SweepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleRadius);
	P_GET_UBOOL_REF(Z_Param_Out_bOutFloorExists);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFloorDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeOwnerFloorDist(Z_Param_SweepDistance,Z_Param_CapsuleRadius,Z_Param_Out_bOutFloorExists,Z_Param_Out_OutFloorDistance);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ComputeOwnerFloorDist ********************

// ********** Begin Class AUGC_PlayerCameraManager Function ComputeOwnerFloorNormal ****************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics
{
	struct UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms
	{
		float SweepDistance;
		float CapsuleRadius;
		bool bOutFloorExists;
		FVector OutFloorNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Movement" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static void NewProp_bOutFloorExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutFloorExists;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFloorNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_SweepDistance = { "SweepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms, SweepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms, CapsuleRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_bOutFloorExists_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms*)Obj)->bOutFloorExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_bOutFloorExists = { "bOutFloorExists", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_bOutFloorExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_OutFloorNormal = { "OutFloorNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms, OutFloorNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_SweepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_bOutFloorExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::NewProp_OutFloorNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ComputeOwnerFloorNormal", Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::UGC_PlayerCameraManager_eventComputeOwnerFloorNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execComputeOwnerFloorNormal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SweepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleRadius);
	P_GET_UBOOL_REF(Z_Param_Out_bOutFloorExists);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutFloorNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeOwnerFloorNormal(Z_Param_SweepDistance,Z_Param_CapsuleRadius,Z_Param_Out_bOutFloorExists,Z_Param_Out_OutFloorNormal);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ComputeOwnerFloorNormal ******************

// ********** Begin Class AUGC_PlayerCameraManager Function ComputeOwnerLookAndMovementDot *********
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics
{
	struct UGC_PlayerCameraManager_eventComputeOwnerLookAndMovementDot_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Modifier|Movement" },
		{ "Comment", "/*\n     * Returns value betwen 1 (the character is looking where they're moving) or -1 (looking in the opposite direction they're moving).\n     * Will return 0 if the character isn't moving.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "* Returns value betwen 1 (the character is looking where they're moving) or -1 (looking in the opposite direction they're moving).\n* Will return 0 if the character isn't moving." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerLookAndMovementDot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ComputeOwnerLookAndMovementDot", Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::UGC_PlayerCameraManager_eventComputeOwnerLookAndMovementDot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::UGC_PlayerCameraManager_eventComputeOwnerLookAndMovementDot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execComputeOwnerLookAndMovementDot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ComputeOwnerLookAndMovementDot();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ComputeOwnerLookAndMovementDot ***********

// ********** Begin Class AUGC_PlayerCameraManager Function ComputeOwnerSlopeAngle *****************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics
{
	struct UGC_PlayerCameraManager_eventComputeOwnerSlopeAngle_Parms
	{
		float OutSlopePitchDegrees;
		float OutSlopeRollDegrees;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Modifier|Movement" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSlopePitchDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSlopeRollDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::NewProp_OutSlopePitchDegrees = { "OutSlopePitchDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerSlopeAngle_Parms, OutSlopePitchDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::NewProp_OutSlopeRollDegrees = { "OutSlopeRollDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventComputeOwnerSlopeAngle_Parms, OutSlopeRollDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::NewProp_OutSlopePitchDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::NewProp_OutSlopeRollDegrees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ComputeOwnerSlopeAngle", Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::UGC_PlayerCameraManager_eventComputeOwnerSlopeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::UGC_PlayerCameraManager_eventComputeOwnerSlopeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execComputeOwnerSlopeAngle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSlopePitchDegrees);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSlopeRollDegrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeOwnerSlopeAngle(Z_Param_Out_OutSlopePitchDegrees,Z_Param_Out_OutSlopeRollDegrees);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ComputeOwnerSlopeAngle *******************

// ********** Begin Class AUGC_PlayerCameraManager Function DrawDebugSpringArm *********************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics
{
	struct UGC_PlayerCameraManager_eventDrawDebugSpringArm_Parms
	{
		FVector CameraLocation;
		float Duration;
		FLinearColor SpringArmColor;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Debug" },
		{ "Comment", "/* Draw Spring Arm.\n    */" },
		{ "CPP_Default_SpringArmColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Draw Spring Arm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringArmColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawDebugSpringArm_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLocation_MetaData), NewProp_CameraLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawDebugSpringArm_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_SpringArmColor = { "SpringArmColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawDebugSpringArm_Parms, SpringArmColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawDebugSpringArm_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_CameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_SpringArmColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "DrawDebugSpringArm", Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::UGC_PlayerCameraManager_eventDrawDebugSpringArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::UGC_PlayerCameraManager_eventDrawDebugSpringArm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execDrawDebugSpringArm)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_STRUCT(FLinearColor,Z_Param_SpringArmColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugSpringArm(Z_Param_Out_CameraLocation,Z_Param_Duration,Z_Param_SpringArmColor,Z_Param_Thickness);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function DrawDebugSpringArm ***********************

// ********** Begin Class AUGC_PlayerCameraManager Function DrawGameDebugCamera ********************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics
{
	struct UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms
	{
		float Duration;
		bool bDrawCamera;
		FLinearColor CameraColor;
		bool bDrawSpringArm;
		FLinearColor SpringArmColor;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Debug" },
		{ "Comment", "/** Draw a debug camera shape at the character's attached camera's location, which can be different from the real camera.\n     * For example, camera animations use a different camera then the character's attached camera.\n     */" },
		{ "CPP_Default_bDrawCamera", "true" },
		{ "CPP_Default_bDrawSpringArm", "true" },
		{ "CPP_Default_CameraColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_SpringArmColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Draw a debug camera shape at the character's attached camera's location, which can be different from the real camera.\nFor example, camera animations use a different camera then the character's attached camera." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bDrawCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraColor;
	static void NewProp_bDrawSpringArm_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSpringArm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringArmColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawCamera_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms*)Obj)->bDrawCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawCamera = { "bDrawCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_CameraColor = { "CameraColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms, CameraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawSpringArm_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms*)Obj)->bDrawSpringArm = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawSpringArm = { "bDrawSpringArm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawSpringArm_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_SpringArmColor = { "SpringArmColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms, SpringArmColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_CameraColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_bDrawSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_SpringArmColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "DrawGameDebugCamera", Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::UGC_PlayerCameraManager_eventDrawGameDebugCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execDrawGameDebugCamera)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bDrawCamera);
	P_GET_STRUCT(FLinearColor,Z_Param_CameraColor);
	P_GET_UBOOL(Z_Param_bDrawSpringArm);
	P_GET_STRUCT(FLinearColor,Z_Param_SpringArmColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawGameDebugCamera(Z_Param_Duration,Z_Param_bDrawCamera,Z_Param_CameraColor,Z_Param_bDrawSpringArm,Z_Param_SpringArmColor,Z_Param_Thickness);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function DrawGameDebugCamera **********************

// ********** Begin Class AUGC_PlayerCameraManager Function DrawRealDebugCamera ********************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics
{
	struct UGC_PlayerCameraManager_eventDrawRealDebugCamera_Parms
	{
		float Duration;
		FLinearColor CameraColor;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Debug" },
		{ "Comment", "/** Draw a debug camera shape at the real camera's location, which can be different from the character's attached camera.\n     * For example, camera animations use a different camera then the character's attached camera.\n     */" },
		{ "CPP_Default_CameraColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Draw a debug camera shape at the real camera's location, which can be different from the character's attached camera.\nFor example, camera animations use a different camera then the character's attached camera." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawRealDebugCamera_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::NewProp_CameraColor = { "CameraColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawRealDebugCamera_Parms, CameraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventDrawRealDebugCamera_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::NewProp_CameraColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "DrawRealDebugCamera", Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::UGC_PlayerCameraManager_eventDrawRealDebugCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::UGC_PlayerCameraManager_eventDrawRealDebugCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execDrawRealDebugCamera)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_STRUCT(FLinearColor,Z_Param_CameraColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawRealDebugCamera(Z_Param_Duration,Z_Param_CameraColor,Z_Param_Thickness);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function DrawRealDebugCamera **********************

// ********** Begin Class AUGC_PlayerCameraManager Function FindCameraModifierOfClass **************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics
{
	struct UGC_PlayerCameraManager_eventFindCameraModifierOfClass_Parms
	{
		TSubclassOf<UCameraModifier> ModifierClass;
		bool bIncludeInherited;
		UCameraModifier* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/**\n     * Returns camera modifier for this camera of the given class, if it exists.\n     * Looks for inherited classes too. If there are multiple modifiers which fit, the first one is returned.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Returns camera modifier for this camera of the given class, if it exists.\nLooks for inherited classes too. If there are multiple modifiers which fit, the first one is returned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
	static void NewProp_bIncludeInherited_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInherited;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventFindCameraModifierOfClass_Parms, ModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_bIncludeInherited_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventFindCameraModifierOfClass_Parms*)Obj)->bIncludeInherited = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_bIncludeInherited = { "bIncludeInherited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventFindCameraModifierOfClass_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_bIncludeInherited_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventFindCameraModifierOfClass_Parms, ReturnValue), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_ModifierClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_bIncludeInherited,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "FindCameraModifierOfClass", Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::UGC_PlayerCameraManager_eventFindCameraModifierOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::UGC_PlayerCameraManager_eventFindCameraModifierOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execFindCameraModifierOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_ModifierClass);
	P_GET_UBOOL(Z_Param_bIncludeInherited);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraModifier**)Z_Param__Result=P_THIS->FindCameraModifierOfClass(Z_Param_ModifierClass,Z_Param_bIncludeInherited);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function FindCameraModifierOfClass ****************

// ********** Begin Class AUGC_PlayerCameraManager Function GetCurrentCameraDataAsset **************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics
{
	struct UGC_PlayerCameraManager_eventGetCurrentCameraDataAsset_Parms
	{
		UUGC_CameraDataAssetBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventGetCurrentCameraDataAsset_Parms, ReturnValue), Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "GetCurrentCameraDataAsset", Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::UGC_PlayerCameraManager_eventGetCurrentCameraDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::UGC_PlayerCameraManager_eventGetCurrentCameraDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execGetCurrentCameraDataAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUGC_CameraDataAssetBase**)Z_Param__Result=P_THIS->GetCurrentCameraDataAsset();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function GetCurrentCameraDataAsset ****************

// ********** Begin Class AUGC_PlayerCameraManager Function GetMovementControlInput ****************
struct UGC_PlayerCameraManager_eventGetMovementControlInput_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	UGC_PlayerCameraManager_eventGetMovementControlInput_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_AUGC_PlayerCameraManager_GetMovementControlInput = FName(TEXT("GetMovementControlInput"));
FVector AUGC_PlayerCameraManager::GetMovementControlInput() const
{
	UFunction* Func = FindFunctionChecked(NAME_AUGC_PlayerCameraManager_GetMovementControlInput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UGC_PlayerCameraManager_eventGetMovementControlInput_Parms Parms;
		const_cast<AUGC_PlayerCameraManager*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AUGC_PlayerCameraManager*>(this)->GetMovementControlInput_Implementation();
	}
}
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "Comment", "// Usually uses the UGC Pawn Interface to fetch the movement input of the character (WASD or Left Thumbstick). Override this if you want to provide your own way of getting the camera rotation input.\n" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Usually uses the UGC Pawn Interface to fetch the movement input of the character (WASD or Left Thumbstick). Override this if you want to provide your own way of getting the camera rotation input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventGetMovementControlInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "GetMovementControlInput", Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::PropPointers), sizeof(UGC_PlayerCameraManager_eventGetMovementControlInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UGC_PlayerCameraManager_eventGetMovementControlInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execGetMovementControlInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetMovementControlInput_Implementation();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function GetMovementControlInput ******************

// ********** Begin Class AUGC_PlayerCameraManager Function GetOwnerSpringArmComponent *************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics
{
	struct UGC_PlayerCameraManager_eventGetOwnerSpringArmComponent_Parms
	{
		USpringArmComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventGetOwnerSpringArmComponent_Parms, ReturnValue), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "GetOwnerSpringArmComponent", Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::UGC_PlayerCameraManager_eventGetOwnerSpringArmComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::UGC_PlayerCameraManager_eventGetOwnerSpringArmComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execGetOwnerSpringArmComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpringArmComponent**)Z_Param__Result=P_THIS->GetOwnerSpringArmComponent();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function GetOwnerSpringArmComponent ***************

// ********** Begin Class AUGC_PlayerCameraManager Function GetOwnerVelocity ***********************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics
{
	struct UGC_PlayerCameraManager_eventGetOwnerVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Movement" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventGetOwnerVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "GetOwnerVelocity", Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::UGC_PlayerCameraManager_eventGetOwnerVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::UGC_PlayerCameraManager_eventGetOwnerVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execGetOwnerVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetOwnerVelocity();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function GetOwnerVelocity *************************

// ********** Begin Class AUGC_PlayerCameraManager Function GetRealCameraView **********************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics
{
	struct UGC_PlayerCameraManager_eventGetRealCameraView_Parms
	{
		FVector OutViewLocation;
		FRotator OutViewRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/*\n    * This returns the real camera view, this isn't necessarily the view of the camera attached to your character.\n    * For example, during camera animations, the camera used is different than the normal gameplay camera.\n    */" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "* This returns the real camera view, this isn't necessarily the view of the camera attached to your character.\n* For example, during camera animations, the camera used is different than the normal gameplay camera." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutViewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutViewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::NewProp_OutViewLocation = { "OutViewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventGetRealCameraView_Parms, OutViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::NewProp_OutViewRotation = { "OutViewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventGetRealCameraView_Parms, OutViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::NewProp_OutViewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::NewProp_OutViewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "GetRealCameraView", Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::UGC_PlayerCameraManager_eventGetRealCameraView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::UGC_PlayerCameraManager_eventGetRealCameraView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execGetRealCameraView)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutViewLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutViewRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRealCameraView(Z_Param_Out_OutViewLocation,Z_Param_Out_OutViewRotation);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function GetRealCameraView ************************

// ********** Begin Class AUGC_PlayerCameraManager Function GetRotationInput ***********************
struct UGC_PlayerCameraManager_eventGetRotationInput_Parms
{
	FRotator ReturnValue;

	/** Constructor, initializes return property only **/
	UGC_PlayerCameraManager_eventGetRotationInput_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_AUGC_PlayerCameraManager_GetRotationInput = FName(TEXT("GetRotationInput"));
FRotator AUGC_PlayerCameraManager::GetRotationInput() const
{
	UFunction* Func = FindFunctionChecked(NAME_AUGC_PlayerCameraManager_GetRotationInput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UGC_PlayerCameraManager_eventGetRotationInput_Parms Parms;
		const_cast<AUGC_PlayerCameraManager*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AUGC_PlayerCameraManager*>(this)->GetRotationInput_Implementation();
	}
}
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "Comment", "// Usually uses the UGC Pawn Interface to fetch the rotation input of the camera (Mouse or Right Thumbstick). Override this if you want to provide your own way of getting the camera rotation input.\n" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Usually uses the UGC Pawn Interface to fetch the rotation input of the camera (Mouse or Right Thumbstick). Override this if you want to provide your own way of getting the camera rotation input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventGetRotationInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "GetRotationInput", Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::PropPointers), sizeof(UGC_PlayerCameraManager_eventGetRotationInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UGC_PlayerCameraManager_eventGetRotationInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execGetRotationInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetRotationInput_Implementation();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function GetRotationInput *************************

// ********** Begin Class AUGC_PlayerCameraManager Function IsOwnerFalling *************************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics
{
	struct UGC_PlayerCameraManager_eventIsOwnerFalling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Movement" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventIsOwnerFalling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventIsOwnerFalling_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "IsOwnerFalling", Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::UGC_PlayerCameraManager_eventIsOwnerFalling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::UGC_PlayerCameraManager_eventIsOwnerFalling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execIsOwnerFalling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOwnerFalling();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function IsOwnerFalling ***************************

// ********** Begin Class AUGC_PlayerCameraManager Function IsOwnerMovingOnGround ******************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics
{
	struct UGC_PlayerCameraManager_eventIsOwnerMovingOnGround_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Movement" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventIsOwnerMovingOnGround_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventIsOwnerMovingOnGround_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "IsOwnerMovingOnGround", Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::UGC_PlayerCameraManager_eventIsOwnerMovingOnGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::UGC_PlayerCameraManager_eventIsOwnerMovingOnGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execIsOwnerMovingOnGround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOwnerMovingOnGround();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function IsOwnerMovingOnGround ********************

// ********** Begin Class AUGC_PlayerCameraManager Function IsOwnerStrafing ************************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics
{
	struct UGC_PlayerCameraManager_eventIsOwnerStrafing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Movement" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventIsOwnerStrafing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventIsOwnerStrafing_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "IsOwnerStrafing", Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::UGC_PlayerCameraManager_eventIsOwnerStrafing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::UGC_PlayerCameraManager_eventIsOwnerStrafing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execIsOwnerStrafing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOwnerStrafing();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function IsOwnerStrafing **************************

// ********** Begin Class AUGC_PlayerCameraManager Function IsPlayingAnyCameraAnimation ************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics
{
	struct UGC_PlayerCameraManager_eventIsPlayingAnyCameraAnimation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventIsPlayingAnyCameraAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventIsPlayingAnyCameraAnimation_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "IsPlayingAnyCameraAnimation", Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::UGC_PlayerCameraManager_eventIsPlayingAnyCameraAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::UGC_PlayerCameraManager_eventIsPlayingAnyCameraAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execIsPlayingAnyCameraAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayingAnyCameraAnimation();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function IsPlayingAnyCameraAnimation **************

// ********** Begin Class AUGC_PlayerCameraManager Function IsPlayingAnyLevelSequence **************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics
{
	struct UGC_PlayerCameraManager_eventIsPlayingAnyLevelSequence_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventIsPlayingAnyLevelSequence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventIsPlayingAnyLevelSequence_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "IsPlayingAnyLevelSequence", Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::UGC_PlayerCameraManager_eventIsPlayingAnyLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::UGC_PlayerCameraManager_eventIsPlayingAnyLevelSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execIsPlayingAnyLevelSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayingAnyLevelSequence();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function IsPlayingAnyLevelSequence ****************

// ********** Begin Class AUGC_PlayerCameraManager Function OnCameraDataStackChanged ***************
struct UGC_PlayerCameraManager_eventOnCameraDataStackChanged_Parms
{
	UUGC_CameraDataAssetBase* CameraDA;
	bool bBlendCameraProperties;
};
static FName NAME_AUGC_PlayerCameraManager_OnCameraDataStackChanged = FName(TEXT("OnCameraDataStackChanged"));
void AUGC_PlayerCameraManager::OnCameraDataStackChanged(UUGC_CameraDataAssetBase* CameraDA, bool bBlendCameraProperties)
{
	UFunction* Func = FindFunctionChecked(NAME_AUGC_PlayerCameraManager_OnCameraDataStackChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UGC_PlayerCameraManager_eventOnCameraDataStackChanged_Parms Parms;
		Parms.CameraDA=CameraDA;
		Parms.bBlendCameraProperties=bBlendCameraProperties ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnCameraDataStackChanged_Implementation(CameraDA, bBlendCameraProperties);
	}
}
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraDA;
	static void NewProp_bBlendCameraProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendCameraProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::NewProp_CameraDA = { "CameraDA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventOnCameraDataStackChanged_Parms, CameraDA), Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::NewProp_bBlendCameraProperties_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventOnCameraDataStackChanged_Parms*)Obj)->bBlendCameraProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::NewProp_bBlendCameraProperties = { "bBlendCameraProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventOnCameraDataStackChanged_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::NewProp_bBlendCameraProperties_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::NewProp_CameraDA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::NewProp_bBlendCameraProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "OnCameraDataStackChanged", Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::PropPointers), sizeof(UGC_PlayerCameraManager_eventOnCameraDataStackChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UGC_PlayerCameraManager_eventOnCameraDataStackChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execOnCameraDataStackChanged)
{
	P_GET_OBJECT(UUGC_CameraDataAssetBase,Z_Param_CameraDA);
	P_GET_UBOOL(Z_Param_bBlendCameraProperties);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraDataStackChanged_Implementation(Z_Param_CameraDA,Z_Param_bBlendCameraProperties);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function OnCameraDataStackChanged *****************

// ********** Begin Class AUGC_PlayerCameraManager Function OnLevelSequenceEnded *******************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "OnLevelSequenceEnded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execOnLevelSequenceEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelSequenceEnded();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function OnLevelSequenceEnded *********************

// ********** Begin Class AUGC_PlayerCameraManager Function OnLevelSequenceStarted *****************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "OnLevelSequenceStarted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceStarted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execOnLevelSequenceStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelSequenceStarted();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function OnLevelSequenceStarted *******************

// ********** Begin Class AUGC_PlayerCameraManager Function PlayCameraAnimation ********************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics
{
	struct UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms
	{
		UCameraAnimationSequence* CameraSequence;
		FUGCCameraAnimationParams Params;
		bool bInterruptOthers;
		bool bDoCollisionChecks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "// Plays a single new camera animation sequence. Any subsequent calls while this animation runs will interrupt the current animation.\n// This variation can be used in contexts where async nodes aren't allowd (e.g., AnimNotifies).\n" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Plays a single new camera animation sequence. Any subsequent calls while this animation runs will interrupt the current animation.\nThis variation can be used in contexts where async nodes aren't allowd (e.g., AnimNotifies)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static void NewProp_bInterruptOthers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptOthers;
	static void NewProp_bDoCollisionChecks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionChecks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_CameraSequence = { "CameraSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms, CameraSequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms, Params), Z_Construct_UScriptStruct_FUGCCameraAnimationParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 466202547
void Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bInterruptOthers_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms*)Obj)->bInterruptOthers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bInterruptOthers = { "bInterruptOthers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bInterruptOthers_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bDoCollisionChecks_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms*)Obj)->bDoCollisionChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bDoCollisionChecks = { "bDoCollisionChecks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bDoCollisionChecks_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_CameraSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bInterruptOthers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::NewProp_bDoCollisionChecks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "PlayCameraAnimation", Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::UGC_PlayerCameraManager_eventPlayCameraAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execPlayCameraAnimation)
{
	P_GET_OBJECT(UCameraAnimationSequence,Z_Param_CameraSequence);
	P_GET_STRUCT_REF(FUGCCameraAnimationParams,Z_Param_Out_Params);
	P_GET_UBOOL(Z_Param_bInterruptOthers);
	P_GET_UBOOL(Z_Param_bDoCollisionChecks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayCameraAnimation(Z_Param_CameraSequence,Z_Param_Out_Params,Z_Param_bInterruptOthers,Z_Param_bDoCollisionChecks);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function PlayCameraAnimation **********************

// ********** Begin Class AUGC_PlayerCameraManager Function PopCameraData **************************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics
{
	struct UGC_PlayerCameraManager_eventPopCameraData_Parms
	{
		UUGC_CameraDataAssetBase* CameraDA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "// Pops the given Camera DA. If it isn't in stack, it returns false.\n" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Pops the given Camera DA. If it isn't in stack, it returns false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraDA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::NewProp_CameraDA = { "CameraDA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventPopCameraData_Parms, CameraDA), Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::NewProp_CameraDA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "PopCameraData", Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::UGC_PlayerCameraManager_eventPopCameraData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::UGC_PlayerCameraManager_eventPopCameraData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execPopCameraData)
{
	P_GET_OBJECT(UUGC_CameraDataAssetBase,Z_Param_CameraDA);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopCameraData(Z_Param_CameraDA);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function PopCameraData ****************************

// ********** Begin Class AUGC_PlayerCameraManager Function PopCameraDataHead **********************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraDataHead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "// Pops the most recent Camera DA.\n" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Pops the most recent Camera DA." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraDataHead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "PopCameraDataHead", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraDataHead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraDataHead_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraDataHead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraDataHead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execPopCameraDataHead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopCameraDataHead();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function PopCameraDataHead ************************

// ********** Begin Class AUGC_PlayerCameraManager Function PostPossess ****************************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics
{
	struct UGC_PlayerCameraManager_eventPostPossess_Parms
	{
		bool bReplaceCurrentCameraDA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/*\n     * Finush the possession of a new pawn. APlayerController::Possess needs to have been called directly before this function.\n     * @param  bReplaceCurrentCameraDA      Whether to push the Camera DA that was passed in the PrePossess function (if any) should\n                                            replace the current camera DA or be pushed on top of it.\n     */" },
		{ "CPP_Default_bReplaceCurrentCameraDA", "true" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "* Finush the possession of a new pawn. APlayerController::Possess needs to have been called directly before this function.\n* @param  bReplaceCurrentCameraDA      Whether to push the Camera DA that was passed in the PrePossess function (if any) should\n                                       replace the current camera DA or be pushed on top of it." },
	};
#endif // WITH_METADATA
	static void NewProp_bReplaceCurrentCameraDA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceCurrentCameraDA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::NewProp_bReplaceCurrentCameraDA_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventPostPossess_Parms*)Obj)->bReplaceCurrentCameraDA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::NewProp_bReplaceCurrentCameraDA = { "bReplaceCurrentCameraDA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventPostPossess_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::NewProp_bReplaceCurrentCameraDA_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::NewProp_bReplaceCurrentCameraDA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "PostPossess", Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::UGC_PlayerCameraManager_eventPostPossess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::UGC_PlayerCameraManager_eventPostPossess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execPostPossess)
{
	P_GET_UBOOL(Z_Param_bReplaceCurrentCameraDA);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostPossess(Z_Param_bReplaceCurrentCameraDA);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function PostPossess ******************************

// ********** Begin Class AUGC_PlayerCameraManager Function PrePossess *****************************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics
{
	struct UGC_PlayerCameraManager_eventPrePossess_Parms
	{
		APawn* NewPawn;
		UUGC_CameraDataAssetBase* NewCameraDA;
		bool bBlendSpringArmProperties;
		bool bMatchCameraRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/*\n     * Prepare the possession of a new pawn. Doesn't actually possess the pawn.\n     * APlayerController::Possess needs to be called directly after this function.\n     * @param  NewPawn                      The new pawn that we intend on possessing.\n     * @param  NewCameraDA                  The camera data asset that will be pushed after possessing.\n                                            *Requires call to PostPosses after the APlayerController::Possess has been called!*\n     * @param  bBlendSpringArmProperties     Whether the new pawn's spring arm should prepare to blend from the previous spring arm.\n                                            *This doesn't work with SetViewTargetWithBlend!*\n                                            *Requires call to PostPosses after the APlayerController::Possess has been called!*\n     * @param  bMatchCameraRotation         Whether the new pawn should have the same camera spring arm rotation (aka Control Rotation) or not.\n                                            *This doesn't work with SetViewTargetWithBlend!*\n                                            *Requires call to PostPosses after the APlayerController::Possess has been called!*\n     */" },
		{ "CPP_Default_bBlendSpringArmProperties", "false" },
		{ "CPP_Default_bMatchCameraRotation", "false" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "* Prepare the possession of a new pawn. Doesn't actually possess the pawn.\n* APlayerController::Possess needs to be called directly after this function.\n* @param  NewPawn                      The new pawn that we intend on possessing.\n* @param  NewCameraDA                  The camera data asset that will be pushed after possessing.\n                                       *Requires call to PostPosses after the APlayerController::Possess has been called!*\n* @param  bBlendSpringArmProperties     Whether the new pawn's spring arm should prepare to blend from the previous spring arm.\n                                       *This doesn't work with SetViewTargetWithBlend!*\n                                       *Requires call to PostPosses after the APlayerController::Possess has been called!*\n* @param  bMatchCameraRotation         Whether the new pawn should have the same camera spring arm rotation (aka Control Rotation) or not.\n                                       *This doesn't work with SetViewTargetWithBlend!*\n                                       *Requires call to PostPosses after the APlayerController::Possess has been called!*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCameraDA;
	static void NewProp_bBlendSpringArmProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendSpringArmProperties;
	static void NewProp_bMatchCameraRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchCameraRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventPrePossess_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_NewCameraDA = { "NewCameraDA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventPrePossess_Parms, NewCameraDA), Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bBlendSpringArmProperties_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventPrePossess_Parms*)Obj)->bBlendSpringArmProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bBlendSpringArmProperties = { "bBlendSpringArmProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventPrePossess_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bBlendSpringArmProperties_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bMatchCameraRotation_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventPrePossess_Parms*)Obj)->bMatchCameraRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bMatchCameraRotation = { "bMatchCameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventPrePossess_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bMatchCameraRotation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_NewPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_NewCameraDA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bBlendSpringArmProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::NewProp_bMatchCameraRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "PrePossess", Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::UGC_PlayerCameraManager_eventPrePossess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::UGC_PlayerCameraManager_eventPrePossess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execPrePossess)
{
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_GET_OBJECT(UUGC_CameraDataAssetBase,Z_Param_NewCameraDA);
	P_GET_UBOOL(Z_Param_bBlendSpringArmProperties);
	P_GET_UBOOL(Z_Param_bMatchCameraRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrePossess(Z_Param_NewPawn,Z_Param_NewCameraDA,Z_Param_bBlendSpringArmProperties,Z_Param_bMatchCameraRotation);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function PrePossess *******************************

// ********** Begin Class AUGC_PlayerCameraManager Function PushCameraData *************************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics
{
	struct UGC_PlayerCameraManager_eventPushCameraData_Parms
	{
		UUGC_CameraDataAssetBase* CameraDA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraDA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::NewProp_CameraDA = { "CameraDA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventPushCameraData_Parms, CameraDA), Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::NewProp_CameraDA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "PushCameraData", Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::UGC_PlayerCameraManager_eventPushCameraData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::UGC_PlayerCameraManager_eventPushCameraData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execPushCameraData)
{
	P_GET_OBJECT(UUGC_CameraDataAssetBase,Z_Param_CameraDA);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PushCameraData(Z_Param_CameraDA);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function PushCameraData ***************************

// ********** Begin Class AUGC_PlayerCameraManager Function RefreshLevelSequences ******************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_RefreshLevelSequences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_RefreshLevelSequences_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "RefreshLevelSequences", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_RefreshLevelSequences_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_RefreshLevelSequences_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_RefreshLevelSequences()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_RefreshLevelSequences_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execRefreshLevelSequences)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshLevelSequences();
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function RefreshLevelSequences ********************

// ********** Begin Class AUGC_PlayerCameraManager Function SetSpringArmComponent ******************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics
{
	struct UGC_PlayerCameraManager_eventSetSpringArmComponent_Parms
	{
		USpringArmComponent* Arm;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/*\n     * Only use this when your pawn has multiple spring arm components and you need to use a different one.\n     * The spring arm is automatically reset to the first found spring arm component on the pawn when we initialize\n     * the camera manager or when we possess a new pawn.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "* Only use this when your pawn has multiple spring arm components and you need to use a different one.\n* The spring arm is automatically reset to the first found spring arm component on the pawn when we initialize\n* the camera manager or when we possess a new pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Arm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventSetSpringArmComponent_Parms, Arm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arm_MetaData), NewProp_Arm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::NewProp_Arm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "SetSpringArmComponent", Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::UGC_PlayerCameraManager_eventSetSpringArmComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::UGC_PlayerCameraManager_eventSetSpringArmComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execSetSpringArmComponent)
{
	P_GET_OBJECT(USpringArmComponent,Z_Param_Arm);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpringArmComponent(Z_Param_Arm);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function SetSpringArmComponent ********************

// ********** Begin Class AUGC_PlayerCameraManager Function ToggleAllModifiersDebug ****************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics
{
	struct UGC_PlayerCameraManager_eventToggleAllModifiersDebug_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/**\n     *\n     *  Enables/Disables all debugging of camera modifiers regardless of whether they inherit from UGC Camera Modifier.\n     *  @param  bEnabled    - true to enable all debugging of all camera modifiers, false to disable.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Enables/Disables all debugging of camera modifiers regardless of whether they inherit from UGC Camera Modifier.\n@param  bEnabled    - true to enable all debugging of all camera modifiers, false to disable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventToggleAllModifiersDebug_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventToggleAllModifiersDebug_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ToggleAllModifiersDebug", Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::UGC_PlayerCameraManager_eventToggleAllModifiersDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::UGC_PlayerCameraManager_eventToggleAllModifiersDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execToggleAllModifiersDebug)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleAllModifiersDebug(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ToggleAllModifiersDebug ******************

// ********** Begin Class AUGC_PlayerCameraManager Function ToggleAllUGCModifiersDebug *************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics
{
	struct UGC_PlayerCameraManager_eventToggleAllUGCModifiersDebug_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/**\n     *  Enables/Disables all debugging of camera modifiers ONLY if they inherit from UGC Camera Modifier.\n     *  @param  bEnabled    - true to enable all debugging of UGC camera modifiers, false to disable.\n     */" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Enables/Disables all debugging of camera modifiers ONLY if they inherit from UGC Camera Modifier.\n@param  bEnabled    - true to enable all debugging of UGC camera modifiers, false to disable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventToggleAllUGCModifiersDebug_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventToggleAllUGCModifiersDebug_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ToggleAllUGCModifiersDebug", Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::UGC_PlayerCameraManager_eventToggleAllUGCModifiersDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::UGC_PlayerCameraManager_eventToggleAllUGCModifiersDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execToggleAllUGCModifiersDebug)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleAllUGCModifiersDebug(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ToggleAllUGCModifiersDebug ***************

// ********** Begin Class AUGC_PlayerCameraManager Function ToggleCameraModifiers ******************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics
{
	struct UGC_PlayerCameraManager_eventToggleCameraModifiers_Parms
	{
		bool bEnabled;
		bool bImmediate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/**\n     *  Enables/Disables all camera modifiers, regardless of whether they inherit from UGC Camera Modifier.\n     *  @param  bEnabled    - true to enable all camera modifiers, false to disable.\n     *  @param  bImmediate  - If bEnabled is false: true to disable immediately with no blend out, false (default) to allow blend out\n     */" },
		{ "CPP_Default_bImmediate", "true" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Enables/Disables all camera modifiers, regardless of whether they inherit from UGC Camera Modifier.\n@param  bEnabled    - true to enable all camera modifiers, false to disable.\n@param  bImmediate  - If bEnabled is false: true to disable immediately with no blend out, false (default) to allow blend out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImmediate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bImmediate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventToggleCameraModifiers_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventToggleCameraModifiers_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bImmediate_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventToggleCameraModifiers_Parms*)Obj)->bImmediate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventToggleCameraModifiers_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImmediate_MetaData), NewProp_bImmediate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::NewProp_bImmediate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ToggleCameraModifiers", Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::UGC_PlayerCameraManager_eventToggleCameraModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::UGC_PlayerCameraManager_eventToggleCameraModifiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execToggleCameraModifiers)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_GET_UBOOL(Z_Param_bImmediate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCameraModifiers(Z_Param_bEnabled,Z_Param_bImmediate);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ToggleCameraModifiers ********************

// ********** Begin Class AUGC_PlayerCameraManager Function ToggleUGCCameraModifiers ***************
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics
{
	struct UGC_PlayerCameraManager_eventToggleUGCCameraModifiers_Parms
	{
		bool bEnabled;
		bool bImmediate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager" },
		{ "Comment", "/**\n     *  Enables/Disables all camera modifiers ONLY if they inherit from UGC Camera Modifier.\n     *  @param  bEnabled    - true to enable all UGC camera modifiers, false to disable.\n     *  @param  bImmediate  - If bEnabled is false: true to disable immediately with no blend out, false (default) to allow blend out\n     */" },
		{ "CPP_Default_bImmediate", "true" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "Enables/Disables all camera modifiers ONLY if they inherit from UGC Camera Modifier.\n@param  bEnabled    - true to enable all UGC camera modifiers, false to disable.\n@param  bImmediate  - If bEnabled is false: true to disable immediately with no blend out, false (default) to allow blend out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImmediate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bImmediate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventToggleUGCCameraModifiers_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventToggleUGCCameraModifiers_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bImmediate_SetBit(void* Obj)
{
	((UGC_PlayerCameraManager_eventToggleUGCCameraModifiers_Parms*)Obj)->bImmediate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_PlayerCameraManager_eventToggleUGCCameraModifiers_Parms), &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImmediate_MetaData), NewProp_bImmediate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::NewProp_bImmediate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "ToggleUGCCameraModifiers", Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::UGC_PlayerCameraManager_eventToggleUGCCameraModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::UGC_PlayerCameraManager_eventToggleUGCCameraModifiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execToggleUGCCameraModifiers)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_GET_UBOOL(Z_Param_bImmediate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleUGCCameraModifiers(Z_Param_bEnabled,Z_Param_bImmediate);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function ToggleUGCCameraModifiers *****************

// ********** Begin Class AUGC_PlayerCameraManager Function UpdateInternalVariables ****************
struct UGC_PlayerCameraManager_eventUpdateInternalVariables_Parms
{
	float DeltaTime;
};
static FName NAME_AUGC_PlayerCameraManager_UpdateInternalVariables = FName(TEXT("UpdateInternalVariables"));
void AUGC_PlayerCameraManager::UpdateInternalVariables(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_AUGC_PlayerCameraManager_UpdateInternalVariables);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UGC_PlayerCameraManager_eventUpdateInternalVariables_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateInternalVariables_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "Comment", "// This updates the internal variables of the UGC Player Camera Manager. Make sure to call the parent function if you override this in BP.\n" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "ToolTip", "This updates the internal variables of the UGC Player Camera Manager. Make sure to call the parent function if you override this in BP." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_PlayerCameraManager_eventUpdateInternalVariables_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUGC_PlayerCameraManager, nullptr, "UpdateInternalVariables", Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::PropPointers), sizeof(UGC_PlayerCameraManager_eventUpdateInternalVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UGC_PlayerCameraManager_eventUpdateInternalVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUGC_PlayerCameraManager::execUpdateInternalVariables)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInternalVariables_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class AUGC_PlayerCameraManager Function UpdateInternalVariables ******************

// ********** Begin Class AUGC_PlayerCameraManager *************************************************
void AUGC_PlayerCameraManager::StaticRegisterNativesAUGC_PlayerCameraManager()
{
	UClass* Class = AUGC_PlayerCameraManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeOwnerFloorDist", &AUGC_PlayerCameraManager::execComputeOwnerFloorDist },
		{ "ComputeOwnerFloorNormal", &AUGC_PlayerCameraManager::execComputeOwnerFloorNormal },
		{ "ComputeOwnerLookAndMovementDot", &AUGC_PlayerCameraManager::execComputeOwnerLookAndMovementDot },
		{ "ComputeOwnerSlopeAngle", &AUGC_PlayerCameraManager::execComputeOwnerSlopeAngle },
		{ "DrawDebugSpringArm", &AUGC_PlayerCameraManager::execDrawDebugSpringArm },
		{ "DrawGameDebugCamera", &AUGC_PlayerCameraManager::execDrawGameDebugCamera },
		{ "DrawRealDebugCamera", &AUGC_PlayerCameraManager::execDrawRealDebugCamera },
		{ "FindCameraModifierOfClass", &AUGC_PlayerCameraManager::execFindCameraModifierOfClass },
		{ "GetCurrentCameraDataAsset", &AUGC_PlayerCameraManager::execGetCurrentCameraDataAsset },
		{ "GetMovementControlInput", &AUGC_PlayerCameraManager::execGetMovementControlInput },
		{ "GetOwnerSpringArmComponent", &AUGC_PlayerCameraManager::execGetOwnerSpringArmComponent },
		{ "GetOwnerVelocity", &AUGC_PlayerCameraManager::execGetOwnerVelocity },
		{ "GetRealCameraView", &AUGC_PlayerCameraManager::execGetRealCameraView },
		{ "GetRotationInput", &AUGC_PlayerCameraManager::execGetRotationInput },
		{ "IsOwnerFalling", &AUGC_PlayerCameraManager::execIsOwnerFalling },
		{ "IsOwnerMovingOnGround", &AUGC_PlayerCameraManager::execIsOwnerMovingOnGround },
		{ "IsOwnerStrafing", &AUGC_PlayerCameraManager::execIsOwnerStrafing },
		{ "IsPlayingAnyCameraAnimation", &AUGC_PlayerCameraManager::execIsPlayingAnyCameraAnimation },
		{ "IsPlayingAnyLevelSequence", &AUGC_PlayerCameraManager::execIsPlayingAnyLevelSequence },
		{ "OnCameraDataStackChanged", &AUGC_PlayerCameraManager::execOnCameraDataStackChanged },
		{ "OnLevelSequenceEnded", &AUGC_PlayerCameraManager::execOnLevelSequenceEnded },
		{ "OnLevelSequenceStarted", &AUGC_PlayerCameraManager::execOnLevelSequenceStarted },
		{ "PlayCameraAnimation", &AUGC_PlayerCameraManager::execPlayCameraAnimation },
		{ "PopCameraData", &AUGC_PlayerCameraManager::execPopCameraData },
		{ "PopCameraDataHead", &AUGC_PlayerCameraManager::execPopCameraDataHead },
		{ "PostPossess", &AUGC_PlayerCameraManager::execPostPossess },
		{ "PrePossess", &AUGC_PlayerCameraManager::execPrePossess },
		{ "PushCameraData", &AUGC_PlayerCameraManager::execPushCameraData },
		{ "RefreshLevelSequences", &AUGC_PlayerCameraManager::execRefreshLevelSequences },
		{ "SetSpringArmComponent", &AUGC_PlayerCameraManager::execSetSpringArmComponent },
		{ "ToggleAllModifiersDebug", &AUGC_PlayerCameraManager::execToggleAllModifiersDebug },
		{ "ToggleAllUGCModifiersDebug", &AUGC_PlayerCameraManager::execToggleAllUGCModifiersDebug },
		{ "ToggleCameraModifiers", &AUGC_PlayerCameraManager::execToggleCameraModifiers },
		{ "ToggleUGCCameraModifiers", &AUGC_PlayerCameraManager::execToggleUGCCameraModifiers },
		{ "UpdateInternalVariables", &AUGC_PlayerCameraManager::execUpdateInternalVariables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUGC_PlayerCameraManager;
UClass* AUGC_PlayerCameraManager::GetPrivateStaticClass()
{
	using TClass = AUGC_PlayerCameraManager;
	if (!Z_Registration_Info_UClass_AUGC_PlayerCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UGC_PlayerCameraManager"),
			Z_Registration_Info_UClass_AUGC_PlayerCameraManager.InnerSingleton,
			StaticRegisterNativesAUGC_PlayerCameraManager,
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
	return Z_Registration_Info_UClass_AUGC_PlayerCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AUGC_PlayerCameraManager_NoRegister()
{
	return AUGC_PlayerCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUGC_PlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Camera/UGC_PlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDataStack_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequences_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchTurnRate_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Angle Constraints" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawTurnRate_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Angle Constraints" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFOV_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalFOV_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMovementInput_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceMovementInput_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRotationInput_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInput_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceRotationInput_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalArmLength_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCModifiersList_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCAddOnModifiersList_MetaData[] = {
		{ "Category", "UGC|Camera Manager|Internal" },
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NbrActiveLevelSequences_MetaData[] = {
		{ "ModuleRelativePath", "Public/Camera/UGC_PlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraDataStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraDataStack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSequences;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOV;
	static void NewProp_bHasMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMovementInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceMovementInput;
	static void NewProp_bHasRotationInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRotationInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceRotationInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalArmLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UGCModifiersList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UGCModifiersList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UGCAddOnModifiersList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UGCAddOnModifiersList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NbrActiveLevelSequences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorDist, "ComputeOwnerFloorDist" }, // 2160012996
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerFloorNormal, "ComputeOwnerFloorNormal" }, // 770017793
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerLookAndMovementDot, "ComputeOwnerLookAndMovementDot" }, // 3505083024
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ComputeOwnerSlopeAngle, "ComputeOwnerSlopeAngle" }, // 965152300
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawDebugSpringArm, "DrawDebugSpringArm" }, // 2252304928
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawGameDebugCamera, "DrawGameDebugCamera" }, // 446370451
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_DrawRealDebugCamera, "DrawRealDebugCamera" }, // 2042951953
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_FindCameraModifierOfClass, "FindCameraModifierOfClass" }, // 2013021684
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_GetCurrentCameraDataAsset, "GetCurrentCameraDataAsset" }, // 4073919442
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_GetMovementControlInput, "GetMovementControlInput" }, // 3485624642
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerSpringArmComponent, "GetOwnerSpringArmComponent" }, // 856493845
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_GetOwnerVelocity, "GetOwnerVelocity" }, // 2620138745
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRealCameraView, "GetRealCameraView" }, // 1601588709
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_GetRotationInput, "GetRotationInput" }, // 1081635609
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerFalling, "IsOwnerFalling" }, // 2302791999
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerMovingOnGround, "IsOwnerMovingOnGround" }, // 3248825181
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsOwnerStrafing, "IsOwnerStrafing" }, // 2869524165
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyCameraAnimation, "IsPlayingAnyCameraAnimation" }, // 3640349415
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_IsPlayingAnyLevelSequence, "IsPlayingAnyLevelSequence" }, // 3187218049
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_OnCameraDataStackChanged, "OnCameraDataStackChanged" }, // 429462680
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceEnded, "OnLevelSequenceEnded" }, // 3459262117
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_OnLevelSequenceStarted, "OnLevelSequenceStarted" }, // 1227478975
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_PlayCameraAnimation, "PlayCameraAnimation" }, // 416821700
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraData, "PopCameraData" }, // 984278936
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_PopCameraDataHead, "PopCameraDataHead" }, // 971674638
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_PostPossess, "PostPossess" }, // 927075127
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_PrePossess, "PrePossess" }, // 2873357268
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_PushCameraData, "PushCameraData" }, // 1075937456
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_RefreshLevelSequences, "RefreshLevelSequences" }, // 932627703
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_SetSpringArmComponent, "SetSpringArmComponent" }, // 1653819731
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllModifiersDebug, "ToggleAllModifiersDebug" }, // 2780744720
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleAllUGCModifiersDebug, "ToggleAllUGCModifiersDebug" }, // 1655691154
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleCameraModifiers, "ToggleCameraModifiers" }, // 1574793126
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_ToggleUGCCameraModifiers, "ToggleUGCCameraModifiers" }, // 3705780859
		{ &Z_Construct_UFunction_AUGC_PlayerCameraManager_UpdateInternalVariables, "UpdateInternalVariables" }, // 2770343005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUGC_PlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_CameraDataStack_Inner = { "CameraDataStack", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUGC_CameraDataAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_CameraDataStack = { "CameraDataStack", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, CameraDataStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDataStack_MetaData), NewProp_CameraDataStack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0124080000020805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0124080000020805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x01240800000a080d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArm_MetaData), NewProp_CameraArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x01240800000a080d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_LevelSequences_Inner = { "LevelSequences", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_LevelSequences = { "LevelSequences", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, LevelSequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequences_MetaData), NewProp_LevelSequences_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_PitchTurnRate = { "PitchTurnRate", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, PitchTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchTurnRate_MetaData), NewProp_PitchTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_YawTurnRate = { "YawTurnRate", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, YawTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawTurnRate_MetaData), NewProp_YawTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_VerticalFOV = { "VerticalFOV", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, VerticalFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalFOV_MetaData), NewProp_VerticalFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_HorizontalFOV = { "HorizontalFOV", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, HorizontalFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalFOV_MetaData), NewProp_HorizontalFOV_MetaData) };
void Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasMovementInput_SetBit(void* Obj)
{
	((AUGC_PlayerCameraManager*)Obj)->bHasMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasMovementInput = { "bHasMovementInput", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUGC_PlayerCameraManager), &Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMovementInput_MetaData), NewProp_bHasMovementInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, MovementInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInput_MetaData), NewProp_MovementInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_TimeSinceMovementInput = { "TimeSinceMovementInput", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, TimeSinceMovementInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceMovementInput_MetaData), NewProp_TimeSinceMovementInput_MetaData) };
void Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasRotationInput_SetBit(void* Obj)
{
	((AUGC_PlayerCameraManager*)Obj)->bHasRotationInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasRotationInput = { "bHasRotationInput", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUGC_PlayerCameraManager), &Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasRotationInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRotationInput_MetaData), NewProp_bHasRotationInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_RotationInput = { "RotationInput", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, RotationInput), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInput_MetaData), NewProp_RotationInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_TimeSinceRotationInput = { "TimeSinceRotationInput", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, TimeSinceRotationInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceRotationInput_MetaData), NewProp_TimeSinceRotationInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_OriginalArmLength = { "OriginalArmLength", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, OriginalArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalArmLength_MetaData), NewProp_OriginalArmLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCModifiersList_Inner = { "UGCModifiersList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUGC_CameraModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCModifiersList = { "UGCModifiersList", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, UGCModifiersList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCModifiersList_MetaData), NewProp_UGCModifiersList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCAddOnModifiersList_Inner = { "UGCAddOnModifiersList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUGC_CameraAddOnModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCAddOnModifiersList = { "UGCAddOnModifiersList", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, UGCAddOnModifiersList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCAddOnModifiersList_MetaData), NewProp_UGCAddOnModifiersList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_NbrActiveLevelSequences = { "NbrActiveLevelSequences", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUGC_PlayerCameraManager, NbrActiveLevelSequences), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NbrActiveLevelSequences_MetaData), NewProp_NbrActiveLevelSequences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_CameraDataStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_CameraDataStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_CameraArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_LevelSequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_LevelSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_PitchTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_YawTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_VerticalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_HorizontalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_MovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_TimeSinceMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_bHasRotationInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_RotationInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_TimeSinceRotationInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_OriginalArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCModifiersList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCModifiersList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCAddOnModifiersList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_UGCAddOnModifiersList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::NewProp_NbrActiveLevelSequences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_UGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::ClassParams = {
	&AUGC_PlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUGC_PlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_AUGC_PlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUGC_PlayerCameraManager.OuterSingleton, Z_Construct_UClass_AUGC_PlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUGC_PlayerCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUGC_PlayerCameraManager);
AUGC_PlayerCameraManager::~AUGC_PlayerCameraManager() {}
// ********** End Class AUGC_PlayerCameraManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h__Script_AuroraDevs_UGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUGC_PlayerCameraManager, AUGC_PlayerCameraManager::StaticClass, TEXT("AUGC_PlayerCameraManager"), &Z_Registration_Info_UClass_AUGC_PlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUGC_PlayerCameraManager), 2736744872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h__Script_AuroraDevs_UGC_2048704675(TEXT("/Script/AuroraDevs_UGC"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h__Script_AuroraDevs_UGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AuroraDevs_UGC_Source_AuroraDevs_UGC_Public_Camera_UGC_PlayerCameraManager_h__Script_AuroraDevs_UGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
