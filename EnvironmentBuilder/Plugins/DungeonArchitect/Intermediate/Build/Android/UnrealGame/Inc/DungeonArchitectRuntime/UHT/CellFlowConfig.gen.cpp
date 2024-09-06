// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/CellFlow/CellFlowConfig.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/Lib/CellFlowStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowConfig() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowConfigMarkerSettings();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowConfigMarkerSettings_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfigMarkerSettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowMeshProfile();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FCellFlowMeshNoiseSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings;
class UScriptStruct* FCellFlowMeshNoiseSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowMeshNoiseSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowMeshNoiseSettings>()
{
	return FCellFlowMeshNoiseSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseAmplitudeMin_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseAmplitudeMax_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOctaves_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseAmplitudeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseAmplitudeMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOctaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowMeshNoiseSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshNoiseSettings, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseScale_MetaData), NewProp_NoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NoiseAmplitudeMin = { "NoiseAmplitudeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshNoiseSettings, NoiseAmplitudeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseAmplitudeMin_MetaData), NewProp_NoiseAmplitudeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NoiseAmplitudeMax = { "NoiseAmplitudeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshNoiseSettings, NoiseAmplitudeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseAmplitudeMax_MetaData), NewProp_NoiseAmplitudeMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NumOctaves = { "NumOctaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshNoiseSettings, NumOctaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOctaves_MetaData), NewProp_NumOctaves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NoiseAmplitudeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NoiseAmplitudeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewProp_NumOctaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowMeshNoiseSettings",
	Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::PropPointers),
	sizeof(FCellFlowMeshNoiseSettings),
	alignof(FCellFlowMeshNoiseSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings.InnerSingleton;
}
// End ScriptStruct FCellFlowMeshNoiseSettings

// Begin ScriptStruct FCellFlowMeshProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowMeshProfile;
class UScriptStruct* FCellFlowMeshProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowMeshProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowMeshProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowMeshProfile, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowMeshProfile"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowMeshProfile.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowMeshProfile>()
{
	return FCellFlowMeshProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRenderSubDiv_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCollisionSubDiv_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODFactorScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNoise_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSettings_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bApplyNoise" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothNormals_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRenderSubDiv;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCollisionSubDiv;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODFactorScale;
	static void NewProp_bApplyNoise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNoise;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseSettings;
	static void NewProp_bSmoothNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowMeshProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshProfile, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_NumRenderSubDiv = { "NumRenderSubDiv", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshProfile, NumRenderSubDiv), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRenderSubDiv_MetaData), NewProp_NumRenderSubDiv_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_NumCollisionSubDiv = { "NumCollisionSubDiv", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshProfile, NumCollisionSubDiv), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCollisionSubDiv_MetaData), NewProp_NumCollisionSubDiv_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_LODFactorScale = { "LODFactorScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshProfile, LODFactorScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODFactorScale_MetaData), NewProp_LODFactorScale_MetaData) };
void Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bApplyNoise_SetBit(void* Obj)
{
	((FCellFlowMeshProfile*)Obj)->bApplyNoise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bApplyNoise = { "bApplyNoise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowMeshProfile), &Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bApplyNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyNoise_MetaData), NewProp_bApplyNoise_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_NoiseSettings = { "NoiseSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowMeshProfile, NoiseSettings), Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseSettings_MetaData), NewProp_NoiseSettings_MetaData) }; // 1306692654
void Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bSmoothNormals_SetBit(void* Obj)
{
	((FCellFlowMeshProfile*)Obj)->bSmoothNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bSmoothNormals = { "bSmoothNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowMeshProfile), &Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bSmoothNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothNormals_MetaData), NewProp_bSmoothNormals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_NumRenderSubDiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_NumCollisionSubDiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_LODFactorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bApplyNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_NoiseSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewProp_bSmoothNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowMeshProfile",
	Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::PropPointers),
	sizeof(FCellFlowMeshProfile),
	alignof(FCellFlowMeshProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowMeshProfile()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowMeshProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowMeshProfile.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowMeshProfile.InnerSingleton;
}
// End ScriptStruct FCellFlowMeshProfile

// Begin Class UCellFlowConfigMarkerSettings
void UCellFlowConfigMarkerSettings::StaticRegisterNativesUCellFlowConfigMarkerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowConfigMarkerSettings);
UClass* Z_Construct_UClass_UCellFlowConfigMarkerSettings_NoRegister()
{
	return UCellFlowConfigMarkerSettings::StaticClass();
}
struct Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/CellFlow/CellFlowConfig.h" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGridPathMarkers_MetaData[] = {
		{ "Category", "Grid Cell Flow" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPathMarkers_MetaData[] = {
		{ "Category", "Grid Cell Flow" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVoronoiPathMarkers_MetaData[] = {
		{ "Category", "Voronoi Cell Flow" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiPathMarkers_MetaData[] = {
		{ "Category", "Voronoi Cell Flow" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGridPathMarkers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPathMarkers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GridPathMarkers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GridPathMarkers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultVoronoiPathMarkers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoronoiPathMarkers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoronoiPathMarkers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VoronoiPathMarkers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowConfigMarkerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_DefaultGridPathMarkers = { "DefaultGridPathMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfigMarkerSettings, DefaultGridPathMarkers), Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGridPathMarkers_MetaData), NewProp_DefaultGridPathMarkers_MetaData) }; // 2258489525
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_GridPathMarkers_ValueProp = { "GridPathMarkers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCellFlowGridMarkerSetupList, METADATA_PARAMS(0, nullptr) }; // 2258489525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_GridPathMarkers_Key_KeyProp = { "GridPathMarkers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_GridPathMarkers = { "GridPathMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfigMarkerSettings, GridPathMarkers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPathMarkers_MetaData), NewProp_GridPathMarkers_MetaData) }; // 2258489525
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_DefaultVoronoiPathMarkers = { "DefaultVoronoiPathMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfigMarkerSettings, DefaultVoronoiPathMarkers), Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVoronoiPathMarkers_MetaData), NewProp_DefaultVoronoiPathMarkers_MetaData) }; // 2638772449
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_VoronoiPathMarkers_ValueProp = { "VoronoiPathMarkers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCellFlowVoronoiMarkerSetupList, METADATA_PARAMS(0, nullptr) }; // 2638772449
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_VoronoiPathMarkers_Key_KeyProp = { "VoronoiPathMarkers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_VoronoiPathMarkers = { "VoronoiPathMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfigMarkerSettings, VoronoiPathMarkers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoronoiPathMarkers_MetaData), NewProp_VoronoiPathMarkers_MetaData) }; // 2638772449
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_DefaultGridPathMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_GridPathMarkers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_GridPathMarkers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_GridPathMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_DefaultVoronoiPathMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_VoronoiPathMarkers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_VoronoiPathMarkers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::NewProp_VoronoiPathMarkers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfigMarkerSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::ClassParams = {
	&UCellFlowConfigMarkerSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowConfigMarkerSettings()
{
	if (!Z_Registration_Info_UClass_UCellFlowConfigMarkerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowConfigMarkerSettings.OuterSingleton, Z_Construct_UClass_UCellFlowConfigMarkerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowConfigMarkerSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowConfigMarkerSettings>()
{
	return UCellFlowConfigMarkerSettings::StaticClass();
}
UCellFlowConfigMarkerSettings::UCellFlowConfigMarkerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowConfigMarkerSettings);
UCellFlowConfigMarkerSettings::~UCellFlowConfigMarkerSettings() {}
// End Class UCellFlowConfigMarkerSettings

// Begin Class UCellFlowConfig
void UCellFlowConfig::StaticRegisterNativesUCellFlowConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowConfig);
UClass* Z_Construct_UClass_UCellFlowConfig_NoRegister()
{
	return UCellFlowConfig::StaticClass();
}
struct Z_Construct_UClass_UCellFlowConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/CellFlow/CellFlowConfig.h" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellFlow_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerConfig_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateVoronoiBaseMesh_MetaData[] = {
		{ "Category", "Voronoi Meshing" },
		{ "Comment", "/** Should we generate the voronoi base mesh? */" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
		{ "ToolTip", "Should we generate the voronoi base mesh?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVoronoiMeshProfile_MetaData[] = {
		{ "Category", "Voronoi Meshing" },
		{ "Comment", "/** The fallback mesh profile that would be used on chunks */" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
		{ "ToolTip", "The fallback mesh profile that would be used on chunks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiPathMeshProfiles_MetaData[] = {
		{ "Category", "Voronoi Meshing" },
		{ "Comment", "/** Each path could have their own mesh profiles, so you can decorate them differently.  If a path's mesh profile is not provided here, the fallback mesh profile would be used */" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowConfig.h" },
		{ "ToolTip", "Each path could have their own mesh profiles, so you can decorate them differently.  If a path's mesh profile is not provided here, the fallback mesh profile would be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CellFlow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetries;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MarkerConfig;
	static void NewProp_bGenerateVoronoiBaseMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateVoronoiBaseMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultVoronoiMeshProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoronoiPathMeshProfiles_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoronoiPathMeshProfiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VoronoiPathMeshProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_CellFlow = { "CellFlow", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfig, CellFlow), Z_Construct_UClass_UCellFlowAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellFlow_MetaData), NewProp_CellFlow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfig, GridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_MaxRetries = { "MaxRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfig, MaxRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRetries_MetaData), NewProp_MaxRetries_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfig, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverrides_MetaData), NewProp_ParameterOverrides_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_MarkerConfig = { "MarkerConfig", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfig, MarkerConfig), Z_Construct_UClass_UCellFlowConfigMarkerSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerConfig_MetaData), NewProp_MarkerConfig_MetaData) };
void Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_bGenerateVoronoiBaseMesh_SetBit(void* Obj)
{
	((UCellFlowConfig*)Obj)->bGenerateVoronoiBaseMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_bGenerateVoronoiBaseMesh = { "bGenerateVoronoiBaseMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCellFlowConfig), &Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_bGenerateVoronoiBaseMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateVoronoiBaseMesh_MetaData), NewProp_bGenerateVoronoiBaseMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_DefaultVoronoiMeshProfile = { "DefaultVoronoiMeshProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfig, DefaultVoronoiMeshProfile), Z_Construct_UScriptStruct_FCellFlowMeshProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVoronoiMeshProfile_MetaData), NewProp_DefaultVoronoiMeshProfile_MetaData) }; // 426882100
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_VoronoiPathMeshProfiles_ValueProp = { "VoronoiPathMeshProfiles", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCellFlowMeshProfile, METADATA_PARAMS(0, nullptr) }; // 426882100
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_VoronoiPathMeshProfiles_Key_KeyProp = { "VoronoiPathMeshProfiles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_VoronoiPathMeshProfiles = { "VoronoiPathMeshProfiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowConfig, VoronoiPathMeshProfiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoronoiPathMeshProfiles_MetaData), NewProp_VoronoiPathMeshProfiles_MetaData) }; // 426882100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_CellFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_MaxRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_ParameterOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_MarkerConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_bGenerateVoronoiBaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_DefaultVoronoiMeshProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_VoronoiPathMeshProfiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_VoronoiPathMeshProfiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowConfig_Statics::NewProp_VoronoiPathMeshProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowConfig_Statics::ClassParams = {
	&UCellFlowConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowConfig()
{
	if (!Z_Registration_Info_UClass_UCellFlowConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowConfig.OuterSingleton, Z_Construct_UClass_UCellFlowConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowConfig>()
{
	return UCellFlowConfig::StaticClass();
}
UCellFlowConfig::UCellFlowConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowConfig);
UCellFlowConfig::~UCellFlowConfig() {}
// End Class UCellFlowConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCellFlowMeshNoiseSettings::StaticStruct, Z_Construct_UScriptStruct_FCellFlowMeshNoiseSettings_Statics::NewStructOps, TEXT("CellFlowMeshNoiseSettings"), &Z_Registration_Info_UScriptStruct_CellFlowMeshNoiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowMeshNoiseSettings), 1306692654U) },
		{ FCellFlowMeshProfile::StaticStruct, Z_Construct_UScriptStruct_FCellFlowMeshProfile_Statics::NewStructOps, TEXT("CellFlowMeshProfile"), &Z_Registration_Info_UScriptStruct_CellFlowMeshProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowMeshProfile), 426882100U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowConfigMarkerSettings, UCellFlowConfigMarkerSettings::StaticClass, TEXT("UCellFlowConfigMarkerSettings"), &Z_Registration_Info_UClass_UCellFlowConfigMarkerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowConfigMarkerSettings), 74473046U) },
		{ Z_Construct_UClass_UCellFlowConfig, UCellFlowConfig::StaticClass, TEXT("UCellFlowConfig"), &Z_Registration_Info_UClass_UCellFlowConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowConfig), 1694200448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowConfig_h_3478607354(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
