// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutTaskFinalize() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskFinalize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskFinalize_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UCellFlowLayoutTaskFinalize
void UCellFlowLayoutTaskFinalize::StaticRegisterNativesUCellFlowLayoutTaskFinalize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowLayoutTaskFinalize);
UClass* Z_Construct_UClass_UCellFlowLayoutTaskFinalize_NoRegister()
{
	return UCellFlowLayoutTaskFinalize::StaticClass();
}
struct Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
		{ "MenuPriority", "1500" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
		{ "Title", "Finalize Graph" },
		{ "Tooltip", "Call this to finalize the layout graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbHeight_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightResolveIterations_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairResolveIterations_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSeparationIterations_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSeparationDistance_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEdgeSeparationSensitivity_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnItemSeparationSensitivity_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugFlagCrossFlip_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugStairPlacement_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskFinalize.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClimbHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightResolveIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StairResolveIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnSeparationIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnSeparationDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnEdgeSeparationSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnItemSeparationSensitivity;
	static void NewProp_bDebugFlagCrossFlip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugFlagCrossFlip;
	static void NewProp_bDebugStairPlacement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugStairPlacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowLayoutTaskFinalize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, MinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeight_MetaData), NewProp_MinHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_MaxClimbHeight = { "MaxClimbHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, MaxClimbHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClimbHeight_MetaData), NewProp_MaxClimbHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_HeightResolveIterations = { "HeightResolveIterations", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, HeightResolveIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightResolveIterations_MetaData), NewProp_HeightResolveIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_StairResolveIterations = { "StairResolveIterations", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, StairResolveIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairResolveIterations_MetaData), NewProp_StairResolveIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnSeparationIterations = { "SpawnSeparationIterations", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, SpawnSeparationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSeparationIterations_MetaData), NewProp_SpawnSeparationIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnSeparationDistance = { "SpawnSeparationDistance", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, SpawnSeparationDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSeparationDistance_MetaData), NewProp_SpawnSeparationDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnEdgeSeparationSensitivity = { "SpawnEdgeSeparationSensitivity", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, SpawnEdgeSeparationSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEdgeSeparationSensitivity_MetaData), NewProp_SpawnEdgeSeparationSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnItemSeparationSensitivity = { "SpawnItemSeparationSensitivity", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskFinalize, SpawnItemSeparationSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnItemSeparationSensitivity_MetaData), NewProp_SpawnItemSeparationSensitivity_MetaData) };
void Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugFlagCrossFlip_SetBit(void* Obj)
{
	((UCellFlowLayoutTaskFinalize*)Obj)->bDebugFlagCrossFlip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugFlagCrossFlip = { "bDebugFlagCrossFlip", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCellFlowLayoutTaskFinalize), &Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugFlagCrossFlip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugFlagCrossFlip_MetaData), NewProp_bDebugFlagCrossFlip_MetaData) };
void Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugStairPlacement_SetBit(void* Obj)
{
	((UCellFlowLayoutTaskFinalize*)Obj)->bDebugStairPlacement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugStairPlacement = { "bDebugStairPlacement", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCellFlowLayoutTaskFinalize), &Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugStairPlacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugStairPlacement_MetaData), NewProp_bDebugStairPlacement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_MinHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_MaxClimbHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_HeightResolveIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_StairResolveIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnSeparationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnSeparationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnEdgeSeparationSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_SpawnItemSeparationSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugFlagCrossFlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::NewProp_bDebugStairPlacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskFinalize,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::ClassParams = {
	&UCellFlowLayoutTaskFinalize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowLayoutTaskFinalize()
{
	if (!Z_Registration_Info_UClass_UCellFlowLayoutTaskFinalize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowLayoutTaskFinalize.OuterSingleton, Z_Construct_UClass_UCellFlowLayoutTaskFinalize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowLayoutTaskFinalize.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowLayoutTaskFinalize>()
{
	return UCellFlowLayoutTaskFinalize::StaticClass();
}
UCellFlowLayoutTaskFinalize::UCellFlowLayoutTaskFinalize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowLayoutTaskFinalize);
UCellFlowLayoutTaskFinalize::~UCellFlowLayoutTaskFinalize() {}
// End Class UCellFlowLayoutTaskFinalize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskFinalize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowLayoutTaskFinalize, UCellFlowLayoutTaskFinalize::StaticClass, TEXT("UCellFlowLayoutTaskFinalize"), &Z_Registration_Info_UClass_UCellFlowLayoutTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowLayoutTaskFinalize), 2511843404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskFinalize_h_847246669(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskFinalize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
