// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutTaskCreateCellsBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UCellFlowLayoutTaskCreateCellsBase
void UCellFlowLayoutTaskCreateCellsBase::StaticRegisterNativesUCellFlowLayoutTaskCreateCellsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowLayoutTaskCreateCellsBase);
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_NoRegister()
{
	return UCellFlowLayoutTaskCreateCellsBase::StaticClass();
}
struct Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsBase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinGroupArea_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinGroupArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowLayoutTaskCreateCellsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsBase, WorldSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSize_MetaData), NewProp_WorldSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::NewProp_MinGroupArea = { "MinGroupArea", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsBase, MinGroupArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinGroupArea_MetaData), NewProp_MinGroupArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::NewProp_WorldSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::NewProp_MinGroupArea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::ClassParams = {
	&UCellFlowLayoutTaskCreateCellsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase()
{
	if (!Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsBase.OuterSingleton, Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowLayoutTaskCreateCellsBase>()
{
	return UCellFlowLayoutTaskCreateCellsBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowLayoutTaskCreateCellsBase);
UCellFlowLayoutTaskCreateCellsBase::~UCellFlowLayoutTaskCreateCellsBase() {}
// End Class UCellFlowLayoutTaskCreateCellsBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase, UCellFlowLayoutTaskCreateCellsBase::StaticClass, TEXT("UCellFlowLayoutTaskCreateCellsBase"), &Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowLayoutTaskCreateCellsBase), 3201663969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsBase_h_41195963(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
