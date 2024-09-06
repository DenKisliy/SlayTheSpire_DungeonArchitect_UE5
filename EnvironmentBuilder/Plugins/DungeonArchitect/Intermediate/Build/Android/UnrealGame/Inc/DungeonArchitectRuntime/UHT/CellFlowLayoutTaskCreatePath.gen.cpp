// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreatePath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutTaskCreatePath() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreatePath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UCellFlowLayoutTaskCreatePath
void UCellFlowLayoutTaskCreatePath::StaticRegisterNativesUCellFlowLayoutTaskCreatePath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowLayoutTaskCreatePath);
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_NoRegister()
{
	return UCellFlowLayoutTaskCreatePath::StaticClass();
}
struct Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreatePath.h" },
		{ "MenuPriority", "1200" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreatePath.h" },
		{ "Title", "Create Path" },
		{ "Tooltip", "Create a path on an existing network" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowLayoutTaskCreatePath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_Statics::ClassParams = {
	&UCellFlowLayoutTaskCreatePath::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreatePath()
{
	if (!Z_Registration_Info_UClass_UCellFlowLayoutTaskCreatePath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowLayoutTaskCreatePath.OuterSingleton, Z_Construct_UClass_UCellFlowLayoutTaskCreatePath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowLayoutTaskCreatePath.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowLayoutTaskCreatePath>()
{
	return UCellFlowLayoutTaskCreatePath::StaticClass();
}
UCellFlowLayoutTaskCreatePath::UCellFlowLayoutTaskCreatePath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowLayoutTaskCreatePath);
UCellFlowLayoutTaskCreatePath::~UCellFlowLayoutTaskCreatePath() {}
// End Class UCellFlowLayoutTaskCreatePath

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreatePath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowLayoutTaskCreatePath, UCellFlowLayoutTaskCreatePath::StaticClass, TEXT("UCellFlowLayoutTaskCreatePath"), &Z_Registration_Info_UClass_UCellFlowLayoutTaskCreatePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowLayoutTaskCreatePath), 3662416628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreatePath_h_1317589643(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreatePath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreatePath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
