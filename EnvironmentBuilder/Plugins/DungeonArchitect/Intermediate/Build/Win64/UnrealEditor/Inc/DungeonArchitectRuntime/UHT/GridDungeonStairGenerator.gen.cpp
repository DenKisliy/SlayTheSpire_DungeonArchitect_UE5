// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/Stair/GridDungeonStairGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonStairGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridDungeonBuilderStairGeneratorBase
void UGridDungeonBuilderStairGeneratorBase::StaticRegisterNativesUGridDungeonBuilderStairGeneratorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonBuilderStairGeneratorBase);
UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_NoRegister()
{
	return UGridDungeonBuilderStairGeneratorBase::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Grid/Stair/GridDungeonStairGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedStairHeight_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  The number of logical floor units the dungeon height can vary. This determines how high the dungeon's height\n\x09  can vary (e.g. max 2 floors high).   Set this value depending on the stair meshes you designer has created. \n\x09  For e.g.,  if there are two stair meshes, one 200 units high (1 floor) and another 400 units high (2 floors), this value should be set to 2\n\x09  If you do not want any stairs / height variations, set this value to 0\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of logical floor units the dungeon height can vary. This determines how high the dungeon's height\ncan vary (e.g. max 2 floors high).   Set this value depending on the stair meshes you designer has created.\nFor e.g.,  if there are two stair meshes, one 200 units high (1 floor) and another 400 units high (2 floors), this value should be set to 2\nIf you do not want any stairs / height variations, set this value to 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightVariationProbability_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  weak this value to increase / reduce the height variations (and stairs) in your dungeon.\n\x09  A value close to 0 reduces the height variation and increases as you approach 1. \n\x09  Increasing this value to a higher level might create dungeons with no place for\n\x09  proper stair placement since there is too much height variation.   \n\x09  A value of 0.2 to 0.4 seems good\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "weak this value to increase / reduce the height variations (and stairs) in your dungeon.\nA value close to 0 reduces the height variation and increases as you approach 1.\nIncreasing this value to a higher level might create dungeons with no place for\nproper stair placement since there is too much height variation.\nA value of 0.2 to 0.4 seems good" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairConnectionTolerance_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09  The generator would add stairs to make different areas of the dungeon accessible.\n\x09  However, we do not want too many stairs. For e.g., before adding a stair in a \n\x09  particular elevated area, the generator would check if this area is already \n\x09  accessible from a nearby stair. If so, it would not add it.   \n\x09  This tolerance parameter determines how far to look for an existing path\n\x09  before we can add a stair.   Play with this parameter if you see too\n\x09  many stairs close to each other, or too few\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The generator would add stairs to make different areas of the dungeon accessible.\nHowever, we do not want too many stairs. For e.g., before adding a stair in a\nparticular elevated area, the generator would check if this area is already\naccessible from a nearby stair. If so, it would not add it.\nThis tolerance parameter determines how far to look for an existing path\nbefore we can add a stair.   Play with this parameter if you see too\nmany stairs close to each other, or too few" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedStairHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightVariationProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StairConnectionTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonBuilderStairGeneratorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::NewProp_MaxAllowedStairHeight = { "MaxAllowedStairHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonBuilderStairGeneratorBase, MaxAllowedStairHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedStairHeight_MetaData), NewProp_MaxAllowedStairHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::NewProp_HeightVariationProbability = { "HeightVariationProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonBuilderStairGeneratorBase, HeightVariationProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightVariationProbability_MetaData), NewProp_HeightVariationProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::NewProp_StairConnectionTolerance = { "StairConnectionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridDungeonBuilderStairGeneratorBase, StairConnectionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairConnectionTolerance_MetaData), NewProp_StairConnectionTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::NewProp_MaxAllowedStairHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::NewProp_HeightVariationProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::NewProp_StairConnectionTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::ClassParams = {
	&UGridDungeonBuilderStairGeneratorBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::PropPointers),
	0,
	0x043010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase()
{
	if (!Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorBase.OuterSingleton, Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonBuilderStairGeneratorBase>()
{
	return UGridDungeonBuilderStairGeneratorBase::StaticClass();
}
UGridDungeonBuilderStairGeneratorBase::UGridDungeonBuilderStairGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonBuilderStairGeneratorBase);
UGridDungeonBuilderStairGeneratorBase::~UGridDungeonBuilderStairGeneratorBase() {}
// End Class UGridDungeonBuilderStairGeneratorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase, UGridDungeonBuilderStairGeneratorBase::StaticClass, TEXT("UGridDungeonBuilderStairGeneratorBase"), &Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonBuilderStairGeneratorBase), 3272140790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGenerator_h_2934799736(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
