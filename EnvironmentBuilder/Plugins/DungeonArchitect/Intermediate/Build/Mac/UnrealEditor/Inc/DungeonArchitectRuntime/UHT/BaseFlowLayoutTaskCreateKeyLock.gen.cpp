// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskCreateKeyLock() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UBaseFlowLayoutTaskCreateKeyLock
void UBaseFlowLayoutTaskCreateKeyLock::StaticRegisterNativesUBaseFlowLayoutTaskCreateKeyLock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskCreateKeyLock);
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_NoRegister()
{
	return UBaseFlowLayoutTaskCreateKeyLock::StaticClass();
}
struct Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPath_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The path where the key resides\n\n        Variable Name: KeyPath\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The path where the key resides\n\nVariable Name: KeyPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockPath_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The path where the lock resides\n\n        Variable Name: LockPath\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The path where the lock resides\n\nVariable Name: LockPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyMarkerName_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The Key marker name.  Create this marker in the theme file and add your key asset\n\n        Variable Name: KeyMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The Key marker name.  Create this marker in the theme file and add your key asset\n\nVariable Name: KeyMarkerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockMarkerName_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The Lock marker name.  Create this marker in the theme file and add your locked door asset\n\n        Variable Name: LockMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The Lock marker name.  Create this marker in the theme file and add your locked door asset\n\nVariable Name: LockMarkerName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LockPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyMarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LockMarkerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskCreateKeyLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyPath = { "KeyPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, KeyPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPath_MetaData), NewProp_KeyPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockPath = { "LockPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, LockPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockPath_MetaData), NewProp_LockPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyMarkerName = { "KeyMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, KeyMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyMarkerName_MetaData), NewProp_KeyMarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockMarkerName = { "LockMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, LockMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockMarkerName_MetaData), NewProp_LockMarkerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockMarkerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::ClassParams = {
	&UBaseFlowLayoutTaskCreateKeyLock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock()
{
	if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskCreateKeyLock>()
{
	return UBaseFlowLayoutTaskCreateKeyLock::StaticClass();
}
UBaseFlowLayoutTaskCreateKeyLock::UBaseFlowLayoutTaskCreateKeyLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskCreateKeyLock);
UBaseFlowLayoutTaskCreateKeyLock::~UBaseFlowLayoutTaskCreateKeyLock() {}
// End Class UBaseFlowLayoutTaskCreateKeyLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock, UBaseFlowLayoutTaskCreateKeyLock::StaticClass, TEXT("UBaseFlowLayoutTaskCreateKeyLock"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskCreateKeyLock), 3536672443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_3616554195(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
