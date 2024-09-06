// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/GraphGrammar/Script/GrammarScriptGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrammarScriptGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraph();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraph_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraphNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGrammarScriptGraphNode
void UGrammarScriptGraphNode::StaticRegisterNativesUGrammarScriptGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarScriptGraphNode);
UClass* Z_Construct_UClass_UGrammarScriptGraphNode_NoRegister()
{
	return UGrammarScriptGraphNode::StaticClass();
}
struct Z_Construct_UClass_UGrammarScriptGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutgoingNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutgoingNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutgoingNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IncomingNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncomingNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarScriptGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrammarScriptGraphNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_OutgoingNodes_Inner = { "OutgoingNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGrammarScriptGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_OutgoingNodes = { "OutgoingNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrammarScriptGraphNode, OutgoingNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutgoingNodes_MetaData), NewProp_OutgoingNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_IncomingNodes_Inner = { "IncomingNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGrammarScriptGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_IncomingNodes = { "IncomingNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrammarScriptGraphNode, IncomingNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingNodes_MetaData), NewProp_IncomingNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrammarScriptGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_OutgoingNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_OutgoingNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_IncomingNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarScriptGraphNode_Statics::NewProp_IncomingNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrammarScriptGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarScriptGraphNode_Statics::ClassParams = {
	&UGrammarScriptGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGrammarScriptGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraphNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrammarScriptGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrammarScriptGraphNode()
{
	if (!Z_Registration_Info_UClass_UGrammarScriptGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarScriptGraphNode.OuterSingleton, Z_Construct_UClass_UGrammarScriptGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrammarScriptGraphNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarScriptGraphNode>()
{
	return UGrammarScriptGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarScriptGraphNode);
UGrammarScriptGraphNode::~UGrammarScriptGraphNode() {}
// End Class UGrammarScriptGraphNode

// Begin Class UGrammarScriptGraph
void UGrammarScriptGraph::StaticRegisterNativesUGrammarScriptGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarScriptGraph);
UClass* Z_Construct_UClass_UGrammarScriptGraph_NoRegister()
{
	return UGrammarScriptGraph::StaticClass();
}
struct Z_Construct_UClass_UGrammarScriptGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarScriptGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarScriptGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarScriptGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGrammarScriptGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrammarScriptGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrammarScriptGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrammarScriptGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarScriptGraph_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarScriptGraph_Statics::NewProp_Nodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrammarScriptGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarScriptGraph_Statics::ClassParams = {
	&UGrammarScriptGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGrammarScriptGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarScriptGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrammarScriptGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrammarScriptGraph()
{
	if (!Z_Registration_Info_UClass_UGrammarScriptGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarScriptGraph.OuterSingleton, Z_Construct_UClass_UGrammarScriptGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrammarScriptGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarScriptGraph>()
{
	return UGrammarScriptGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarScriptGraph);
UGrammarScriptGraph::~UGrammarScriptGraph() {}
// End Class UGrammarScriptGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarScriptGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrammarScriptGraphNode, UGrammarScriptGraphNode::StaticClass, TEXT("UGrammarScriptGraphNode"), &Z_Registration_Info_UClass_UGrammarScriptGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarScriptGraphNode), 1623084619U) },
		{ Z_Construct_UClass_UGrammarScriptGraph, UGrammarScriptGraph::StaticClass, TEXT("UGrammarScriptGraph"), &Z_Registration_Info_UClass_UGrammarScriptGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarScriptGraph), 1742501731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarScriptGraph_h_3761018080(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarScriptGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarScriptGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
