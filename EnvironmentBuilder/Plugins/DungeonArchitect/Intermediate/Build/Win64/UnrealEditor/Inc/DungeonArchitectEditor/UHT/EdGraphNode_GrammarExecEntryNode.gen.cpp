// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecEntryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_GrammarExecEntryNode() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecNodeBase();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_GrammarExecEntryNode
void UEdGraphNode_GrammarExecEntryNode::StaticRegisterNativesUEdGraphNode_GrammarExecEntryNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_GrammarExecEntryNode);
UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_NoRegister()
{
	return UEdGraphNode_GrammarExecEntryNode::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecEntryNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecEntryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_GrammarExecEntryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_GrammarExecNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_Statics::ClassParams = {
	&UEdGraphNode_GrammarExecEntryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_GrammarExecEntryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_GrammarExecEntryNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_GrammarExecEntryNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_GrammarExecEntryNode>()
{
	return UEdGraphNode_GrammarExecEntryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_GrammarExecEntryNode);
UEdGraphNode_GrammarExecEntryNode::~UEdGraphNode_GrammarExecEntryNode() {}
// End Class UEdGraphNode_GrammarExecEntryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecEntryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_GrammarExecEntryNode, UEdGraphNode_GrammarExecEntryNode::StaticClass, TEXT("UEdGraphNode_GrammarExecEntryNode"), &Z_Registration_Info_UClass_UEdGraphNode_GrammarExecEntryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_GrammarExecEntryNode), 1901962777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecEntryNode_h_1389216235(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecEntryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecEntryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
