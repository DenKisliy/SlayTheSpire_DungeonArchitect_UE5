// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/FloorPlanBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UFloorPlanBuilder
void UFloorPlanBuilder::StaticRegisterNativesUFloorPlanBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPlanBuilder);
UClass* Z_Construct_UClass_UFloorPlanBuilder_NoRegister()
{
	return UFloorPlanBuilder::StaticClass();
}
struct Z_Construct_UClass_UFloorPlanBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "Description", "A work-in-progress builder that generates indoor building floorplans. This builder is not feature complete yet" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Floor Plan" },
		{ "IncludePath", "Builders/FloorPlan/FloorPlanBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorPlanModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorPlanConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorPlanModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorPlanConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPlanBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorPlanBuilder_Statics::NewProp_FloorPlanModel = { "FloorPlanModel", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorPlanBuilder, FloorPlanModel), Z_Construct_UClass_UFloorPlanModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorPlanModel_MetaData), NewProp_FloorPlanModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorPlanBuilder_Statics::NewProp_FloorPlanConfig = { "FloorPlanConfig", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorPlanBuilder, FloorPlanConfig), Z_Construct_UClass_UFloorPlanConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorPlanConfig_MetaData), NewProp_FloorPlanConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorPlanBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanBuilder_Statics::NewProp_FloorPlanModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanBuilder_Statics::NewProp_FloorPlanConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFloorPlanBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPlanBuilder_Statics::ClassParams = {
	&UFloorPlanBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFloorPlanBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanBuilder_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorPlanBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloorPlanBuilder()
{
	if (!Z_Registration_Info_UClass_UFloorPlanBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPlanBuilder.OuterSingleton, Z_Construct_UClass_UFloorPlanBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloorPlanBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFloorPlanBuilder>()
{
	return UFloorPlanBuilder::StaticClass();
}
UFloorPlanBuilder::UFloorPlanBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPlanBuilder);
UFloorPlanBuilder::~UFloorPlanBuilder() {}
// End Class UFloorPlanBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFloorPlanBuilder, UFloorPlanBuilder::StaticClass, TEXT("UFloorPlanBuilder"), &Z_Registration_Info_UClass_UFloorPlanBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPlanBuilder), 3074340627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_2274837445(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
