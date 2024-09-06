// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Minimap/DungeonMinimap2D.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMinimap2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMinimap2D();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMinimap2D_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMinimapBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMinimapBase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasTrackedObject_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonMinimapBase
void ADungeonMinimapBase::StaticRegisterNativesADungeonMinimapBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonMinimapBase);
UClass* Z_Construct_UClass_ADungeonMinimapBase_NoRegister()
{
	return ADungeonMinimapBase::StaticClass();
}
struct Z_Construct_UClass_ADungeonMinimapBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////// 2D Minimap ////////////////////////\n" },
		{ "IncludePath", "Frameworks/Minimap/DungeonMinimap2D.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
		{ "ToolTip", "2D Minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTracking_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToScreen_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFogOfWar_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarTextureSize_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarTrackingItem_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarExploreTexture_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarVisibilityDistance_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicTracking_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicTracking;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToScreen;
	static void NewProp_bEnableFogOfWar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFogOfWar;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FogOfWarTextureSize;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FogOfWarTrackingItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogOfWarExploreTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogOfWarVisibilityDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogOfWarTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonMinimapBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_DynamicTracking_Inner = { "DynamicTracking", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonCanvasTrackedObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_DynamicTracking = { "DynamicTracking", nullptr, (EPropertyFlags)0x001000800002201d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimapBase, DynamicTracking), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicTracking_MetaData), NewProp_DynamicTracking_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_WorldToScreen = { "WorldToScreen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimapBase, WorldToScreen), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToScreen_MetaData), NewProp_WorldToScreen_MetaData) };
void Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_bEnableFogOfWar_SetBit(void* Obj)
{
	((ADungeonMinimapBase*)Obj)->bEnableFogOfWar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_bEnableFogOfWar = { "bEnableFogOfWar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonMinimapBase), &Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_bEnableFogOfWar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFogOfWar_MetaData), NewProp_bEnableFogOfWar_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarTextureSize = { "FogOfWarTextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimapBase, FogOfWarTextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarTextureSize_MetaData), NewProp_FogOfWarTextureSize_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarTrackingItem = { "FogOfWarTrackingItem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimapBase, FogOfWarTrackingItem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarTrackingItem_MetaData), NewProp_FogOfWarTrackingItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarExploreTexture = { "FogOfWarExploreTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimapBase, FogOfWarExploreTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarExploreTexture_MetaData), NewProp_FogOfWarExploreTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarVisibilityDistance = { "FogOfWarVisibilityDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimapBase, FogOfWarVisibilityDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarVisibilityDistance_MetaData), NewProp_FogOfWarVisibilityDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarTexture = { "FogOfWarTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimapBase, FogOfWarTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarTexture_MetaData), NewProp_FogOfWarTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonMinimapBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_DynamicTracking_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_DynamicTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_WorldToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_bEnableFogOfWar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarTrackingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarExploreTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarVisibilityDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimapBase_Statics::NewProp_FogOfWarTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimapBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonMinimapBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimapBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonMinimapBase_Statics::ClassParams = {
	&ADungeonMinimapBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonMinimapBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimapBase_Statics::PropPointers),
	0,
	0x049000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimapBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonMinimapBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonMinimapBase()
{
	if (!Z_Registration_Info_UClass_ADungeonMinimapBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonMinimapBase.OuterSingleton, Z_Construct_UClass_ADungeonMinimapBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonMinimapBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonMinimapBase>()
{
	return ADungeonMinimapBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonMinimapBase);
ADungeonMinimapBase::~ADungeonMinimapBase() {}
// End Class ADungeonMinimapBase

// Begin Class ADungeonMinimap2D Function BuildLayout
struct Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics
{
	struct DungeonMinimap2D_eventBuildLayout_Parms
	{
		ADungeon* Dungeon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMinimap2D_eventBuildLayout_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMinimap2D, nullptr, "BuildLayout", nullptr, nullptr, Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::DungeonMinimap2D_eventBuildLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::DungeonMinimap2D_eventBuildLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonMinimap2D::execBuildLayout)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildLayout(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class ADungeonMinimap2D Function BuildLayout

// Begin Class ADungeonMinimap2D Function CreateMaterialInstance
struct Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics
{
	struct DungeonMinimap2D_eventCreateMaterialInstance_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMinimap2D_eventCreateMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMinimap2D, nullptr, "CreateMaterialInstance", nullptr, nullptr, Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::DungeonMinimap2D_eventCreateMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::DungeonMinimap2D_eventCreateMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonMinimap2D::execCreateMaterialInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->CreateMaterialInstance();
	P_NATIVE_END;
}
// End Class ADungeonMinimap2D Function CreateMaterialInstance

// Begin Class ADungeonMinimap2D Function CreateMaterialInstanceFromTemplate
struct Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics
{
	struct DungeonMinimap2D_eventCreateMaterialInstanceFromTemplate_Parms
	{
		UMaterialInterface* InMaterialTemplate;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::NewProp_InMaterialTemplate = { "InMaterialTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMinimap2D_eventCreateMaterialInstanceFromTemplate_Parms, InMaterialTemplate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMinimap2D_eventCreateMaterialInstanceFromTemplate_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::NewProp_InMaterialTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMinimap2D, nullptr, "CreateMaterialInstanceFromTemplate", nullptr, nullptr, Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::DungeonMinimap2D_eventCreateMaterialInstanceFromTemplate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::DungeonMinimap2D_eventCreateMaterialInstanceFromTemplate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonMinimap2D::execCreateMaterialInstanceFromTemplate)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialTemplate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->CreateMaterialInstanceFromTemplate(Z_Param_InMaterialTemplate);
	P_NATIVE_END;
}
// End Class ADungeonMinimap2D Function CreateMaterialInstanceFromTemplate

// Begin Class ADungeonMinimap2D Function UpdateMaterial
struct Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics
{
	struct DungeonMinimap2D_eventUpdateMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMinimap2D_eventUpdateMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMinimap2D, nullptr, "UpdateMaterial", nullptr, nullptr, Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::DungeonMinimap2D_eventUpdateMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::DungeonMinimap2D_eventUpdateMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonMinimap2D::execUpdateMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class ADungeonMinimap2D Function UpdateMaterial

// Begin Class ADungeonMinimap2D
void ADungeonMinimap2D::StaticRegisterNativesADungeonMinimap2D()
{
	UClass* Class = ADungeonMinimap2D::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildLayout", &ADungeonMinimap2D::execBuildLayout },
		{ "CreateMaterialInstance", &ADungeonMinimap2D::execCreateMaterialInstance },
		{ "CreateMaterialInstanceFromTemplate", &ADungeonMinimap2D::execCreateMaterialInstanceFromTemplate },
		{ "UpdateMaterial", &ADungeonMinimap2D::execUpdateMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonMinimap2D);
UClass* Z_Construct_UClass_ADungeonMinimap2D_NoRegister()
{
	return ADungeonMinimap2D::StaticClass();
}
struct Z_Construct_UClass_ADungeonMinimap2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Minimap/DungeonMinimap2D.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineThickness_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorThickness_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayIcons_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTemplate_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[] = {
		{ "Category", "MiniMap Blur Layer" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurIterations_MetaData[] = {
		{ "Category", "MiniMap Blur Layer" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticOverlayTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicOverlayTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Minimap/DungeonMinimap2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayIcons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayIcons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialTemplate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlurIterations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticOverlayTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicOverlayTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonMinimap2D_BuildLayout, "BuildLayout" }, // 2262771692
		{ &Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstance, "CreateMaterialInstance" }, // 836675398
		{ &Z_Construct_UFunction_ADungeonMinimap2D_CreateMaterialInstanceFromTemplate, "CreateMaterialInstanceFromTemplate" }, // 3773378651
		{ &Z_Construct_UFunction_ADungeonMinimap2D_UpdateMaterial, "UpdateMaterial" }, // 103065106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonMinimap2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, TextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, OutlineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineThickness_MetaData), NewProp_OutlineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_DoorThickness = { "DoorThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, DoorThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorThickness_MetaData), NewProp_DoorThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_OverlayIcons_Inner = { "OverlayIcons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon, METADATA_PARAMS(0, nullptr) }; // 657378812
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_OverlayIcons = { "OverlayIcons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, OverlayIcons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayIcons_MetaData), NewProp_OverlayIcons_MetaData) }; // 657378812
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_MaterialTemplate = { "MaterialTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, MaterialTemplate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTemplate_MetaData), NewProp_MaterialTemplate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_BlurRadius = { "BlurRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, BlurRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurRadius_MetaData), NewProp_BlurRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_BlurIterations = { "BlurIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, BlurIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurIterations_MetaData), NewProp_BlurIterations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, MaskTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskTexture_MetaData), NewProp_MaskTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_StaticOverlayTexture = { "StaticOverlayTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, StaticOverlayTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticOverlayTexture_MetaData), NewProp_StaticOverlayTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_DynamicOverlayTexture = { "DynamicOverlayTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, DynamicOverlayTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicOverlayTexture_MetaData), NewProp_DynamicOverlayTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonMinimap2D, MaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonMinimap2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_OutlineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_DoorThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_OverlayIcons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_OverlayIcons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_MaterialTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_BlurRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_BlurIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_MaskTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_StaticOverlayTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_DynamicOverlayTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMinimap2D_Statics::NewProp_MaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimap2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonMinimap2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonMinimapBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimap2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonMinimap2D_Statics::ClassParams = {
	&ADungeonMinimap2D::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeonMinimap2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimap2D_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMinimap2D_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonMinimap2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonMinimap2D()
{
	if (!Z_Registration_Info_UClass_ADungeonMinimap2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonMinimap2D.OuterSingleton, Z_Construct_UClass_ADungeonMinimap2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonMinimap2D.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonMinimap2D>()
{
	return ADungeonMinimap2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonMinimap2D);
ADungeonMinimap2D::~ADungeonMinimap2D() {}
// End Class ADungeonMinimap2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonMinimapBase, ADungeonMinimapBase::StaticClass, TEXT("ADungeonMinimapBase"), &Z_Registration_Info_UClass_ADungeonMinimapBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonMinimapBase), 568227321U) },
		{ Z_Construct_UClass_ADungeonMinimap2D, ADungeonMinimap2D::StaticClass, TEXT("ADungeonMinimap2D"), &Z_Registration_Info_UClass_ADungeonMinimap2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonMinimap2D), 2815249812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_4010234483(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
