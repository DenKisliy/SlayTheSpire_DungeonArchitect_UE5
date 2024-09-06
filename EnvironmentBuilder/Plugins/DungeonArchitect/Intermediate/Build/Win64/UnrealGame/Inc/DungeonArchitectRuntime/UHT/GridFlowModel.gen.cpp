// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridFlow/GridFlowModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowModel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemap_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FGridFlowTilemapBuildSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup;
class UScriptStruct* FGridFlowTilemapBuildSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridFlowTilemapBuildSetup"));
	}
	return Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridFlowTilemapBuildSetup>()
{
	return FGridFlowTilemapBuildSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilemapOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWallsAsEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilesPerLayoutNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapOffset;
	static void NewProp_bWallsAsEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallsAsEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilesPerLayoutNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridFlowTilemapBuildSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_TilemapOffset = { "TilemapOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridFlowTilemapBuildSetup, TilemapOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilemapOffset_MetaData), NewProp_TilemapOffset_MetaData) };
void Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_bWallsAsEdges_SetBit(void* Obj)
{
	((FGridFlowTilemapBuildSetup*)Obj)->bWallsAsEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_bWallsAsEdges = { "bWallsAsEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGridFlowTilemapBuildSetup), &Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_bWallsAsEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWallsAsEdges_MetaData), NewProp_bWallsAsEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_TilesPerLayoutNode = { "TilesPerLayoutNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridFlowTilemapBuildSetup, TilesPerLayoutNode), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilesPerLayoutNode_MetaData), NewProp_TilesPerLayoutNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_LayoutPadding = { "LayoutPadding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridFlowTilemapBuildSetup, LayoutPadding), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutPadding_MetaData), NewProp_LayoutPadding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_TilemapOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_bWallsAsEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_TilesPerLayoutNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewProp_LayoutPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridFlowTilemapBuildSetup",
	Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::PropPointers),
	sizeof(FGridFlowTilemapBuildSetup),
	alignof(FGridFlowTilemapBuildSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup.InnerSingleton, Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup.InnerSingleton;
}
// End ScriptStruct FGridFlowTilemapBuildSetup

// Begin Class UGridFlowModel
void UGridFlowModel::StaticRegisterNativesUGridFlowModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowModel);
UClass* Z_Construct_UClass_UGridFlowModel_NoRegister()
{
	return UGridFlowModel::StaticClass();
}
struct Z_Construct_UClass_UGridFlowModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/GridFlow/GridFlowModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbstractGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tilemap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilemapBuildSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbstractGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tilemap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapBuildSetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowModel_Statics::NewProp_AbstractGraph = { "AbstractGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowModel, AbstractGraph), Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbstractGraph_MetaData), NewProp_AbstractGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowModel_Statics::NewProp_Tilemap = { "Tilemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowModel, Tilemap), Z_Construct_UClass_UGridFlowTilemap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tilemap_MetaData), NewProp_Tilemap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowModel_Statics::NewProp_TilemapBuildSetup = { "TilemapBuildSetup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowModel, TilemapBuildSetup), Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilemapBuildSetup_MetaData), NewProp_TilemapBuildSetup_MetaData) }; // 1801818957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowModel_Statics::NewProp_AbstractGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowModel_Statics::NewProp_Tilemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowModel_Statics::NewProp_TilemapBuildSetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowModel_Statics::ClassParams = {
	&UGridFlowModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowModel()
{
	if (!Z_Registration_Info_UClass_UGridFlowModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowModel.OuterSingleton, Z_Construct_UClass_UGridFlowModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowModel>()
{
	return UGridFlowModel::StaticClass();
}
UGridFlowModel::UGridFlowModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowModel);
UGridFlowModel::~UGridFlowModel() {}
// End Class UGridFlowModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridFlowTilemapBuildSetup::StaticStruct, Z_Construct_UScriptStruct_FGridFlowTilemapBuildSetup_Statics::NewStructOps, TEXT("GridFlowTilemapBuildSetup"), &Z_Registration_Info_UScriptStruct_GridFlowTilemapBuildSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridFlowTilemapBuildSetup), 1801818957U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowModel, UGridFlowModel::StaticClass, TEXT("UGridFlowModel"), &Z_Registration_Info_UClass_UGridFlowModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowModel), 3142098379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_2026898398(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
