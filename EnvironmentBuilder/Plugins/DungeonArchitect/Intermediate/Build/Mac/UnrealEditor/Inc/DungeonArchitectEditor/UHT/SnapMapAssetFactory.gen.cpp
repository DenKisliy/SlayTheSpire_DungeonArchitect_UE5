// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/SnapMap/SnapMapAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapAssetFactory() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapAssetFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapMapAssetFactory
void USnapMapAssetFactory::StaticRegisterNativesUSnapMapAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapAssetFactory);
UClass* Z_Construct_UClass_USnapMapAssetFactory_NoRegister()
{
	return USnapMapAssetFactory::StaticClass();
}
struct Z_Construct_UClass_USnapMapAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/SnapMap/SnapMapAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/SnapMap/SnapMapAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapAssetFactory_Statics::ClassParams = {
	&USnapMapAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapAssetFactory()
{
	if (!Z_Registration_Info_UClass_USnapMapAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapAssetFactory.OuterSingleton, Z_Construct_UClass_USnapMapAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapAssetFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapAssetFactory>()
{
	return USnapMapAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapAssetFactory);
USnapMapAssetFactory::~USnapMapAssetFactory() {}
// End Class USnapMapAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapAssetFactory, USnapMapAssetFactory::StaticClass, TEXT("USnapMapAssetFactory"), &Z_Registration_Info_UClass_USnapMapAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapAssetFactory), 3862065533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_90396181(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
