// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonBuilder.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonQuery_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCell();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridDungeonBuilder Function ContainsCell
struct Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics
{
	struct GridDungeonBuilder_eventContainsCell_Parms
	{
		int32 x;
		int32 y;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_x;
	static const UECodeGen_Private::FIntPropertyParams NewProp_y;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonBuilder_eventContainsCell_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonBuilder_eventContainsCell_Parms, y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridDungeonBuilder_eventContainsCell_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridDungeonBuilder_eventContainsCell_Parms), &Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "ContainsCell", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::GridDungeonBuilder_eventContainsCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::GridDungeonBuilder_eventContainsCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonBuilder::execContainsCell)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_x);
	P_GET_PROPERTY(FIntProperty,Z_Param_y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsCell(Z_Param_x,Z_Param_y);
	P_NATIVE_END;
}
// End Class UGridDungeonBuilder Function ContainsCell

// Begin Class UGridDungeonBuilder Function GetCellsOfType
struct Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics
{
	struct GridDungeonBuilder_eventGetCellsOfType_Parms
	{
		EGridDungeonCellType CellType;
		TArray<FGridDungeonCell> Cells;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetCellsOfType_Parms, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType, METADATA_PARAMS(0, nullptr) }; // 3332370902
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetCellsOfType_Parms, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "GetCellsOfType", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::GridDungeonBuilder_eventGetCellsOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::GridDungeonBuilder_eventGetCellsOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonBuilder::execGetCellsOfType)
{
	P_GET_ENUM(EGridDungeonCellType,Z_Param_CellType);
	P_GET_TARRAY_REF(FGridDungeonCell,Z_Param_Out_Cells);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCellsOfType(EGridDungeonCellType(Z_Param_CellType),Z_Param_Out_Cells);
	P_NATIVE_END;
}
// End Class UGridDungeonBuilder Function GetCellsOfType

// Begin Class UGridDungeonBuilder Function GetCorridors
struct Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics
{
	struct GridDungeonBuilder_eventGetCorridors_Parms
	{
		TArray<FGridDungeonCell> CorridorCells;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CorridorCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CorridorCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells_Inner = { "CorridorCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells = { "CorridorCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetCorridors_Parms, CorridorCells), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "GetCorridors", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::GridDungeonBuilder_eventGetCorridors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::GridDungeonBuilder_eventGetCorridors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonBuilder::execGetCorridors)
{
	P_GET_TARRAY_REF(FGridDungeonCell,Z_Param_Out_CorridorCells);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCorridors(Z_Param_Out_CorridorCells);
	P_NATIVE_END;
}
// End Class UGridDungeonBuilder Function GetCorridors

// Begin Class UGridDungeonBuilder Function GetRooms
struct Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics
{
	struct GridDungeonBuilder_eventGetRooms_Parms
	{
		TArray<FGridDungeonCell> RoomCells;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells_Inner = { "RoomCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells = { "RoomCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetRooms_Parms, RoomCells), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "GetRooms", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::GridDungeonBuilder_eventGetRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::GridDungeonBuilder_eventGetRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonBuilder_GetRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonBuilder::execGetRooms)
{
	P_GET_TARRAY_REF(FGridDungeonCell,Z_Param_Out_RoomCells);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRooms(Z_Param_Out_RoomCells);
	P_NATIVE_END;
}
// End Class UGridDungeonBuilder Function GetRooms

// Begin Class UGridDungeonBuilder
void UGridDungeonBuilder::StaticRegisterNativesUGridDungeonBuilder()
{
	UClass* Class = UGridDungeonBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ContainsCell", &UGridDungeonBuilder::execContainsCell },
		{ "GetCellsOfType", &UGridDungeonBuilder::execGetCellsOfType },
		{ "GetCorridors", &UGridDungeonBuilder::execGetCorridors },
		{ "GetRooms", &UGridDungeonBuilder::execGetRooms },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonBuilder);
UClass* Z_Construct_UClass_UGridDungeonBuilder_NoRegister()
{
	return UGridDungeonBuilder::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "Description", "Procedural dungeon generator with interesting features like height variations and other extension points" },
		{ "DisplayName", "Grid" },
		{ "IncludePath", "Builders/Grid/GridDungeonBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridQuery_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell, "ContainsCell" }, // 1346240132
		{ &Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType, "GetCellsOfType" }, // 1782018418
		{ &Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors, "GetCorridors" }, // 1601714268
		{ &Z_Construct_UFunction_UGridDungeonBuilder_GetRooms, "GetRooms" }, // 1432791748
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDungeonBuilder_Statics::NewProp_GridModel = { "GridModel", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonBuilder, GridModel), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridModel_MetaData), NewProp_GridModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDungeonBuilder_Statics::NewProp_GridConfig = { "GridConfig", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonBuilder, GridConfig), Z_Construct_UClass_UGridDungeonConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridConfig_MetaData), NewProp_GridConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDungeonBuilder_Statics::NewProp_GridQuery = { "GridQuery", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonBuilder, GridQuery), Z_Construct_UClass_UGridDungeonQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridQuery_MetaData), NewProp_GridQuery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilder_Statics::NewProp_GridModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilder_Statics::NewProp_GridConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilder_Statics::NewProp_GridQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridDungeonBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonBuilder_Statics::ClassParams = {
	&UGridDungeonBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridDungeonBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilder_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonBuilder()
{
	if (!Z_Registration_Info_UClass_UGridDungeonBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonBuilder.OuterSingleton, Z_Construct_UClass_UGridDungeonBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonBuilder>()
{
	return UGridDungeonBuilder::StaticClass();
}
UGridDungeonBuilder::UGridDungeonBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonBuilder);
UGridDungeonBuilder::~UGridDungeonBuilder() {}
// End Class UGridDungeonBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonBuilder, UGridDungeonBuilder::StaticClass, TEXT("UGridDungeonBuilder"), &Z_Registration_Info_UClass_UGridDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonBuilder), 755754592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_3686422167(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
