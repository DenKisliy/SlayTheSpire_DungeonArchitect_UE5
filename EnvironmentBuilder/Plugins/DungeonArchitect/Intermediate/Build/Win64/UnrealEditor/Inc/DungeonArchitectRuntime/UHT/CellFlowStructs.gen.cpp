// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowStructs() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FCellFlowGridEdgeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo;
class UScriptStruct* FCellFlowGridEdgeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowGridEdgeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowGridEdgeInfo>()
{
	return FCellFlowGridEdgeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////// Cell Grid ////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cell Grid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightZ_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will be true if it's a door.   We'll check if a stair shows up here depending on the height difference\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be true if it's a door.   We'll check if a stair shows up here depending on the height difference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConnection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will be true if it's a door.   We'll check if a stair shows up here depending on the height difference\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be true if it's a door.   We'll check if a stair shows up here depending on the height difference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContainsStair_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwinIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileGroup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightZ;
	static void NewProp_bConnection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnection;
	static void NewProp_bContainsStair_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsStair;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TwinIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowGridEdgeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridEdgeInfo, Coord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coord_MetaData), NewProp_Coord_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_TileGroup = { "TileGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridEdgeInfo, TileGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileGroup_MetaData), NewProp_TileGroup_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_HeightZ = { "HeightZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridEdgeInfo, HeightZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightZ_MetaData), NewProp_HeightZ_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bConnection_SetBit(void* Obj)
{
	((FCellFlowGridEdgeInfo*)Obj)->bConnection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bConnection = { "bConnection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowGridEdgeInfo), &Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bConnection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConnection_MetaData), NewProp_bConnection_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bContainsStair_SetBit(void* Obj)
{
	((FCellFlowGridEdgeInfo*)Obj)->bContainsStair = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bContainsStair = { "bContainsStair", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowGridEdgeInfo), &Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bContainsStair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContainsStair_MetaData), NewProp_bContainsStair_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_EdgeIndex = { "EdgeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridEdgeInfo, EdgeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIndex_MetaData), NewProp_EdgeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_TwinIndex = { "TwinIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridEdgeInfo, TwinIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwinIndex_MetaData), NewProp_TwinIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_Coord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_TileGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_HeightZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_bContainsStair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_EdgeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewProp_TwinIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowGridEdgeInfo",
	Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::PropPointers),
	sizeof(FCellFlowGridEdgeInfo),
	alignof(FCellFlowGridEdgeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo.InnerSingleton;
}
// End ScriptStruct FCellFlowGridEdgeInfo

// Begin ScriptStruct FCellFlowSizedMarkerDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef;
class UScriptStruct* FCellFlowSizedMarkerDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowSizedMarkerDef"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowSizedMarkerDef>()
{
	return FCellFlowSizedMarkerDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Marker" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Marker" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWeight_MetaData[] = {
		{ "Category", "Marker" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAutoScaling_MetaData[] = {
		{ "Category", "Scaling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can this marker scale to fill up the remaining space along a line? */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can this marker scale to fill up the remaining space along a line?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoScaleUniformly_MetaData[] = {
		{ "Category", "Scaling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we scale to fit only along the X-axis or scale evenly along XYZ */" },
#endif
		{ "EditCondition", "bAllowAutoScaling" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we scale to fit only along the X-axis or scale evenly along XYZ" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOccludes_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if you want to spawn mesh that you don't want colliding with other meshes\n\x09 * Set to true if you want to spawn buildings along the edge, and specify the expected depth taken up by the asset\n\x09 * Set to false, if you want to spawn thin walls\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if you want to spawn mesh that you don't want colliding with other meshes\nSet to true if you want to spawn buildings along the edge, and specify the expected depth taken up by the asset\nSet to false, if you want to spawn thin walls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDepth_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditCondition", "bOccludes" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionWeight;
	static void NewProp_bAllowAutoScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAutoScaling;
	static void NewProp_bAutoScaleUniformly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoScaleUniformly;
	static void NewProp_bOccludes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOccludes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowSizedMarkerDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowSizedMarkerDef, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowSizedMarkerDef, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_SelectionWeight = { "SelectionWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowSizedMarkerDef, SelectionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionWeight_MetaData), NewProp_SelectionWeight_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAllowAutoScaling_SetBit(void* Obj)
{
	((FCellFlowSizedMarkerDef*)Obj)->bAllowAutoScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAllowAutoScaling = { "bAllowAutoScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowSizedMarkerDef), &Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAllowAutoScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowAutoScaling_MetaData), NewProp_bAllowAutoScaling_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAutoScaleUniformly_SetBit(void* Obj)
{
	((FCellFlowSizedMarkerDef*)Obj)->bAutoScaleUniformly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAutoScaleUniformly = { "bAutoScaleUniformly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowSizedMarkerDef), &Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAutoScaleUniformly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoScaleUniformly_MetaData), NewProp_bAutoScaleUniformly_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bOccludes_SetBit(void* Obj)
{
	((FCellFlowSizedMarkerDef*)Obj)->bOccludes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bOccludes = { "bOccludes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowSizedMarkerDef), &Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bOccludes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOccludes_MetaData), NewProp_bOccludes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_OcclusionDepth = { "OcclusionDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowSizedMarkerDef, OcclusionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionDepth_MetaData), NewProp_OcclusionDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_SelectionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAllowAutoScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bAutoScaleUniformly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_bOccludes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewProp_OcclusionDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowSizedMarkerDef",
	Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::PropPointers),
	sizeof(FCellFlowSizedMarkerDef),
	alignof(FCellFlowSizedMarkerDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef.InnerSingleton;
}
// End ScriptStruct FCellFlowSizedMarkerDef

// Begin ScriptStruct FCellFlowGridMarkerSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup;
class UScriptStruct* FCellFlowGridMarkerSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowGridMarkerSetup"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowGridMarkerSetup>()
{
	return FCellFlowGridMarkerSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWeight_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeSeparatorMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorOneWayMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionWeight;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroundMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EdgeMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EdgeSeparatorMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DoorMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DoorOneWayMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StairMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowGridMarkerSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_SelectionWeight = { "SelectionWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetup, SelectionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionWeight_MetaData), NewProp_SelectionWeight_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_GroundMarker = { "GroundMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetup, GroundMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMarker_MetaData), NewProp_GroundMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_EdgeMarker = { "EdgeMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetup, EdgeMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMarker_MetaData), NewProp_EdgeMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_EdgeSeparatorMarker = { "EdgeSeparatorMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetup, EdgeSeparatorMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeSeparatorMarker_MetaData), NewProp_EdgeSeparatorMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_DoorMarker = { "DoorMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetup, DoorMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMarker_MetaData), NewProp_DoorMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_DoorOneWayMarker = { "DoorOneWayMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetup, DoorOneWayMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorOneWayMarker_MetaData), NewProp_DoorOneWayMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_StairMarker = { "StairMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetup, StairMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairMarker_MetaData), NewProp_StairMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_SelectionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_GroundMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_EdgeMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_EdgeSeparatorMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_DoorMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_DoorOneWayMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewProp_StairMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowGridMarkerSetup",
	Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::PropPointers),
	sizeof(FCellFlowGridMarkerSetup),
	alignof(FCellFlowGridMarkerSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup.InnerSingleton;
}
// End ScriptStruct FCellFlowGridMarkerSetup

// Begin ScriptStruct FCellFlowGridMarkerSetupList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList;
class UScriptStruct* FCellFlowGridMarkerSetupList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowGridMarkerSetupList"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowGridMarkerSetupList>()
{
	return FCellFlowGridMarkerSetupList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerSetupList_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerSetupList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerSetupList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowGridMarkerSetupList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::NewProp_MarkerSetupList_Inner = { "MarkerSetupList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup, METADATA_PARAMS(0, nullptr) }; // 3826913230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::NewProp_MarkerSetupList = { "MarkerSetupList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowGridMarkerSetupList, MarkerSetupList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerSetupList_MetaData), NewProp_MarkerSetupList_MetaData) }; // 3826913230
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::NewProp_MarkerSetupList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::NewProp_MarkerSetupList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowGridMarkerSetupList",
	Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::PropPointers),
	sizeof(FCellFlowGridMarkerSetupList),
	alignof(FCellFlowGridMarkerSetupList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList.InnerSingleton;
}
// End ScriptStruct FCellFlowGridMarkerSetupList

// Begin ScriptStruct FCellFlowVoronoiEdgeMarkerLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer;
class UScriptStruct* FCellFlowVoronoiEdgeMarkerLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowVoronoiEdgeMarkerLayer"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowVoronoiEdgeMarkerLayer>()
{
	return FCellFlowVoronoiEdgeMarkerLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoundaryEdges_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSharedEdgesHigher_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSharedEdgesLower_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSharedEdgesSameHeight_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTwoSidedSameHeightEdge_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "EditCondition", "bSharedEdgesSameHeight" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMarkers_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBoundaryEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundaryEdges;
	static void NewProp_bSharedEdgesHigher_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedEdgesHigher;
	static void NewProp_bSharedEdgesLower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedEdgesLower;
	static void NewProp_bSharedEdgesSameHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedEdgesSameHeight;
	static void NewProp_bEnableTwoSidedSameHeightEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwoSidedSameHeightEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeMarkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeMarkers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowVoronoiEdgeMarkerLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bBoundaryEdges_SetBit(void* Obj)
{
	((FCellFlowVoronoiEdgeMarkerLayer*)Obj)->bBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bBoundaryEdges = { "bBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowVoronoiEdgeMarkerLayer), &Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoundaryEdges_MetaData), NewProp_bBoundaryEdges_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesHigher_SetBit(void* Obj)
{
	((FCellFlowVoronoiEdgeMarkerLayer*)Obj)->bSharedEdgesHigher = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesHigher = { "bSharedEdgesHigher", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowVoronoiEdgeMarkerLayer), &Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesHigher_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSharedEdgesHigher_MetaData), NewProp_bSharedEdgesHigher_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesLower_SetBit(void* Obj)
{
	((FCellFlowVoronoiEdgeMarkerLayer*)Obj)->bSharedEdgesLower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesLower = { "bSharedEdgesLower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowVoronoiEdgeMarkerLayer), &Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesLower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSharedEdgesLower_MetaData), NewProp_bSharedEdgesLower_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesSameHeight_SetBit(void* Obj)
{
	((FCellFlowVoronoiEdgeMarkerLayer*)Obj)->bSharedEdgesSameHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesSameHeight = { "bSharedEdgesSameHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowVoronoiEdgeMarkerLayer), &Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesSameHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSharedEdgesSameHeight_MetaData), NewProp_bSharedEdgesSameHeight_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bEnableTwoSidedSameHeightEdge_SetBit(void* Obj)
{
	((FCellFlowVoronoiEdgeMarkerLayer*)Obj)->bEnableTwoSidedSameHeightEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bEnableTwoSidedSameHeightEdge = { "bEnableTwoSidedSameHeightEdge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowVoronoiEdgeMarkerLayer), &Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bEnableTwoSidedSameHeightEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTwoSidedSameHeightEdge_MetaData), NewProp_bEnableTwoSidedSameHeightEdge_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_EdgeMarkers_Inner = { "EdgeMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef, METADATA_PARAMS(0, nullptr) }; // 2080817597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_EdgeMarkers = { "EdgeMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiEdgeMarkerLayer, EdgeMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMarkers_MetaData), NewProp_EdgeMarkers_MetaData) }; // 2080817597
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesHigher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesLower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bSharedEdgesSameHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_bEnableTwoSidedSameHeightEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_EdgeMarkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewProp_EdgeMarkers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowVoronoiEdgeMarkerLayer",
	Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::PropPointers),
	sizeof(FCellFlowVoronoiEdgeMarkerLayer),
	alignof(FCellFlowVoronoiEdgeMarkerLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer.InnerSingleton;
}
// End ScriptStruct FCellFlowVoronoiEdgeMarkerLayer

// Begin ScriptStruct FCellFlowVoronoiMarkerSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup;
class UScriptStruct* FCellFlowVoronoiMarkerSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowVoronoiMarkerSetup"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowVoronoiMarkerSetup>()
{
	return FCellFlowVoronoiMarkerSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWeight_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeLayers_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorOneWayMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairMarker_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeLayers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CornerMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorMarker_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorOneWayMarker_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorOneWayMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StairMarker_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StairMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowVoronoiMarkerSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_SelectionWeight = { "SelectionWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiMarkerSetup, SelectionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionWeight_MetaData), NewProp_SelectionWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_EdgeLayers_Inner = { "EdgeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer, METADATA_PARAMS(0, nullptr) }; // 2291583611
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_EdgeLayers = { "EdgeLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiMarkerSetup, EdgeLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeLayers_MetaData), NewProp_EdgeLayers_MetaData) }; // 2291583611
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_CornerMarker = { "CornerMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiMarkerSetup, CornerMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerMarker_MetaData), NewProp_CornerMarker_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorMarker_Inner = { "DoorMarker", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef, METADATA_PARAMS(0, nullptr) }; // 2080817597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorMarker = { "DoorMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiMarkerSetup, DoorMarker), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMarker_MetaData), NewProp_DoorMarker_MetaData) }; // 2080817597
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorOneWayMarker_Inner = { "DoorOneWayMarker", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef, METADATA_PARAMS(0, nullptr) }; // 2080817597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorOneWayMarker = { "DoorOneWayMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiMarkerSetup, DoorOneWayMarker), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorOneWayMarker_MetaData), NewProp_DoorOneWayMarker_MetaData) }; // 2080817597
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_StairMarker_Inner = { "StairMarker", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef, METADATA_PARAMS(0, nullptr) }; // 2080817597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_StairMarker = { "StairMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiMarkerSetup, StairMarker), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairMarker_MetaData), NewProp_StairMarker_MetaData) }; // 2080817597
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_SelectionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_EdgeLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_EdgeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_CornerMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorMarker_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorOneWayMarker_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_DoorOneWayMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_StairMarker_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewProp_StairMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowVoronoiMarkerSetup",
	Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::PropPointers),
	sizeof(FCellFlowVoronoiMarkerSetup),
	alignof(FCellFlowVoronoiMarkerSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup.InnerSingleton;
}
// End ScriptStruct FCellFlowVoronoiMarkerSetup

// Begin ScriptStruct FCellFlowVoronoiMarkerSetupList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList;
class UScriptStruct* FCellFlowVoronoiMarkerSetupList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowVoronoiMarkerSetupList"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowVoronoiMarkerSetupList>()
{
	return FCellFlowVoronoiMarkerSetupList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerSetupList_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerSetupList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerSetupList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowVoronoiMarkerSetupList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::NewProp_MarkerSetupList_Inner = { "MarkerSetupList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup, METADATA_PARAMS(0, nullptr) }; // 3040080583
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::NewProp_MarkerSetupList = { "MarkerSetupList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowVoronoiMarkerSetupList, MarkerSetupList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerSetupList_MetaData), NewProp_MarkerSetupList_MetaData) }; // 3040080583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::NewProp_MarkerSetupList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::NewProp_MarkerSetupList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowVoronoiMarkerSetupList",
	Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::PropPointers),
	sizeof(FCellFlowVoronoiMarkerSetupList),
	alignof(FCellFlowVoronoiMarkerSetupList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList.InnerSingleton;
}
// End ScriptStruct FCellFlowVoronoiMarkerSetupList

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCellFlowGridEdgeInfo::StaticStruct, Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo_Statics::NewStructOps, TEXT("CellFlowGridEdgeInfo"), &Z_Registration_Info_UScriptStruct_CellFlowGridEdgeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowGridEdgeInfo), 4114598389U) },
		{ FCellFlowSizedMarkerDef::StaticStruct, Z_Construct_UScriptStruct_FCellFlowSizedMarkerDef_Statics::NewStructOps, TEXT("CellFlowSizedMarkerDef"), &Z_Registration_Info_UScriptStruct_CellFlowSizedMarkerDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowSizedMarkerDef), 2080817597U) },
		{ FCellFlowGridMarkerSetup::StaticStruct, Z_Construct_UScriptStruct_FCellFlowGridMarkerSetup_Statics::NewStructOps, TEXT("CellFlowGridMarkerSetup"), &Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowGridMarkerSetup), 3826913230U) },
		{ FCellFlowGridMarkerSetupList::StaticStruct, Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList_Statics::NewStructOps, TEXT("CellFlowGridMarkerSetupList"), &Z_Registration_Info_UScriptStruct_CellFlowGridMarkerSetupList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowGridMarkerSetupList), 2258489525U) },
		{ FCellFlowVoronoiEdgeMarkerLayer::StaticStruct, Z_Construct_UScriptStruct_FCellFlowVoronoiEdgeMarkerLayer_Statics::NewStructOps, TEXT("CellFlowVoronoiEdgeMarkerLayer"), &Z_Registration_Info_UScriptStruct_CellFlowVoronoiEdgeMarkerLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowVoronoiEdgeMarkerLayer), 2291583611U) },
		{ FCellFlowVoronoiMarkerSetup::StaticStruct, Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetup_Statics::NewStructOps, TEXT("CellFlowVoronoiMarkerSetup"), &Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowVoronoiMarkerSetup), 3040080583U) },
		{ FCellFlowVoronoiMarkerSetupList::StaticStruct, Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList_Statics::NewStructOps, TEXT("CellFlowVoronoiMarkerSetupList"), &Z_Registration_Info_UScriptStruct_CellFlowVoronoiMarkerSetupList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowVoronoiMarkerSetupList), 1186994389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowStructs_h_1961725687(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
