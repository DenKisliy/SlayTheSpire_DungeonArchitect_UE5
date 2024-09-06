// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/FlowEditor/BaseEditors/CellFlowEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowEditor() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UCellFlowEditorSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UCellFlowEditorSettings_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorSettings();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UCellFlowEditorSettings
void UCellFlowEditorSettings::StaticRegisterNativesUCellFlowEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowEditorSettings);
UClass* Z_Construct_UClass_UCellFlowEditorSettings_NoRegister()
{
	return UCellFlowEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UCellFlowEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/FlowEditor/BaseEditors/CellFlowEditor.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/BaseEditors/CellFlowEditor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCellFlowEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowEditorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowEditorSettings_Statics::ClassParams = {
	&UCellFlowEditorSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowEditorSettings()
{
	if (!Z_Registration_Info_UClass_UCellFlowEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowEditorSettings.OuterSingleton, Z_Construct_UClass_UCellFlowEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowEditorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UCellFlowEditorSettings>()
{
	return UCellFlowEditorSettings::StaticClass();
}
UCellFlowEditorSettings::UCellFlowEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowEditorSettings);
UCellFlowEditorSettings::~UCellFlowEditorSettings() {}
// End Class UCellFlowEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowEditorSettings, UCellFlowEditorSettings::StaticClass, TEXT("UCellFlowEditorSettings"), &Z_Registration_Info_UClass_UCellFlowEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowEditorSettings), 582214250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_2552370598(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
