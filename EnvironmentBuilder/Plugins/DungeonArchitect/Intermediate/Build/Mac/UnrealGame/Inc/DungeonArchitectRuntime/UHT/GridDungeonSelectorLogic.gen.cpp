// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonSelectorLogic.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonSelectorLogic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonQuery_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonSelectorLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCell();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridDungeonSelectorLogic Function ContainsStair
struct Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics
{
	struct GridDungeonSelectorLogic_eventContainsStair_Parms
	{
		UGridDungeonModel* Model;
		FGridDungeonCell Cell;
		int32 GridX;
		int32 GridY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonSelectorLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventContainsStair_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventContainsStair_Parms, Cell), Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cell_MetaData), NewProp_Cell_MetaData) }; // 3035221119
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventContainsStair_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventContainsStair_Parms, GridY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridDungeonSelectorLogic_eventContainsStair_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonSelectorLogic_eventContainsStair_Parms), &Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonSelectorLogic, nullptr, "ContainsStair", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::GridDungeonSelectorLogic_eventContainsStair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::GridDungeonSelectorLogic_eventContainsStair_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonSelectorLogic::execContainsStair)
{
	P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
	P_GET_STRUCT_REF(FGridDungeonCell,Z_Param_Out_Cell);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsStair(Z_Param_Model,Z_Param_Out_Cell,Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class UGridDungeonSelectorLogic Function ContainsStair

// Begin Class UGridDungeonSelectorLogic Function IsOnCorner
struct Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics
{
	struct GridDungeonSelectorLogic_eventIsOnCorner_Parms
	{
		UGridDungeonModel* Model;
		int32 GridX;
		int32 GridY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonSelectorLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsOnCorner_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsOnCorner_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsOnCorner_Parms, GridY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridDungeonSelectorLogic_eventIsOnCorner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonSelectorLogic_eventIsOnCorner_Parms), &Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonSelectorLogic, nullptr, "IsOnCorner", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::GridDungeonSelectorLogic_eventIsOnCorner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::GridDungeonSelectorLogic_eventIsOnCorner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonSelectorLogic::execIsOnCorner)
{
	P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnCorner(Z_Param_Model,Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class UGridDungeonSelectorLogic Function IsOnCorner

// Begin Class UGridDungeonSelectorLogic Function IsPassageTooNarrow
struct Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics
{
	struct GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms
	{
		UGridDungeonModel* Model;
		int32 GridX;
		int32 GridY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonSelectorLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms, GridY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms), &Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonSelectorLogic, nullptr, "IsPassageTooNarrow", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::GridDungeonSelectorLogic_eventIsPassageTooNarrow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonSelectorLogic::execIsPassageTooNarrow)
{
	P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPassageTooNarrow(Z_Param_Model,Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class UGridDungeonSelectorLogic Function IsPassageTooNarrow

// Begin Class UGridDungeonSelectorLogic Function IsPillarOnCorner
struct Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics
{
	struct GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms
	{
		UGridDungeonModel* Model;
		int32 GridX;
		int32 GridY;
		FTransform OutCornerOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonSelectorLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCornerOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_OutCornerOffset = { "OutCornerOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms, OutCornerOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms), &Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_OutCornerOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonSelectorLogic, nullptr, "IsPillarOnCorner", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::GridDungeonSelectorLogic_eventIsPillarOnCorner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonSelectorLogic::execIsPillarOnCorner)
{
	P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutCornerOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPillarOnCorner(Z_Param_Model,Z_Param_GridX,Z_Param_GridY,Z_Param_Out_OutCornerOffset);
	P_NATIVE_END;
}
// End Class UGridDungeonSelectorLogic Function IsPillarOnCorner

// Begin Class UGridDungeonSelectorLogic Function SelectNode
struct GridDungeonSelectorLogic_eventSelectNode_Parms
{
	UGridDungeonModel* Model;
	UGridDungeonConfig* Config;
	UGridDungeonBuilder* Builder;
	UGridDungeonQuery* Query;
	FGridDungeonCell Cell;
	FRandomStream RandomStream;
	int32 GridX;
	int32 GridY;
	FTransform MarkerTransform;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GridDungeonSelectorLogic_eventSelectNode_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGridDungeonSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
bool UGridDungeonSelectorLogic::SelectNode(UGridDungeonModel* Model, UGridDungeonConfig* Config, UGridDungeonBuilder* Builder, UGridDungeonQuery* Query, FGridDungeonCell const& Cell, FRandomStream const& RandomStream, int32 GridX, int32 GridY, FTransform const& MarkerTransform)
{
	GridDungeonSelectorLogic_eventSelectNode_Parms Parms;
	Parms.Model=Model;
	Parms.Config=Config;
	Parms.Builder=Builder;
	Parms.Query=Query;
	Parms.Cell=Cell;
	Parms.RandomStream=RandomStream;
	Parms.GridX=GridX;
	Parms.GridY=GridY;
	Parms.MarkerTransform=MarkerTransform;
	ProcessEvent(FindFunctionChecked(NAME_UGridDungeonSelectorLogic_SelectNode),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** called when something enters the sphere component */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonSelectorLogic.h" },
		{ "ToolTip", "called when something enters the sphere component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, Config), Z_Construct_UClass_UGridDungeonConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, Builder), Z_Construct_UClass_UGridDungeonBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, Query), Z_Construct_UClass_UGridDungeonQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, Cell), Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cell_MetaData), NewProp_Cell_MetaData) }; // 3035221119
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonSelectorLogic_eventSelectNode_Parms, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTransform_MetaData), NewProp_MarkerTransform_MetaData) };
void Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridDungeonSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::PropPointers), sizeof(GridDungeonSelectorLogic_eventSelectNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(GridDungeonSelectorLogic_eventSelectNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonSelectorLogic::execSelectNode)
{
	P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
	P_GET_OBJECT(UGridDungeonConfig,Z_Param_Config);
	P_GET_OBJECT(UGridDungeonBuilder,Z_Param_Builder);
	P_GET_OBJECT(UGridDungeonQuery,Z_Param_Query);
	P_GET_STRUCT_REF(FGridDungeonCell,Z_Param_Out_Cell);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_MarkerTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Builder,Z_Param_Query,Z_Param_Out_Cell,Z_Param_Out_RandomStream,Z_Param_GridX,Z_Param_GridY,Z_Param_Out_MarkerTransform);
	P_NATIVE_END;
}
// End Class UGridDungeonSelectorLogic Function SelectNode

// Begin Class UGridDungeonSelectorLogic
void UGridDungeonSelectorLogic::StaticRegisterNativesUGridDungeonSelectorLogic()
{
	UClass* Class = UGridDungeonSelectorLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ContainsStair", &UGridDungeonSelectorLogic::execContainsStair },
		{ "IsOnCorner", &UGridDungeonSelectorLogic::execIsOnCorner },
		{ "IsPassageTooNarrow", &UGridDungeonSelectorLogic::execIsPassageTooNarrow },
		{ "IsPillarOnCorner", &UGridDungeonSelectorLogic::execIsPillarOnCorner },
		{ "SelectNode", &UGridDungeonSelectorLogic::execSelectNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonSelectorLogic);
UClass* Z_Construct_UClass_UGridDungeonSelectorLogic_NoRegister()
{
	return UGridDungeonSelectorLogic::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonSelectorLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Grid/GridDungeonSelectorLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonSelectorLogic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonSelectorLogic_ContainsStair, "ContainsStair" }, // 3103006762
		{ &Z_Construct_UFunction_UGridDungeonSelectorLogic_IsOnCorner, "IsOnCorner" }, // 328435825
		{ &Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPassageTooNarrow, "IsPassageTooNarrow" }, // 3376301281
		{ &Z_Construct_UFunction_UGridDungeonSelectorLogic_IsPillarOnCorner, "IsPillarOnCorner" }, // 627287049
		{ &Z_Construct_UFunction_UGridDungeonSelectorLogic_SelectNode, "SelectNode" }, // 121341015
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonSelectorLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridDungeonSelectorLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonSelectorLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonSelectorLogic_Statics::ClassParams = {
	&UGridDungeonSelectorLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x043010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonSelectorLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonSelectorLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonSelectorLogic()
{
	if (!Z_Registration_Info_UClass_UGridDungeonSelectorLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonSelectorLogic.OuterSingleton, Z_Construct_UClass_UGridDungeonSelectorLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonSelectorLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonSelectorLogic>()
{
	return UGridDungeonSelectorLogic::StaticClass();
}
UGridDungeonSelectorLogic::UGridDungeonSelectorLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonSelectorLogic);
UGridDungeonSelectorLogic::~UGridDungeonSelectorLogic() {}
// End Class UGridDungeonSelectorLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonSelectorLogic, UGridDungeonSelectorLogic::StaticClass, TEXT("UGridDungeonSelectorLogic"), &Z_Registration_Info_UClass_UGridDungeonSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonSelectorLogic), 3542239165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_3425474090(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
