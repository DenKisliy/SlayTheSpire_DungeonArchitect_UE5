// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowLayoutEdGraphNode() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowLayoutEdGraphNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowLayoutEdGraphNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowLayoutEdGraphNode
void UFlowLayoutEdGraphNode::StaticRegisterNativesUFlowLayoutEdGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowLayoutEdGraphNode);
UClass* Z_Construct_UClass_UFlowLayoutEdGraphNode_NoRegister()
{
	return UFlowLayoutEdGraphNode::StaticClass();
}
struct Z_Construct_UClass_UFlowLayoutEdGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowLayoutEdGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowLayoutEdGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowLayoutEdGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowLayoutEdGraphNode_Statics::ClassParams = {
	&UFlowLayoutEdGraphNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowLayoutEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowLayoutEdGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowLayoutEdGraphNode()
{
	if (!Z_Registration_Info_UClass_UFlowLayoutEdGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowLayoutEdGraphNode.OuterSingleton, Z_Construct_UClass_UFlowLayoutEdGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowLayoutEdGraphNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowLayoutEdGraphNode>()
{
	return UFlowLayoutEdGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowLayoutEdGraphNode);
UFlowLayoutEdGraphNode::~UFlowLayoutEdGraphNode() {}
// End Class UFlowLayoutEdGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowLayoutEdGraphNode, UFlowLayoutEdGraphNode::StaticClass, TEXT("UFlowLayoutEdGraphNode"), &Z_Registration_Info_UClass_UFlowLayoutEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowLayoutEdGraphNode), 1314049319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphNode_h_3227001206(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
