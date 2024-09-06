// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/Debug/DungeonDebug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonDebug() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonDebug();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonDebug_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVoronoiTest();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVoronoiTest_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonDebug
void ADungeonDebug::StaticRegisterNativesADungeonDebug()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonDebug);
UClass* Z_Construct_UClass_ADungeonDebug_NoRegister()
{
	return ADungeonDebug::StaticClass();
}
struct Z_Construct_UClass_ADungeonDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Rendering Input Actor Misc" },
		{ "IncludePath", "Core/Utils/Debug/DungeonDebug.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloneTemplate_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloneTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonDebug>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonDebug_Statics::NewProp_CloneTemplate = { "CloneTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonDebug, CloneTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloneTemplate_MetaData), NewProp_CloneTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonDebug_Statics::NewProp_CloneTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDebug_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonDebug_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDebug_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonDebug_Statics::ClassParams = {
	&ADungeonDebug::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonDebug_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDebug_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDebug_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonDebug_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonDebug()
{
	if (!Z_Registration_Info_UClass_ADungeonDebug.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonDebug.OuterSingleton, Z_Construct_UClass_ADungeonDebug_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonDebug.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonDebug>()
{
	return ADungeonDebug::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonDebug);
ADungeonDebug::~ADungeonDebug() {}
// End Class ADungeonDebug

// Begin Class ADungeonVoronoiTest Function BuildVoronoi
struct Z_Construct_UFunction_ADungeonVoronoiTest_BuildVoronoi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Voronoi" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonVoronoiTest_BuildVoronoi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonVoronoiTest, nullptr, "BuildVoronoi", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonVoronoiTest_BuildVoronoi_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonVoronoiTest_BuildVoronoi_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonVoronoiTest_BuildVoronoi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonVoronoiTest_BuildVoronoi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonVoronoiTest::execBuildVoronoi)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildVoronoi();
	P_NATIVE_END;
}
// End Class ADungeonVoronoiTest Function BuildVoronoi

// Begin Class ADungeonVoronoiTest
void ADungeonVoronoiTest::StaticRegisterNativesADungeonVoronoiTest()
{
	UClass* Class = ADungeonVoronoiTest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildVoronoi", &ADungeonVoronoiTest::execBuildVoronoi },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonVoronoiTest);
UClass* Z_Construct_UClass_ADungeonVoronoiTest_NoRegister()
{
	return ADungeonVoronoiTest::StaticClass();
}
struct Z_Construct_UClass_ADungeonVoronoiTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Utils/Debug/DungeonDebug.h" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Voronoi" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSeeds_MetaData[] = {
		{ "Category", "Voronoi" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[] = {
		{ "Category", "Voronoi" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRelaxIterations_MetaData[] = {
		{ "Category", "Voronoi" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSeeds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRelaxIterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonVoronoiTest_BuildVoronoi, "BuildVoronoi" }, // 507856742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonVoronoiTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoronoiTest, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_NumSeeds = { "NumSeeds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoronoiTest, NumSeeds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSeeds_MetaData), NewProp_NumSeeds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoronoiTest, WorldSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSize_MetaData), NewProp_WorldSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_NumRelaxIterations = { "NumRelaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoronoiTest, NumRelaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRelaxIterations_MetaData), NewProp_NumRelaxIterations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonVoronoiTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_NumSeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_WorldSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoronoiTest_Statics::NewProp_NumRelaxIterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoronoiTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonVoronoiTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoronoiTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonVoronoiTest_Statics::ClassParams = {
	&ADungeonVoronoiTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeonVoronoiTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoronoiTest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoronoiTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonVoronoiTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonVoronoiTest()
{
	if (!Z_Registration_Info_UClass_ADungeonVoronoiTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonVoronoiTest.OuterSingleton, Z_Construct_UClass_ADungeonVoronoiTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonVoronoiTest.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonVoronoiTest>()
{
	return ADungeonVoronoiTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonVoronoiTest);
ADungeonVoronoiTest::~ADungeonVoronoiTest() {}
// End Class ADungeonVoronoiTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonDebug, ADungeonDebug::StaticClass, TEXT("ADungeonDebug"), &Z_Registration_Info_UClass_ADungeonDebug, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonDebug), 3984614040U) },
		{ Z_Construct_UClass_ADungeonVoronoiTest, ADungeonVoronoiTest::StaticClass, TEXT("ADungeonVoronoiTest"), &Z_Registration_Info_UClass_ADungeonVoronoiTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonVoronoiTest), 3267469567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_3127438952(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
