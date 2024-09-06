// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/Debug/SceneDebugDataComponent.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLib() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAFlowCellGraph();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAFlowCellGraph_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAFlowCellLeafNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAFlowCellLeafNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecCloneableState_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowGraphItem_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGroupNode();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugData();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDAFlowCellLeafNode
void UDAFlowCellLeafNode::StaticRegisterNativesUDAFlowCellLeafNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAFlowCellLeafNode);
UClass* Z_Construct_UClass_UDAFlowCellLeafNode_NoRegister()
{
	return UDAFlowCellLeafNode::StaticClass();
}
struct Z_Construct_UClass_UDAFlowCellLeafNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicalZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogicalZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAFlowCellLeafNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDAFlowCellLeafNode_Statics::NewProp_LogicalZ = { "LogicalZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellLeafNode, LogicalZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicalZ_MetaData), NewProp_LogicalZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAFlowCellLeafNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellLeafNode_Statics::NewProp_LogicalZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAFlowCellLeafNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAFlowCellLeafNode_Statics::ClassParams = {
	&UDAFlowCellLeafNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAFlowCellLeafNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNode_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAFlowCellLeafNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAFlowCellLeafNode()
{
	if (!Z_Registration_Info_UClass_UDAFlowCellLeafNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAFlowCellLeafNode.OuterSingleton, Z_Construct_UClass_UDAFlowCellLeafNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAFlowCellLeafNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDAFlowCellLeafNode>()
{
	return UDAFlowCellLeafNode::StaticClass();
}
UDAFlowCellLeafNode::UDAFlowCellLeafNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAFlowCellLeafNode);
UDAFlowCellLeafNode::~UDAFlowCellLeafNode() {}
// End Class UDAFlowCellLeafNode

// Begin ScriptStruct FDAFlowCellGroupNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode;
class UScriptStruct* FDAFlowCellGroupNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAFlowCellGroupNode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAFlowCellGroupNode"));
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAFlowCellGroupNode>()
{
	return FDAFlowCellGroupNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutNodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeafNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Connections to the other groups\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connections to the other groups" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutNodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeafNodes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LeafNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Connections_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAFlowCellGroupNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGroupNode, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_LayoutNodeID = { "LayoutNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGroupNode, LayoutNodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutNodeID_MetaData), NewProp_LayoutNodeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_GroupColor = { "GroupColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGroupNode, GroupColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupColor_MetaData), NewProp_GroupColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_LeafNodes_ElementProp = { "LeafNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_LeafNodes = { "LeafNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGroupNode, LeafNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeafNodes_MetaData), NewProp_LeafNodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_Connections_ElementProp = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGroupNode, Connections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_PreviewLocation = { "PreviewLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGroupNode, PreviewLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewLocation_MetaData), NewProp_PreviewLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_LayoutNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_GroupColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_LeafNodes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_LeafNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_Connections_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewProp_PreviewLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAFlowCellGroupNode",
	Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::PropPointers),
	sizeof(FDAFlowCellGroupNode),
	alignof(FDAFlowCellGroupNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGroupNode()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode.InnerSingleton, Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode.InnerSingleton;
}
// End ScriptStruct FDAFlowCellGroupNode

// Begin ScriptStruct FDAFlowCellGraphSpawnInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo;
class UScriptStruct* FDAFlowCellGraphSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAFlowCellGraphSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAFlowCellGraphSpawnInfo>()
{
	return FDAFlowCellGraphSpawnInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAFlowCellGraphSpawnInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphSpawnInfo, Coord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coord_MetaData), NewProp_Coord_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphSpawnInfo, Item), Z_Construct_UClass_UFlowGraphItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphSpawnInfo, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::NewProp_Coord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::NewProp_GroupId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAFlowCellGraphSpawnInfo",
	Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::PropPointers),
	sizeof(FDAFlowCellGraphSpawnInfo),
	alignof(FDAFlowCellGraphSpawnInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo.InnerSingleton;
}
// End ScriptStruct FDAFlowCellGraphSpawnInfo

