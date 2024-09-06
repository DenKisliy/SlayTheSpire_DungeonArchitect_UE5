// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonParticleSystem() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonParticleSystem();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonParticleSystem
void ADungeonParticleSystem::StaticRegisterNativesADungeonParticleSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonParticleSystem);
UClass* Z_Construct_UClass_ADungeonParticleSystem_NoRegister()
{
	return ADungeonParticleSystem::StaticClass();
}
struct Z_Construct_UClass_ADungeonParticleSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Core/Actors/DungeonParticleSystem.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonParticleSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonParticleSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADungeonParticleSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonParticleSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonParticleSystem_Statics::ClassParams = {
	&ADungeonParticleSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonParticleSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonParticleSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonParticleSystem()
{
	if (!Z_Registration_Info_UClass_ADungeonParticleSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonParticleSystem.OuterSingleton, Z_Construct_UClass_ADungeonParticleSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonParticleSystem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonParticleSystem>()
{
	return ADungeonParticleSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonParticleSystem);
ADungeonParticleSystem::~ADungeonParticleSystem() {}
// End Class ADungeonParticleSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonParticleSystem, ADungeonParticleSystem::StaticClass, TEXT("ADungeonParticleSystem"), &Z_Registration_Info_UClass_ADungeonParticleSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonParticleSystem), 694080446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_2790322117(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
