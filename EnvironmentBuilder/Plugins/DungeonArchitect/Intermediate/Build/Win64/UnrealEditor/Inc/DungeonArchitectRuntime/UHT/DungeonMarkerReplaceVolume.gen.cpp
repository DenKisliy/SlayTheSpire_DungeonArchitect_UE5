// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Volumes/DungeonMarkerReplaceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMarkerReplaceVolume() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerReplaceEntry();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FMarkerReplaceEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MarkerReplaceEntry;
class UScriptStruct* FMarkerReplaceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerReplaceEntry, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("MarkerReplaceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FMarkerReplaceEntry>()
{
	return FMarkerReplaceEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplacementName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerReplaceEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarkerReplaceEntry, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_ReplacementName = { "ReplacementName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarkerReplaceEntry, ReplacementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplacementName_MetaData), NewProp_ReplacementName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_ReplacementName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"MarkerReplaceEntry",
	Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::PropPointers),
	sizeof(FMarkerReplaceEntry),
	alignof(FMarkerReplaceEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMarkerReplaceEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.InnerSingleton, Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.InnerSingleton;
}
// End ScriptStruct FMarkerReplaceEntry

// Begin Class ADungeonMarkerReplaceVolume
void ADungeonMarkerReplaceVolume::StaticRegisterNativesADungeonMarkerReplaceVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonMarkerReplaceVolume);
UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume_NoRegister()
{
	return ADungeonMarkerReplaceVolume::StaticClass();
}
struct Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Core/Volumes/DungeonMarkerReplaceVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Replacements_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates if the negation should be reversed, i.e. everything outside this volume is negated */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if the negation should be reversed, i.e. everything outside this volume is negated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Replacements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Replacements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonMarkerReplaceVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements_Inner = { "Replacements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMarkerReplaceEntry, METADATA_PARAMS(0, nullptr) }; // 1190909859
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements = { "Replacements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMarkerReplaceVolume, Replacements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Replacements_MetaData), NewProp_Replacements_MetaData) }; // 1190909859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::ClassParams = {
	&ADungeonMarkerReplaceVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume()
{
	if (!Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume.OuterSingleton, Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonMarkerReplaceVolume>()
{
	return ADungeonMarkerReplaceVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonMarkerReplaceVolume);
ADungeonMarkerReplaceVolume::~ADungeonMarkerReplaceVolume() {}
// End Class ADungeonMarkerReplaceVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMarkerReplaceEntry::StaticStruct, Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewStructOps, TEXT("MarkerReplaceEntry"), &Z_Registration_Info_UScriptStruct_MarkerReplaceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMarkerReplaceEntry), 1190909859U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonMarkerReplaceVolume, ADungeonMarkerReplaceVolume::StaticClass, TEXT("ADungeonMarkerReplaceVolume"), &Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonMarkerReplaceVolume), 91220374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_2419005154(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
