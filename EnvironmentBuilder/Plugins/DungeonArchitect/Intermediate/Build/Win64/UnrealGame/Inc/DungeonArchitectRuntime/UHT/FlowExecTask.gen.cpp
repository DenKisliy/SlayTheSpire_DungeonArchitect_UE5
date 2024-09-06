// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/ExecGraph/FlowExecTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowExecTask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecCloneableState();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecCloneableState_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTask_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTaskExtender();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTaskExtender_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UFlowExecTaskExtender
void UFlowExecTaskExtender::StaticRegisterNativesUFlowExecTaskExtender()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecTaskExtender);
UClass* Z_Construct_UClass_UFlowExecTaskExtender_NoRegister()
{
	return UFlowExecTaskExtender::StaticClass();
}
struct Z_Construct_UClass_UFlowExecTaskExtender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// DEPRECATED: UFlowExecTaskExtender\n" },
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecTask.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecTask.h" },
		{ "ToolTip", "DEPRECATED: UFlowExecTaskExtender" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecTaskExtender>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowExecTaskExtender_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecTaskExtender_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecTaskExtender_Statics::ClassParams = {
	&UFlowExecTaskExtender::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecTaskExtender_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecTaskExtender_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecTaskExtender()
{
	if (!Z_Registration_Info_UClass_UFlowExecTaskExtender.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecTaskExtender.OuterSingleton, Z_Construct_UClass_UFlowExecTaskExtender_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecTaskExtender.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecTaskExtender>()
{
	return UFlowExecTaskExtender::StaticClass();
}
UFlowExecTaskExtender::UFlowExecTaskExtender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecTaskExtender);
UFlowExecTaskExtender::~UFlowExecTaskExtender() {}
// End Class UFlowExecTaskExtender

// Begin Class UFlowExecTask
void UFlowExecTask::StaticRegisterNativesUFlowExecTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecTask);
UClass* Z_Construct_UClass_UFlowExecTask_NoRegister()
{
	return UFlowExecTask::StaticClass();
}
struct Z_Construct_UClass_UFlowExecTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecTask.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeVariableName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n       The variable name of the node. Use this to set the values of the node attributes in the form [NODE_NAME].[PARAMETER_NAME]\n\n       For e.g. If this node is named \"createTreasurePath\" and there's a parameter named \"pathSize\" in the node (find this name by hovering over the parameter)\n       then the parameter can be referenced like this \"createTreasurePath.pathSize\"\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecTask.h" },
		{ "ToolTip", "The variable name of the node. Use this to set the values of the node attributes in the form [NODE_NAME].[PARAMETER_NAME]\n\nFor e.g. If this node is named \"createTreasurePath\" and there's a parameter named \"pathSize\" in the node (find this name by hovering over the parameter)\nthen the parameter can be referenced like this \"createTreasurePath.pathSize\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extenders_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Extends the functionality of the tasks.  This is useful for cross domain extensions */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecTask.h" },
		{ "ToolTip", "DEPRECATED: Extends the functionality of the tasks.  This is useful for cross domain extensions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeVariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Extenders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Extenders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowExecTask_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecTask, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowExecTask_Statics::NewProp_NodeVariableName = { "NodeVariableName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecTask, NodeVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeVariableName_MetaData), NewProp_NodeVariableName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecTask_Statics::NewProp_Extenders_Inner = { "Extenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowExecTaskExtender_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowExecTask_Statics::NewProp_Extenders = { "Extenders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecTask, Extenders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extenders_MetaData), NewProp_Extenders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowExecTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecTask_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecTask_Statics::NewProp_NodeVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecTask_Statics::NewProp_Extenders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecTask_Statics::NewProp_Extenders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowExecTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecTask_Statics::ClassParams = {
	&UFlowExecTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowExecTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecTask_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecTask()
{
	if (!Z_Registration_Info_UClass_UFlowExecTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecTask.OuterSingleton, Z_Construct_UClass_UFlowExecTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecTask.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecTask>()
{
	return UFlowExecTask::StaticClass();
}
UFlowExecTask::UFlowExecTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecTask);
UFlowExecTask::~UFlowExecTask() {}
// End Class UFlowExecTask

// Begin Interface UFlowExecCloneableState
void UFlowExecCloneableState::StaticRegisterNativesUFlowExecCloneableState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecCloneableState);
UClass* Z_Construct_UClass_UFlowExecCloneableState_NoRegister()
{
	return UFlowExecCloneableState::StaticClass();
}
struct Z_Construct_UClass_UFlowExecCloneableState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFlowExecCloneableState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowExecCloneableState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecCloneableState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecCloneableState_Statics::ClassParams = {
	&UFlowExecCloneableState::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecCloneableState_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecCloneableState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecCloneableState()
{
	if (!Z_Registration_Info_UClass_UFlowExecCloneableState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecCloneableState.OuterSingleton, Z_Construct_UClass_UFlowExecCloneableState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecCloneableState.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecCloneableState>()
{
	return UFlowExecCloneableState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecCloneableState);
UFlowExecCloneableState::~UFlowExecCloneableState() {}
// End Interface UFlowExecCloneableState

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowExecTaskExtender, UFlowExecTaskExtender::StaticClass, TEXT("UFlowExecTaskExtender"), &Z_Registration_Info_UClass_UFlowExecTaskExtender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecTaskExtender), 562071510U) },
		{ Z_Construct_UClass_UFlowExecTask, UFlowExecTask::StaticClass, TEXT("UFlowExecTask"), &Z_Registration_Info_UClass_UFlowExecTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecTask), 1813568400U) },
		{ Z_Construct_UClass_UFlowExecCloneableState, UFlowExecCloneableState::StaticClass, TEXT("UFlowExecCloneableState"), &Z_Registration_Info_UClass_UFlowExecCloneableState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecCloneableState), 3774609617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecTask_h_381352031(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
