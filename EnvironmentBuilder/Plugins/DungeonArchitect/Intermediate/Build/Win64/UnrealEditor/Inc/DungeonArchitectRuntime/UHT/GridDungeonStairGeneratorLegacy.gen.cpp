// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/Stair/GridDungeonStairGeneratorLegacy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonStairGeneratorLegacy() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridDungeonBuilderStairGeneratorLegacy
void UGridDungeonBuilderStairGeneratorLegacy::StaticRegisterNativesUGridDungeonBuilderStairGeneratorLegacy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonBuilderStairGeneratorLegacy);
UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_NoRegister()
{
	return UGridDungeonBuilderStairGeneratorLegacy::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Stair Generator Legacy" },
		{ "IncludePath", "Builders/Grid/Stair/GridDungeonStairGeneratorLegacy.h" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Stair/GridDungeonStairGeneratorLegacy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonBuilderStairGeneratorLegacy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGridDungeonBuilderStairGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_Statics::ClassParams = {
	&UGridDungeonBuilderStairGeneratorLegacy::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy()
{
	if (!Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorLegacy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorLegacy.OuterSingleton, Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorLegacy.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonBuilderStairGeneratorLegacy>()
{
	return UGridDungeonBuilderStairGeneratorLegacy::StaticClass();
}
UGridDungeonBuilderStairGeneratorLegacy::UGridDungeonBuilderStairGeneratorLegacy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonBuilderStairGeneratorLegacy);
UGridDungeonBuilderStairGeneratorLegacy::~UGridDungeonBuilderStairGeneratorLegacy() {}
// End Class UGridDungeonBuilderStairGeneratorLegacy

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorLegacy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonBuilderStairGeneratorLegacy, UGridDungeonBuilderStairGeneratorLegacy::StaticClass, TEXT("UGridDungeonBuilderStairGeneratorLegacy"), &Z_Registration_Info_UClass_UGridDungeonBuilderStairGeneratorLegacy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonBuilderStairGeneratorLegacy), 785128154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorLegacy_h_1360084896(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorLegacy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Stair_GridDungeonStairGeneratorLegacy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
