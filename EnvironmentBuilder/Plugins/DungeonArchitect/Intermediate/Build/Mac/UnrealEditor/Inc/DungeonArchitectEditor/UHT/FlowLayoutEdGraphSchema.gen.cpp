// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowLayoutEdGraphSchema() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowLayoutEdGraphSchema();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowLayoutEdGraphSchema_NoRegister();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowLayoutEdGraphSchema
void UFlowLayoutEdGraphSchema::StaticRegisterNativesUFlowLayoutEdGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowLayoutEdGraphSchema);
UClass* Z_Construct_UClass_UFlowLayoutEdGraphSchema_NoRegister()
{
	return UFlowLayoutEdGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowLayoutEdGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics::ClassParams = {
	&UFlowLayoutEdGraphSchema::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowLayoutEdGraphSchema()
{
	if (!Z_Registration_Info_UClass_UFlowLayoutEdGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowLayoutEdGraphSchema.OuterSingleton, Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowLayoutEdGraphSchema.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowLayoutEdGraphSchema>()
{
	return UFlowLayoutEdGraphSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowLayoutEdGraphSchema);
UFlowLayoutEdGraphSchema::~UFlowLayoutEdGraphSchema() {}
// End Class UFlowLayoutEdGraphSchema

// Begin ScriptStruct FFlowAbstractSchemaAction_NewNode
static_assert(std::is_polymorphic<FFlowAbstractSchemaAction_NewNode>() == std::is_polymorphic<FDungeonSchemaAction_NewNode>(), "USTRUCT FFlowAbstractSchemaAction_NewNode cannot be polymorphic unless super FDungeonSchemaAction_NewNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode;
class UScriptStruct* FFlowAbstractSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("FlowAbstractSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FFlowAbstractSchemaAction_NewNode>()
{
	return FFlowAbstractSchemaAction_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowAbstractSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode,
	&NewStructOps,
	"FlowAbstractSchemaAction_NewNode",
	nullptr,
	0,
	sizeof(FFlowAbstractSchemaAction_NewNode),
	alignof(FFlowAbstractSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode.InnerSingleton;
}
// End ScriptStruct FFlowAbstractSchemaAction_NewNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlowAbstractSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode_Statics::NewStructOps, TEXT("FlowAbstractSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_FlowAbstractSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowAbstractSchemaAction_NewNode), 3725541403U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowLayoutEdGraphSchema, UFlowLayoutEdGraphSchema::StaticClass, TEXT("UFlowLayoutEdGraphSchema"), &Z_Registration_Info_UClass_UFlowLayoutEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowLayoutEdGraphSchema), 1328277411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_2782484081(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
