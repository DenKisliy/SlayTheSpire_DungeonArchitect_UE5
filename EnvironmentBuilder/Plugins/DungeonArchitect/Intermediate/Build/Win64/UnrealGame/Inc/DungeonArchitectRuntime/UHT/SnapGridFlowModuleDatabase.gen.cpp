// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBoundingShapes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/PointOfInterest.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowModuleDatabase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonPointOfInterest();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssembly();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySide();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FSGFModuleAssemblySideCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell;
class UScriptStruct* FSGFModuleAssemblySideCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SGFModuleAssemblySideCell"));
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSGFModuleAssemblySideCell>()
{
	return FSGFModuleAssemblySideCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////// Snap Grid Flow Module Assembly ////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "/ Snap Grid Flow Module Assembly /" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedNodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedNodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGFModuleAssemblySideCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_ConnectionIdx = { "ConnectionIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, ConnectionIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionIdx_MetaData), NewProp_ConnectionIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkedNodeId = { "LinkedNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, LinkedNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedNodeId_MetaData), NewProp_LinkedNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkId = { "LinkId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, LinkId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkId_MetaData), NewProp_LinkId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_ConnectionIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkedNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SGFModuleAssemblySideCell",
	Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::PropPointers),
	sizeof(FSGFModuleAssemblySideCell),
	alignof(FSGFModuleAssemblySideCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.InnerSingleton, Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.InnerSingleton;
}
// End ScriptStruct FSGFModuleAssemblySideCell

// Begin ScriptStruct FSGFModuleAssemblySide
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide;
class UScriptStruct* FSGFModuleAssemblySide::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGFModuleAssemblySide, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SGFModuleAssemblySide"));
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSGFModuleAssemblySide>()
{
	return FSGFModuleAssemblySide::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectionIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGFModuleAssemblySide>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssemblySide, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssemblySide, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices_Inner = { "ConnectionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell, METADATA_PARAMS(0, nullptr) }; // 1099789795
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices = { "ConnectionIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssemblySide, ConnectionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionIndices_MetaData), NewProp_ConnectionIndices_MetaData) }; // 1099789795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SGFModuleAssemblySide",
	Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::PropPointers),
	sizeof(FSGFModuleAssemblySide),
	alignof(FSGFModuleAssemblySide),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySide()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.InnerSingleton, Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.InnerSingleton;
}
// End ScriptStruct FSGFModuleAssemblySide

// Begin ScriptStruct FSGFModuleAssembly
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SGFModuleAssembly;
class UScriptStruct* FSGFModuleAssembly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssembly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SGFModuleAssembly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGFModuleAssembly, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SGFModuleAssembly"));
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssembly.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSGFModuleAssembly>()
{
	return FSGFModuleAssembly::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumChunks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Front;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Back;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Top;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Down;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGFModuleAssembly>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_NumChunks = { "NumChunks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssembly, NumChunks), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChunks_MetaData), NewProp_NumChunks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssembly, Front), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Front_MetaData), NewProp_Front_MetaData) }; // 207432028
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssembly, Left), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) }; // 207432028
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssembly, Back), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Back_MetaData), NewProp_Back_MetaData) }; // 207432028
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssembly, Right), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) }; // 207432028
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssembly, Top), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_MetaData), NewProp_Top_MetaData) }; // 207432028
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGFModuleAssembly, Down), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Down_MetaData), NewProp_Down_MetaData) }; // 207432028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_NumChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Front,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Down,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SGFModuleAssembly",
	Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::PropPointers),
	sizeof(FSGFModuleAssembly),
	alignof(FSGFModuleAssembly),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssembly()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssembly.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SGFModuleAssembly.InnerSingleton, Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssembly.InnerSingleton;
}
// End ScriptStruct FSGFModuleAssembly