// Begin ScriptStruct FDAFlowCellGraphGridStairInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo;
class UScriptStruct* FDAFlowCellGraphGridStairInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAFlowCellGraphGridStairInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAFlowCellGraphGridStairInfo>()
{
	return FDAFlowCellGraphGridStairInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRadians_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indexes into the Half Edge list\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indexes into the Half Edge list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation angle in 90 degree steps\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation angle in 90 degree steps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Leading down the stairs\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leading down the stairs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleRadians;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAFlowCellGraphGridStairInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_EdgeIndex = { "EdgeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphGridStairInfo, EdgeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIndex_MetaData), NewProp_EdgeIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_AngleRadians = { "AngleRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphGridStairInfo, AngleRadians), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRadians_MetaData), NewProp_AngleRadians_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphGridStairInfo, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_LocalLocation = { "LocalLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphGridStairInfo, LocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalLocation_MetaData), NewProp_LocalLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_EdgeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_AngleRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewProp_LocalLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAFlowCellGraphGridStairInfo",
	Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::PropPointers),
	sizeof(FDAFlowCellGraphGridStairInfo),
	alignof(FDAFlowCellGraphGridStairInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo.InnerSingleton, Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo.InnerSingleton;
}
// End ScriptStruct FDAFlowCellGraphGridStairInfo

