// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_DungeonProp() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp_NoRegister();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphSchema_DungeonProp
void UEdGraphSchema_DungeonProp::StaticRegisterNativesUEdGraphSchema_DungeonProp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_DungeonProp);
UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp_NoRegister()
{
	return UEdGraphSchema_DungeonProp::StaticClass();
}
struct Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_DungeonProp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::ClassParams = {
	&UEdGraphSchema_DungeonProp::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp()
{
	if (!Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphSchema_DungeonProp>()
{
	return UEdGraphSchema_DungeonProp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_DungeonProp);
UEdGraphSchema_DungeonProp::~UEdGraphSchema_DungeonProp() {}
// End Class UEdGraphSchema_DungeonProp

// Begin ScriptStruct FDungeonSchemaAction_NewComment
static_assert(std::is_polymorphic<FDungeonSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDungeonSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment;
class UScriptStruct* FDungeonSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DungeonSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDungeonSchemaAction_NewComment>()
{
	return FDungeonSchemaAction_NewComment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a comment node to the graph */" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h" },
		{ "ToolTip", "Action to add a comment node to the graph" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonSchemaAction_NewComment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"DungeonSchemaAction_NewComment",
	nullptr,
	0,
	sizeof(FDungeonSchemaAction_NewComment),
	alignof(FDungeonSchemaAction_NewComment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.InnerSingleton;
}
// End ScriptStruct FDungeonSchemaAction_NewComment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::NewStructOps, TEXT("DungeonSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonSchemaAction_NewComment), 3463606141U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_DungeonProp, UEdGraphSchema_DungeonProp::StaticClass, TEXT("UEdGraphSchema_DungeonProp"), &Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_DungeonProp), 1724438305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_2013805801(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
