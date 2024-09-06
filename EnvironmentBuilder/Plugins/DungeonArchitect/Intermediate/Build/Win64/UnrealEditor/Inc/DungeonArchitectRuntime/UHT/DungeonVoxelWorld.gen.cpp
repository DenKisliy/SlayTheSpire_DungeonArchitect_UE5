// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonVoxelWorld() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVoxelWorld();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVoxelWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonVoxelWorld Function BuildWorld
struct Z_Construct_UFunction_ADungeonVoxelWorld_BuildWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonVoxelWorld_BuildWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonVoxelWorld, nullptr, "BuildWorld", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonVoxelWorld_BuildWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonVoxelWorld_BuildWorld_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonVoxelWorld_BuildWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonVoxelWorld_BuildWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonVoxelWorld::execBuildWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildWorld();
	P_NATIVE_END;
}
// End Class ADungeonVoxelWorld Function BuildWorld

// Begin Class ADungeonVoxelWorld Function RemoveBlock
struct Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics
{
	struct DungeonVoxelWorld_eventRemoveBlock_Parms
	{
		FVector Location;
		FVector Normal;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonVoxelWorld_eventRemoveBlock_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonVoxelWorld_eventRemoveBlock_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonVoxelWorld_eventRemoveBlock_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonVoxelWorld, nullptr, "RemoveBlock", nullptr, nullptr, Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::DungeonVoxelWorld_eventRemoveBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::DungeonVoxelWorld_eventRemoveBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonVoxelWorld::execRemoveBlock)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBlock(Z_Param_Out_Location,Z_Param_Out_Normal,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class ADungeonVoxelWorld Function RemoveBlock

// Begin Class ADungeonVoxelWorld
void ADungeonVoxelWorld::StaticRegisterNativesADungeonVoxelWorld()
{
	UClass* Class = ADungeonVoxelWorld::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildWorld", &ADungeonVoxelWorld::execBuildWorld },
		{ "RemoveBlock", &ADungeonVoxelWorld::execRemoveBlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonVoxelWorld);
UClass* Z_Construct_UClass_ADungeonVoxelWorld_NoRegister()
{
	return ADungeonVoxelWorld::StaticClass();
}
struct Z_Construct_UClass_ADungeonVoxelWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeMesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordMin_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordMax_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Frameworks/Voxel/Scene/DungeonVoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_bOptimizeMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoordMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoordMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonVoxelWorld_BuildWorld, "BuildWorld" }, // 582298609
		{ &Z_Construct_UFunction_ADungeonVoxelWorld_RemoveBlock, "RemoveBlock" }, // 3538834268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonVoxelWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoxelWorld, MeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoxelWorld, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoxelWorld, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_bOptimizeMesh_SetBit(void* Obj)
{
	((ADungeonVoxelWorld*)Obj)->bOptimizeMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_bOptimizeMesh = { "bOptimizeMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonVoxelWorld), &Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_bOptimizeMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeMesh_MetaData), NewProp_bOptimizeMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_CoordMin = { "CoordMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoxelWorld, CoordMin), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordMin_MetaData), NewProp_CoordMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_CoordMax = { "CoordMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonVoxelWorld, CoordMax), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordMax_MetaData), NewProp_CoordMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonVoxelWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_bOptimizeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_CoordMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVoxelWorld_Statics::NewProp_CoordMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoxelWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonVoxelWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoxelWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonVoxelWorld_Statics::ClassParams = {
	&ADungeonVoxelWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeonVoxelWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoxelWorld_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVoxelWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonVoxelWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonVoxelWorld()
{
	if (!Z_Registration_Info_UClass_ADungeonVoxelWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonVoxelWorld.OuterSingleton, Z_Construct_UClass_ADungeonVoxelWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonVoxelWorld.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonVoxelWorld>()
{
	return ADungeonVoxelWorld::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonVoxelWorld);
ADungeonVoxelWorld::~ADungeonVoxelWorld() {}
// End Class ADungeonVoxelWorld

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonVoxelWorld, ADungeonVoxelWorld::StaticClass, TEXT("ADungeonVoxelWorld"), &Z_Registration_Info_UClass_ADungeonVoxelWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonVoxelWorld), 630429164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_1700239185(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
