// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonInstancedMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonInstancedMeshActor() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonInstancedMeshActor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonInstancedMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonInstancedMeshActor
void ADungeonInstancedMeshActor::StaticRegisterNativesADungeonInstancedMeshActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonInstancedMeshActor);
UClass* Z_Construct_UClass_ADungeonInstancedMeshActor_NoRegister()
{
	return ADungeonInstancedMeshActor::StaticClass();
}
struct Z_Construct_UClass_ADungeonInstancedMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Core/Actors/DungeonInstancedMeshActor.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonInstancedMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonInstancedMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::ClassParams = {
	&ADungeonInstancedMeshActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonInstancedMeshActor()
{
	if (!Z_Registration_Info_UClass_ADungeonInstancedMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonInstancedMeshActor.OuterSingleton, Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonInstancedMeshActor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonInstancedMeshActor>()
{
	return ADungeonInstancedMeshActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonInstancedMeshActor);
ADungeonInstancedMeshActor::~ADungeonInstancedMeshActor() {}
// End Class ADungeonInstancedMeshActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonInstancedMeshActor, ADungeonInstancedMeshActor::StaticClass, TEXT("ADungeonInstancedMeshActor"), &Z_Registration_Info_UClass_ADungeonInstancedMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonInstancedMeshActor), 2370575871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_3787732361(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
