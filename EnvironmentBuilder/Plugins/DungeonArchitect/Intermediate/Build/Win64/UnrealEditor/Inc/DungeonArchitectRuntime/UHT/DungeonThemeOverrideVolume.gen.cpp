// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Volumes/DungeonThemeOverrideVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonThemeOverrideVolume() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonThemeOverrideVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonThemeOverrideVolume_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonThemeOverrideVolume
void ADungeonThemeOverrideVolume::StaticRegisterNativesADungeonThemeOverrideVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonThemeOverrideVolume);
UClass* Z_Construct_UClass_ADungeonThemeOverrideVolume_NoRegister()
{
	return ADungeonThemeOverrideVolume::StaticClass();
}
struct Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Core/Volumes/DungeonThemeOverrideVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonThemeOverrideVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates if the bounds of this volume should be reversed, i.e. everything outside this volume is overridden */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonThemeOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if the bounds of this volume should be reversed, i.e. everything outside this volume is overridden" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackOnMissingMarkers_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If a marker has no meshes in the overridden theme, it will fallback to the base theme if this flag is checked */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonThemeOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a marker has no meshes in the overridden theme, it will fallback to the base theme if this flag is checked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemeOverride_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonThemeOverrideVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWeight_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If multiple override volumes overlap, the volume with the highest weight takes precedence */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonThemeOverrideVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If multiple override volumes overlap, the volume with the highest weight takes precedence" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Reversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reversed;
	static void NewProp_FallbackOnMissingMarkers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FallbackOnMissingMarkers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThemeOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonThemeOverrideVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_Reversed_SetBit(void* Obj)
{
	((ADungeonThemeOverrideVolume*)Obj)->Reversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonThemeOverrideVolume), &Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_Reversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reversed_MetaData), NewProp_Reversed_MetaData) };
void Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_FallbackOnMissingMarkers_SetBit(void* Obj)
{
	((ADungeonThemeOverrideVolume*)Obj)->FallbackOnMissingMarkers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_FallbackOnMissingMarkers = { "FallbackOnMissingMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonThemeOverrideVolume), &Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_FallbackOnMissingMarkers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackOnMissingMarkers_MetaData), NewProp_FallbackOnMissingMarkers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_ThemeOverride = { "ThemeOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonThemeOverrideVolume, ThemeOverride), Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemeOverride_MetaData), NewProp_ThemeOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_OverrideWeight = { "OverrideWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonThemeOverrideVolume, OverrideWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideWeight_MetaData), NewProp_OverrideWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_Reversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_FallbackOnMissingMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_ThemeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::NewProp_OverrideWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::ClassParams = {
	&ADungeonThemeOverrideVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonThemeOverrideVolume()
{
	if (!Z_Registration_Info_UClass_ADungeonThemeOverrideVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonThemeOverrideVolume.OuterSingleton, Z_Construct_UClass_ADungeonThemeOverrideVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonThemeOverrideVolume.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonThemeOverrideVolume>()
{
	return ADungeonThemeOverrideVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonThemeOverrideVolume);
ADungeonThemeOverrideVolume::~ADungeonThemeOverrideVolume() {}
// End Class ADungeonThemeOverrideVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonThemeOverrideVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonThemeOverrideVolume, ADungeonThemeOverrideVolume::StaticClass, TEXT("ADungeonThemeOverrideVolume"), &Z_Registration_Info_UClass_ADungeonThemeOverrideVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonThemeOverrideVolume), 3471472522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonThemeOverrideVolume_h_3274593819(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonThemeOverrideVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonThemeOverrideVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
