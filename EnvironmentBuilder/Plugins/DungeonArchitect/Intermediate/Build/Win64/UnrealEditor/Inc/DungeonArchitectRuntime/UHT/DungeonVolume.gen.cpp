// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Volumes/DungeonVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonVolume() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonVolume
void ADungeonVolume::StaticRegisterNativesADungeonVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonVolume);
UClass* Z_Construct_UClass_ADungeonVolume_NoRegister()
{
	return ADungeonVolume::StaticClass();
}
struct Z_Construct_UClass_ADungeonVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Core/Volumes/DungeonVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dungeon_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeUpdate_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static void NewProp_RealtimeUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RealtimeUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonVolume_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVolume, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dungeon_MetaData), NewProp_Dungeon_MetaData) };
void Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate_SetBit(void* Obj)
{
	((ADungeonVolume*)Obj)->RealtimeUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate = { "RealtimeUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonVolume), &Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealtimeUpdate_MetaData), NewProp_RealtimeUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVolume_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonVolume_Statics::ClassParams = {
	&ADungeonVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonVolume()
{
	if (!Z_Registration_Info_UClass_ADungeonVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonVolume.OuterSingleton, Z_Construct_UClass_ADungeonVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonVolume.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonVolume>()
{
	return ADungeonVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonVolume);
ADungeonVolume::~ADungeonVolume() {}
// End Class ADungeonVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonVolume, ADungeonVolume::StaticClass, TEXT("ADungeonVolume"), &Z_Registration_Info_UClass_ADungeonVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonVolume), 3120022286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_39606959(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
