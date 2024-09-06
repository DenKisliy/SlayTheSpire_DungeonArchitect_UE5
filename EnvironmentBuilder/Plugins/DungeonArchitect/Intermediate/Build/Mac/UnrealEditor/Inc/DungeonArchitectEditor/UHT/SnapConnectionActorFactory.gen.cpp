// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/SnapConnection/SnapConnectionActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionActorFactory() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapConnectionActorFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapConnectionActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapConnectionActorFactory
void USnapConnectionActorFactory::StaticRegisterNativesUSnapConnectionActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapConnectionActorFactory);
UClass* Z_Construct_UClass_USnapConnectionActorFactory_NoRegister()
{
	return USnapConnectionActorFactory::StaticClass();
}
struct Z_Construct_UClass_USnapConnectionActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Core/LevelEditor/Assets/SnapConnection/SnapConnectionActorFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/SnapConnection/SnapConnectionActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapConnectionActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapConnectionActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapConnectionActorFactory_Statics::ClassParams = {
	&USnapConnectionActorFactory::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapConnectionActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapConnectionActorFactory()
{
	if (!Z_Registration_Info_UClass_USnapConnectionActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapConnectionActorFactory.OuterSingleton, Z_Construct_UClass_USnapConnectionActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapConnectionActorFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapConnectionActorFactory>()
{
	return USnapConnectionActorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapConnectionActorFactory);
USnapConnectionActorFactory::~USnapConnectionActorFactory() {}
// End Class USnapConnectionActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapConnectionActorFactory, USnapConnectionActorFactory::StaticClass, TEXT("USnapConnectionActorFactory"), &Z_Registration_Info_UClass_USnapConnectionActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapConnectionActorFactory), 1357975656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionActorFactory_h_1369032994(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
