// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfigMarkerSettings();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfigMarkerSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonConfigMarkerSettings
void UDungeonConfigMarkerSettings::StaticRegisterNativesUDungeonConfigMarkerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonConfigMarkerSettings);
UClass* Z_Construct_UClass_UDungeonConfigMarkerSettings_NoRegister()
{
	return UDungeonConfigMarkerSettings::StaticClass();
}
struct Z_Construct_UClass_UDungeonConfigMarkerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/DungeonConfig.h" },
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonConfigMarkerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonConfigMarkerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfigMarkerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonConfigMarkerSettings_Statics::ClassParams = {
	&UDungeonConfigMarkerSettings::StaticClass,
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
	0x011000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfigMarkerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonConfigMarkerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonConfigMarkerSettings()
{
	if (!Z_Registration_Info_UClass_UDungeonConfigMarkerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonConfigMarkerSettings.OuterSingleton, Z_Construct_UClass_UDungeonConfigMarkerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonConfigMarkerSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonConfigMarkerSettings>()
{
	return UDungeonConfigMarkerSettings::StaticClass();
}
UDungeonConfigMarkerSettings::UDungeonConfigMarkerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonConfigMarkerSettings);
UDungeonConfigMarkerSettings::~UDungeonConfigMarkerSettings() {}
// End Class UDungeonConfigMarkerSettings

// Begin Class UDungeonConfig
void UDungeonConfig::StaticRegisterNativesUDungeonConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonConfig);
UClass* Z_Construct_UClass_UDungeonConfig_NoRegister()
{
	return UDungeonConfig::StaticClass();
}
struct Z_Construct_UClass_UDungeonConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/DungeonConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n      Changing this number would completely change the layout of the dungeon. \n      This is the base random number seed that is used to build the dungeon \n    */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changing this number would completely change the layout of the dungeon.\nThis is the base random number seed that is used to build the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instanced_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    Generate the dungeon with instanced meshes to improve performance\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate the dungeon with instanced meshes to improve performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBuildTimePerFrameMs_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    The dungeon is built asynchronously over multiple frames if this value is > 0.\n    If value is 0, the entire dungeon is built in a single frame (might face lag)\n    Set it to a value in milli seconds (e.g. 16-33) to have it built over multiple frames,\n    while maintaining a smooth frame rate\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The dungeon is built asynchronously over multiple frames if this value is > 0.\nIf value is 0, the entire dungeon is built in a single frame (might face lag)\nSet it to a value in milli seconds (e.g. 16-33) to have it built over multiple frames,\nwhile maintaining a smooth frame rate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_Instanced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Instanced;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBuildTimePerFrameMs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonConfig, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced_SetBit(void* Obj)
{
	((UDungeonConfig*)Obj)->Instanced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced = { "Instanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonConfig), &Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instanced_MetaData), NewProp_Instanced_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonConfig_Statics::NewProp_MaxBuildTimePerFrameMs = { "MaxBuildTimePerFrameMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonConfig, MaxBuildTimePerFrameMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBuildTimePerFrameMs_MetaData), NewProp_MaxBuildTimePerFrameMs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonConfig_Statics::NewProp_MaxBuildTimePerFrameMs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonConfig_Statics::ClassParams = {
	&UDungeonConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonConfig()
{
	if (!Z_Registration_Info_UClass_UDungeonConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonConfig.OuterSingleton, Z_Construct_UClass_UDungeonConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonConfig>()
{
	return UDungeonConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonConfig);
UDungeonConfig::~UDungeonConfig() {}
// End Class UDungeonConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonConfigMarkerSettings, UDungeonConfigMarkerSettings::StaticClass, TEXT("UDungeonConfigMarkerSettings"), &Z_Registration_Info_UClass_UDungeonConfigMarkerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonConfigMarkerSettings), 1876142451U) },
		{ Z_Construct_UClass_UDungeonConfig, UDungeonConfig::StaticClass, TEXT("UDungeonConfig"), &Z_Registration_Info_UClass_UDungeonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonConfig), 2437333513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_1791955905(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