// Begin ScriptStruct FDAFlowCellGraphGridInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo;
class UScriptStruct* FDAFlowCellGraphGridInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAFlowCellGraphGridInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAFlowCellGraphGridInfo>()
{
	return FDAFlowCellGraphGridInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stairs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// maps the edge index to the stair info\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "maps the edge index to the stair info" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HalfEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HalfEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stairs_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stairs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stairs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAFlowCellGraphGridInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_HalfEdges_Inner = { "HalfEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowGridEdgeInfo, METADATA_PARAMS(0, nullptr) }; // 4114598389
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_HalfEdges = { "HalfEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphGridInfo, HalfEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfEdges_MetaData), NewProp_HalfEdges_MetaData) }; // 4114598389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_Stairs_ValueProp = { "Stairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo, METADATA_PARAMS(0, nullptr) }; // 1050673331
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_Stairs_Key_KeyProp = { "Stairs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_Stairs = { "Stairs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphGridInfo, Stairs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stairs_MetaData), NewProp_Stairs_MetaData) }; // 1050673331
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_SpawnInfo_Inner = { "SpawnInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 116545720
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_SpawnInfo = { "SpawnInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphGridInfo, SpawnInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInfo_MetaData), NewProp_SpawnInfo_MetaData) }; // 116545720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_HalfEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_HalfEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_Stairs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_Stairs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_Stairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_SpawnInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewProp_SpawnInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAFlowCellGraphGridInfo",
	Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::PropPointers),
	sizeof(FDAFlowCellGraphGridInfo),
	alignof(FDAFlowCellGraphGridInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo.InnerSingleton, Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo.InnerSingleton;
}
// End ScriptStruct FDAFlowCellGraphGridInfo

// Begin ScriptStruct FDAFlowCellGraphDCELEdgeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo;
class UScriptStruct* FDAFlowCellGraphDCELEdgeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAFlowCellGraphDCELEdgeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAFlowCellGraphDCELEdgeInfo>()
{
	return FDAFlowCellGraphDCELEdgeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicalWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indexes into the DCEL Edges array\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indexes into the DCEL Edges array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicalLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// right below the highest point\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "right below the highest point" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LogicalWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogicalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAFlowCellGraphDCELEdgeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_EdgeIndex = { "EdgeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELEdgeInfo, EdgeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIndex_MetaData), NewProp_EdgeIndex_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_LogicalWidth = { "LogicalWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELEdgeInfo, LogicalWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicalWidth_MetaData), NewProp_LogicalWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_LogicalLocation = { "LogicalLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELEdgeInfo, LogicalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicalLocation_MetaData), NewProp_LogicalLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELEdgeInfo, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_EdgeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_LogicalWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_LogicalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAFlowCellGraphDCELEdgeInfo",
	Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::PropPointers),
	sizeof(FDAFlowCellGraphDCELEdgeInfo),
	alignof(FDAFlowCellGraphDCELEdgeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo.InnerSingleton, Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo.InnerSingleton;
}
// End ScriptStruct FDAFlowCellGraphDCELEdgeInfo

// Begin ScriptStruct FDAFlowCellGraphDCELInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo;
class UScriptStruct* FDAFlowCellGraphDCELInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAFlowCellGraphDCELInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAFlowCellGraphDCELInfo>()
{
	return FDAFlowCellGraphDCELInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stairs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indexes into the DCEL Edges array\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indexes into the DCEL Edges array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maps the EdgeId to the Stair info\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the EdgeId to the Stair info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maps the EdgeId to the Door info\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the EdgeId to the Door info" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stairs_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stairs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stairs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Doors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAFlowCellGraphDCELInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_DoorEdges_Inner = { "DoorEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_DoorEdges = { "DoorEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELInfo, DoorEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorEdges_MetaData), NewProp_DoorEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Stairs_ValueProp = { "Stairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo, METADATA_PARAMS(0, nullptr) }; // 617086249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Stairs_Key_KeyProp = { "Stairs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Stairs = { "Stairs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELInfo, Stairs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stairs_MetaData), NewProp_Stairs_MetaData) }; // 617086249
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Doors_ValueProp = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo, METADATA_PARAMS(0, nullptr) }; // 617086249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Doors_Key_KeyProp = { "Doors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELInfo, Doors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 617086249
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_SpawnInfo_Inner = { "SpawnInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 116545720
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_SpawnInfo = { "SpawnInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAFlowCellGraphDCELInfo, SpawnInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInfo_MetaData), NewProp_SpawnInfo_MetaData) }; // 116545720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_DoorEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_DoorEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Stairs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Stairs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Stairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Doors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Doors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_Doors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_SpawnInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewProp_SpawnInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAFlowCellGraphDCELInfo",
	Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::PropPointers),
	sizeof(FDAFlowCellGraphDCELInfo),
	alignof(FDAFlowCellGraphDCELInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo.InnerSingleton, Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo.InnerSingleton;
}
// End ScriptStruct FDAFlowCellGraphDCELInfo

// Begin Class UDAFlowCellGraph
void UDAFlowCellGraph::StaticRegisterNativesUDAFlowCellGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAFlowCellGraph);
UClass* Z_Construct_UClass_UDAFlowCellGraph_NoRegister()
{
	return UDAFlowCellGraph::StaticClass();
}
struct Z_Construct_UClass_UDAFlowCellGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeafNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DCELInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInactiveGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneDebugData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeafNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeafNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DCELInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScatterSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScatterSettings;
#if WITH_EDITORONLY_DATA
	static void NewProp_bRenderInactiveGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInactiveGroups;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneDebugData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAFlowCellGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_LeafNodes_Inner = { "LeafNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDAFlowCellLeafNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_LeafNodes = { "LeafNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellGraph, LeafNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeafNodes_MetaData), NewProp_LeafNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_GroupNodes_Inner = { "GroupNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAFlowCellGroupNode, METADATA_PARAMS(0, nullptr) }; // 2299636182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_GroupNodes = { "GroupNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellGraph, GroupNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupNodes_MetaData), NewProp_GroupNodes_MetaData) }; // 2299636182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_GridInfo = { "GridInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellGraph, GridInfo), Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridInfo_MetaData), NewProp_GridInfo_MetaData) }; // 3165640314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_DCELInfo = { "DCELInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellGraph, DCELInfo), Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DCELInfo_MetaData), NewProp_DCELInfo_MetaData) }; // 1116167408
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_ScatterSettings_Inner = { "ScatterSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings, METADATA_PARAMS(0, nullptr) }; // 4124455094
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_ScatterSettings = { "ScatterSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellGraph, ScatterSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatterSettings_MetaData), NewProp_ScatterSettings_MetaData) }; // 4124455094
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_bRenderInactiveGroups_SetBit(void* Obj)
{
	((UDAFlowCellGraph*)Obj)->bRenderInactiveGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_bRenderInactiveGroups = { "bRenderInactiveGroups", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDAFlowCellGraph), &Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_bRenderInactiveGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInactiveGroups_MetaData), NewProp_bRenderInactiveGroups_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_SceneDebugData = { "SceneDebugData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellGraph, SceneDebugData), Z_Construct_UScriptStruct_FDASceneDebugData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneDebugData_MetaData), NewProp_SceneDebugData_MetaData) }; // 313502064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAFlowCellGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_LeafNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_LeafNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_GroupNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_GroupNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_GridInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_DCELInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_ScatterSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_ScatterSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_bRenderInactiveGroups,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellGraph_Statics::NewProp_SceneDebugData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAFlowCellGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDAFlowCellGraph_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFlowExecCloneableState_NoRegister, (int32)VTABLE_OFFSET(UDAFlowCellGraph, IFlowExecCloneableState), false },  // 3774609617
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAFlowCellGraph_Statics::ClassParams = {
	&UDAFlowCellGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAFlowCellGraph_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellGraph_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAFlowCellGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAFlowCellGraph()
{
	if (!Z_Registration_Info_UClass_UDAFlowCellGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAFlowCellGraph.OuterSingleton, Z_Construct_UClass_UDAFlowCellGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAFlowCellGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDAFlowCellGraph>()
{
	return UDAFlowCellGraph::StaticClass();
}
UDAFlowCellGraph::UDAFlowCellGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAFlowCellGraph);
UDAFlowCellGraph::~UDAFlowCellGraph() {}
// End Class UDAFlowCellGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowLib_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAFlowCellGroupNode::StaticStruct, Z_Construct_UScriptStruct_FDAFlowCellGroupNode_Statics::NewStructOps, TEXT("DAFlowCellGroupNode"), &Z_Registration_Info_UScriptStruct_DAFlowCellGroupNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAFlowCellGroupNode), 2299636182U) },
		{ FDAFlowCellGraphSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FDAFlowCellGraphSpawnInfo_Statics::NewStructOps, TEXT("DAFlowCellGraphSpawnInfo"), &Z_Registration_Info_UScriptStruct_DAFlowCellGraphSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAFlowCellGraphSpawnInfo), 116545720U) },
		{ FDAFlowCellGraphGridStairInfo::StaticStruct, Z_Construct_UScriptStruct_FDAFlowCellGraphGridStairInfo_Statics::NewStructOps, TEXT("DAFlowCellGraphGridStairInfo"), &Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridStairInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAFlowCellGraphGridStairInfo), 1050673331U) },
		{ FDAFlowCellGraphGridInfo::StaticStruct, Z_Construct_UScriptStruct_FDAFlowCellGraphGridInfo_Statics::NewStructOps, TEXT("DAFlowCellGraphGridInfo"), &Z_Registration_Info_UScriptStruct_DAFlowCellGraphGridInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAFlowCellGraphGridInfo), 3165640314U) },
		{ FDAFlowCellGraphDCELEdgeInfo::StaticStruct, Z_Construct_UScriptStruct_FDAFlowCellGraphDCELEdgeInfo_Statics::NewStructOps, TEXT("DAFlowCellGraphDCELEdgeInfo"), &Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELEdgeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAFlowCellGraphDCELEdgeInfo), 617086249U) },
		{ FDAFlowCellGraphDCELInfo::StaticStruct, Z_Construct_UScriptStruct_FDAFlowCellGraphDCELInfo_Statics::NewStructOps, TEXT("DAFlowCellGraphDCELInfo"), &Z_Registration_Info_UScriptStruct_DAFlowCellGraphDCELInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAFlowCellGraphDCELInfo), 1116167408U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAFlowCellLeafNode, UDAFlowCellLeafNode::StaticClass, TEXT("UDAFlowCellLeafNode"), &Z_Registration_Info_UClass_UDAFlowCellLeafNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAFlowCellLeafNode), 515566796U) },
		{ Z_Construct_UClass_UDAFlowCellGraph, UDAFlowCellGraph::StaticClass, TEXT("UDAFlowCellGraph"), &Z_Registration_Info_UClass_UDAFlowCellGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAFlowCellGraph), 4080346225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowLib_h_2683065967(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowLib_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowLib_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_Lib_CellFlowLib_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
