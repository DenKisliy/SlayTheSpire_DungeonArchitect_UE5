// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Game/DungeonDefaultGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonDefaultGameMode() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonBuildSystem_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonDefaultGameMode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonDefaultGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonDefaultGameMode
void ADungeonDefaultGameMode::StaticRegisterNativesADungeonDefaultGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonDefaultGameMode);
UClass* Z_Construct_UClass_ADungeonDefaultGameMode_NoRegister()
{
	return ADungeonDefaultGameMode::StaticClass();
}
struct Z_Construct_UClass_ADungeonDefaultGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/Game/DungeonDefaultGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/DungeonDefaultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dungeon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Game/DungeonDefaultGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonBuildSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Game/DungeonDefaultGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonBuildSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonDefaultGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonDefaultGameMode_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonDefaultGameMode, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dungeon_MetaData), NewProp_Dungeon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonDefaultGameMode_Statics::NewProp_DungeonBuildSystem = { "DungeonBuildSystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonDefaultGameMode, DungeonBuildSystem), Z_Construct_UClass_ADungeonBuildSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonBuildSystem_MetaData), NewProp_DungeonBuildSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonDefaultGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonDefaultGameMode_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonDefaultGameMode_Statics::NewProp_DungeonBuildSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDefaultGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonDefaultGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDefaultGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonDefaultGameMode_Statics::ClassParams = {
	&ADungeonDefaultGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonDefaultGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDefaultGameMode_Statics::PropPointers),
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDefaultGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonDefaultGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonDefaultGameMode()
{
	if (!Z_Registration_Info_UClass_ADungeonDefaultGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonDefaultGameMode.OuterSingleton, Z_Construct_UClass_ADungeonDefaultGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonDefaultGameMode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonDefaultGameMode>()
{
	return ADungeonDefaultGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonDefaultGameMode);
ADungeonDefaultGameMode::~ADungeonDefaultGameMode() {}
// End Class ADungeonDefaultGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonDefaultGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonDefaultGameMode, ADungeonDefaultGameMode::StaticClass, TEXT("ADungeonDefaultGameMode"), &Z_Registration_Info_UClass_ADungeonDefaultGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonDefaultGameMode), 2653304554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonDefaultGameMode_h_1621417989(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonDefaultGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonDefaultGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
