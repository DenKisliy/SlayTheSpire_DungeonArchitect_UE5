// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/MiniMap/LevelMinimapGenerator.h"
#include "GeometryScriptingCore/Public/GeometryScript/MeshNormalsFunctions.h"
#include "GeometryScriptingCore/Public/GeometryScript/MeshSimplifyFunctions.h"
#include "GeometryScriptingCore/Public/GeometryScript/MeshVoxelFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelMinimapGenerator() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ULevelMinimapGenerator();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ULevelMinimapGenerator_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ULevelMinimapGeneratorSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ULevelMinimapGeneratorSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class ULevelMinimapGeneratorSettings
void ULevelMinimapGeneratorSettings::StaticRegisterNativesULevelMinimapGeneratorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelMinimapGeneratorSettings);
UClass* Z_Construct_UClass_ULevelMinimapGeneratorSettings_NoRegister()
{
	return ULevelMinimapGeneratorSettings::StaticClass();
}
struct Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/MiniMap/LevelMinimapGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapMeshPostfix_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNanite_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVoxelize_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelizeOptions_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "EditCondition", "bVoxelize" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyOptions_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalGenOptions_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriangleCount_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinimapMeshPostfix;
	static void NewProp_bEnableNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNanite;
	static void NewProp_bVoxelize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoxelize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelizeOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimplifyOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalGenOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetTriangleCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelMinimapGeneratorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_MinimapMeshPostfix = { "MinimapMeshPostfix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelMinimapGeneratorSettings, MinimapMeshPostfix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapMeshPostfix_MetaData), NewProp_MinimapMeshPostfix_MetaData) };
void Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bEnableNanite_SetBit(void* Obj)
{
	((ULevelMinimapGeneratorSettings*)Obj)->bEnableNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bEnableNanite = { "bEnableNanite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelMinimapGeneratorSettings), &Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bEnableNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNanite_MetaData), NewProp_bEnableNanite_MetaData) };
void Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bVoxelize_SetBit(void* Obj)
{
	((ULevelMinimapGeneratorSettings*)Obj)->bVoxelize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bVoxelize = { "bVoxelize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelMinimapGeneratorSettings), &Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bVoxelize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVoxelize_MetaData), NewProp_bVoxelize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_VoxelizeOptions = { "VoxelizeOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelMinimapGeneratorSettings, VoxelizeOptions), Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelizeOptions_MetaData), NewProp_VoxelizeOptions_MetaData) }; // 470610415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_SimplifyOptions = { "SimplifyOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelMinimapGeneratorSettings, SimplifyOptions), Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplifyOptions_MetaData), NewProp_SimplifyOptions_MetaData) }; // 550413734
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_NormalGenOptions = { "NormalGenOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelMinimapGeneratorSettings, NormalGenOptions), Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalGenOptions_MetaData), NewProp_NormalGenOptions_MetaData) }; // 538639278
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelMinimapGeneratorSettings, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_TargetTriangleCount = { "TargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelMinimapGeneratorSettings, TargetTriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTriangleCount_MetaData), NewProp_TargetTriangleCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_MinimapMeshPostfix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bEnableNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_bVoxelize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_VoxelizeOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_SimplifyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_NormalGenOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::NewProp_TargetTriangleCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::ClassParams = {
	&ULevelMinimapGeneratorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelMinimapGeneratorSettings()
{
	if (!Z_Registration_Info_UClass_ULevelMinimapGeneratorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelMinimapGeneratorSettings.OuterSingleton, Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelMinimapGeneratorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<ULevelMinimapGeneratorSettings>()
{
	return ULevelMinimapGeneratorSettings::StaticClass();
}
ULevelMinimapGeneratorSettings::ULevelMinimapGeneratorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelMinimapGeneratorSettings);
ULevelMinimapGeneratorSettings::~ULevelMinimapGeneratorSettings() {}
// End Class ULevelMinimapGeneratorSettings

// Begin Class ULevelMinimapGenerator Function GenerateMinimapMeshFromWorld
struct Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics
{
	struct LevelMinimapGenerator_eventGenerateMinimapMeshFromWorld_Parms
	{
		UWorld* InWorld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelMinimapGenerator_eventGenerateMinimapMeshFromWorld_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::NewProp_InWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelMinimapGenerator, nullptr, "GenerateMinimapMeshFromWorld", nullptr, nullptr, Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::LevelMinimapGenerator_eventGenerateMinimapMeshFromWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::LevelMinimapGenerator_eventGenerateMinimapMeshFromWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelMinimapGenerator::execGenerateMinimapMeshFromWorld)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULevelMinimapGenerator::GenerateMinimapMeshFromWorld(Z_Param_InWorld);
	P_NATIVE_END;
}
// End Class ULevelMinimapGenerator Function GenerateMinimapMeshFromWorld

// Begin Class ULevelMinimapGenerator
void ULevelMinimapGenerator::StaticRegisterNativesULevelMinimapGenerator()
{
	UClass* Class = ULevelMinimapGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateMinimapMeshFromWorld", &ULevelMinimapGenerator::execGenerateMinimapMeshFromWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelMinimapGenerator);
UClass* Z_Construct_UClass_ULevelMinimapGenerator_NoRegister()
{
	return ULevelMinimapGenerator::StaticClass();
}
struct Z_Construct_UClass_ULevelMinimapGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MiniMap/LevelMinimapGenerator.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/LevelMinimapGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelMinimapGenerator_GenerateMinimapMeshFromWorld, "GenerateMinimapMeshFromWorld" }, // 1851436841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelMinimapGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelMinimapGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelMinimapGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelMinimapGenerator_Statics::ClassParams = {
	&ULevelMinimapGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelMinimapGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelMinimapGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelMinimapGenerator()
{
	if (!Z_Registration_Info_UClass_ULevelMinimapGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelMinimapGenerator.OuterSingleton, Z_Construct_UClass_ULevelMinimapGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelMinimapGenerator.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<ULevelMinimapGenerator>()
{
	return ULevelMinimapGenerator::StaticClass();
}
ULevelMinimapGenerator::ULevelMinimapGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelMinimapGenerator);
ULevelMinimapGenerator::~ULevelMinimapGenerator() {}
// End Class ULevelMinimapGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelMinimapGeneratorSettings, ULevelMinimapGeneratorSettings::StaticClass, TEXT("ULevelMinimapGeneratorSettings"), &Z_Registration_Info_UClass_ULevelMinimapGeneratorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelMinimapGeneratorSettings), 2321360924U) },
		{ Z_Construct_UClass_ULevelMinimapGenerator, ULevelMinimapGenerator::StaticClass, TEXT("ULevelMinimapGenerator"), &Z_Registration_Info_UClass_ULevelMinimapGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelMinimapGenerator), 4265641319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_597365934(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
