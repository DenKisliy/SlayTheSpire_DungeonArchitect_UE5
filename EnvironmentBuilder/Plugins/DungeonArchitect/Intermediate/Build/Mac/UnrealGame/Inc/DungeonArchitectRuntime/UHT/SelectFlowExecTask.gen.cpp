// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/ExecGraph/Tasks/SelectFlowExecTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectFlowExecTask() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USelectFlowExecTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USelectFlowExecTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USelectFlowExecTask
void USelectFlowExecTask::StaticRegisterNativesUSelectFlowExecTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectFlowExecTask);
UClass* Z_Construct_UClass_USelectFlowExecTask_NoRegister()
{
	return USelectFlowExecTask::StaticClass();
}
struct Z_Construct_UClass_USelectFlowExecTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/Tasks/SelectFlowExecTask.h" },
		{ "MenuPriority", "0" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Tasks/SelectFlowExecTask.h" },
		{ "Title", "Select Branch" },
		{ "Tooltip", "Select one of the incoming branches" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectFlowExecTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USelectFlowExecTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowExecTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectFlowExecTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectFlowExecTask_Statics::ClassParams = {
	&USelectFlowExecTask::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectFlowExecTask_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectFlowExecTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelectFlowExecTask()
{
	if (!Z_Registration_Info_UClass_USelectFlowExecTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectFlowExecTask.OuterSingleton, Z_Construct_UClass_USelectFlowExecTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelectFlowExecTask.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USelectFlowExecTask>()
{
	return USelectFlowExecTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelectFlowExecTask);
USelectFlowExecTask::~USelectFlowExecTask() {}
// End Class USelectFlowExecTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_Tasks_SelectFlowExecTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelectFlowExecTask, USelectFlowExecTask::StaticClass, TEXT("USelectFlowExecTask"), &Z_Registration_Info_UClass_USelectFlowExecTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectFlowExecTask), 191392463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_Tasks_SelectFlowExecTask_h_1144918311(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_Tasks_SelectFlowExecTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_Tasks_SelectFlowExecTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
