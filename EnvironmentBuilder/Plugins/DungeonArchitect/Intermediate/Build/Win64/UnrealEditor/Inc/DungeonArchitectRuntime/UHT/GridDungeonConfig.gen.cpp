// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonConfig() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EGridDungeonWallType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridDungeonWallType;
static UEnum* EGridDungeonWallType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridDungeonWallType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridDungeonWallType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridDungeonWallType"));
	}
	return Z_Registration_Info_UEnum_EGridDungeonWallType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridDungeonWallType>()
{
	return EGridDungeonWallType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "WallsAsEdges.DisplayName", "Walls as Edges" },
		{ "WallsAsEdges.Name", "EGridDungeonWallType::WallsAsEdges" },
		{ "WallsAsTileBlocks.DisplayName", "Walls as Tile Blocks" },
		{ "WallsAsTileBlocks.Name", "EGridDungeonWallType::WallsAsTileBlocks" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridDungeonWallType::WallsAsEdges", (int64)EGridDungeonWallType::WallsAsEdges },
		{ "EGridDungeonWallType::WallsAsTileBlocks", (int64)EGridDungeonWallType::WallsAsTileBlocks },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EGridDungeonWallType",
	"EGridDungeonWallType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType()
{
	if (!Z_Registration_Info_UEnum_EGridDungeonWallType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridDungeonWallType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridDungeonWallType.InnerSingleton;
}
// End Enum EGridDungeonWallType

// Begin Class UGridDungeonConfig
void UGridDungeonConfig::StaticRegisterNativesUGridDungeonConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonConfig);
UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister()
{
	return UGridDungeonConfig::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Grid/GridDungeonConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCells_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09  The number of cells to use while building the dungeon. \n\x09  A larger number would create a bigger and more complex dungeon.   \n\x09  A number of 100-150 builds a medium to large sized dungeon. \n\x09  Experiment with different ranges. You will not see these cells in the final result.\n\x09  */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of cells to use while building the dungeon.\nA larger number would create a bigger and more complex dungeon.\nA number of 100-150 builds a medium to large sized dungeon.\nExperiment with different ranges. You will not see these cells in the final result." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09This size is determined by the art asset used in the dungeon theme designed by the artist.\n\x09""For e.g., if we have a floor mesh that is 400x400.  The height of a floor is chosen to be 200 units as the stair mesh is 200 units high,\n\x09then the value should be set to 400x400x200.   You should change this to the dimension of the modular asset your designer has created for the dungeon\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This size is determined by the art asset used in the dungeon theme designed by the artist.\nFor e.g., if we have a floor mesh that is 400x400.  The height of a floor is chosen to be 200 units as the stair mesh is 200 units high,\nthen the value should be set to 400x400x200.   You should change this to the dimension of the modular asset your designer has created for the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCellSize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  Minimum size of a generated cell. While generation, a cell is \n\x09  either converted to a room, corridor or is discarded completely.  \n\x09  The Cell width / height is randomly chosen within this range\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum size of a generated cell. While generation, a cell is\neither converted to a room, corridor or is discarded completely.\nThe Cell width / height is randomly chosen within this range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCellSize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  Maximum size of a generated cell. While generation, a cell is\n\x09  either converted to a room, corridor or is discarded completely.\n\x09  The Cell width / height is randomly chosen within this range\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum size of a generated cell. While generation, a cell is\neither converted to a room, corridor or is discarded completely.\nThe Cell width / height is randomly chosen within this range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomAreaThreshold_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09  If a cell area exceeds past this limit, it is converted into a room. \n\x09  After cells are promoted to rooms, all rooms are connected to each \n\x09  other through corridors (either directly or indirectly. See spanning tree later)\n\x09  This field determines how \"dense\" your dungeon gets.  \n\x09  Reduce this number to get a densely populated dungeon with lots of rooms\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a cell area exceeds past this limit, it is converted into a room.\nAfter cells are promoted to rooms, all rooms are connected to each\nother through corridors (either directly or indirectly. See spanning tree later)\nThis field determines how \"dense\" your dungeon gets.\nReduce this number to get a densely populated dungeon with lots of rooms" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomAspectDelta_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09  The aspect ratio of the cells (width to height ratio).  \n\x09  Keeping this value near 0 would create square rooms.   \n\x09  Bringing this close to 1 would create elongated / stretched rooms \n\x09  with a high width to height ratio\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The aspect ratio of the cells (width to height ratio).\nKeeping this value near 0 would create square rooms.\nBringing this close to 1 would create elongated / stretched rooms\nwith a high width to height ratio" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpanningTreeLoopProbability_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09  Determines how many loops you would like to have in your dungeon.  \n\x09  A value near 0 will create fewer loops creating linear dungeons.   \n\x09  A value near 1 would create lots of loops, which would look unoriginal.  \n\x09  It's good to allow a few loops so a value close to zero (~0.2 should be good)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how many loops you would like to have in your dungeon.\nA value near 0 will create fewer loops creating linear dungeons.\nA value near 1 would create lots of loops, which would look unoriginal.\nIt's good to allow a few loops so a value close to zero (~0.2 should be good)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairGenerator_MetaData[] = {
		{ "Category", "Marker Emitters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switch between the different stair generator implementations */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch between the different stair generator implementations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorProximitySteps_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  Increase this value to remove nearby duplicate doors.  This value determines how many cell we \n\x09  can move to reach the two connected cells of a door if the door was removed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increase this value to remove nearby duplicate doors.  This value determines how many cell we\ncan move to reach the two connected cells of a door if the door was removed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalMean_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  The random number generator used in the dungeon generator does not use a uniform distribution. \n\x09  Instead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n\x09  (and hence fewer room cells and a lot more corridor cells). \n\x09  Play with these parameters for different results\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The random number generator used in the dungeon generator does not use a uniform distribution.\nInstead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n(and hence fewer room cells and a lot more corridor cells).\nPlay with these parameters for different results" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalStd_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  The random number generator used in the dungeon generator does not use a uniform distribution.\n\x09  Instead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n\x09  (and hence fewer room cells and a lot more corridor cells).\n\x09  Play with these parameters for different results\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The random number generator used in the dungeon generator does not use a uniform distribution.\nInstead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n(and hence fewer room cells and a lot more corridor cells).\nPlay with these parameters for different results" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidth_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09  The width of the lane connecting the rooms.   When rooms are to be connected, a \"lane\" is created to connect them together. \n\x09  Any cell colliding with this lane is converted to a corridor.  Else, it is converted to a cell of type \"corridor padding\"\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width of the lane connecting the rooms.   When rooms are to be connected, a \"lane\" is created to connect them together.\nAny cell colliding with this lane is converted to a corridor.  Else, it is converted to a cell of type \"corridor padding\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClusteredTheming_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  This allows you to cluster the dungeon into different groups and apply different themes on each groups.  This helps add variation to the level\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows you to cluster the dungeon into different groups and apply different themes on each groups.  This helps add variation to the level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClusterWithHeightVariation_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  While clustering corridors together, should the height variations be taken into account,\n\x09  If true, will group nearby cells with different heights, provided a stair connects to them.\n\x09  This will create clusters of larger sections of corridors together\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "While clustering corridors together, should the height variations be taken into account,\nIf true, will group nearby cells with different heights, provided a stair connects to them.\nThis will create clusters of larger sections of corridors together" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorHeight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** [Advanced] Ignored *///(EditAnywhere, BlueprintReadWrite, Category = Dungeon)\n" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[Advanced] Ignored //(EditAnywhere, BlueprintReadWrite, Category = Dungeon)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedStairHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightVariationProbability_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairConnectionTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallLayoutType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRoomRadius_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** [Advanced]  Keep between 10-15 */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[Advanced]  Keep between 10-15" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFastCellDistribution_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditCondition", "bFastCellDistribution" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLength_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditCondition", "bFastCellDistribution" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinCellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomAreaThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomAspectDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpanningTreeLoopProbability;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StairGenerator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorProximitySteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalMean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalStd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LaneWidth;
	static void NewProp_bEnableClusteredTheming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClusteredTheming;
	static void NewProp_bClusterWithHeightVariation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClusterWithHeightVariation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedStairHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightVariationProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StairConnectionTolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WallLayoutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WallLayoutType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialRoomRadius;
	static void NewProp_bFastCellDistribution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastCellDistribution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DungeonWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DungeonLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, NumCells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCells_MetaData), NewProp_NumCells_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, GridCellSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCellSize_MetaData), NewProp_GridCellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MinCellSize = { "MinCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, MinCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCellSize_MetaData), NewProp_MinCellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxCellSize = { "MaxCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, MaxCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCellSize_MetaData), NewProp_MaxCellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAreaThreshold = { "RoomAreaThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, RoomAreaThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomAreaThreshold_MetaData), NewProp_RoomAreaThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAspectDelta = { "RoomAspectDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, RoomAspectDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomAspectDelta_MetaData), NewProp_RoomAspectDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_SpanningTreeLoopProbability = { "SpanningTreeLoopProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, SpanningTreeLoopProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpanningTreeLoopProbability_MetaData), NewProp_SpanningTreeLoopProbability_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairGenerator = { "StairGenerator", nullptr, (EPropertyFlags)0x011602000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, StairGenerator), Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairGenerator_MetaData), NewProp_StairGenerator_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DoorProximitySteps = { "DoorProximitySteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, DoorProximitySteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorProximitySteps_MetaData), NewProp_DoorProximitySteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalMean = { "NormalMean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, NormalMean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalMean_MetaData), NewProp_NormalMean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalStd = { "NormalStd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, NormalStd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalStd_MetaData), NewProp_NormalStd_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_LaneWidth = { "LaneWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, LaneWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneWidth_MetaData), NewProp_LaneWidth_MetaData) };
void Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming_SetBit(void* Obj)
{
	((UGridDungeonConfig*)Obj)->bEnableClusteredTheming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming = { "bEnableClusteredTheming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridDungeonConfig), &Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableClusteredTheming_MetaData), NewProp_bEnableClusteredTheming_MetaData) };
void Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation_SetBit(void* Obj)
{
	((UGridDungeonConfig*)Obj)->bClusterWithHeightVariation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation = { "bClusterWithHeightVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridDungeonConfig), &Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClusterWithHeightVariation_MetaData), NewProp_bClusterWithHeightVariation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_FloorHeight = { "FloorHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, FloorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorHeight_MetaData), NewProp_FloorHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxAllowedStairHeight = { "MaxAllowedStairHeight", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, MaxAllowedStairHeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedStairHeight_MetaData), NewProp_MaxAllowedStairHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_HeightVariationProbability = { "HeightVariationProbability", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, HeightVariationProbability_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightVariationProbability_MetaData), NewProp_HeightVariationProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairConnectionTolerance = { "StairConnectionTolerance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, StairConnectionTolerance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairConnectionTolerance_MetaData), NewProp_StairConnectionTolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType = { "WallLayoutType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, WallLayoutType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallLayoutType_MetaData), NewProp_WallLayoutType_MetaData) }; // 3035079017
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_InitialRoomRadius = { "InitialRoomRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, InitialRoomRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRoomRadius_MetaData), NewProp_InitialRoomRadius_MetaData) };
void Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution_SetBit(void* Obj)
{
	((UGridDungeonConfig*)Obj)->bFastCellDistribution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution = { "bFastCellDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridDungeonConfig), &Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFastCellDistribution_MetaData), NewProp_bFastCellDistribution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonWidth = { "DungeonWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, DungeonWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonWidth_MetaData), NewProp_DungeonWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonLength = { "DungeonLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonConfig, DungeonLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLength_MetaData), NewProp_DungeonLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NumCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_GridCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MinCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAreaThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAspectDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_SpanningTreeLoopProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DoorProximitySteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalMean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalStd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_LaneWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_FloorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxAllowedStairHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_HeightVariationProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairConnectionTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_InitialRoomRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridDungeonConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonConfig_Statics::ClassParams = {
	&UGridDungeonConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridDungeonConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonConfig()
{
	if (!Z_Registration_Info_UClass_UGridDungeonConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonConfig.OuterSingleton, Z_Construct_UClass_UGridDungeonConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonConfig>()
{
	return UGridDungeonConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonConfig);
UGridDungeonConfig::~UGridDungeonConfig() {}
// End Class UGridDungeonConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridDungeonWallType_StaticEnum, TEXT("EGridDungeonWallType"), &Z_Registration_Info_UEnum_EGridDungeonWallType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3035079017U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonConfig, UGridDungeonConfig::StaticClass, TEXT("UGridDungeonConfig"), &Z_Registration_Info_UClass_UGridDungeonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonConfig), 2653815691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_1847096516(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
