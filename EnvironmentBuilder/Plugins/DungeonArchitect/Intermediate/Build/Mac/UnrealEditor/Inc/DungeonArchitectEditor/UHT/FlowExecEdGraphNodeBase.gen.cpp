// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowExecEdGraphNodeBase() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNodeBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNodeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowExecEdGraphNodeBase
void UFlowExecEdGraphNodeBase::StaticRegisterNativesUFlowExecEdGraphNodeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecEdGraphNodeBase);
UClass* Z_Construct_UClass_UFlowExecEdGraphNodeBase_NoRegister()
{
	return UFlowExecEdGraphNodeBase::StaticClass();
}
struct Z_Construct_UClass_UFlowExecEdGraphNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodeBase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodeBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecEdGraphNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowExecEdGraphNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecEdGraphNodeBase_Statics::ClassParams = {
	&UFlowExecEdGraphNodeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecEdGraphNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecEdGraphNodeBase()
{
	if (!Z_Registration_Info_UClass_UFlowExecEdGraphNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecEdGraphNodeBase.OuterSingleton, Z_Construct_UClass_UFlowExecEdGraphNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecEdGraphNodeBase.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowExecEdGraphNodeBase>()
{
	return UFlowExecEdGraphNodeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecEdGraphNodeBase);
UFlowExecEdGraphNodeBase::~UFlowExecEdGraphNodeBase() {}
// End Class UFlowExecEdGraphNodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowExecEdGraphNodeBase, UFlowExecEdGraphNodeBase::StaticClass, TEXT("UFlowExecEdGraphNodeBase"), &Z_Registration_Info_UClass_UFlowExecEdGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecEdGraphNodeBase), 774792943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodeBase_h_3893740439(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
