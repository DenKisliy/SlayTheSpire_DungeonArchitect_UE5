// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanDoorVolume() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AFloorPlanDoorVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AFloorPlanDoorVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class AFloorPlanDoorVolume
void AFloorPlanDoorVolume::StaticRegisterNativesAFloorPlanDoorVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorPlanDoorVolume);
UClass* Z_Construct_UClass_AFloorPlanDoorVolume_NoRegister()
{
	return AFloorPlanDoorVolume::StaticClass();
}
struct Z_Construct_UClass_AFloorPlanDoorVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DoorMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorPlanDoorVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanDoorVolume_Statics::NewProp_DoorMarker = { "DoorMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanDoorVolume, DoorMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMarker_MetaData), NewProp_DoorMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorPlanDoorVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanDoorVolume_Statics::NewProp_DoorMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloorPlanDoorVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorPlanDoorVolume_Statics::ClassParams = {
	&AFloorPlanDoorVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFloorPlanDoorVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorPlanDoorVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloorPlanDoorVolume()
{
	if (!Z_Registration_Info_UClass_AFloorPlanDoorVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorPlanDoorVolume.OuterSingleton, Z_Construct_UClass_AFloorPlanDoorVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloorPlanDoorVolume.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<AFloorPlanDoorVolume>()
{
	return AFloorPlanDoorVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPlanDoorVolume);
AFloorPlanDoorVolume::~AFloorPlanDoorVolume() {}
// End Class AFloorPlanDoorVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloorPlanDoorVolume, AFloorPlanDoorVolume::StaticClass, TEXT("AFloorPlanDoorVolume"), &Z_Registration_Info_UClass_AFloorPlanDoorVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorPlanDoorVolume), 1063930518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_2689915808(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
