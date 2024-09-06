// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/EditorMode/DungeonToolsEditablePaletteConfig.h"
#include "Developer/WidgetRegistration/Public/ToolkitBuilderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonToolsEditablePaletteConfig() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsEditablePaletteConfig();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_NoRegister();
EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
WIDGETREGISTRATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditableToolPaletteSettings();
// End Cross Module References

// Begin Class UDungeonToolsEditablePaletteConfig
void UDungeonToolsEditablePaletteConfig::StaticRegisterNativesUDungeonToolsEditablePaletteConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonToolsEditablePaletteConfig);
UClass* Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_NoRegister()
{
	return UDungeonToolsEditablePaletteConfig::StaticClass();
}
struct Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "EditorConfig", "EditableToolPalette" },
		{ "IncludePath", "Core/LevelEditor/EditorMode/DungeonToolsEditablePaletteConfig.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditablePaletteConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableToolPalettes_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditablePaletteConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditableToolPalettes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EditableToolPalettes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EditableToolPalettes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonToolsEditablePaletteConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::NewProp_EditableToolPalettes_ValueProp = { "EditableToolPalettes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEditableToolPaletteSettings, METADATA_PARAMS(0, nullptr) }; // 3234587364
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::NewProp_EditableToolPalettes_Key_KeyProp = { "EditableToolPalettes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::NewProp_EditableToolPalettes = { "EditableToolPalettes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsEditablePaletteConfig, EditableToolPalettes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableToolPalettes_MetaData), NewProp_EditableToolPalettes_MetaData) }; // 3234587364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::NewProp_EditableToolPalettes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::NewProp_EditableToolPalettes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::NewProp_EditableToolPalettes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::ClassParams = {
	&UDungeonToolsEditablePaletteConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonToolsEditablePaletteConfig()
{
	if (!Z_Registration_Info_UClass_UDungeonToolsEditablePaletteConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonToolsEditablePaletteConfig.OuterSingleton, Z_Construct_UClass_UDungeonToolsEditablePaletteConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonToolsEditablePaletteConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonToolsEditablePaletteConfig>()
{
	return UDungeonToolsEditablePaletteConfig::StaticClass();
}
UDungeonToolsEditablePaletteConfig::UDungeonToolsEditablePaletteConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonToolsEditablePaletteConfig);
UDungeonToolsEditablePaletteConfig::~UDungeonToolsEditablePaletteConfig() {}
// End Class UDungeonToolsEditablePaletteConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditablePaletteConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonToolsEditablePaletteConfig, UDungeonToolsEditablePaletteConfig::StaticClass, TEXT("UDungeonToolsEditablePaletteConfig"), &Z_Registration_Info_UClass_UDungeonToolsEditablePaletteConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonToolsEditablePaletteConfig), 3920628229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditablePaletteConfig_h_3660621998(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditablePaletteConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditablePaletteConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
