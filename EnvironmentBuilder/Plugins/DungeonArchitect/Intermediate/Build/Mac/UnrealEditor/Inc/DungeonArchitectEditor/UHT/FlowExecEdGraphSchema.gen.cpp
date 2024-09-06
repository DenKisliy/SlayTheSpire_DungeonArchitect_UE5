// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/FlowExecEdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowExecEdGraphSchema() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphSchema();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphSchema_NoRegister();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowExecEdGraphSchema
void UFlowExecEdGraphSchema::StaticRegisterNativesUFlowExecEdGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecEdGraphSchema);
UClass* Z_Construct_UClass_UFlowExecEdGraphSchema_NoRegister()
{
	return UFlowExecEdGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UFlowExecEdGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecEdGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecEdGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecEdGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowExecEdGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecEdGraphSchema_Statics::ClassParams = {
	&UFlowExecEdGraphSchema::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecEdGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecEdGraphSchema()
{
	if (!Z_Registration_Info_UClass_UFlowExecEdGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecEdGraphSchema.OuterSingleton, Z_Construct_UClass_UFlowExecEdGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecEdGraphSchema.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowExecEdGraphSchema>()
{
	return UFlowExecEdGraphSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecEdGraphSchema);
UFlowExecEdGraphSchema::~UFlowExecEdGraphSchema() {}
// End Class UFlowExecEdGraphSchema

// Begin ScriptStruct FFlowExecSchemaAction_NewNode
static_assert(std::is_polymorphic<FFlowExecSchemaAction_NewNode>() == std::is_polymorphic<FDungeonSchemaAction_NewNode>(), "USTRUCT FFlowExecSchemaAction_NewNode cannot be polymorphic unless super FDungeonSchemaAction_NewNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode;
class UScriptStruct* FFlowExecSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("FlowExecSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FFlowExecSchemaAction_NewNode>()
{
	return FFlowExecSchemaAction_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecEdGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowExecSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode,
	&NewStructOps,
	"FlowExecSchemaAction_NewNode",
	nullptr,
	0,
	sizeof(FFlowExecSchemaAction_NewNode),
	alignof(FFlowExecSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.InnerSingleton;
}
// End ScriptStruct FFlowExecSchemaAction_NewNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraphSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlowExecSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::NewStructOps, TEXT("FlowExecSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowExecSchemaAction_NewNode), 4144299650U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowExecEdGraphSchema, UFlowExecEdGraphSchema::StaticClass, TEXT("UFlowExecEdGraphSchema"), &Z_Registration_Info_UClass_UFlowExecEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecEdGraphSchema), 3650563532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraphSchema_h_658087332(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraphSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraphSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
