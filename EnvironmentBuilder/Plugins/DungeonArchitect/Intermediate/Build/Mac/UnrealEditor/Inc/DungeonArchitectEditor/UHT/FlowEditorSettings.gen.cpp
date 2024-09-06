// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/FlowEditor/FlowEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowEditorSettings
void UFlowEditorSettings::StaticRegisterNativesUFlowEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowEditorSettings);
UClass* Z_Construct_UClass_UFlowEditorSettings_NoRegister()
{
	return UFlowEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UFlowEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/FlowEditor/FlowEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeSeedOnBuild_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTimeoutsRetriesAllowed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The number of timeouts allowed while building the dungeon with multiple retries */" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
		{ "ToolTip", "The number of timeouts allowed while building the dungeon with multiple retries" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_bRandomizeSeedOnBuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeSeedOnBuild;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBuildRetries;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTimeoutsRetriesAllowed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowEditorSettings, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild_SetBit(void* Obj)
{
	((UFlowEditorSettings*)Obj)->bRandomizeSeedOnBuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild = { "bRandomizeSeedOnBuild", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlowEditorSettings), &Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeSeedOnBuild_MetaData), NewProp_bRandomizeSeedOnBuild_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_MaxBuildRetries = { "MaxBuildRetries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowEditorSettings, MaxBuildRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBuildRetries_MetaData), NewProp_MaxBuildRetries_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowEditorSettings, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverrides_MetaData), NewProp_ParameterOverrides_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_NumTimeoutsRetriesAllowed = { "NumTimeoutsRetriesAllowed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowEditorSettings, NumTimeoutsRetriesAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTimeoutsRetriesAllowed_MetaData), NewProp_NumTimeoutsRetriesAllowed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_MaxBuildRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_NumTimeoutsRetriesAllowed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowEditorSettings_Statics::ClassParams = {
	&UFlowEditorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowEditorSettings()
{
	if (!Z_Registration_Info_UClass_UFlowEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowEditorSettings.OuterSingleton, Z_Construct_UClass_UFlowEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowEditorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowEditorSettings>()
{
	return UFlowEditorSettings::StaticClass();
}
UFlowEditorSettings::UFlowEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowEditorSettings);
UFlowEditorSettings::~UFlowEditorSettings() {}
// End Class UFlowEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowEditorSettings, UFlowEditorSettings::StaticClass, TEXT("UFlowEditorSettings"), &Z_Registration_Info_UClass_UFlowEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowEditorSettings), 344487797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_3394986863(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
