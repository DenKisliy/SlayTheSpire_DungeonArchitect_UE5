// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/LayoutGraph/Impl/GridFlow/GridFlowLayoutEdGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutEdGraphNode() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowLayoutEdGraphNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowLayoutEdGraphNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowLayoutEdGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UGridFlowLayoutEdGraphNode
void UGridFlowLayoutEdGraphNode::StaticRegisterNativesUGridFlowLayoutEdGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutEdGraphNode);
UClass* Z_Construct_UClass_UGridFlowLayoutEdGraphNode_NoRegister()
{
	return UGridFlowLayoutEdGraphNode::StaticClass();
}
struct Z_Construct_UClass_UGridFlowLayoutEdGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Impl/GridFlow/GridFlowLayoutEdGraphNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Impl/GridFlow/GridFlowLayoutEdGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutEdGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowLayoutEdGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowLayoutEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutEdGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutEdGraphNode_Statics::ClassParams = {
	&UGridFlowLayoutEdGraphNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowLayoutEdGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowLayoutEdGraphNode()
{
	if (!Z_Registration_Info_UClass_UGridFlowLayoutEdGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutEdGraphNode.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutEdGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowLayoutEdGraphNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowLayoutEdGraphNode>()
{
	return UGridFlowLayoutEdGraphNode::StaticClass();
}
UGridFlowLayoutEdGraphNode::UGridFlowLayoutEdGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutEdGraphNode);
UGridFlowLayoutEdGraphNode::~UGridFlowLayoutEdGraphNode() {}
// End Class UGridFlowLayoutEdGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutEdGraphNode, UGridFlowLayoutEdGraphNode::StaticClass, TEXT("UGridFlowLayoutEdGraphNode"), &Z_Registration_Info_UClass_UGridFlowLayoutEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutEdGraphNode), 715654262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraphNode_h_2559122267(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