// Begin ScriptStruct FSnapGridFlowModuleDatabaseConnectionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo;
class UScriptStruct* FSnapGridFlowModuleDatabaseConnectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapGridFlowModuleDatabaseConnectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapGridFlowModuleDatabaseConnectionInfo>()
{
	return FSnapGridFlowModuleDatabaseConnectionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////// Snap Grid Flow Module Database ////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "/ Snap Grid Flow Module Database /" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionId_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInfo_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionConstraint_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapGridFlowModuleDatabaseConnectionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, ConnectionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionId_MetaData), NewProp_ConnectionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo = { "ConnectionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, ConnectionInfo), Z_Construct_UClass_USnapConnectionInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionInfo_MetaData), NewProp_ConnectionInfo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint = { "ConnectionConstraint", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, ConnectionConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionConstraint_MetaData), NewProp_ConnectionConstraint_MetaData) }; // 646942352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapGridFlowModuleDatabaseConnectionInfo",
	Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::PropPointers),
	sizeof(FSnapGridFlowModuleDatabaseConnectionInfo),
	alignof(FSnapGridFlowModuleDatabaseConnectionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.InnerSingleton;
}
// End ScriptStruct FSnapGridFlowModuleDatabaseConnectionInfo

// Begin ScriptStruct FSnapGridFlowModuleDatabaseItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem;
class UScriptStruct* FSnapGridFlowModuleDatabaseItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapGridFlowModuleDatabaseItem"));
	}
	return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapGridFlowModuleDatabaseItem>()
{
	return FSnapGridFlowModuleDatabaseItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRotation_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemedLevels_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "/**\n     * Alternate theme level file that should have the same structure as the master level file.\n     * Use this to make different themed dungeons using the same generated layout.\n     * Great for minimaps,  or creating an alternate world (e.g. player time travels and switches between the modern and ancient versions of the dungeon)\n     */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "Alternate theme level file that should have the same structure as the master level file.\nUse this to make different themed dungeons using the same generated layout.\nGreat for minimaps,  or creating an alternate world (e.g. player time travels and switches between the modern and ancient versions of the dungeon)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWeight_MetaData[] = {
		{ "Category", "Module" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * How often do you want this to be selected?  0.0 for least preference, 1.0 for most preference.  Specify a value from 0.0 to 1.0\n     */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "How often do you want this to be selected?  0.0 for least preference, 1.0 for most preference.  Specify a value from 0.0 to 1.0" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "/*\n     * User defined tags, You can access these from the SnapGridFlow Module Selection Rule for your custom module selection logic\n     */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "* User defined tags, You can access these from the SnapGridFlow Module Selection Rule for your custom module selection logic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBounds_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBoundShapes_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasRoomShapeTextures_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsOfInterest_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChunks_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableMarkers_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatedAssemblies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static void NewProp_bAllowRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRotation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ThemedLevels_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThemedLevels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThemedLevels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBoundShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasRoomShapeTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsOfInterest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumChunks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableMarkers_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AvailableMarkers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AvailableMarkers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotatedAssemblies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotatedAssemblies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapGridFlowModuleDatabaseItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation_SetBit(void* Obj)
{
	((FSnapGridFlowModuleDatabaseItem*)Obj)->bAllowRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation = { "bAllowRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSnapGridFlowModuleDatabaseItem), &Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRotation_MetaData), NewProp_bAllowRotation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ThemedLevels_ValueProp = { "ThemedLevels", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ThemedLevels_Key_KeyProp = { "ThemedLevels_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ThemedLevels = { "ThemedLevels", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, ThemedLevels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemedLevels_MetaData), NewProp_ThemedLevels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_SelectionWeight = { "SelectionWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, SelectionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionWeight_MetaData), NewProp_SelectionWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBounds = { "ModuleBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, ModuleBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleBounds_MetaData), NewProp_ModuleBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBoundShapes = { "ModuleBoundShapes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, ModuleBoundShapes), Z_Construct_UScriptStruct_FDABoundsShapeList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleBoundShapes_MetaData), NewProp_ModuleBoundShapes_MetaData) }; // 4252500473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_CanvasRoomShapeTextures = { "CanvasRoomShapeTextures", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, CanvasRoomShapeTextures), Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasRoomShapeTextures_MetaData), NewProp_CanvasRoomShapeTextures_MetaData) }; // 4150483278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_PointsOfInterest_Inner = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonPointOfInterest, METADATA_PARAMS(0, nullptr) }; // 586671446
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_PointsOfInterest = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, PointsOfInterest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsOfInterest_MetaData), NewProp_PointsOfInterest_MetaData) }; // 586671446
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_NumChunks = { "NumChunks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, NumChunks), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChunks_MetaData), NewProp_NumChunks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo, METADATA_PARAMS(0, nullptr) }; // 2241925165
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 2241925165
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_ValueProp = { "AvailableMarkers", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_Key_KeyProp = { "AvailableMarkers_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers = { "AvailableMarkers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, AvailableMarkers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableMarkers_MetaData), NewProp_AvailableMarkers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies_Inner = { "RotatedAssemblies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSGFModuleAssembly, METADATA_PARAMS(0, nullptr) }; // 990800978
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies = { "RotatedAssemblies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, RotatedAssemblies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatedAssemblies_MetaData), NewProp_RotatedAssemblies_MetaData) }; // 990800978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ThemedLevels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ThemedLevels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ThemedLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_SelectionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBoundShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_CanvasRoomShapeTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_PointsOfInterest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_PointsOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_NumChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapGridFlowModuleDatabaseItem",
	Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::PropPointers),
	sizeof(FSnapGridFlowModuleDatabaseItem),
	alignof(FSnapGridFlowModuleDatabaseItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem()
{
	if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.InnerSingleton, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.InnerSingleton;
}
// End ScriptStruct FSnapGridFlowModuleDatabaseItem

// Begin Class USnapGridFlowModuleDatabase
void USnapGridFlowModuleDatabase::StaticRegisterNativesUSnapGridFlowModuleDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleDatabase);
UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister()
{
	return USnapGridFlowModuleDatabase::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBoundsAsset_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModuleBoundsAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_ModuleBoundsAsset = { "ModuleBoundsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowModuleDatabase, ModuleBoundsAsset), Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleBoundsAsset_MetaData), NewProp_ModuleBoundsAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem, METADATA_PARAMS(0, nullptr) }; // 510524781
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowModuleDatabase, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modules_MetaData), NewProp_Modules_MetaData) }; // 510524781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_ModuleBoundsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::ClassParams = {
	&USnapGridFlowModuleDatabase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowModuleDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleDatabase.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowModuleDatabase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowModuleDatabase>()
{
	return USnapGridFlowModuleDatabase::StaticClass();
}
USnapGridFlowModuleDatabase::USnapGridFlowModuleDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleDatabase);
USnapGridFlowModuleDatabase::~USnapGridFlowModuleDatabase() {}
// End Class USnapGridFlowModuleDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSGFModuleAssemblySideCell::StaticStruct, Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewStructOps, TEXT("SGFModuleAssemblySideCell"), &Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGFModuleAssemblySideCell), 1099789795U) },
		{ FSGFModuleAssemblySide::StaticStruct, Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewStructOps, TEXT("SGFModuleAssemblySide"), &Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGFModuleAssemblySide), 207432028U) },
		{ FSGFModuleAssembly::StaticStruct, Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewStructOps, TEXT("SGFModuleAssembly"), &Z_Registration_Info_UScriptStruct_SGFModuleAssembly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGFModuleAssembly), 990800978U) },
		{ FSnapGridFlowModuleDatabaseConnectionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewStructOps, TEXT("SnapGridFlowModuleDatabaseConnectionInfo"), &Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapGridFlowModuleDatabaseConnectionInfo), 2241925165U) },
		{ FSnapGridFlowModuleDatabaseItem::StaticStruct, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewStructOps, TEXT("SnapGridFlowModuleDatabaseItem"), &Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapGridFlowModuleDatabaseItem), 510524781U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowModuleDatabase, USnapGridFlowModuleDatabase::StaticClass, TEXT("USnapGridFlowModuleDatabase"), &Z_Registration_Info_UClass_USnapGridFlowModuleDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleDatabase), 1918209831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_1071290829(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
