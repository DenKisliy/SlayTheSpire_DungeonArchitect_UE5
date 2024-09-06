// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapTestRunner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapPerfEditorSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapPerfEditorSettings_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapMapPerfEditorSettings
void USnapMapPerfEditorSettings::StaticRegisterNativesUSnapMapPerfEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapPerfEditorSettings);
UClass* Z_Construct_UClass_USnapMapPerfEditorSettings_NoRegister()
{
	return USnapMapPerfEditorSettings::StaticClass();
}
struct Z_Construct_UClass_USnapMapPerfEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTests_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRetries_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassRetryThreshold_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningRetryThreshold_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GarbageCollectEveryNTests_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "Comment", "/** \n    Have the editor free up resources after every N tests\n    If you run a total of 2000 tests, and the specified value is 100,\n    the memory will be freed up at test number 100, 200, 300, and so on\n    */" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
		{ "ToolTip", "Have the editor free up resources after every N tests\nIf you run a total of 2000 tests, and the specified value is 100,\nthe memory will be freed up at test number 100, 200, 300, and so on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleDatabase_MetaData[] = {
		{ "Category", "Snap Config" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTestContraction_MetaData[] = {
		{ "Category", "Snap Config" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxProcessingTimeSecs_MetaData[] = {
		{ "Category", "Snap Config" },
		{ "Comment", "/** The max time allotted per test before it is considered a failure */" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
		{ "ToolTip", "The max time allotted per test before it is considered a failure" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTests;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PassRetryThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarningRetryThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GarbageCollectEveryNTests;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModuleDatabase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionTestContraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProcessingTimeSecs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapPerfEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_NumTests = { "NumTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, NumTests), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTests_MetaData), NewProp_NumTests_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxRetries = { "MaxRetries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, MaxRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRetries_MetaData), NewProp_MaxRetries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_PassRetryThreshold = { "PassRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, PassRetryThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassRetryThreshold_MetaData), NewProp_PassRetryThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_WarningRetryThreshold = { "WarningRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, WarningRetryThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningRetryThreshold_MetaData), NewProp_WarningRetryThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests = { "GarbageCollectEveryNTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, GarbageCollectEveryNTests), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GarbageCollectEveryNTests_MetaData), NewProp_GarbageCollectEveryNTests_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_ModuleDatabase = { "ModuleDatabase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, ModuleDatabase), Z_Construct_UClass_USnapMapModuleDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleDatabase_MetaData), NewProp_ModuleDatabase_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_CollisionTestContraction = { "CollisionTestContraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, CollisionTestContraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTestContraction_MetaData), NewProp_CollisionTestContraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxProcessingTimeSecs = { "MaxProcessingTimeSecs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, MaxProcessingTimeSecs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxProcessingTimeSecs_MetaData), NewProp_MaxProcessingTimeSecs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_NumTests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_PassRetryThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_WarningRetryThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_ModuleDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_CollisionTestContraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxProcessingTimeSecs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::ClassParams = {
	&USnapMapPerfEditorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapPerfEditorSettings()
{
	if (!Z_Registration_Info_UClass_USnapMapPerfEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapPerfEditorSettings.OuterSingleton, Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapPerfEditorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapPerfEditorSettings>()
{
	return USnapMapPerfEditorSettings::StaticClass();
}
USnapMapPerfEditorSettings::USnapMapPerfEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapPerfEditorSettings);
USnapMapPerfEditorSettings::~USnapMapPerfEditorSettings() {}
// End Class USnapMapPerfEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapPerfEditorSettings, USnapMapPerfEditorSettings::StaticClass, TEXT("USnapMapPerfEditorSettings"), &Z_Registration_Info_UClass_USnapMapPerfEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapPerfEditorSettings), 496286825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_197872008(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
