// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/SnapGridFlow/SnapGridFlowActorFactories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowActorFactories() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapGridFlowModuleBoundsActorFactory
void USnapGridFlowModuleBoundsActorFactory::StaticRegisterNativesUSnapGridFlowModuleBoundsActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleBoundsActorFactory);
UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_NoRegister()
{
	return USnapGridFlowModuleBoundsActorFactory::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Core/LevelEditor/Assets/SnapGridFlow/SnapGridFlowActorFactories.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/SnapGridFlow/SnapGridFlowActorFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleBoundsActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_Statics::ClassParams = {
	&USnapGridFlowModuleBoundsActorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowModuleBoundsActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleBoundsActorFactory.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowModuleBoundsActorFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapGridFlowModuleBoundsActorFactory>()
{
	return USnapGridFlowModuleBoundsActorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleBoundsActorFactory);
USnapGridFlowModuleBoundsActorFactory::~USnapGridFlowModuleBoundsActorFactory() {}
// End Class USnapGridFlowModuleBoundsActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapGridFlow_SnapGridFlowActorFactories_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowModuleBoundsActorFactory, USnapGridFlowModuleBoundsActorFactory::StaticClass, TEXT("USnapGridFlowModuleBoundsActorFactory"), &Z_Registration_Info_UClass_USnapGridFlowModuleBoundsActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleBoundsActorFactory), 3372694052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapGridFlow_SnapGridFlowActorFactories_h_3337969739(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapGridFlow_SnapGridFlowActorFactories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapGridFlow_SnapGridFlowActorFactories_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
