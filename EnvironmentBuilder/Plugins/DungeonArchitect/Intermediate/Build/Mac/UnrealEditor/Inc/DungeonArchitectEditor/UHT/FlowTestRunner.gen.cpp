// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/FlowEditor/FlowTestRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTestRunner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowPerfEditorSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowPerfEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowPerfEditorSettings
void UFlowPerfEditorSettings::StaticRegisterNativesUFlowPerfEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowPerfEditorSettings);
UClass* Z_Construct_UClass_UFlowPerfEditorSettings_NoRegister()
{
	return UFlowPerfEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UFlowPerfEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "///////////////////// Flow Test Runner Framework ///////////////////// \n" },
		{ "IncludePath", "Core/Editors/FlowEditor/FlowTestRunner.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
		{ "ToolTip", "Flow Test Runner Framework" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTests_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRetries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassRetryThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningRetryThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GarbageCollectEveryNTests_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** \n     Have the editor free up resources after every N tests\n     If you run a total of 2000 tests, and the specified value is 100,\n     the memory will be freed up at test number 100, 200, 300, and so on\n    */" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
		{ "ToolTip", "Have the editor free up resources after every N tests\nIf you run a total of 2000 tests, and the specified value is 100,\nthe memory will be freed up at test number 100, 200, 300, and so on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTests;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PassRetryThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarningRetryThreshold;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GarbageCollectEveryNTests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowPerfEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_NumTests = { "NumTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, NumTests), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTests_MetaData), NewProp_NumTests_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_MaxRetries = { "MaxRetries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, MaxRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRetries_MetaData), NewProp_MaxRetries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_PassRetryThreshold = { "PassRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, PassRetryThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassRetryThreshold_MetaData), NewProp_PassRetryThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_WarningRetryThreshold = { "WarningRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, WarningRetryThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningRetryThreshold_MetaData), NewProp_WarningRetryThreshold_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverrides_MetaData), NewProp_ParameterOverrides_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests = { "GarbageCollectEveryNTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, GarbageCollectEveryNTests), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GarbageCollectEveryNTests_MetaData), NewProp_GarbageCollectEveryNTests_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowPerfEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_NumTests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_MaxRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_PassRetryThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_WarningRetryThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowPerfEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::ClassParams = {
	&UFlowPerfEditorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowPerfEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowPerfEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowPerfEditorSettings()
{
	if (!Z_Registration_Info_UClass_UFlowPerfEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowPerfEditorSettings.OuterSingleton, Z_Construct_UClass_UFlowPerfEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowPerfEditorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowPerfEditorSettings>()
{
	return UFlowPerfEditorSettings::StaticClass();
}
UFlowPerfEditorSettings::UFlowPerfEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowPerfEditorSettings);
UFlowPerfEditorSettings::~UFlowPerfEditorSettings() {}
// End Class UFlowPerfEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowPerfEditorSettings, UFlowPerfEditorSettings::StaticClass, TEXT("UFlowPerfEditorSettings"), &Z_Registration_Info_UClass_UFlowPerfEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowPerfEditorSettings), 3289904811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_3341915349(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
