// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTilemap() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemap();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemap_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCell();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlay();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCoord();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapEdge();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EFlowTilemapCellType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowTilemapCellType;
static UEnum* EFlowTilemapCellType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlowTilemapCellType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlowTilemapCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowTilemapCellType"));
	}
	return Z_Registration_Info_UEnum_EFlowTilemapCellType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowTilemapCellType>()
{
	return EFlowTilemapCellType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "EFlowTilemapCellType::Custom" },
		{ "Door.Name", "EFlowTilemapCellType::Door" },
		{ "Empty.Name", "EFlowTilemapCellType::Empty" },
		{ "Floor.Name", "EFlowTilemapCellType::Floor" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "Wall.Name", "EFlowTilemapCellType::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlowTilemapCellType::Empty", (int64)EFlowTilemapCellType::Empty },
		{ "EFlowTilemapCellType::Floor", (int64)EFlowTilemapCellType::Floor },
		{ "EFlowTilemapCellType::Wall", (int64)EFlowTilemapCellType::Wall },
		{ "EFlowTilemapCellType::Door", (int64)EFlowTilemapCellType::Door },
		{ "EFlowTilemapCellType::Custom", (int64)EFlowTilemapCellType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EFlowTilemapCellType",
	"EFlowTilemapCellType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType()
{
	if (!Z_Registration_Info_UEnum_EFlowTilemapCellType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowTilemapCellType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlowTilemapCellType.InnerSingleton;
}
// End Enum EFlowTilemapCellType

// Begin Enum EFlowTilemapEdgeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowTilemapEdgeType;
static UEnum* EFlowTilemapEdgeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlowTilemapEdgeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlowTilemapEdgeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowTilemapEdgeType"));
	}
	return Z_Registration_Info_UEnum_EFlowTilemapEdgeType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowTilemapEdgeType>()
{
	return EFlowTilemapEdgeType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Door.Name", "EFlowTilemapEdgeType::Door" },
		{ "Empty.Name", "EFlowTilemapEdgeType::Empty" },
		{ "Fence.Name", "EFlowTilemapEdgeType::Fence" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "Wall.Name", "EFlowTilemapEdgeType::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlowTilemapEdgeType::Empty", (int64)EFlowTilemapEdgeType::Empty },
		{ "EFlowTilemapEdgeType::Wall", (int64)EFlowTilemapEdgeType::Wall },
		{ "EFlowTilemapEdgeType::Fence", (int64)EFlowTilemapEdgeType::Fence },
		{ "EFlowTilemapEdgeType::Door", (int64)EFlowTilemapEdgeType::Door },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EFlowTilemapEdgeType",
	"EFlowTilemapEdgeType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType()
{
	if (!Z_Registration_Info_UEnum_EFlowTilemapEdgeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowTilemapEdgeType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlowTilemapEdgeType.InnerSingleton;
}
// End Enum EFlowTilemapEdgeType

// Begin ScriptStruct FFlowTilemapCustomCellInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo;
class UScriptStruct* FFlowTilemapCustomCellInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCustomCellInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCustomCellInfo>()
{
	return FFlowTilemapCustomCellInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCustomCellInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCustomCellInfo, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCustomCellInfo, DefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultColor_MetaData), NewProp_DefaultColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_DefaultColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapCustomCellInfo",
	Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::PropPointers),
	sizeof(FFlowTilemapCustomCellInfo),
	alignof(FFlowTilemapCustomCellInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.InnerSingleton;
}
// End ScriptStruct FFlowTilemapCustomCellInfo

// Begin Enum EFlowTilemapCellOverlayMergeWallOverlayRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule;
static UEnum* EFlowTilemapCellOverlayMergeWallOverlayRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowTilemapCellOverlayMergeWallOverlayRule"));
	}
	return Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowTilemapCellOverlayMergeWallOverlayRule>()
{
	return EFlowTilemapCellOverlayMergeWallOverlayRule_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeepOverlayRemoveWall.Name", "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepOverlayRemoveWall" },
		{ "KeepWallAndOverlay.Name", "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallAndOverlay" },
		{ "KeepWallRemoveOverlay.Name", "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallRemoveOverlay" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallAndOverlay", (int64)EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallAndOverlay },
		{ "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallRemoveOverlay", (int64)EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallRemoveOverlay },
		{ "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepOverlayRemoveWall", (int64)EFlowTilemapCellOverlayMergeWallOverlayRule::KeepOverlayRemoveWall },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EFlowTilemapCellOverlayMergeWallOverlayRule",
	"EFlowTilemapCellOverlayMergeWallOverlayRule",
	Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule()
{
	if (!Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.InnerSingleton;
}
// End Enum EFlowTilemapCellOverlayMergeWallOverlayRule

// Begin ScriptStruct FFlowTilemapCellOverlayMergeConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig;
class UScriptStruct* FFlowTilemapCellOverlayMergeConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellOverlayMergeConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellOverlayMergeConfig>()
{
	return FFlowTilemapCellOverlayMergeConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Minimum height of the tile for the merge to happen\n\n        Variable Name: MinHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Minimum height of the tile for the merge to happen\n\nVariable Name: MinHeight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Maximum height of the tile for the merge to happen\n\n        Variable Name: MaxHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Maximum height of the tile for the merge to happen\n\nVariable Name: MaxHeight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallOverlayRule_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Control how the walls are treated when overlays are placed in wall tiles\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Control how the walls are treated when overlays are placed in wall tiles\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerHeightOffsetForLayoutTiles_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        The logical height offset on the marker for tiles inside the dungeon layout\n\n        Variable Name: MarkerHeightOffsetForLayoutTiles\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "The logical height offset on the marker for tiles inside the dungeon layout\n\nVariable Name: MarkerHeightOffsetForLayoutTiles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerHeightOffsetForNonLayoutTiles_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        The logical height offset on the marker for tiles outside the dungeon layout\n\n        Variable Name: MarkerHeightOffsetForNonLayoutTiles\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "The logical height offset on the marker for tiles outside the dungeon layout\n\nVariable Name: MarkerHeightOffsetForNonLayoutTiles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveElevationMarker_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Should the elevation marker be removed when this overlay is placed on an elevation tile?\n\n        Variable Name: RemoveElevationMarker\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Should the elevation marker be removed when this overlay is placed on an elevation tile?\n\nVariable Name: RemoveElevationMarker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WallOverlayRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WallOverlayRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerHeightOffsetForLayoutTiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerHeightOffsetForNonLayoutTiles;
	static void NewProp_RemoveElevationMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveElevationMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellOverlayMergeConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeight_MetaData), NewProp_MinHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule = { "WallOverlayRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, WallOverlayRule), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallOverlayRule_MetaData), NewProp_WallOverlayRule_MetaData) }; // 3751439269
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForLayoutTiles = { "MarkerHeightOffsetForLayoutTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MarkerHeightOffsetForLayoutTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerHeightOffsetForLayoutTiles_MetaData), NewProp_MarkerHeightOffsetForLayoutTiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForNonLayoutTiles = { "MarkerHeightOffsetForNonLayoutTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MarkerHeightOffsetForNonLayoutTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerHeightOffsetForNonLayoutTiles_MetaData), NewProp_MarkerHeightOffsetForNonLayoutTiles_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker_SetBit(void* Obj)
{
	((FFlowTilemapCellOverlayMergeConfig*)Obj)->RemoveElevationMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker = { "RemoveElevationMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCellOverlayMergeConfig), &Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveElevationMarker_MetaData), NewProp_RemoveElevationMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MinHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForLayoutTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForNonLayoutTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapCellOverlayMergeConfig",
	Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::PropPointers),
	sizeof(FFlowTilemapCellOverlayMergeConfig),
	alignof(FFlowTilemapCellOverlayMergeConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.InnerSingleton;
}
// End ScriptStruct FFlowTilemapCellOverlayMergeConfig

// Begin ScriptStruct FFlowTilemapCoord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCoord;
class UScriptStruct* FFlowTilemapCoord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCoord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCoord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCoord, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCoord"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCoord.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCoord>()
{
	return FFlowTilemapCoord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
		{ "Comment", "/** The coordinate of the tile in the tilemap */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "The coordinate of the tile in the tilemap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEdgeCoord_MetaData[] = {
		{ "Comment", "/** Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHorizontalEdge_MetaData[] = {
		{ "Comment", "/** Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
	static void NewProp_bIsEdgeCoord_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEdgeCoord;
	static void NewProp_bHorizontalEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHorizontalEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCoord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCoord, Coord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coord_MetaData), NewProp_Coord_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord_SetBit(void* Obj)
{
	((FFlowTilemapCoord*)Obj)->bIsEdgeCoord = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord = { "bIsEdgeCoord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCoord), &Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEdgeCoord_MetaData), NewProp_bIsEdgeCoord_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge_SetBit(void* Obj)
{
	((FFlowTilemapCoord*)Obj)->bHorizontalEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge = { "bHorizontalEdge", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCoord), &Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHorizontalEdge_MetaData), NewProp_bHorizontalEdge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_Coord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapCoord",
	Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::PropPointers),
	sizeof(FFlowTilemapCoord),
	alignof(FFlowTilemapCoord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCoord()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCoord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCoord.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCoord.InnerSingleton;
}
// End ScriptStruct FFlowTilemapCoord

// Begin ScriptStruct FFlowTilemapEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapEdge;
class UScriptStruct* FFlowTilemapEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapEdge, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapEdge"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapEdge.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapEdge>()
{
	return FFlowTilemapEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightCoord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCoord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightCoord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerAngle;
	static void NewProp_bHasItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeCoord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType = { "EdgeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapEdge, EdgeType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeType_MetaData), NewProp_EdgeType_MetaData) }; // 1712175649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapEdge, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_HeightCoord = { "HeightCoord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapEdge, HeightCoord), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightCoord_MetaData), NewProp_HeightCoord_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_MarkerAngle = { "MarkerAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapEdge, MarkerAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerAngle_MetaData), NewProp_MarkerAngle_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem_SetBit(void* Obj)
{
	((FFlowTilemapEdge*)Obj)->bHasItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem = { "bHasItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapEdge), &Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasItem_MetaData), NewProp_bHasItem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeCoord = { "EdgeCoord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapEdge, EdgeCoord), Z_Construct_UScriptStruct_FFlowTilemapCoord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCoord_MetaData), NewProp_EdgeCoord_MetaData) }; // 2913930496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_HeightCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_MarkerAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeCoord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapEdge",
	Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::PropPointers),
	sizeof(FFlowTilemapEdge),
	alignof(FFlowTilemapEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapEdge()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapEdge.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapEdge.InnerSingleton;
}
// End ScriptStruct FFlowTilemapEdge

// Begin ScriptStruct FFlowTilemapCellOverlay
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay;
class UScriptStruct* FFlowTilemapCellOverlay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellOverlay"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellOverlay>()
{
	return FFlowTilemapCellOverlay::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileBlockingOverlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseValue;
	static void NewProp_bTileBlockingOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileBlockingOverlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergeConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellOverlay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FFlowTilemapCellOverlay*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCellOverlay), &Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_NoiseValue = { "NoiseValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, NoiseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseValue_MetaData), NewProp_NoiseValue_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay_SetBit(void* Obj)
{
	((FFlowTilemapCellOverlay*)Obj)->bTileBlockingOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay = { "bTileBlockingOverlay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCellOverlay), &Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileBlockingOverlay_MetaData), NewProp_bTileBlockingOverlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MergeConfig = { "MergeConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, MergeConfig), Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeConfig_MetaData), NewProp_MergeConfig_MetaData) }; // 3592733391
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_NoiseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MergeConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapCellOverlay",
	Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::PropPointers),
	sizeof(FFlowTilemapCellOverlay),
	alignof(FFlowTilemapCellOverlay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlay()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.InnerSingleton;
}
// End ScriptStruct FFlowTilemapCellOverlay

// Begin ScriptStruct FFlowTilemapCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCell;
class UScriptStruct* FFlowTilemapCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCell, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCell"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCell>()
{
	return FFlowTilemapCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCellInfo_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasItem_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasOverlay_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlay_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkCoord_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCoord_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMainPath_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLayoutCell_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnreachable_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromMainPath_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCellInfo;
	static void NewProp_bHasItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_bHasOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOverlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Overlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoord;
	static void NewProp_bUseCustomColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomColor;
	static void NewProp_bMainPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMainPath;
	static void NewProp_bLayoutCell_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLayoutCell;
	static void NewProp_bUnreachable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnreachable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceFromMainPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellType_MetaData), NewProp_CellType_MetaData) }; // 3434885287
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomCellInfo = { "CustomCellInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, CustomCellInfo), Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCellInfo_MetaData), NewProp_CustomCellInfo_MetaData) }; // 1676282368
void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem_SetBit(void* Obj)
{
	((FFlowTilemapCell*)Obj)->bHasItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem = { "bHasItem", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasItem_MetaData), NewProp_bHasItem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay_SetBit(void* Obj)
{
	((FFlowTilemapCell*)Obj)->bHasOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay = { "bHasOverlay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasOverlay_MetaData), NewProp_bHasOverlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Overlay = { "Overlay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, Overlay), Z_Construct_UScriptStruct_FFlowTilemapCellOverlay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlay_MetaData), NewProp_Overlay_MetaData) }; // 1781093531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ChunkCoord = { "ChunkCoord", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, ChunkCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkCoord_MetaData), NewProp_ChunkCoord_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_TileCoord = { "TileCoord", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, TileCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCoord_MetaData), NewProp_TileCoord_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor_SetBit(void* Obj)
{
	((FFlowTilemapCell*)Obj)->bUseCustomColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor = { "bUseCustomColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomColor_MetaData), NewProp_bUseCustomColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomColor = { "CustomColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, CustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomColor_MetaData), NewProp_CustomColor_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath_SetBit(void* Obj)
{
	((FFlowTilemapCell*)Obj)->bMainPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath = { "bMainPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMainPath_MetaData), NewProp_bMainPath_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell_SetBit(void* Obj)
{
	((FFlowTilemapCell*)Obj)->bLayoutCell = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell = { "bLayoutCell", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLayoutCell_MetaData), NewProp_bLayoutCell_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable_SetBit(void* Obj)
{
	((FFlowTilemapCell*)Obj)->bUnreachable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable = { "bUnreachable", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnreachable_MetaData), NewProp_bUnreachable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_DistanceFromMainPath = { "DistanceFromMainPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, DistanceFromMainPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromMainPath_MetaData), NewProp_DistanceFromMainPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCell, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomCellInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Overlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ChunkCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_TileCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_DistanceFromMainPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapCell",
	Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::PropPointers),
	sizeof(FFlowTilemapCell),
	alignof(FFlowTilemapCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCell()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCell.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCell.InnerSingleton;
}
// End ScriptStruct FFlowTilemapCell

// Begin ScriptStruct FFlowTilemapCellDoorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo;
class UScriptStruct* FFlowTilemapCellDoorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellDoorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellDoorInfo>()
{
	return FFlowTilemapCellDoorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneWay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static void NewProp_bOneWay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneWay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellDoorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FFlowTilemapCellDoorInfo*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCellDoorInfo), &Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
void Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay_SetBit(void* Obj)
{
	((FFlowTilemapCellDoorInfo*)Obj)->bOneWay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay = { "bOneWay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlowTilemapCellDoorInfo), &Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneWay_MetaData), NewProp_bOneWay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkA = { "ChunkA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellDoorInfo, ChunkA), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkA_MetaData), NewProp_ChunkA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkB = { "ChunkB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellDoorInfo, ChunkB), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkB_MetaData), NewProp_ChunkB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellDoorInfo, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapCellDoorInfo",
	Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::PropPointers),
	sizeof(FFlowTilemapCellDoorInfo),
	alignof(FFlowTilemapCellDoorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.InnerSingleton;
}
// End ScriptStruct FFlowTilemapCellDoorInfo

// Begin ScriptStruct FFlowTilemapCellWallInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo;
class UScriptStruct* FFlowTilemapCellWallInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellWallInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellWallInfo>()
{
	return FFlowTilemapCellWallInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwningTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellWallInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles_Inner = { "OwningTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles = { "OwningTiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowTilemapCellWallInfo, OwningTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningTiles_MetaData), NewProp_OwningTiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowTilemapCellWallInfo",
	Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::PropPointers),
	sizeof(FFlowTilemapCellWallInfo),
	alignof(FFlowTilemapCellWallInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.InnerSingleton;
}
// End ScriptStruct FFlowTilemapCellWallInfo

// Begin Class UFlowTilemap
void UFlowTilemap::StaticRegisterNativesUFlowTilemap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemap);
UClass* Z_Construct_UClass_UFlowTilemap_NoRegister()
{
	return UFlowTilemap::StaticClass();
}
struct Z_Construct_UClass_UFlowTilemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgesHorizontal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgesVertical_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallMetadataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMetadataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgesHorizontal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgesHorizontal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgesVertical_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgesVertical;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallMetadataMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallMetadataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WallMetadataMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorMetadataMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorMetadataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DoorMetadataMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapCell, METADATA_PARAMS(0, nullptr) }; // 162492500
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemap, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 162492500
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal_Inner = { "EdgesHorizontal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapEdge, METADATA_PARAMS(0, nullptr) }; // 1759190921
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal = { "EdgesHorizontal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemap, EdgesHorizontal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgesHorizontal_MetaData), NewProp_EdgesHorizontal_MetaData) }; // 1759190921
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical_Inner = { "EdgesVertical", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapEdge, METADATA_PARAMS(0, nullptr) }; // 1759190921
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical = { "EdgesVertical", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemap, EdgesVertical), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgesVertical_MetaData), NewProp_EdgesVertical_MetaData) }; // 1759190921
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemap, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemap, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_ValueProp = { "WallMetadataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo, METADATA_PARAMS(0, nullptr) }; // 2591468294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_Key_KeyProp = { "WallMetadataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapCoord, METADATA_PARAMS(0, nullptr) }; // 2913930496
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap = { "WallMetadataMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemap, WallMetadataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallMetadataMap_MetaData), NewProp_WallMetadataMap_MetaData) }; // 2913930496 2591468294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_ValueProp = { "DoorMetadataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo, METADATA_PARAMS(0, nullptr) }; // 1759821213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_Key_KeyProp = { "DoorMetadataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapCoord, METADATA_PARAMS(0, nullptr) }; // 2913930496
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap = { "DoorMetadataMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemap, DoorMetadataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMetadataMap_MetaData), NewProp_DoorMetadataMap_MetaData) }; // 2913930496 1759821213
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowTilemap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemap_Statics::ClassParams = {
	&UFlowTilemap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowTilemap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowTilemap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowTilemap()
{
	if (!Z_Registration_Info_UClass_UFlowTilemap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemap.OuterSingleton, Z_Construct_UClass_UFlowTilemap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowTilemap.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowTilemap>()
{
	return UFlowTilemap::StaticClass();
}
UFlowTilemap::UFlowTilemap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemap);
UFlowTilemap::~UFlowTilemap() {}
// End Class UFlowTilemap

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFlowTilemapCellType_StaticEnum, TEXT("EFlowTilemapCellType"), &Z_Registration_Info_UEnum_EFlowTilemapCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3434885287U) },
		{ EFlowTilemapEdgeType_StaticEnum, TEXT("EFlowTilemapEdgeType"), &Z_Registration_Info_UEnum_EFlowTilemapEdgeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1712175649U) },
		{ EFlowTilemapCellOverlayMergeWallOverlayRule_StaticEnum, TEXT("EFlowTilemapCellOverlayMergeWallOverlayRule"), &Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3751439269U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlowTilemapCustomCellInfo::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewStructOps, TEXT("FlowTilemapCustomCellInfo"), &Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCustomCellInfo), 1676282368U) },
		{ FFlowTilemapCellOverlayMergeConfig::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewStructOps, TEXT("FlowTilemapCellOverlayMergeConfig"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellOverlayMergeConfig), 3592733391U) },
		{ FFlowTilemapCoord::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewStructOps, TEXT("FlowTilemapCoord"), &Z_Registration_Info_UScriptStruct_FlowTilemapCoord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCoord), 2913930496U) },
		{ FFlowTilemapEdge::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewStructOps, TEXT("FlowTilemapEdge"), &Z_Registration_Info_UScriptStruct_FlowTilemapEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapEdge), 1759190921U) },
		{ FFlowTilemapCellOverlay::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewStructOps, TEXT("FlowTilemapCellOverlay"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellOverlay), 1781093531U) },
		{ FFlowTilemapCell::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewStructOps, TEXT("FlowTilemapCell"), &Z_Registration_Info_UScriptStruct_FlowTilemapCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCell), 162492500U) },
		{ FFlowTilemapCellDoorInfo::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewStructOps, TEXT("FlowTilemapCellDoorInfo"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellDoorInfo), 1759821213U) },
		{ FFlowTilemapCellWallInfo::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewStructOps, TEXT("FlowTilemapCellWallInfo"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellWallInfo), 2591468294U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemap, UFlowTilemap::StaticClass, TEXT("UFlowTilemap"), &Z_Registration_Info_UClass_UFlowTilemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemap), 1799955521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_2106147912(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
