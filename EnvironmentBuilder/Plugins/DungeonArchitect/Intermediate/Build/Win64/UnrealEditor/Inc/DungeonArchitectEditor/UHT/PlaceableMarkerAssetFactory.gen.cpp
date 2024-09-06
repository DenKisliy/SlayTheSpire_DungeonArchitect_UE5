// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/PlaceableMarker/PlaceableMarkerAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceableMarkerAssetFactory() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UPlaceableMarkerAssetFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UPlaceableMarkerAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UPlaceableMarkerAssetFactory
void UPlaceableMarkerAssetFactory::StaticRegisterNativesUPlaceableMarkerAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaceableMarkerAssetFactory);
UClass* Z_Construct_UClass_UPlaceableMarkerAssetFactory_NoRegister()
{
	return UPlaceableMarkerAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UPlaceableMarkerAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/PlaceableMarker/PlaceableMarkerAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/PlaceableMarker/PlaceableMarkerAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceableMarkerAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlaceableMarkerAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaceableMarkerAssetFactory_Statics::ClassParams = {
	&UPlaceableMarkerAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaceableMarkerAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaceableMarkerAssetFactory()
{
	if (!Z_Registration_Info_UClass_UPlaceableMarkerAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaceableMarkerAssetFactory.OuterSingleton, Z_Construct_UClass_UPlaceableMarkerAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaceableMarkerAssetFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UPlaceableMarkerAssetFactory>()
{
	return UPlaceableMarkerAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceableMarkerAssetFactory);
UPlaceableMarkerAssetFactory::~UPlaceableMarkerAssetFactory() {}
// End Class UPlaceableMarkerAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_PlaceableMarker_PlaceableMarkerAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlaceableMarkerAssetFactory, UPlaceableMarkerAssetFactory::StaticClass, TEXT("UPlaceableMarkerAssetFactory"), &Z_Registration_Info_UClass_UPlaceableMarkerAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaceableMarkerAssetFactory), 2110588441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_PlaceableMarker_PlaceableMarkerAssetFactory_h_525484600(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_PlaceableMarker_PlaceableMarkerAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_PlaceableMarker_PlaceableMarkerAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
