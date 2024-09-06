// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowExecEdGraphNodes() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Result();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Result_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Task();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Task_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNodeBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowExecEdGraphNode_Task
void UFlowExecEdGraphNode_Task::StaticRegisterNativesUFlowExecEdGraphNode_Task()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecEdGraphNode_Task);
UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Task_NoRegister()
{
	return UFlowExecEdGraphNode_Task::StaticClass();
}
struct Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecEdGraphNode_Task>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::NewProp_TaskTemplate = { "TaskTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecEdGraphNode_Task, TaskTemplate), Z_Construct_UClass_UFlowExecTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskTemplate_MetaData), NewProp_TaskTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::NewProp_TaskTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowExecEdGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::ClassParams = {
	&UFlowExecEdGraphNode_Task::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Task()
{
	if (!Z_Registration_Info_UClass_UFlowExecEdGraphNode_Task.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecEdGraphNode_Task.OuterSingleton, Z_Construct_UClass_UFlowExecEdGraphNode_Task_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecEdGraphNode_Task.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowExecEdGraphNode_Task>()
{
	return UFlowExecEdGraphNode_Task::StaticClass();
}
UFlowExecEdGraphNode_Task::UFlowExecEdGraphNode_Task(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecEdGraphNode_Task);
UFlowExecEdGraphNode_Task::~UFlowExecEdGraphNode_Task() {}
// End Class UFlowExecEdGraphNode_Task

// Begin Class UFlowExecEdGraphNode_Result
void UFlowExecEdGraphNode_Result::StaticRegisterNativesUFlowExecEdGraphNode_Result()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecEdGraphNode_Result);
UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Result_NoRegister()
{
	return UFlowExecEdGraphNode_Result::StaticClass();
}
struct Z_Construct_UClass_UFlowExecEdGraphNode_Result_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/FlowExecEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecEdGraphNode_Result>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowExecEdGraphNode_Result_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowExecEdGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNode_Result_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecEdGraphNode_Result_Statics::ClassParams = {
	&UFlowExecEdGraphNode_Result::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraphNode_Result_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecEdGraphNode_Result_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Result()
{
	if (!Z_Registration_Info_UClass_UFlowExecEdGraphNode_Result.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecEdGraphNode_Result.OuterSingleton, Z_Construct_UClass_UFlowExecEdGraphNode_Result_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecEdGraphNode_Result.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowExecEdGraphNode_Result>()
{
	return UFlowExecEdGraphNode_Result::StaticClass();
}
UFlowExecEdGraphNode_Result::UFlowExecEdGraphNode_Result(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecEdGraphNode_Result);
UFlowExecEdGraphNode_Result::~UFlowExecEdGraphNode_Result() {}
// End Class UFlowExecEdGraphNode_Result

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowExecEdGraphNode_Task, UFlowExecEdGraphNode_Task::StaticClass, TEXT("UFlowExecEdGraphNode_Task"), &Z_Registration_Info_UClass_UFlowExecEdGraphNode_Task, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecEdGraphNode_Task), 2738223778U) },
		{ Z_Construct_UClass_UFlowExecEdGraphNode_Result, UFlowExecEdGraphNode_Result::StaticClass, TEXT("UFlowExecEdGraphNode_Result"), &Z_Registration_Info_UClass_UFlowExecEdGraphNode_Result, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecEdGraphNode_Result), 468069299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodes_h_3279339460(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_FlowExecEdGraphNodes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
