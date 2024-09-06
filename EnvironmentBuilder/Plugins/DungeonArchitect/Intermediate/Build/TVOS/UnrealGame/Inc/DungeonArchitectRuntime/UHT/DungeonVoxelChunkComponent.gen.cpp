// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Voxel/Scene/DungeonVoxelChunkComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonVoxelChunkComponent() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonVoxelChunkComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonVoxelChunkComponent_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonVoxelChunkComponent
void UDungeonVoxelChunkComponent::StaticRegisterNativesUDungeonVoxelChunkComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonVoxelChunkComponent);
UClass* Z_Construct_UClass_UDungeonVoxelChunkComponent_NoRegister()
{
	return UDungeonVoxelChunkComponent::StaticClass();
}
struct Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "LOD LOD Mobility Trigger" },
		{ "IncludePath", "Frameworks/Voxel/Scene/DungeonVoxelChunkComponent.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelChunkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelChunkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDensityCompressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelChunkComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumElements;
	static void NewProp_bDensityCompressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDensityCompressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonVoxelChunkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::NewProp_NumElements = { "NumElements", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonVoxelChunkComponent, NumElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumElements_MetaData), NewProp_NumElements_MetaData) };
void Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::NewProp_bDensityCompressed_SetBit(void* Obj)
{
	((UDungeonVoxelChunkComponent*)Obj)->bDensityCompressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::NewProp_bDensityCompressed = { "bDensityCompressed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonVoxelChunkComponent), &Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::NewProp_bDensityCompressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDensityCompressed_MetaData), NewProp_bDensityCompressed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::NewProp_NumElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::NewProp_bDensityCompressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::ClassParams = {
	&UDungeonVoxelChunkComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonVoxelChunkComponent()
{
	if (!Z_Registration_Info_UClass_UDungeonVoxelChunkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonVoxelChunkComponent.OuterSingleton, Z_Construct_UClass_UDungeonVoxelChunkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonVoxelChunkComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonVoxelChunkComponent>()
{
	return UDungeonVoxelChunkComponent::StaticClass();
}
UDungeonVoxelChunkComponent::UDungeonVoxelChunkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonVoxelChunkComponent);
UDungeonVoxelChunkComponent::~UDungeonVoxelChunkComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDungeonVoxelChunkComponent)
// End Class UDungeonVoxelChunkComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelChunkComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonVoxelChunkComponent, UDungeonVoxelChunkComponent::StaticClass, TEXT("UDungeonVoxelChunkComponent"), &Z_Registration_Info_UClass_UDungeonVoxelChunkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonVoxelChunkComponent), 760480998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelChunkComponent_h_1346706287(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelChunkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelChunkComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
