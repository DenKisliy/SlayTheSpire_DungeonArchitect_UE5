// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskInitialize() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EGridFlowTilemapWallGenerationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod;
static UEnum* EGridFlowTilemapWallGenerationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridFlowTilemapWallGenerationMethod"));
	}
	return Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridFlowTilemapWallGenerationMethod>()
{
	return EGridFlowTilemapWallGenerationMethod_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "WallAsEdges.DisplayName", "Wall as Edges" },
		{ "WallAsEdges.Name", "EGridFlowTilemapWallGenerationMethod::WallAsEdges" },
		{ "WallAsTiles.DisplayName", "Wall as Tiles" },
		{ "WallAsTiles.Name", "EGridFlowTilemapWallGenerationMethod::WallAsTiles" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridFlowTilemapWallGenerationMethod::WallAsTiles", (int64)EGridFlowTilemapWallGenerationMethod::WallAsTiles },
		{ "EGridFlowTilemapWallGenerationMethod::WallAsEdges", (int64)EGridFlowTilemapWallGenerationMethod::WallAsEdges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EGridFlowTilemapWallGenerationMethod",
	"EGridFlowTilemapWallGenerationMethod",
	Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod()
{
	if (!Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.InnerSingleton;
}
// End Enum EGridFlowTilemapWallGenerationMethod

// Begin Class UGridFlowTilemapTaskInitialize
void UGridFlowTilemapTaskInitialize::StaticRegisterNativesUGridFlowTilemapTaskInitialize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskInitialize);
UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize_NoRegister()
{
	return UGridFlowTilemapTaskInitialize::StaticClass();
}
struct Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "MenuPriority", "2100" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "TilemapTask", "" },
		{ "Title", "Create Tilemap" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Create Tilemap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilemapSizePerNode_MetaData[] = {
		{ "Category", "Layout Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        The nodes in the layout graph are converted into rooms, corridors or cave chunks. \n        This determines how many tiles in the tilemap are used to generate a room\n        Increase this number to get more tiles in the room (also also increase the size of the tilemap)\n\n        Variable Name: TilemapSizePerNode\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The nodes in the layout graph are converted into rooms, corridors or cave chunks.\nThis determines how many tiles in the tilemap are used to generate a room\nIncrease this number to get more tiles in the room (also also increase the size of the tilemap)\n\nVariable Name: TilemapSizePerNode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerturbAmount_MetaData[] = {
		{ "Category", "Layout Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        The room walls are move around to give an uneven look.  Bring this value down to get more evenly spaced square rooms\n\n        Variable Name: PerturbAmount\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The room walls are move around to give an uneven look.  Bring this value down to get more evenly spaced square rooms\n\nVariable Name: PerturbAmount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorridorLaneWidth_MetaData[] = {
		{ "Category", "Layout Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        The width in tile cells for the generated corridors in the tilemap\n\n        Variable Name: CorridorLaneWidth\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width in tile cells for the generated corridors in the tilemap\n\nVariable Name: CorridorLaneWidth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPadding_MetaData[] = {
		{ "Category", "Layout Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        The tilemap is cropped to the layout boundaries.  \n        Add padding on the tilemap around the layout boundaries\n\n        Variable Name: LayoutPadding\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tilemap is cropped to the layout boundaries.\nAdd padding on the tilemap around the layout boundaries\n\nVariable Name: LayoutPadding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCropTilemapToLayout_MetaData[] = {
		{ "Category", "Layout Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        After the dungeon has been built, the tilemap is cropped to fit the dungeon layout\n        Disable this if you rely on static room positions (like blending static art asset to enter the dungeon)\n\n        Variable Name: bCropTilemapToLayout\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After the dungeon has been built, the tilemap is cropped to fit the dungeon layout\nDisable this if you rely on static room positions (like blending static art asset to enter the dungeon)\n\nVariable Name: bCropTilemapToLayout" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallGenerationMethod_MetaData[] = {
		{ "Category", "Layout Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Configure walls to be thick (that take up an entire tile) or thin that are place don the edge of a tile.\n        This depends on your art asset used in the theme file. Set accordingly\n     **/" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure walls to be thick (that take up an entire tile) or thin that are place don the edge of a tile.\nThis depends on your art asset used in the theme file. Set accordingly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaveThickness_MetaData[] = {
		{ "Category", "Cave Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Control the thickness of the generate caves\n\n        Variable Name: CaveThickness\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control the thickness of the generate caves\n\nVariable Name: CaveThickness" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaveAutomataNeighbors_MetaData[] = {
		{ "Category", "Cave Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Cave Generation Finite Automata setting. The number of rock neighbors for a \n        tile to turn into a rock\n\n        Variable Name: CaveAutomataNeighbors\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cave Generation Finite Automata setting. The number of rock neighbors for a\ntile to turn into a rock\n\nVariable Name: CaveAutomataNeighbors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaveAutomataIterations_MetaData[] = {
		{ "Category", "Cave Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Cave Generation Finite Automata setting. The number of iterations to run\n\n        Variable Name: CaveAutomataIterations\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cave Generation Finite Automata setting. The number of iterations to run\n\nVariable Name: CaveAutomataIterations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomColorSaturation_MetaData[] = {
		{ "Category", "Preview Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        When a layout node is selected, the relevant tiles in the tilemap light up. \n        This setting controls the color.  This is only for preview purpose\n\n        Variable Name: [N/A]\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a layout node is selected, the relevant tiles in the tilemap light up.\nThis setting controls the color.  This is only for preview purpose\n\nVariable Name: [N/A]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomColorBrightness_MetaData[] = {
		{ "Category", "Preview Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        When a layout node is selected, the relevant tiles in the tilemap light up.\n        This setting controls the color.  This is only for preview purpose\n\n        Variable Name: [N/A]\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a layout node is selected, the relevant tiles in the tilemap light up.\nThis setting controls the color.  This is only for preview purpose\n\nVariable Name: [N/A]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugLayoutTiles_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Debug: Shows the layout tiles in red\n\n        Variable Name: [N/A]\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug: Shows the layout tiles in red\n\nVariable Name: [N/A]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapSizePerNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerturbAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CorridorLaneWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayoutPadding;
	static void NewProp_bCropTilemapToLayout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCropTilemapToLayout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WallGenerationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WallGenerationMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaveThickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaveAutomataNeighbors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaveAutomataIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomColorSaturation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomColorBrightness;
	static void NewProp_bDebugLayoutTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugLayoutTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskInitialize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_TilemapSizePerNode = { "TilemapSizePerNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, TilemapSizePerNode), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilemapSizePerNode_MetaData), NewProp_TilemapSizePerNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_PerturbAmount = { "PerturbAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, PerturbAmount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerturbAmount_MetaData), NewProp_PerturbAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CorridorLaneWidth = { "CorridorLaneWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CorridorLaneWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorridorLaneWidth_MetaData), NewProp_CorridorLaneWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_LayoutPadding = { "LayoutPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, LayoutPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutPadding_MetaData), NewProp_LayoutPadding_MetaData) };
void Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout_SetBit(void* Obj)
{
	((UGridFlowTilemapTaskInitialize*)Obj)->bCropTilemapToLayout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout = { "bCropTilemapToLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowTilemapTaskInitialize), &Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCropTilemapToLayout_MetaData), NewProp_bCropTilemapToLayout_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod = { "WallGenerationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, WallGenerationMethod), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallGenerationMethod_MetaData), NewProp_WallGenerationMethod_MetaData) }; // 850472910
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveThickness = { "CaveThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CaveThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaveThickness_MetaData), NewProp_CaveThickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataNeighbors = { "CaveAutomataNeighbors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CaveAutomataNeighbors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaveAutomataNeighbors_MetaData), NewProp_CaveAutomataNeighbors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataIterations = { "CaveAutomataIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CaveAutomataIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaveAutomataIterations_MetaData), NewProp_CaveAutomataIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorSaturation = { "RoomColorSaturation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, RoomColorSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomColorSaturation_MetaData), NewProp_RoomColorSaturation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorBrightness = { "RoomColorBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, RoomColorBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomColorBrightness_MetaData), NewProp_RoomColorBrightness_MetaData) };
void Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles_SetBit(void* Obj)
{
	((UGridFlowTilemapTaskInitialize*)Obj)->bDebugLayoutTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles = { "bDebugLayoutTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowTilemapTaskInitialize), &Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugLayoutTiles_MetaData), NewProp_bDebugLayoutTiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_TilemapSizePerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_PerturbAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CorridorLaneWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_LayoutPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataNeighbors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::ClassParams = {
	&UGridFlowTilemapTaskInitialize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize()
{
	if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskInitialize>()
{
	return UGridFlowTilemapTaskInitialize::StaticClass();
}
UGridFlowTilemapTaskInitialize::UGridFlowTilemapTaskInitialize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskInitialize);
UGridFlowTilemapTaskInitialize::~UGridFlowTilemapTaskInitialize() {}
// End Class UGridFlowTilemapTaskInitialize

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridFlowTilemapWallGenerationMethod_StaticEnum, TEXT("EGridFlowTilemapWallGenerationMethod"), &Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 850472910U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskInitialize, UGridFlowTilemapTaskInitialize::StaticClass, TEXT("UGridFlowTilemapTaskInitialize"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskInitialize), 910563140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_4144282431(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
