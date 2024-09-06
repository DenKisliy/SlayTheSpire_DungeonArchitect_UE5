// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonModelHelper.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonModel.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonToolData.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/Rectangle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonModelHelper() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModelHelper();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModelHelper();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModelHelper_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCell();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCellDoor();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridToolPaintStrokeData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRectangle();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridDungeonModelHelper Function AddPaintCell
struct Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics
{
	struct GridDungeonModelHelper_eventAddPaintCell_Parms
	{
		FGridToolPaintStrokeData CellData;
		ADungeon* Dungeon;
		bool bAutomaticRebuild;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static void NewProp_bAutomaticRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRebuild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_CellData = { "CellData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventAddPaintCell_Parms, CellData), Z_Construct_UScriptStruct_FGridToolPaintStrokeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellData_MetaData), NewProp_CellData_MetaData) }; // 1619804413
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventAddPaintCell_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_bAutomaticRebuild_SetBit(void* Obj)
{
	((GridDungeonModelHelper_eventAddPaintCell_Parms*)Obj)->bAutomaticRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_bAutomaticRebuild = { "bAutomaticRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonModelHelper_eventAddPaintCell_Parms), &Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_bAutomaticRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_CellData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::NewProp_bAutomaticRebuild,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "AddPaintCell", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::GridDungeonModelHelper_eventAddPaintCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::GridDungeonModelHelper_eventAddPaintCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execAddPaintCell)
{
	P_GET_STRUCT_REF(FGridToolPaintStrokeData,Z_Param_Out_CellData);
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_GET_UBOOL(Z_Param_bAutomaticRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::AddPaintCell(Z_Param_Out_CellData,Z_Param_Dungeon,Z_Param_bAutomaticRebuild);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function AddPaintCell

// Begin Class UGridDungeonModelHelper Function GetBoundingBox
struct Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics
{
	struct GridDungeonModelHelper_eventGetBoundingBox_Parms
	{
		TArray<FGridDungeonCell> Cells;
		FRectangle Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetBoundingBox_Parms, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 3035221119
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetBoundingBox_Parms, Bounds), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(0, nullptr) }; // 2785034368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::NewProp_Cells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "GetBoundingBox", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::GridDungeonModelHelper_eventGetBoundingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::GridDungeonModelHelper_eventGetBoundingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execGetBoundingBox)
{
	P_GET_TARRAY_REF(FGridDungeonCell,Z_Param_Out_Cells);
	P_GET_STRUCT_REF(FRectangle,Z_Param_Out_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::GetBoundingBox(Z_Param_Out_Cells,Z_Param_Out_Bounds);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function GetBoundingBox

// Begin Class UGridDungeonModelHelper Function GetCellCenter
struct Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics
{
	struct GridDungeonModelHelper_eventGetCellCenter_Parms
	{
		FGridDungeonCell Cell;
		FVector Center;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetCellCenter_Parms, Cell), Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cell_MetaData), NewProp_Cell_MetaData) }; // 3035221119
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetCellCenter_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::NewProp_Center,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "GetCellCenter", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::GridDungeonModelHelper_eventGetCellCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::GridDungeonModelHelper_eventGetCellCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execGetCellCenter)
{
	P_GET_STRUCT_REF(FGridDungeonCell,Z_Param_Out_Cell);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::GetCellCenter(Z_Param_Out_Cell,Z_Param_Out_Center);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function GetCellCenter

// Begin Class UGridDungeonModelHelper Function GetCellConnectedRooms
struct Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics
{
	struct GridDungeonModelHelper_eventGetCellConnectedRooms_Parms
	{
		FGridDungeonCell Cell;
		TArray<int32> ConnectedRooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedRooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetCellConnectedRooms_Parms, Cell), Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cell_MetaData), NewProp_Cell_MetaData) }; // 3035221119
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::NewProp_ConnectedRooms_Inner = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::NewProp_ConnectedRooms = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetCellConnectedRooms_Parms, ConnectedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::NewProp_ConnectedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::NewProp_ConnectedRooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "GetCellConnectedRooms", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::GridDungeonModelHelper_eventGetCellConnectedRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::GridDungeonModelHelper_eventGetCellConnectedRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execGetCellConnectedRooms)
{
	P_GET_STRUCT_REF(FGridDungeonCell,Z_Param_Out_Cell);
	P_GET_TARRAY_REF(int32,Z_Param_Out_ConnectedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::GetCellConnectedRooms(Z_Param_Out_Cell,Z_Param_Out_ConnectedRooms);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function GetCellConnectedRooms

// Begin Class UGridDungeonModelHelper Function GetCellMSTRooms
struct Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics
{
	struct GridDungeonModelHelper_eventGetCellMSTRooms_Parms
	{
		FGridDungeonCell Cell;
		TArray<int32> MSTRooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MSTRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MSTRooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetCellMSTRooms_Parms, Cell), Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cell_MetaData), NewProp_Cell_MetaData) }; // 3035221119
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::NewProp_MSTRooms_Inner = { "MSTRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::NewProp_MSTRooms = { "MSTRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetCellMSTRooms_Parms, MSTRooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::NewProp_MSTRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::NewProp_MSTRooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "GetCellMSTRooms", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::GridDungeonModelHelper_eventGetCellMSTRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::GridDungeonModelHelper_eventGetCellMSTRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execGetCellMSTRooms)
{
	P_GET_STRUCT_REF(FGridDungeonCell,Z_Param_Out_Cell);
	P_GET_TARRAY_REF(int32,Z_Param_Out_MSTRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::GetCellMSTRooms(Z_Param_Out_Cell,Z_Param_Out_MSTRooms);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function GetCellMSTRooms

// Begin Class UGridDungeonModelHelper Function GetDoorExits
struct Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics
{
	struct GridDungeonModelHelper_eventGetDoorExits_Parms
	{
		FGridDungeonCellDoor Door;
		FVector ExitA;
		FVector ExitB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Door;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetDoorExits_Parms, Door), Z_Construct_UScriptStruct_FGridDungeonCellDoor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Door_MetaData), NewProp_Door_MetaData) }; // 1129820241
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::NewProp_ExitA = { "ExitA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetDoorExits_Parms, ExitA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::NewProp_ExitB = { "ExitB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetDoorExits_Parms, ExitB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::NewProp_Door,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::NewProp_ExitA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::NewProp_ExitB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "GetDoorExits", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::GridDungeonModelHelper_eventGetDoorExits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::GridDungeonModelHelper_eventGetDoorExits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execGetDoorExits)
{
	P_GET_STRUCT_REF(FGridDungeonCellDoor,Z_Param_Out_Door);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ExitA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ExitB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::GetDoorExits(Z_Param_Out_Door,Z_Param_Out_ExitA,Z_Param_Out_ExitB);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function GetDoorExits

// Begin Class UGridDungeonModelHelper Function GetRandomCellLocation
struct Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics
{
	struct GridDungeonModelHelper_eventGetRandomCellLocation_Parms
	{
		UGridDungeonModel* Model;
		UGridDungeonConfig* Config;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetRandomCellLocation_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetRandomCellLocation_Parms, Config), Z_Construct_UClass_UGridDungeonConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetRandomCellLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "GetRandomCellLocation", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::GridDungeonModelHelper_eventGetRandomCellLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::GridDungeonModelHelper_eventGetRandomCellLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execGetRandomCellLocation)
{
	P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
	P_GET_OBJECT(UGridDungeonConfig,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGridDungeonModelHelper::GetRandomCellLocation(Z_Param_Model,Z_Param_Config);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function GetRandomCellLocation

// Begin Class UGridDungeonModelHelper Function GetRoomFreeEdge
struct Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics
{
	struct GridDungeonModelHelper_eventGetRoomFreeEdge_Parms
	{
		UGridDungeonModel* Model;
		FGridDungeonCell RoomCell;
		TArray<FVector> FreeEdgeCenters;
		TArray<float> FreeEdgeAngles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tries to find a free edge in the room bounds that does not contain a door */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to find a free edge in the room bounds that does not contain a door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomCell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomCell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreeEdgeCenters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeEdgeCenters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FreeEdgeAngles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeEdgeAngles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetRoomFreeEdge_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_RoomCell = { "RoomCell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetRoomFreeEdge_Parms, RoomCell), Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomCell_MetaData), NewProp_RoomCell_MetaData) }; // 3035221119
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeCenters_Inner = { "FreeEdgeCenters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeCenters = { "FreeEdgeCenters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetRoomFreeEdge_Parms, FreeEdgeCenters), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeAngles_Inner = { "FreeEdgeAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeAngles = { "FreeEdgeAngles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventGetRoomFreeEdge_Parms, FreeEdgeAngles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_RoomCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeCenters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeCenters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeAngles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::NewProp_FreeEdgeAngles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "GetRoomFreeEdge", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::GridDungeonModelHelper_eventGetRoomFreeEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::GridDungeonModelHelper_eventGetRoomFreeEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execGetRoomFreeEdge)
{
	P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
	P_GET_STRUCT_REF(FGridDungeonCell,Z_Param_Out_RoomCell);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_FreeEdgeCenters);
	P_GET_TARRAY_REF(float,Z_Param_Out_FreeEdgeAngles);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::GetRoomFreeEdge(Z_Param_Model,Z_Param_Out_RoomCell,Z_Param_Out_FreeEdgeCenters,Z_Param_Out_FreeEdgeAngles);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function GetRoomFreeEdge

// Begin Class UGridDungeonModelHelper Function RemovePaintCell
struct Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics
{
	struct GridDungeonModelHelper_eventRemovePaintCell_Parms
	{
		FGridToolPaintStrokeData CellData;
		ADungeon* Dungeon;
		bool bAutomaticRebuild;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static void NewProp_bAutomaticRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRebuild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_CellData = { "CellData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventRemovePaintCell_Parms, CellData), Z_Construct_UScriptStruct_FGridToolPaintStrokeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellData_MetaData), NewProp_CellData_MetaData) }; // 1619804413
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventRemovePaintCell_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_bAutomaticRebuild_SetBit(void* Obj)
{
	((GridDungeonModelHelper_eventRemovePaintCell_Parms*)Obj)->bAutomaticRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_bAutomaticRebuild = { "bAutomaticRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonModelHelper_eventRemovePaintCell_Parms), &Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_bAutomaticRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_CellData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::NewProp_bAutomaticRebuild,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "RemovePaintCell", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::GridDungeonModelHelper_eventRemovePaintCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::GridDungeonModelHelper_eventRemovePaintCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execRemovePaintCell)
{
	P_GET_STRUCT_REF(FGridToolPaintStrokeData,Z_Param_Out_CellData);
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_GET_UBOOL(Z_Param_bAutomaticRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::RemovePaintCell(Z_Param_Out_CellData,Z_Param_Dungeon,Z_Param_bAutomaticRebuild);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function RemovePaintCell

// Begin Class UGridDungeonModelHelper Function ToWorldCoords
struct Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics
{
	struct GridDungeonModelHelper_eventToWorldCoords_Parms
	{
		FRectangle Bounds;
		FVector GridSize;
		FVector Location;
		FVector Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventToWorldCoords_Parms, Bounds), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) }; // 2785034368
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventToWorldCoords_Parms, GridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventToWorldCoords_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModelHelper_eventToWorldCoords_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModelHelper, nullptr, "ToWorldCoords", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::GridDungeonModelHelper_eventToWorldCoords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::GridDungeonModelHelper_eventToWorldCoords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModelHelper::execToWorldCoords)
{
	P_GET_STRUCT_REF(FRectangle,Z_Param_Out_Bounds);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GridSize);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGridDungeonModelHelper::ToWorldCoords(Z_Param_Out_Bounds,Z_Param_Out_GridSize,Z_Param_Out_Location,Z_Param_Out_Size);
	P_NATIVE_END;
}
// End Class UGridDungeonModelHelper Function ToWorldCoords

// Begin Class UGridDungeonModelHelper
void UGridDungeonModelHelper::StaticRegisterNativesUGridDungeonModelHelper()
{
	UClass* Class = UGridDungeonModelHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPaintCell", &UGridDungeonModelHelper::execAddPaintCell },
		{ "GetBoundingBox", &UGridDungeonModelHelper::execGetBoundingBox },
		{ "GetCellCenter", &UGridDungeonModelHelper::execGetCellCenter },
		{ "GetCellConnectedRooms", &UGridDungeonModelHelper::execGetCellConnectedRooms },
		{ "GetCellMSTRooms", &UGridDungeonModelHelper::execGetCellMSTRooms },
		{ "GetDoorExits", &UGridDungeonModelHelper::execGetDoorExits },
		{ "GetRandomCellLocation", &UGridDungeonModelHelper::execGetRandomCellLocation },
		{ "GetRoomFreeEdge", &UGridDungeonModelHelper::execGetRoomFreeEdge },
		{ "RemovePaintCell", &UGridDungeonModelHelper::execRemovePaintCell },
		{ "ToWorldCoords", &UGridDungeonModelHelper::execToWorldCoords },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonModelHelper);
UClass* Z_Construct_UClass_UGridDungeonModelHelper_NoRegister()
{
	return UGridDungeonModelHelper::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonModelHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Builders/Grid/GridDungeonModelHelper.h" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModelHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_AddPaintCell, "AddPaintCell" }, // 1406682865
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_GetBoundingBox, "GetBoundingBox" }, // 955656505
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_GetCellCenter, "GetCellCenter" }, // 3497375740
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_GetCellConnectedRooms, "GetCellConnectedRooms" }, // 106242463
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_GetCellMSTRooms, "GetCellMSTRooms" }, // 1892261238
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_GetDoorExits, "GetDoorExits" }, // 2185421721
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_GetRandomCellLocation, "GetRandomCellLocation" }, // 1490619140
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_GetRoomFreeEdge, "GetRoomFreeEdge" }, // 3155189739
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_RemovePaintCell, "RemovePaintCell" }, // 1685113547
		{ &Z_Construct_UFunction_UGridDungeonModelHelper_ToWorldCoords, "ToWorldCoords" }, // 1148716475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonModelHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridDungeonModelHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonModelHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModelHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonModelHelper_Statics::ClassParams = {
	&UGridDungeonModelHelper::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModelHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonModelHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonModelHelper()
{
	if (!Z_Registration_Info_UClass_UGridDungeonModelHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonModelHelper.OuterSingleton, Z_Construct_UClass_UGridDungeonModelHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonModelHelper.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonModelHelper>()
{
	return UGridDungeonModelHelper::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonModelHelper);
UGridDungeonModelHelper::~UGridDungeonModelHelper() {}
// End Class UGridDungeonModelHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonModelHelper, UGridDungeonModelHelper::StaticClass, TEXT("UGridDungeonModelHelper"), &Z_Registration_Info_UClass_UGridDungeonModelHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonModelHelper), 2769155302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_1494840055(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
