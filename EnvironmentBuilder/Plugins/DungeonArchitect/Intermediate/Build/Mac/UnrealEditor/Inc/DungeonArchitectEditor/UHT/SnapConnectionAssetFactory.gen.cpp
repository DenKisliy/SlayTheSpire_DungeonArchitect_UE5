// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/SnapConnection/SnapConnectionAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionAssetFactory() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapConnectionAssetFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapConnectionAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapConnectionAssetFactory
void USnapConnectionAssetFactory::StaticRegisterNativesUSnapConnectionAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapConnectionAssetFactory);
UClass* Z_Construct_UClass_USnapConnectionAssetFactory_NoRegister()
{
	return USnapConnectionAssetFactory::StaticClass();
}
struct Z_Construct_UClass_USnapConnectionAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/SnapConnection/SnapConnectionAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/SnapConnection/SnapConnectionAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapConnectionAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapConnectionAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapConnectionAssetFactory_Statics::ClassParams = {
	&USnapConnectionAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapConnectionAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapConnectionAssetFactory()
{
	if (!Z_Registration_Info_UClass_USnapConnectionAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapConnectionAssetFactory.OuterSingleton, Z_Construct_UClass_USnapConnectionAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapConnectionAssetFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapConnectionAssetFactory>()
{
	return USnapConnectionAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapConnectionAssetFactory);
USnapConnectionAssetFactory::~USnapConnectionAssetFactory() {}
// End Class USnapConnectionAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapConnectionAssetFactory, USnapConnectionAssetFactory::StaticClass, TEXT("USnapConnectionAssetFactory"), &Z_Registration_Info_UClass_USnapConnectionAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapConnectionAssetFactory), 4151895207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_1376833761(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
