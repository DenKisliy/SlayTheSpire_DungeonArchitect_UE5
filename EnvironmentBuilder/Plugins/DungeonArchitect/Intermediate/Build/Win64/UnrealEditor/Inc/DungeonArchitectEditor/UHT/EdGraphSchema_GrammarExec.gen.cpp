// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_GrammarExec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_GrammarExec() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_GrammarExec();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_GrammarExec_NoRegister();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphSchema_GrammarExec
void UEdGraphSchema_GrammarExec::StaticRegisterNativesUEdGraphSchema_GrammarExec()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_GrammarExec);
UClass* Z_Construct_UClass_UEdGraphSchema_GrammarExec_NoRegister()
{
	return UEdGraphSchema_GrammarExec::StaticClass();
}
struct Z_Construct_UClass_UEdGraphSchema_GrammarExec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_GrammarExec.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_GrammarExec.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_GrammarExec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraphSchema_GrammarExec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_GrammarExec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_GrammarExec_Statics::ClassParams = {
	&UEdGraphSchema_GrammarExec::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_GrammarExec_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphSchema_GrammarExec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphSchema_GrammarExec()
{
	if (!Z_Registration_Info_UClass_UEdGraphSchema_GrammarExec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_GrammarExec.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_GrammarExec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphSchema_GrammarExec.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphSchema_GrammarExec>()
{
	return UEdGraphSchema_GrammarExec::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_GrammarExec);
UEdGraphSchema_GrammarExec::~UEdGraphSchema_GrammarExec() {}
// End Class UEdGraphSchema_GrammarExec

// Begin ScriptStruct FGrammarExecSchemaAction_NewNode
static_assert(std::is_polymorphic<FGrammarExecSchemaAction_NewNode>() == std::is_polymorphic<FDungeonSchemaAction_NewNode>(), "USTRUCT FGrammarExecSchemaAction_NewNode cannot be polymorphic unless super FDungeonSchemaAction_NewNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode;
class UScriptStruct* FGrammarExecSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("GrammarExecSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FGrammarExecSchemaAction_NewNode>()
{
	return FGrammarExecSchemaAction_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action to add a node to the graph */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_GrammarExec.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to add a node to the graph" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrammarExecSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode,
	&NewStructOps,
	"GrammarExecSchemaAction_NewNode",
	nullptr,
	0,
	sizeof(FGrammarExecSchemaAction_NewNode),
	alignof(FGrammarExecSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode.InnerSingleton;
}
// End ScriptStruct FGrammarExecSchemaAction_NewNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_GrammarExec_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGrammarExecSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FGrammarExecSchemaAction_NewNode_Statics::NewStructOps, TEXT("GrammarExecSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_GrammarExecSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrammarExecSchemaAction_NewNode), 254656561U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_GrammarExec, UEdGraphSchema_GrammarExec::StaticClass, TEXT("UEdGraphSchema_GrammarExec"), &Z_Registration_Info_UClass_UEdGraphSchema_GrammarExec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_GrammarExec), 735726431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_GrammarExec_h_3154950557(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_GrammarExec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_GrammarExec_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_GrammarExec_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_GrammarExec_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
