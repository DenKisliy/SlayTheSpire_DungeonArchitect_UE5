// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskCreateGrid() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowLayoutTaskCreateGrid
void UGridFlowLayoutTaskCreateGrid::StaticRegisterNativesUGridFlowLayoutTaskCreateGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskCreateGrid);
UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_NoRegister()
{
	return UGridFlowLayoutTaskCreateGrid::StaticClass();
}
struct Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h" },
		{ "MenuPriority", "1000" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h" },
		{ "Title", "Create Grid" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Create a grid to work with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Create Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n    The size of the initial layout grid \n\n    Variable Name: GridSize\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the initial layout grid\n\nVariable Name: GridSize" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskCreateGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreateGrid, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::ClassParams = {
	&UGridFlowLayoutTaskCreateGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid()
{
	if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskCreateGrid>()
{
	return UGridFlowLayoutTaskCreateGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskCreateGrid);
UGridFlowLayoutTaskCreateGrid::~UGridFlowLayoutTaskCreateGrid() {}
// End Class UGridFlowLayoutTaskCreateGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid, UGridFlowLayoutTaskCreateGrid::StaticClass, TEXT("UGridFlowLayoutTaskCreateGrid"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskCreateGrid), 3272779071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_2807690514(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
