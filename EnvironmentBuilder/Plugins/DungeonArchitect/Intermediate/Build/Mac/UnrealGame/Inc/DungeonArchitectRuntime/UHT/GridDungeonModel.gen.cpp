// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonModel.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/Rectangle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonModel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCell();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCellDoor();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCellInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonStairInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRectangle();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum DungeonModelBuildState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DungeonModelBuildState;
static UEnum* DungeonModelBuildState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DungeonModelBuildState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DungeonModelBuildState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonModelBuildState"));
	}
	return Z_Registration_Info_UEnum_DungeonModelBuildState.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<DungeonModelBuildState>()
{
	return DungeonModelBuildState_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Complete.DisplayName", "Complete" },
		{ "Complete.Name", "DungeonModelBuildState::Complete" },
		{ "Corridors.DisplayName", "Corridors" },
		{ "Corridors.Name", "DungeonModelBuildState::Corridors" },
		{ "Initial.DisplayName", "Initial" },
		{ "Initial.Name", "DungeonModelBuildState::Initial" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
		{ "Separation.DisplayName", "Separation" },
		{ "Separation.Name", "DungeonModelBuildState::Separation" },
		{ "SpanningTree.DisplayName", "SpanningTree" },
		{ "SpanningTree.Name", "DungeonModelBuildState::SpanningTree" },
		{ "Triangulation.DisplayName", "Triangulation" },
		{ "Triangulation.Name", "DungeonModelBuildState::Triangulation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DungeonModelBuildState::Initial", (int64)DungeonModelBuildState::Initial },
		{ "DungeonModelBuildState::Separation", (int64)DungeonModelBuildState::Separation },
		{ "DungeonModelBuildState::Triangulation", (int64)DungeonModelBuildState::Triangulation },
		{ "DungeonModelBuildState::SpanningTree", (int64)DungeonModelBuildState::SpanningTree },
		{ "DungeonModelBuildState::Corridors", (int64)DungeonModelBuildState::Corridors },
		{ "DungeonModelBuildState::Complete", (int64)DungeonModelBuildState::Complete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"DungeonModelBuildState",
	"DungeonModelBuildState",
	Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState()
{
	if (!Z_Registration_Info_UEnum_DungeonModelBuildState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DungeonModelBuildState.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DungeonModelBuildState.InnerSingleton;
}
// End Enum DungeonModelBuildState

// Begin Enum EGridDungeonCellType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridDungeonCellType;
static UEnum* EGridDungeonCellType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridDungeonCellType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridDungeonCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridDungeonCellType"));
	}
	return Z_Registration_Info_UEnum_EGridDungeonCellType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridDungeonCellType>()
{
	return EGridDungeonCellType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Corridor.DisplayName", "Corridor" },
		{ "Corridor.Name", "EGridDungeonCellType::Corridor" },
		{ "CorridorPadding.DisplayName", "CorridorPadding" },
		{ "CorridorPadding.Name", "EGridDungeonCellType::CorridorPadding" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
		{ "Room.DisplayName", "Room" },
		{ "Room.Name", "EGridDungeonCellType::Room" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EGridDungeonCellType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridDungeonCellType::Room", (int64)EGridDungeonCellType::Room },
		{ "EGridDungeonCellType::Corridor", (int64)EGridDungeonCellType::Corridor },
		{ "EGridDungeonCellType::CorridorPadding", (int64)EGridDungeonCellType::CorridorPadding },
		{ "EGridDungeonCellType::Unknown", (int64)EGridDungeonCellType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EGridDungeonCellType",
	"EGridDungeonCellType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType()
{
	if (!Z_Registration_Info_UEnum_EGridDungeonCellType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridDungeonCellType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridDungeonCellType.InnerSingleton;
}
// End Enum EGridDungeonCellType

// Begin ScriptStruct FGridDungeonCellClusterInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo;
class UScriptStruct* FGridDungeonCellClusterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridDungeonCellClusterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridDungeonCellClusterInfo>()
{
	return FGridDungeonCellClusterInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellIds_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boundary_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridZ_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CellIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boundary_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Boundary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridDungeonCellClusterInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCellClusterInfo, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_CellIds_Inner = { "CellIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_CellIds = { "CellIds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCellClusterInfo, CellIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellIds_MetaData), NewProp_CellIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_Boundary_Inner = { "Boundary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_Boundary = { "Boundary", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCellClusterInfo, Boundary), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boundary_MetaData), NewProp_Boundary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_GridZ = { "GridZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCellClusterInfo, GridZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridZ_MetaData), NewProp_GridZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_CellIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_CellIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_Boundary_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_Boundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewProp_GridZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridDungeonCellClusterInfo",
	Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::PropPointers),
	sizeof(FGridDungeonCellClusterInfo),
	alignof(FGridDungeonCellClusterInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo.InnerSingleton, Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo.InnerSingleton;
}
// End ScriptStruct FGridDungeonCellClusterInfo

// Begin ScriptStruct FGridDungeonCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridDungeonCell;
class UScriptStruct* FGridDungeonCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridDungeonCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridDungeonCell, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridDungeonCell"));
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridDungeonCell>()
{
	return FGridDungeonCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridDungeonCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefined_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterId_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedRoomConnections_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
	static void NewProp_UserDefined_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UserDefined;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedRooms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FixedRoomConnections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FixedRoomConnections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdjacentCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridDungeonCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCell, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCell, Bounds), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) }; // 2785034368
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCell, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellType_MetaData), NewProp_CellType_MetaData) }; // 3332370902
void Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_UserDefined_SetBit(void* Obj)
{
	((FGridDungeonCell*)Obj)->UserDefined = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_UserDefined = { "UserDefined", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGridDungeonCell), &Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_UserDefined_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefined_MetaData), NewProp_UserDefined_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_ClusterId = { "ClusterId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCell, ClusterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterId_MetaData), NewProp_ClusterId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_ConnectedRooms_Inner = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_ConnectedRooms = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCell, ConnectedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedRooms_MetaData), NewProp_ConnectedRooms_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_FixedRoomConnections_Inner = { "FixedRoomConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_FixedRoomConnections = { "FixedRoomConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCell, FixedRoomConnections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedRoomConnections_MetaData), NewProp_FixedRoomConnections_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_AdjacentCells_Inner = { "AdjacentCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_AdjacentCells = { "AdjacentCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCell, AdjacentCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjacentCells_MetaData), NewProp_AdjacentCells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridDungeonCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_CellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_CellType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_UserDefined,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_ClusterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_ConnectedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_ConnectedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_FixedRoomConnections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_FixedRoomConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_AdjacentCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewProp_AdjacentCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridDungeonCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridDungeonCell",
	Z_Construct_UScriptStruct_FGridDungeonCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCell_Statics::PropPointers),
	sizeof(FGridDungeonCell),
	alignof(FGridDungeonCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridDungeonCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCell()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridDungeonCell.InnerSingleton, Z_Construct_UScriptStruct_FGridDungeonCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCell.InnerSingleton;
}
// End ScriptStruct FGridDungeonCell

// Begin ScriptStruct FGridDungeonCellDoor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridDungeonCellDoor;
class UScriptStruct* FGridDungeonCellDoor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCellDoor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridDungeonCellDoor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridDungeonCellDoor, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridDungeonCellDoor"));
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCellDoor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridDungeonCellDoor>()
{
	return FGridDungeonCellDoor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridDungeonCellDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridDungeonCellDoor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridDungeonCellDoor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridDungeonCellDoor",
	nullptr,
	0,
	sizeof(FGridDungeonCellDoor),
	alignof(FGridDungeonCellDoor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCellDoor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridDungeonCellDoor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCellDoor()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCellDoor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridDungeonCellDoor.InnerSingleton, Z_Construct_UScriptStruct_FGridDungeonCellDoor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCellDoor.InnerSingleton;
}
// End ScriptStruct FGridDungeonCellDoor

// Begin ScriptStruct FGridDungeonCellInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridDungeonCellInfo;
class UScriptStruct* FGridDungeonCellInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCellInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridDungeonCellInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridDungeonCellInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridDungeonCellInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCellInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridDungeonCellInfo>()
{
	return FGridDungeonCellInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Holds metadata about each occupied grid in the cell for quick reference from a lookup */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
		{ "ToolTip", "Holds metadata about each occupied grid in the cell for quick reference from a lookup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellId_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainsDoor_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
	static void NewProp_ContainsDoor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ContainsDoor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridDungeonCellInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_CellId = { "CellId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCellInfo, CellId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellId_MetaData), NewProp_CellId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonCellInfo, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellType_MetaData), NewProp_CellType_MetaData) }; // 3332370902
void Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_ContainsDoor_SetBit(void* Obj)
{
	((FGridDungeonCellInfo*)Obj)->ContainsDoor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_ContainsDoor = { "ContainsDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGridDungeonCellInfo), &Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_ContainsDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainsDoor_MetaData), NewProp_ContainsDoor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_CellId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_CellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_CellType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewProp_ContainsDoor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridDungeonCellInfo",
	Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::PropPointers),
	sizeof(FGridDungeonCellInfo),
	alignof(FGridDungeonCellInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonCellInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonCellInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridDungeonCellInfo.InnerSingleton, Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonCellInfo.InnerSingleton;
}
// End ScriptStruct FGridDungeonCellInfo

// Begin ScriptStruct FGridDungeonStairInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridDungeonStairInfo;
class UScriptStruct* FGridDungeonStairInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonStairInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridDungeonStairInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridDungeonStairInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridDungeonStairInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonStairInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridDungeonStairInfo>()
{
	return FGridDungeonStairInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCell_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedToCell_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPosition_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OwnerCell;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectedToCell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridDungeonStairInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_OwnerCell = { "OwnerCell", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonStairInfo, OwnerCell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCell_MetaData), NewProp_OwnerCell_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_ConnectedToCell = { "ConnectedToCell", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonStairInfo, ConnectedToCell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedToCell_MetaData), NewProp_ConnectedToCell_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonStairInfo, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonStairInfo, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_IPosition = { "IPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDungeonStairInfo, IPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPosition_MetaData), NewProp_IPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_OwnerCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_ConnectedToCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewProp_IPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridDungeonStairInfo",
	Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::PropPointers),
	sizeof(FGridDungeonStairInfo),
	alignof(FGridDungeonStairInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridDungeonStairInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GridDungeonStairInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridDungeonStairInfo.InnerSingleton, Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridDungeonStairInfo.InnerSingleton;
}
// End ScriptStruct FGridDungeonStairInfo

// Begin Class UGridDungeonModel Function GetGridCellLookup
struct Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics
{
	struct GridDungeonModel_eventGetGridCellLookup_Parms
	{
		int32 x;
		int32 y;
		FGridDungeonCellInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_x;
	static const UECodeGen_Private::FIntPropertyParams NewProp_y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModel_eventGetGridCellLookup_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModel_eventGetGridCellLookup_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridDungeonModel_eventGetGridCellLookup_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridDungeonCellInfo, METADATA_PARAMS(0, nullptr) }; // 1668943030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModel, nullptr, "GetGridCellLookup", nullptr, nullptr, Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::GridDungeonModel_eventGetGridCellLookup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::GridDungeonModel_eventGetGridCellLookup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridDungeonModel::execGetGridCellLookup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_x);
	P_GET_PROPERTY(FIntProperty,Z_Param_y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGridDungeonCellInfo*)Z_Param__Result=P_THIS->GetGridCellLookup(Z_Param_x,Z_Param_y);
	P_NATIVE_END;
}
// End Class UGridDungeonModel Function GetGridCellLookup

// Begin Class UGridDungeonModel
void UGridDungeonModel::StaticRegisterNativesUGridDungeonModel()
{
	UClass* Class = UGridDungeonModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGridCellLookup", &UGridDungeonModel::execGetGridCellLookup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonModel);
UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister()
{
	return UGridDungeonModel::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "IncludePath", "Builders/Grid/GridDungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildState_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stairs_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clusters_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stairs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stairs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Clusters_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clusters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Clusters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup, "GetGridCellLookup" }, // 1437447151
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState = { "BuildState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonModel, BuildState), Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildState_MetaData), NewProp_BuildState_MetaData) }; // 3294325229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridDungeonCell, METADATA_PARAMS(0, nullptr) }; // 3035221119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonModel, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 3035221119
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridDungeonCellDoor, METADATA_PARAMS(0, nullptr) }; // 1129820241
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonModel, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 1129820241
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs_Inner = { "Stairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridDungeonStairInfo, METADATA_PARAMS(0, nullptr) }; // 4220986555
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs = { "Stairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonModel, Stairs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stairs_MetaData), NewProp_Stairs_MetaData) }; // 4220986555
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Clusters_ValueProp = { "Clusters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo, METADATA_PARAMS(0, nullptr) }; // 558610165
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Clusters_Key_KeyProp = { "Clusters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Clusters = { "Clusters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonModel, Clusters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clusters_MetaData), NewProp_Clusters_MetaData) }; // 558610165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Clusters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Clusters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Clusters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridDungeonModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonModel_Statics::ClassParams = {
	&UGridDungeonModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridDungeonModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonModel()
{
	if (!Z_Registration_Info_UClass_UGridDungeonModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonModel.OuterSingleton, Z_Construct_UClass_UGridDungeonModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonModel>()
{
	return UGridDungeonModel::StaticClass();
}
UGridDungeonModel::UGridDungeonModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonModel);
UGridDungeonModel::~UGridDungeonModel() {}
// End Class UGridDungeonModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DungeonModelBuildState_StaticEnum, TEXT("DungeonModelBuildState"), &Z_Registration_Info_UEnum_DungeonModelBuildState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3294325229U) },
		{ EGridDungeonCellType_StaticEnum, TEXT("EGridDungeonCellType"), &Z_Registration_Info_UEnum_EGridDungeonCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3332370902U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridDungeonCellClusterInfo::StaticStruct, Z_Construct_UScriptStruct_FGridDungeonCellClusterInfo_Statics::NewStructOps, TEXT("GridDungeonCellClusterInfo"), &Z_Registration_Info_UScriptStruct_GridDungeonCellClusterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridDungeonCellClusterInfo), 558610165U) },
		{ FGridDungeonCell::StaticStruct, Z_Construct_UScriptStruct_FGridDungeonCell_Statics::NewStructOps, TEXT("GridDungeonCell"), &Z_Registration_Info_UScriptStruct_GridDungeonCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridDungeonCell), 3035221119U) },
		{ FGridDungeonCellDoor::StaticStruct, Z_Construct_UScriptStruct_FGridDungeonCellDoor_Statics::NewStructOps, TEXT("GridDungeonCellDoor"), &Z_Registration_Info_UScriptStruct_GridDungeonCellDoor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridDungeonCellDoor), 1129820241U) },
		{ FGridDungeonCellInfo::StaticStruct, Z_Construct_UScriptStruct_FGridDungeonCellInfo_Statics::NewStructOps, TEXT("GridDungeonCellInfo"), &Z_Registration_Info_UScriptStruct_GridDungeonCellInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridDungeonCellInfo), 1668943030U) },
		{ FGridDungeonStairInfo::StaticStruct, Z_Construct_UScriptStruct_FGridDungeonStairInfo_Statics::NewStructOps, TEXT("GridDungeonStairInfo"), &Z_Registration_Info_UScriptStruct_GridDungeonStairInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridDungeonStairInfo), 4220986555U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonModel, UGridDungeonModel::StaticClass, TEXT("UGridDungeonModel"), &Z_Registration_Info_UClass_UGridDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonModel), 30210818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_4037772986(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
