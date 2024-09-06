// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/GridFlow/GridFlowAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowAssetFactory() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAssetFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UGridFlowAssetFactory
void UGridFlowAssetFactory::StaticRegisterNativesUGridFlowAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowAssetFactory);
UClass* Z_Construct_UClass_UGridFlowAssetFactory_NoRegister()
{
	return UGridFlowAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UGridFlowAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/GridFlow/GridFlowAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/GridFlow/GridFlowAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowAssetFactory_Statics::ClassParams = {
	&UGridFlowAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowAssetFactory()
{
	if (!Z_Registration_Info_UClass_UGridFlowAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowAssetFactory.OuterSingleton, Z_Construct_UClass_UGridFlowAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowAssetFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowAssetFactory>()
{
	return UGridFlowAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowAssetFactory);
UGridFlowAssetFactory::~UGridFlowAssetFactory() {}
// End Class UGridFlowAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_GridFlow_GridFlowAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowAssetFactory, UGridFlowAssetFactory::StaticClass, TEXT("UGridFlowAssetFactory"), &Z_Registration_Info_UClass_UGridFlowAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowAssetFactory), 3140018501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_GridFlow_GridFlowAssetFactory_h_1435748749(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_GridFlow_GridFlowAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_GridFlow_GridFlowAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
