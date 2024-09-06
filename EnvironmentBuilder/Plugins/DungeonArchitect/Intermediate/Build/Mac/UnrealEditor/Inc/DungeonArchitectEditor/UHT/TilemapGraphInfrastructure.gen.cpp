// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilemapGraphInfrastructure() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowTilemapEdGraph();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowTilemapEdGraph_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowTilemapEdGraphNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowTilemapEdGraphNode_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowTilemapEdGraphSchema();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowTilemapEdGraphSchema_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowTilemapEdGraph
void UFlowTilemapEdGraph::StaticRegisterNativesUFlowTilemapEdGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapEdGraph);
UClass* Z_Construct_UClass_UFlowTilemapEdGraph_NoRegister()
{
	return UFlowTilemapEdGraph::StaticClass();
}
struct Z_Construct_UClass_UFlowTilemapEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////// Graph /////////////////// \n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ToolTip", "/ Graph /" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowTilemapEdGraph_Statics::NewProp_PreviewNode = { "PreviewNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapEdGraph, PreviewNode), Z_Construct_UClass_UFlowTilemapEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewNode_MetaData), NewProp_PreviewNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemapEdGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapEdGraph_Statics::NewProp_PreviewNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowTilemapEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapEdGraph_Statics::ClassParams = {
	&UFlowTilemapEdGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowTilemapEdGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowTilemapEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowTilemapEdGraph()
{
	if (!Z_Registration_Info_UClass_UFlowTilemapEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapEdGraph.OuterSingleton, Z_Construct_UClass_UFlowTilemapEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowTilemapEdGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowTilemapEdGraph>()
{
	return UFlowTilemapEdGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapEdGraph);
UFlowTilemapEdGraph::~UFlowTilemapEdGraph() {}
// End Class UFlowTilemapEdGraph

// Begin Class UFlowTilemapEdGraphNode
void UFlowTilemapEdGraphNode::StaticRegisterNativesUFlowTilemapEdGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapEdGraphNode);
UClass* Z_Construct_UClass_UFlowTilemapEdGraphNode_NoRegister()
{
	return UFlowTilemapEdGraphNode::StaticClass();
}
struct Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////// Graph Node /////////////////// \n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ToolTip", "/ Graph Node /" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapEdGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::NewProp_PreviewTexture = { "PreviewTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapEdGraphNode, PreviewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewTexture_MetaData), NewProp_PreviewTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::NewProp_PreviewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::ClassParams = {
	&UFlowTilemapEdGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowTilemapEdGraphNode()
{
	if (!Z_Registration_Info_UClass_UFlowTilemapEdGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapEdGraphNode.OuterSingleton, Z_Construct_UClass_UFlowTilemapEdGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowTilemapEdGraphNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowTilemapEdGraphNode>()
{
	return UFlowTilemapEdGraphNode::StaticClass();
}
UFlowTilemapEdGraphNode::UFlowTilemapEdGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapEdGraphNode);
UFlowTilemapEdGraphNode::~UFlowTilemapEdGraphNode() {}
// End Class UFlowTilemapEdGraphNode

// Begin Class UFlowTilemapEdGraphSchema
void UFlowTilemapEdGraphSchema::StaticRegisterNativesUFlowTilemapEdGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapEdGraphSchema);
UClass* Z_Construct_UClass_UFlowTilemapEdGraphSchema_NoRegister()
{
	return UFlowTilemapEdGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UFlowTilemapEdGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////// Graph Schema /////////////////// \n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ToolTip", "/ Graph Schema /" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapEdGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowTilemapEdGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapEdGraphSchema_Statics::ClassParams = {
	&UFlowTilemapEdGraphSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapEdGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowTilemapEdGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowTilemapEdGraphSchema()
{
	if (!Z_Registration_Info_UClass_UFlowTilemapEdGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapEdGraphSchema.OuterSingleton, Z_Construct_UClass_UFlowTilemapEdGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowTilemapEdGraphSchema.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowTilemapEdGraphSchema>()
{
	return UFlowTilemapEdGraphSchema::StaticClass();
}
UFlowTilemapEdGraphSchema::UFlowTilemapEdGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapEdGraphSchema);
UFlowTilemapEdGraphSchema::~UFlowTilemapEdGraphSchema() {}
// End Class UFlowTilemapEdGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemapEdGraph, UFlowTilemapEdGraph::StaticClass, TEXT("UFlowTilemapEdGraph"), &Z_Registration_Info_UClass_UFlowTilemapEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapEdGraph), 3269154857U) },
		{ Z_Construct_UClass_UFlowTilemapEdGraphNode, UFlowTilemapEdGraphNode::StaticClass, TEXT("UFlowTilemapEdGraphNode"), &Z_Registration_Info_UClass_UFlowTilemapEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapEdGraphNode), 1702476812U) },
		{ Z_Construct_UClass_UFlowTilemapEdGraphSchema, UFlowTilemapEdGraphSchema::StaticClass, TEXT("UFlowTilemapEdGraphSchema"), &Z_Registration_Info_UClass_UFlowTilemapEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapEdGraphSchema), 2886768330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_3633430020(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
