// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonManagedDynamicMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonManagedDynamicMesh() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonManagedDynamicMesh();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonManagedDynamicMesh_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonManagedDynamicMesh
void ADungeonManagedDynamicMesh::StaticRegisterNativesADungeonManagedDynamicMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonManagedDynamicMesh);
UClass* Z_Construct_UClass_ADungeonManagedDynamicMesh_NoRegister()
{
	return ADungeonManagedDynamicMesh::StaticClass();
}
struct Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Actors/DungeonManagedDynamicMesh.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonManagedDynamicMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonManagedDynamicMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonManagedDynamicMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::NewProp_DungeonID = { "DungeonID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonManagedDynamicMesh, DungeonID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonID_MetaData), NewProp_DungeonID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::NewProp_DungeonID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADynamicMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::ClassParams = {
	&ADungeonManagedDynamicMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonManagedDynamicMesh()
{
	if (!Z_Registration_Info_UClass_ADungeonManagedDynamicMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonManagedDynamicMesh.OuterSingleton, Z_Construct_UClass_ADungeonManagedDynamicMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonManagedDynamicMesh.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonManagedDynamicMesh>()
{
	return ADungeonManagedDynamicMesh::StaticClass();
}
ADungeonManagedDynamicMesh::ADungeonManagedDynamicMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonManagedDynamicMesh);
ADungeonManagedDynamicMesh::~ADungeonManagedDynamicMesh() {}
// End Class ADungeonManagedDynamicMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonManagedDynamicMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonManagedDynamicMesh, ADungeonManagedDynamicMesh::StaticClass, TEXT("ADungeonManagedDynamicMesh"), &Z_Registration_Info_UClass_ADungeonManagedDynamicMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonManagedDynamicMesh), 1477835487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonManagedDynamicMesh_h_4082679494(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonManagedDynamicMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonManagedDynamicMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
