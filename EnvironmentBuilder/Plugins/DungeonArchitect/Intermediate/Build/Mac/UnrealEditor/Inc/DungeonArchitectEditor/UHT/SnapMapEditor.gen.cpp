// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/SnapMapEditor/SnapMapEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapEditor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapMapEditorCallbackHandler
void USnapMapEditorCallbackHandler::StaticRegisterNativesUSnapMapEditorCallbackHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapEditorCallbackHandler);
UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler_NoRegister()
{
	return USnapMapEditorCallbackHandler::StaticClass();
}
struct Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/SnapMapEditor/SnapMapEditor.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapEditorCallbackHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEventListener,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::ClassParams = {
	&USnapMapEditorCallbackHandler::StaticClass,
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
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler()
{
	if (!Z_Registration_Info_UClass_USnapMapEditorCallbackHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapEditorCallbackHandler.OuterSingleton, Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapEditorCallbackHandler.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapEditorCallbackHandler>()
{
	return USnapMapEditorCallbackHandler::StaticClass();
}
USnapMapEditorCallbackHandler::USnapMapEditorCallbackHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapEditorCallbackHandler);
USnapMapEditorCallbackHandler::~USnapMapEditorCallbackHandler() {}
// End Class USnapMapEditorCallbackHandler

// Begin Class UFlowEditorDebugAppModeSettings
void UFlowEditorDebugAppModeSettings::StaticRegisterNativesUFlowEditorDebugAppModeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowEditorDebugAppModeSettings);
UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings_NoRegister()
{
	return UFlowEditorDebugAppModeSettings::StaticClass();
}
struct Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/SnapMapEditor/SnapMapEditor.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingHorizontal_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingVertical_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingHorizontal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingVertical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowEditorDebugAppModeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingHorizontal = { "SpacingHorizontal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowEditorDebugAppModeSettings, SpacingHorizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingHorizontal_MetaData), NewProp_SpacingHorizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingVertical = { "SpacingVertical", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowEditorDebugAppModeSettings, SpacingVertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingVertical_MetaData), NewProp_SpacingVertical_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingHorizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingVertical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::ClassParams = {
	&UFlowEditorDebugAppModeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings()
{
	if (!Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings.OuterSingleton, Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowEditorDebugAppModeSettings>()
{
	return UFlowEditorDebugAppModeSettings::StaticClass();
}
UFlowEditorDebugAppModeSettings::UFlowEditorDebugAppModeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowEditorDebugAppModeSettings);
UFlowEditorDebugAppModeSettings::~UFlowEditorDebugAppModeSettings() {}
// End Class UFlowEditorDebugAppModeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapEditorCallbackHandler, USnapMapEditorCallbackHandler::StaticClass, TEXT("USnapMapEditorCallbackHandler"), &Z_Registration_Info_UClass_USnapMapEditorCallbackHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapEditorCallbackHandler), 1954182465U) },
		{ Z_Construct_UClass_UFlowEditorDebugAppModeSettings, UFlowEditorDebugAppModeSettings::StaticClass, TEXT("UFlowEditorDebugAppModeSettings"), &Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowEditorDebugAppModeSettings), 2027648528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_3572926509(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
