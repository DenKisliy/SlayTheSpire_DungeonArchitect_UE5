// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/Stair/GridDungeonStairGeneratorV2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonStairGeneratorV2() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridDungeonBuilderStairGeneratorV2
void UGridDungeonBuilderStairGeneratorV2::StaticRegisterNativesUGridDungeonBuilderStairGeneratorV2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonBuilderStairGeneratorV2);
UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_NoRegister()
{
	return UGridDungeonBuilderStairGeneratorV2::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Stair Generator V2" },
		{ "IncludePath", "Builders/Grid/Stair/GridDungeonStairGeneratorV2.h" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGeneratorV2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidStairsInsideRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Having stairs inside rooms would mis-align the room walls. Check this flag if you don't want it */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGeneratorV2.h" },
		{ "ToolTip", "Having stairs inside rooms would mis-align the room walls. Check this flag if you don't want it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidSingleCellStairDeadEnds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Having stairs inside rooms would mis-align the room walls. Check this flag if you don't want it */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGeneratorV2.h" },
		{ "ToolTip", "Having stairs inside rooms would mis-align the room walls. Check this flag if you don't want it" },
	};
#endif // WITH_METADATA
	static void NewProp_bAvoidStairsInsideRooms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidStairsInsideRooms;
	static void NewProp_bAvoidSingleCellStairDeadEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidSingleCellStairDeadEnds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonBuilderStairGeneratorV2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidStairsInsideRooms_SetBit(void* Obj)
{
	((UGridDungeonBuilderStairGeneratorV2*)Obj)->bAvoidStairsInsideRooms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidStairsInsideRooms = { "bAvoidStairsInsideRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridDungeonBuilderStairGeneratorV2), &Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidStairsInsideRooms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidStairsInsideRooms_MetaData), NewProp_bAvoidStairsInsideRooms_MetaData) };
void Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidSingleCellStairDeadEnds_SetBit(void* Obj)
{
	((UGridDungeonBuilderStairGeneratorV2*)Obj)->bAvoidSingleCellStairDeadEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidSingleCellStairDeadEnds = { "bAvoidSingleCellStairDeadEnds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridDungeonBuilderStairGeneratorV2), &Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidSingleCellStairDeadEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidSingleCellStairDeadEnds_MetaData), NewProp_bAvoidSingleCellStairDeadEnds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidStairsInsideRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::NewProp_bAvoidSingleCellStairDeadEnds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::ClassParams = {
	&UGridDungeonBuilderStairGeneratorV2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2()
{
	if (!Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorV2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorV2.OuterSingleton, Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorV2.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonBuilderStairGeneratorV2>()
{
	return UGridDungeonBuilderStairGeneratorV2::StaticClass();
}
UGridDungeonBuilderStairGeneratorV2::UGridDungeonBuilderStairGeneratorV2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonBuilderStairGeneratorV2);
UGridDungeonBuilderStairGeneratorV2::~UGridDungeonBuilderStairGeneratorV2() {}
// End Class UGridDungeonBuilderStairGeneratorV2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorV2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonBuilderStairGeneratorV2, UGridDungeonBuilderStairGeneratorV2::StaticClass, TEXT("UGridDungeonBuilderStairGeneratorV2"), &Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorV2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonBuilderStairGeneratorV2), 2788651190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorV2_h_905815621(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorV2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorV2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
