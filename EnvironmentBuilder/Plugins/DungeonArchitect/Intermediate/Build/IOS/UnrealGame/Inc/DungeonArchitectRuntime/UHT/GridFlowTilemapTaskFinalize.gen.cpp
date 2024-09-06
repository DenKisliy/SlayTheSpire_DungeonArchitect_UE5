// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskFinalize() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowTilemapTaskFinalize
void UGridFlowTilemapTaskFinalize::StaticRegisterNativesUGridFlowTilemapTaskFinalize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskFinalize);
UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize_NoRegister()
{
	return UGridFlowTilemapTaskFinalize::StaticClass();
}
struct Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h" },
		{ "MenuPriority", "2600" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h" },
		{ "TilemapTask", "" },
		{ "Title", "Finalize Tilemap" },
		{ "Tooltip", "Finalize Tilemap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugUnwalkableCells_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n        Debug: Show tiles that are not reachable due to overlays blocking them\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h" },
		{ "ToolTip", "Debug: Show tiles that are not reachable due to overlays blocking them\n\nVariable Name: [N/A]" },
	};
#endif // WITH_METADATA
	static void NewProp_bDebugUnwalkableCells_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugUnwalkableCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskFinalize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells_SetBit(void* Obj)
{
	((UGridFlowTilemapTaskFinalize*)Obj)->bDebugUnwalkableCells = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells = { "bDebugUnwalkableCells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowTilemapTaskFinalize), &Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugUnwalkableCells_MetaData), NewProp_bDebugUnwalkableCells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::ClassParams = {
	&UGridFlowTilemapTaskFinalize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize()
{
	if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskFinalize>()
{
	return UGridFlowTilemapTaskFinalize::StaticClass();
}
UGridFlowTilemapTaskFinalize::UGridFlowTilemapTaskFinalize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskFinalize);
UGridFlowTilemapTaskFinalize::~UGridFlowTilemapTaskFinalize() {}
// End Class UGridFlowTilemapTaskFinalize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskFinalize, UGridFlowTilemapTaskFinalize::StaticClass, TEXT("UGridFlowTilemapTaskFinalize"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskFinalize), 3789933553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_1618074226(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
