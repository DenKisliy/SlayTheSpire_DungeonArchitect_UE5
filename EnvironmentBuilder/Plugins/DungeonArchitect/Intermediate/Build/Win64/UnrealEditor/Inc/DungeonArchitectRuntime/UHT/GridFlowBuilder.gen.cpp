// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridFlow/GridFlowBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowBuilder
void UGridFlowBuilder::StaticRegisterNativesUGridFlowBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowBuilder);
UClass* Z_Construct_UClass_UGridFlowBuilder_NoRegister()
{
	return UGridFlowBuilder::StaticClass();
}
struct Z_Construct_UClass_UGridFlowBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Description", "Design the layout of your procedural dungeons using the flow editor. Then create an infinite number of procedural dungeons that follow this layout rule. Create cyclic-paths, key-locks, teleporters, shops, treasure rooms, boss rooms and much more" },
		{ "DisplayName", "Grid Flow" },
		{ "IncludePath", "Builders/GridFlow/GridFlowBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowBuilder_Statics::ClassParams = {
	&UGridFlowBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowBuilder()
{
	if (!Z_Registration_Info_UClass_UGridFlowBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowBuilder.OuterSingleton, Z_Construct_UClass_UGridFlowBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowBuilder>()
{
	return UGridFlowBuilder::StaticClass();
}
UGridFlowBuilder::UGridFlowBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowBuilder);
UGridFlowBuilder::~UGridFlowBuilder() {}
// End Class UGridFlowBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowBuilder, UGridFlowBuilder::StaticClass, TEXT("UGridFlowBuilder"), &Z_Registration_Info_UClass_UGridFlowBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowBuilder), 4042639243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_1636709546(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
