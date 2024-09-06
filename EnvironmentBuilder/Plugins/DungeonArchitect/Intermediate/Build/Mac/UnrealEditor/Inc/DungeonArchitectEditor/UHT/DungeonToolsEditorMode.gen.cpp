// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/EditorMode/DungeonToolsEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonToolsEditorMode() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsEditorMode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsEditorMode_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommand_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UDungeonToolsEditorMode
void UDungeonToolsEditorMode::StaticRegisterNativesUDungeonToolsEditorMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonToolsEditorMode);
UClass* Z_Construct_UClass_UDungeonToolsEditorMode_NoRegister()
{
	return UDungeonToolsEditorMode::StaticClass();
}
struct Z_Construct_UClass_UDungeonToolsEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/DungeonToolsEditorMode.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonModeCommands_MetaData[] = {
		{ "Comment", "// UInteractiveCommand support. Currently implemented by creating instances of\n// commands on mode startup and holding onto them. This perhaps should be revisited,\n// command instances could probably be created as needed...\n" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorMode.h" },
		{ "ToolTip", "UInteractiveCommand support. Currently implemented by creating instances of\ncommands on mode startup and holding onto them. This perhaps should be revisited,\ncommand instances could probably be created as needed..." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonModeCommands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DungeonModeCommands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonToolsEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonToolsEditorMode_Statics::NewProp_DungeonModeCommands_Inner = { "DungeonModeCommands", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInteractiveCommand_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonToolsEditorMode_Statics::NewProp_DungeonModeCommands = { "DungeonModeCommands", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsEditorMode, DungeonModeCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonModeCommands_MetaData), NewProp_DungeonModeCommands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonToolsEditorMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsEditorMode_Statics::NewProp_DungeonModeCommands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsEditorMode_Statics::NewProp_DungeonModeCommands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonToolsEditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDungeonToolsEditorMode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister, (int32)VTABLE_OFFSET(UDungeonToolsEditorMode, ILegacyEdModeSelectInterface), false },  // 4283437838
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonToolsEditorMode_Statics::ClassParams = {
	&UDungeonToolsEditorMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonToolsEditorMode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorMode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonToolsEditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonToolsEditorMode()
{
	if (!Z_Registration_Info_UClass_UDungeonToolsEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonToolsEditorMode.OuterSingleton, Z_Construct_UClass_UDungeonToolsEditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonToolsEditorMode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonToolsEditorMode>()
{
	return UDungeonToolsEditorMode::StaticClass();
}
// End Class UDungeonToolsEditorMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonToolsEditorMode, UDungeonToolsEditorMode::StaticClass, TEXT("UDungeonToolsEditorMode"), &Z_Registration_Info_UClass_UDungeonToolsEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonToolsEditorMode), 4032070819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorMode_h_3514903377(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
