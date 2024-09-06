// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraph_GrammarExec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_GrammarExec() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_GrammarExec();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_GrammarExec_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraph_GrammarExec
void UEdGraph_GrammarExec::StaticRegisterNativesUEdGraph_GrammarExec()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_GrammarExec);
UClass* Z_Construct_UClass_UEdGraph_GrammarExec_NoRegister()
{
	return UEdGraph_GrammarExec::StaticClass();
}
struct Z_Construct_UClass_UEdGraph_GrammarExec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/EdGraph_GrammarExec.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraph_GrammarExec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraph_GrammarExec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_GrammarExec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_GrammarExec_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph_GrammarExec, EntryNode), Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryNode_MetaData), NewProp_EntryNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraph_GrammarExec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_GrammarExec_Statics::NewProp_EntryNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GrammarExec_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraph_GrammarExec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GrammarExec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_GrammarExec_Statics::ClassParams = {
	&UEdGraph_GrammarExec::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraph_GrammarExec_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GrammarExec_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_GrammarExec_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraph_GrammarExec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraph_GrammarExec()
{
	if (!Z_Registration_Info_UClass_UEdGraph_GrammarExec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_GrammarExec.OuterSingleton, Z_Construct_UClass_UEdGraph_GrammarExec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraph_GrammarExec.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraph_GrammarExec>()
{
	return UEdGraph_GrammarExec::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_GrammarExec);
UEdGraph_GrammarExec::~UEdGraph_GrammarExec() {}
// End Class UEdGraph_GrammarExec

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_GrammarExec_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_GrammarExec, UEdGraph_GrammarExec::StaticClass, TEXT("UEdGraph_GrammarExec"), &Z_Registration_Info_UClass_UEdGraph_GrammarExec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_GrammarExec), 4225600818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_GrammarExec_h_1260779112(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_GrammarExec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_GrammarExec_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
