// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/DungeonLayoutData.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/FloorSettings.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBoundingShapes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/PointOfInterest.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLayoutData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeCircle();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeLine();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonFloorSettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonPointOfInterest();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonLayoutDataChunkInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo;
class UScriptStruct* FDungeonLayoutDataChunkInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonLayoutDataChunkInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonLayoutDataChunkInfo>()
{
	return FDungeonLayoutDataChunkInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Circles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexPolys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outlines_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasShapeTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsOfInterest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Circles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Circles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexPolys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexPolys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outlines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outlines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasShapeTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CanvasShapeTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsOfInterest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonLayoutDataChunkInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Circles_Inner = { "Circles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDABoundsShapeCircle, METADATA_PARAMS(0, nullptr) }; // 1588341372
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Circles = { "Circles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataChunkInfo, Circles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Circles_MetaData), NewProp_Circles_MetaData) }; // 1588341372
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_ConvexPolys_Inner = { "ConvexPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly, METADATA_PARAMS(0, nullptr) }; // 4286470268
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_ConvexPolys = { "ConvexPolys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataChunkInfo, ConvexPolys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexPolys_MetaData), NewProp_ConvexPolys_MetaData) }; // 4286470268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Outlines_Inner = { "Outlines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDABoundsShapeLine, METADATA_PARAMS(0, nullptr) }; // 2274881132
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Outlines = { "Outlines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataChunkInfo, Outlines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outlines_MetaData), NewProp_Outlines_MetaData) }; // 2274881132
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_CanvasShapeTextures_Inner = { "CanvasShapeTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture, METADATA_PARAMS(0, nullptr) }; // 710279873
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_CanvasShapeTextures = { "CanvasShapeTextures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataChunkInfo, CanvasShapeTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasShapeTextures_MetaData), NewProp_CanvasShapeTextures_MetaData) }; // 710279873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_PointsOfInterest_Inner = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonPointOfInterest, METADATA_PARAMS(0, nullptr) }; // 586671446
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_PointsOfInterest = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataChunkInfo, PointsOfInterest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsOfInterest_MetaData), NewProp_PointsOfInterest_MetaData) }; // 586671446
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Circles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Circles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_ConvexPolys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_ConvexPolys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Outlines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_Outlines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_CanvasShapeTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_CanvasShapeTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_PointsOfInterest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewProp_PointsOfInterest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonLayoutDataChunkInfo",
	Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::PropPointers),
	sizeof(FDungeonLayoutDataChunkInfo),
	alignof(FDungeonLayoutDataChunkInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo.InnerSingleton, Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo.InnerSingleton;
}
// End ScriptStruct FDungeonLayoutDataChunkInfo

// Begin ScriptStruct FDungeonLayoutDataDoorItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem;
class UScriptStruct* FDungeonLayoutDataDoorItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonLayoutDataDoorItem"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonLayoutDataDoorItem>()
{
	return FDungeonLayoutDataDoorItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorOcclusionThickness_MetaData[] = {
		{ "Comment", "/**\n     * The layout is initially rendered without doors. Then the walls are removed to make way for doors, where ever it's needed.\n     * This value controls how thick our wall removal brush is.\n     * If you don't see your walls getting removed properly, try increasing it a bit\n     */" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
		{ "ToolTip", "The layout is initially rendered without doors. Then the walls are removed to make way for doors, where ever it's needed.\nThis value controls how thick our wall removal brush is.\nIf you don't see your walls getting removed properly, try increasing it a bit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outline_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorOcclusionThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outline_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonLayoutDataDoorItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataDoorItem, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataDoorItem, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_DoorOcclusionThickness = { "DoorOcclusionThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataDoorItem, DoorOcclusionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorOcclusionThickness_MetaData), NewProp_DoorOcclusionThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_Outline_Inner = { "Outline", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_Outline = { "Outline", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataDoorItem, Outline_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outline_MetaData), NewProp_Outline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_DoorOcclusionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_Outline_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewProp_Outline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonLayoutDataDoorItem",
	Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::PropPointers),
	sizeof(FDungeonLayoutDataDoorItem),
	alignof(FDungeonLayoutDataDoorItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem.InnerSingleton, Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem.InnerSingleton;
}
// End ScriptStruct FDungeonLayoutDataDoorItem

// Begin ScriptStruct FDungeonLayoutDataStairItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem;
class UScriptStruct* FDungeonLayoutDataStairItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonLayoutDataStairItem"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonLayoutDataStairItem>()
{
	return FDungeonLayoutDataStairItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonLayoutDataStairItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataStairItem, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutDataStairItem, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonLayoutDataStairItem",
	Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::PropPointers),
	sizeof(FDungeonLayoutDataStairItem),
	alignof(FDungeonLayoutDataStairItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem.InnerSingleton, Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem.InnerSingleton;
}
// End ScriptStruct FDungeonLayoutDataStairItem

// Begin ScriptStruct FDungeonLayoutData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonLayoutData;
class UScriptStruct* FDungeonLayoutData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonLayoutData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonLayoutData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonLayoutData"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonLayoutData>()
{
	return FDungeonLayoutData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonLayoutData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkShapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stairs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsOfInterest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonLayoutData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkShapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stairs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stairs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsOfInterest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonLayoutData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_ChunkShapes_Inner = { "ChunkShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo, METADATA_PARAMS(0, nullptr) }; // 3017121815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_ChunkShapes = { "ChunkShapes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutData, ChunkShapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkShapes_MetaData), NewProp_ChunkShapes_MetaData) }; // 3017121815
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem, METADATA_PARAMS(0, nullptr) }; // 700297414
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutData, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 700297414
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Stairs_Inner = { "Stairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem, METADATA_PARAMS(0, nullptr) }; // 3400987277
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Stairs = { "Stairs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutData, Stairs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stairs_MetaData), NewProp_Stairs_MetaData) }; // 3400987277
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_PointsOfInterest_Inner = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonPointOfInterest, METADATA_PARAMS(0, nullptr) }; // 586671446
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_PointsOfInterest = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutData, PointsOfInterest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsOfInterest_MetaData), NewProp_PointsOfInterest_MetaData) }; // 586671446
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_FloorSettings = { "FloorSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutData, FloorSettings), Z_Construct_UScriptStruct_FDungeonFloorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorSettings_MetaData), NewProp_FloorSettings_MetaData) }; // 2050747746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonLayoutData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_ChunkShapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_ChunkShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Doors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Stairs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Stairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_PointsOfInterest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_PointsOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_FloorSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonLayoutData",
	Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::PropPointers),
	sizeof(FDungeonLayoutData),
	alignof(FDungeonLayoutData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutData()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLayoutData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonLayoutData.InnerSingleton, Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonLayoutData.InnerSingleton;
}
// End ScriptStruct FDungeonLayoutData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonLayoutData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonLayoutDataChunkInfo::StaticStruct, Z_Construct_UScriptStruct_FDungeonLayoutDataChunkInfo_Statics::NewStructOps, TEXT("DungeonLayoutDataChunkInfo"), &Z_Registration_Info_UScriptStruct_DungeonLayoutDataChunkInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonLayoutDataChunkInfo), 3017121815U) },
		{ FDungeonLayoutDataDoorItem::StaticStruct, Z_Construct_UScriptStruct_FDungeonLayoutDataDoorItem_Statics::NewStructOps, TEXT("DungeonLayoutDataDoorItem"), &Z_Registration_Info_UScriptStruct_DungeonLayoutDataDoorItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonLayoutDataDoorItem), 700297414U) },
		{ FDungeonLayoutDataStairItem::StaticStruct, Z_Construct_UScriptStruct_FDungeonLayoutDataStairItem_Statics::NewStructOps, TEXT("DungeonLayoutDataStairItem"), &Z_Registration_Info_UScriptStruct_DungeonLayoutDataStairItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonLayoutDataStairItem), 3400987277U) },
		{ FDungeonLayoutData::StaticStruct, Z_Construct_UScriptStruct_FDungeonLayoutData_Statics::NewStructOps, TEXT("DungeonLayoutData"), &Z_Registration_Info_UScriptStruct_DungeonLayoutData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonLayoutData), 3618463371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonLayoutData_h_3713839772(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonLayoutData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonLayoutData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
