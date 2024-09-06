// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateKeyLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutTaskCreateKeyLock() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UCellFlowLayoutTaskCreateKeyLock
void UCellFlowLayoutTaskCreateKeyLock::StaticRegisterNativesUCellFlowLayoutTaskCreateKeyLock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowLayoutTaskCreateKeyLock);
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_NoRegister()
{
	return UCellFlowLayoutTaskCreateKeyLock::StaticClass();
}
struct Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateKeyLock.h" },
		{ "MenuPriority", "1400" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateKeyLock.h" },
		{ "Title", "Create Key/Lock" },
		{ "Tooltip", "Creates a Key/Lock along a path" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowLayoutTaskCreateKeyLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_Statics::ClassParams = {
	&UCellFlowLayoutTaskCreateKeyLock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock()
{
	if (!Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateKeyLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateKeyLock.OuterSingleton, Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateKeyLock.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowLayoutTaskCreateKeyLock>()
{
	return UCellFlowLayoutTaskCreateKeyLock::StaticClass();
}
UCellFlowLayoutTaskCreateKeyLock::UCellFlowLayoutTaskCreateKeyLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowLayoutTaskCreateKeyLock);
UCellFlowLayoutTaskCreateKeyLock::~UCellFlowLayoutTaskCreateKeyLock() {}
// End Class UCellFlowLayoutTaskCreateKeyLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateKeyLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowLayoutTaskCreateKeyLock, UCellFlowLayoutTaskCreateKeyLock::StaticClass, TEXT("UCellFlowLayoutTaskCreateKeyLock"), &Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateKeyLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowLayoutTaskCreateKeyLock), 1639044025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateKeyLock_h_1211694910(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateKeyLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateKeyLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
