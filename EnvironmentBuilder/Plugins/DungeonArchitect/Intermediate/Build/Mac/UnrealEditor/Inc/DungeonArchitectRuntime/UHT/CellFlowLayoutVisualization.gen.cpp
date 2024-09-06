// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutVisualization() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ACellFlowLayoutVisualization();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ACellFlowLayoutVisualization_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ACellFlowLevelMeshGrid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ACellFlowLevelMeshGrid_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDASceneDebugDataComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ACellFlowLevelMeshGrid
void ACellFlowLevelMeshGrid::StaticRegisterNativesACellFlowLevelMeshGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACellFlowLevelMeshGrid);
UClass* Z_Construct_UClass_ACellFlowLevelMeshGrid_NoRegister()
{
	return ACellFlowLevelMeshGrid::StaticClass();
}
struct Z_Construct_UClass_ACellFlowLevelMeshGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACellFlowLevelMeshGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACellFlowLevelMeshGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowLevelMeshGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACellFlowLevelMeshGrid_Statics::ClassParams = {
	&ACellFlowLevelMeshGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowLevelMeshGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_ACellFlowLevelMeshGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACellFlowLevelMeshGrid()
{
	if (!Z_Registration_Info_UClass_ACellFlowLevelMeshGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACellFlowLevelMeshGrid.OuterSingleton, Z_Construct_UClass_ACellFlowLevelMeshGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACellFlowLevelMeshGrid.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ACellFlowLevelMeshGrid>()
{
	return ACellFlowLevelMeshGrid::StaticClass();
}
ACellFlowLevelMeshGrid::ACellFlowLevelMeshGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACellFlowLevelMeshGrid);
ACellFlowLevelMeshGrid::~ACellFlowLevelMeshGrid() {}
// End Class ACellFlowLevelMeshGrid

// Begin Class ACellFlowLayoutVisualization
void ACellFlowLayoutVisualization::StaticRegisterNativesACellFlowLayoutVisualization()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACellFlowLayoutVisualization);
UClass* Z_Construct_UClass_ACellFlowLayoutVisualization_NoRegister()
{
	return ACellFlowLayoutVisualization::StaticClass();
}
struct Z_Construct_UClass_ACellFlowLayoutVisualization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadSurfaceComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiSurfaceComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/CellFlowLayoutVisualization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuadSurfaceComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoronoiSurfaceComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACellFlowLayoutVisualization>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_DungeonID = { "DungeonID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowLayoutVisualization, DungeonID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonID_MetaData), NewProp_DungeonID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowLayoutVisualization, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_DebugData = { "DebugData", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowLayoutVisualization, DebugData), Z_Construct_UClass_UDASceneDebugDataComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugData_MetaData), NewProp_DebugData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_QuadSurfaceComponent = { "QuadSurfaceComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowLayoutVisualization, QuadSurfaceComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadSurfaceComponent_MetaData), NewProp_QuadSurfaceComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_VoronoiSurfaceComponent = { "VoronoiSurfaceComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowLayoutVisualization, VoronoiSurfaceComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoronoiSurfaceComponent_MetaData), NewProp_VoronoiSurfaceComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_LineComponent = { "LineComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowLayoutVisualization, LineComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineComponent_MetaData), NewProp_LineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_DungeonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_DebugData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_QuadSurfaceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_VoronoiSurfaceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::NewProp_LineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::ClassParams = {
	&ACellFlowLayoutVisualization::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::Class_MetaDataParams), Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACellFlowLayoutVisualization()
{
	if (!Z_Registration_Info_UClass_ACellFlowLayoutVisualization.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACellFlowLayoutVisualization.OuterSingleton, Z_Construct_UClass_ACellFlowLayoutVisualization_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACellFlowLayoutVisualization.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ACellFlowLayoutVisualization>()
{
	return ACellFlowLayoutVisualization::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACellFlowLayoutVisualization);
ACellFlowLayoutVisualization::~ACellFlowLayoutVisualization() {}
// End Class ACellFlowLayoutVisualization

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_CellFlowLayoutVisualization_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACellFlowLevelMeshGrid, ACellFlowLevelMeshGrid::StaticClass, TEXT("ACellFlowLevelMeshGrid"), &Z_Registration_Info_UClass_ACellFlowLevelMeshGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACellFlowLevelMeshGrid), 295983263U) },
		{ Z_Construct_UClass_ACellFlowLayoutVisualization, ACellFlowLayoutVisualization::StaticClass, TEXT("ACellFlowLayoutVisualization"), &Z_Registration_Info_UClass_ACellFlowLayoutVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACellFlowLayoutVisualization), 82704570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_CellFlowLayoutVisualization_h_1355758192(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_CellFlowLayoutVisualization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_CellFlowLayoutVisualization_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
