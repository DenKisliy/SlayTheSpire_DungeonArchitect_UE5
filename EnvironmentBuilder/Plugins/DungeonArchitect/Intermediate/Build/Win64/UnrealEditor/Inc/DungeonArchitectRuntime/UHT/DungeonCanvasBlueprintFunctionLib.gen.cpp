// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/DungeonLayoutData.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvas.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasBlueprintFunctionLib() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasDrawContext();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonCanvasBlueprintFunctionLib Function BlurTexture3x
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventBlurTexture3x_Parms
	{
		UCanvasRenderTarget2D* SourceTexture;
		UCanvasRenderTarget2D* DestinationTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventBlurTexture3x_Parms, SourceTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::NewProp_DestinationTexture = { "DestinationTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventBlurTexture3x_Parms, DestinationTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::NewProp_SourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::NewProp_DestinationTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "BlurTexture3x", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::DungeonCanvasBlueprintFunctionLib_eventBlurTexture3x_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::DungeonCanvasBlueprintFunctionLib_eventBlurTexture3x_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execBlurTexture3x)
{
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_SourceTexture);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_DestinationTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::BlurTexture3x(Z_Param_SourceTexture,Z_Param_DestinationTexture);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function BlurTexture3x

// Begin Class UDungeonCanvasBlueprintFunctionLib Function BlurTexture5x
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventBlurTexture5x_Parms
	{
		UCanvasRenderTarget2D* SourceTexture;
		UCanvasRenderTarget2D* DestinationTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventBlurTexture5x_Parms, SourceTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::NewProp_DestinationTexture = { "DestinationTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventBlurTexture5x_Parms, DestinationTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::NewProp_SourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::NewProp_DestinationTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "BlurTexture5x", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::DungeonCanvasBlueprintFunctionLib_eventBlurTexture5x_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::DungeonCanvasBlueprintFunctionLib_eventBlurTexture5x_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execBlurTexture5x)
{
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_SourceTexture);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_DestinationTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::BlurTexture5x(Z_Param_SourceTexture,Z_Param_DestinationTexture);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function BlurTexture5x

// Begin Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawLayoutIcons
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawLayoutIcons_Parms
	{
		FDungeonCanvasDrawContext DrawContext;
		FDungeonLayoutData DungeonLayout;
		TArray<FDungeonCanvasOverlayIcon> OverlayIcons;
		float OpacityMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "CPP_Default_OpacityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLayout_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayIcons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLayout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayIcons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayIcons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_DrawContext = { "DrawContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawLayoutIcons_Parms, DrawContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContext_MetaData), NewProp_DrawContext_MetaData) }; // 436659647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_DungeonLayout = { "DungeonLayout", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawLayoutIcons_Parms, DungeonLayout), Z_Construct_UScriptStruct_FDungeonLayoutData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLayout_MetaData), NewProp_DungeonLayout_MetaData) }; // 444206174
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_OverlayIcons_Inner = { "OverlayIcons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon, METADATA_PARAMS(0, nullptr) }; // 2305651181
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_OverlayIcons = { "OverlayIcons", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawLayoutIcons_Parms, OverlayIcons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayIcons_MetaData), NewProp_OverlayIcons_MetaData) }; // 2305651181
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_OpacityMultiplier = { "OpacityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawLayoutIcons_Parms, OpacityMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_DrawContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_DungeonLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_OverlayIcons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_OverlayIcons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::NewProp_OpacityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "DungeonCanvasDrawLayoutIcons", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawLayoutIcons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawLayoutIcons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawLayoutIcons)
{
	P_GET_STRUCT_REF(FDungeonCanvasDrawContext,Z_Param_Out_DrawContext);
	P_GET_STRUCT_REF(FDungeonLayoutData,Z_Param_Out_DungeonLayout);
	P_GET_TARRAY_REF(FDungeonCanvasOverlayIcon,Z_Param_Out_OverlayIcons);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OpacityMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::DungeonCanvasDrawLayoutIcons(Z_Param_Out_DrawContext,Z_Param_Out_DungeonLayout,Z_Param_Out_OverlayIcons,Z_Param_OpacityMultiplier);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawLayoutIcons

// Begin Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawMaterial
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawMaterial_Parms
	{
		FDungeonCanvasDrawContext DrawContext;
		UMaterialInterface* Material;
		FTransform WorldBoundsTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBoundsTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBoundsTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::NewProp_DrawContext = { "DrawContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawMaterial_Parms, DrawContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContext_MetaData), NewProp_DrawContext_MetaData) }; // 436659647
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::NewProp_WorldBoundsTransform = { "WorldBoundsTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawMaterial_Parms, WorldBoundsTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBoundsTransform_MetaData), NewProp_WorldBoundsTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::NewProp_DrawContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::NewProp_WorldBoundsTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "DungeonCanvasDrawMaterial", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawMaterial)
{
	P_GET_STRUCT_REF(FDungeonCanvasDrawContext,Z_Param_Out_DrawContext);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldBoundsTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::DungeonCanvasDrawMaterial(Z_Param_Out_DrawContext,Z_Param_Material,Z_Param_Out_WorldBoundsTransform);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawMaterial

// Begin Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawStairIcons
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawStairIcons_Parms
	{
		FDungeonCanvasDrawContext DrawContext;
		FDungeonLayoutData DungeonLayout;
		FDungeonCanvasOverlayInternalIcon StairIcon;
		float OpacityMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "CPP_Default_OpacityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLayout_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairIcon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLayout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StairIcon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_DrawContext = { "DrawContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawStairIcons_Parms, DrawContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContext_MetaData), NewProp_DrawContext_MetaData) }; // 436659647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_DungeonLayout = { "DungeonLayout", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawStairIcons_Parms, DungeonLayout), Z_Construct_UScriptStruct_FDungeonLayoutData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLayout_MetaData), NewProp_DungeonLayout_MetaData) }; // 444206174
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_StairIcon = { "StairIcon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawStairIcons_Parms, StairIcon), Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairIcon_MetaData), NewProp_StairIcon_MetaData) }; // 3823980822
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_OpacityMultiplier = { "OpacityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawStairIcons_Parms, OpacityMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_DrawContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_DungeonLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_StairIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::NewProp_OpacityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "DungeonCanvasDrawStairIcons", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawStairIcons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawStairIcons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawStairIcons)
{
	P_GET_STRUCT_REF(FDungeonCanvasDrawContext,Z_Param_Out_DrawContext);
	P_GET_STRUCT_REF(FDungeonLayoutData,Z_Param_Out_DungeonLayout);
	P_GET_STRUCT_REF(FDungeonCanvasOverlayInternalIcon,Z_Param_Out_StairIcon);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OpacityMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::DungeonCanvasDrawStairIcons(Z_Param_Out_DrawContext,Z_Param_Out_DungeonLayout,Z_Param_Out_StairIcon,Z_Param_OpacityMultiplier);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawStairIcons

// Begin Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawTrackedActorIcons
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawTrackedActorIcons_Parms
	{
		FDungeonCanvasDrawContext DrawContext;
		TArray<FDungeonCanvasOverlayIcon> OverlayIcons;
		float OpacityMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "CPP_Default_OpacityMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayIcons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayIcons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayIcons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_DrawContext = { "DrawContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawTrackedActorIcons_Parms, DrawContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContext_MetaData), NewProp_DrawContext_MetaData) }; // 436659647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_OverlayIcons_Inner = { "OverlayIcons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon, METADATA_PARAMS(0, nullptr) }; // 2305651181
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_OverlayIcons = { "OverlayIcons", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawTrackedActorIcons_Parms, OverlayIcons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayIcons_MetaData), NewProp_OverlayIcons_MetaData) }; // 2305651181
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_OpacityMultiplier = { "OpacityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawTrackedActorIcons_Parms, OpacityMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_DrawContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_OverlayIcons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_OverlayIcons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::NewProp_OpacityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "DungeonCanvasDrawTrackedActorIcons", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawTrackedActorIcons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::DungeonCanvasBlueprintFunctionLib_eventDungeonCanvasDrawTrackedActorIcons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawTrackedActorIcons)
{
	P_GET_STRUCT_REF(FDungeonCanvasDrawContext,Z_Param_Out_DrawContext);
	P_GET_TARRAY_REF(FDungeonCanvasOverlayIcon,Z_Param_Out_OverlayIcons);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OpacityMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::DungeonCanvasDrawTrackedActorIcons(Z_Param_Out_DrawContext,Z_Param_Out_OverlayIcons,Z_Param_OpacityMultiplier);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function DungeonCanvasDrawTrackedActorIcons

// Begin Class UDungeonCanvasBlueprintFunctionLib Function GenerateSDF
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventGenerateSDF_Parms
	{
		UTexture* FillTexture;
		UTexture* BorderTexture;
		UTexture* DynamicOcclusionTexture;
		UCanvasRenderTarget2D* SDFTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BorderTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicOcclusionTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDFTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_FillTexture = { "FillTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateSDF_Parms, FillTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_BorderTexture = { "BorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateSDF_Parms, BorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_DynamicOcclusionTexture = { "DynamicOcclusionTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateSDF_Parms, DynamicOcclusionTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_SDFTexture = { "SDFTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateSDF_Parms, SDFTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_FillTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_BorderTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_DynamicOcclusionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::NewProp_SDFTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "GenerateSDF", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::DungeonCanvasBlueprintFunctionLib_eventGenerateSDF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::DungeonCanvasBlueprintFunctionLib_eventGenerateSDF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execGenerateSDF)
{
	P_GET_OBJECT(UTexture,Z_Param_FillTexture);
	P_GET_OBJECT(UTexture,Z_Param_BorderTexture);
	P_GET_OBJECT(UTexture,Z_Param_DynamicOcclusionTexture);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_SDFTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::GenerateSDF(Z_Param_FillTexture,Z_Param_BorderTexture,Z_Param_DynamicOcclusionTexture,Z_Param_SDFTexture);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function GenerateSDF

// Begin Class UDungeonCanvasBlueprintFunctionLib Function GenerateVoronoiSdfEffect
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms
	{
		UTexture* SDFTexture;
		UTexture* BorderTexture;
		UCanvasRenderTarget2D* TargetEffectTexture;
		float ScaleMin;
		float ScaleMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "CPP_Default_ScaleMax", "20.000000" },
		{ "CPP_Default_ScaleMin", "5.000000" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDFTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BorderTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEffectTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_SDFTexture = { "SDFTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms, SDFTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_BorderTexture = { "BorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms, BorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_TargetEffectTexture = { "TargetEffectTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms, TargetEffectTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_ScaleMin = { "ScaleMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms, ScaleMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_ScaleMax = { "ScaleMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms, ScaleMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_SDFTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_BorderTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_TargetEffectTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_ScaleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::NewProp_ScaleMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "GenerateVoronoiSdfEffect", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::DungeonCanvasBlueprintFunctionLib_eventGenerateVoronoiSdfEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execGenerateVoronoiSdfEffect)
{
	P_GET_OBJECT(UTexture,Z_Param_SDFTexture);
	P_GET_OBJECT(UTexture,Z_Param_BorderTexture);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_TargetEffectTexture);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::GenerateVoronoiSdfEffect(Z_Param_SDFTexture,Z_Param_BorderTexture,Z_Param_TargetEffectTexture,Z_Param_ScaleMin,Z_Param_ScaleMax);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function GenerateVoronoiSdfEffect

// Begin Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialColorParameter
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialColorParameter_Parms
	{
		UMaterialInstanceDynamic* Material;
		FName ParamName;
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialColorParameter_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialColorParameter_Parms, ParamName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialColorParameter_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "SetCanvasMaterialColorParameter", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialColorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialColorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialColorParameter)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::SetCanvasMaterialColorParameter(Z_Param_Material,Z_Param_ParamName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialColorParameter

// Begin Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialScalarParameter
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialScalarParameter_Parms
	{
		UMaterialInstanceDynamic* Material;
		FName ParamName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialScalarParameter_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialScalarParameter_Parms, ParamName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialScalarParameter_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "SetCanvasMaterialScalarParameter", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialScalarParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialScalarParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialScalarParameter)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::SetCanvasMaterialScalarParameter(Z_Param_Material,Z_Param_ParamName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialScalarParameter

// Begin Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialTextureParameter
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialTextureParameter_Parms
	{
		UMaterialInstanceDynamic* Material;
		FName ParamName;
		UTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialTextureParameter_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialTextureParameter_Parms, ParamName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialTextureParameter_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "SetCanvasMaterialTextureParameter", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialTextureParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialTextureParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialTextureParameter)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::SetCanvasMaterialTextureParameter(Z_Param_Material,Z_Param_ParamName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialTextureParameter

// Begin Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialVectorParameter
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialVectorParameter_Parms
	{
		UMaterialInstanceDynamic* Material;
		FName ParamName;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialVectorParameter_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialVectorParameter_Parms, ParamName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialVectorParameter_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "SetCanvasMaterialVectorParameter", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialVectorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialVectorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialVectorParameter)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::SetCanvasMaterialVectorParameter(Z_Param_Material,Z_Param_ParamName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialVectorParameter

// Begin Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialWorldBounds
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialWorldBounds_Parms
	{
		UMaterialInstanceDynamic* Material;
		FTransform WorldBoundsTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBoundsTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBoundsTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialWorldBounds_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::NewProp_WorldBoundsTransform = { "WorldBoundsTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialWorldBounds_Parms, WorldBoundsTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBoundsTransform_MetaData), NewProp_WorldBoundsTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::NewProp_WorldBoundsTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "SetCanvasMaterialWorldBounds", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialWorldBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::DungeonCanvasBlueprintFunctionLib_eventSetCanvasMaterialWorldBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialWorldBounds)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldBoundsTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::SetCanvasMaterialWorldBounds(Z_Param_Material,Z_Param_Out_WorldBoundsTransform);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function SetCanvasMaterialWorldBounds

// Begin Class UDungeonCanvasBlueprintFunctionLib Function UpdateDynamicOcclusions
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventUpdateDynamicOcclusions_Parms
	{
		FDungeonCanvasDrawContext DrawContext;
		UCanvasRenderTarget2D* DynamicOcclusionTexture;
		FTransform WorldBoundsTransform;
		TArray<FDungeonCanvasOverlayIcon> OverlayIcons;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBoundsTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayIcons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicOcclusionTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBoundsTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayIcons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayIcons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_DrawContext = { "DrawContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventUpdateDynamicOcclusions_Parms, DrawContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContext_MetaData), NewProp_DrawContext_MetaData) }; // 436659647
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_DynamicOcclusionTexture = { "DynamicOcclusionTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventUpdateDynamicOcclusions_Parms, DynamicOcclusionTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_WorldBoundsTransform = { "WorldBoundsTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventUpdateDynamicOcclusions_Parms, WorldBoundsTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBoundsTransform_MetaData), NewProp_WorldBoundsTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_OverlayIcons_Inner = { "OverlayIcons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon, METADATA_PARAMS(0, nullptr) }; // 2305651181
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_OverlayIcons = { "OverlayIcons", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventUpdateDynamicOcclusions_Parms, OverlayIcons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayIcons_MetaData), NewProp_OverlayIcons_MetaData) }; // 2305651181
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_DrawContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_DynamicOcclusionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_WorldBoundsTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_OverlayIcons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::NewProp_OverlayIcons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "UpdateDynamicOcclusions", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::DungeonCanvasBlueprintFunctionLib_eventUpdateDynamicOcclusions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::DungeonCanvasBlueprintFunctionLib_eventUpdateDynamicOcclusions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execUpdateDynamicOcclusions)
{
	P_GET_STRUCT_REF(FDungeonCanvasDrawContext,Z_Param_Out_DrawContext);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_DynamicOcclusionTexture);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldBoundsTransform);
	P_GET_TARRAY_REF(FDungeonCanvasOverlayIcon,Z_Param_Out_OverlayIcons);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::UpdateDynamicOcclusions(Z_Param_Out_DrawContext,Z_Param_DynamicOcclusionTexture,Z_Param_Out_WorldBoundsTransform,Z_Param_Out_OverlayIcons);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function UpdateDynamicOcclusions

// Begin Class UDungeonCanvasBlueprintFunctionLib Function UpdateFogOfWarTexture
struct Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics
{
	struct DungeonCanvasBlueprintFunctionLib_eventUpdateFogOfWarTexture_Parms
	{
		FDungeonCanvasDrawContext DrawContext;
		UTexture* SDFTexture;
		FTransform WorldBoundsTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBoundsTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDFTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBoundsTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::NewProp_DrawContext = { "DrawContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventUpdateFogOfWarTexture_Parms, DrawContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContext_MetaData), NewProp_DrawContext_MetaData) }; // 436659647
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::NewProp_SDFTexture = { "SDFTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventUpdateFogOfWarTexture_Parms, SDFTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::NewProp_WorldBoundsTransform = { "WorldBoundsTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasBlueprintFunctionLib_eventUpdateFogOfWarTexture_Parms, WorldBoundsTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBoundsTransform_MetaData), NewProp_WorldBoundsTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::NewProp_DrawContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::NewProp_SDFTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::NewProp_WorldBoundsTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, nullptr, "UpdateFogOfWarTexture", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::DungeonCanvasBlueprintFunctionLib_eventUpdateFogOfWarTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::DungeonCanvasBlueprintFunctionLib_eventUpdateFogOfWarTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasBlueprintFunctionLib::execUpdateFogOfWarTexture)
{
	P_GET_STRUCT_REF(FDungeonCanvasDrawContext,Z_Param_Out_DrawContext);
	P_GET_OBJECT(UTexture,Z_Param_SDFTexture);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldBoundsTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonCanvasBlueprintFunctionLib::UpdateFogOfWarTexture(Z_Param_Out_DrawContext,Z_Param_SDFTexture,Z_Param_Out_WorldBoundsTransform);
	P_NATIVE_END;
}
// End Class UDungeonCanvasBlueprintFunctionLib Function UpdateFogOfWarTexture

// Begin Class UDungeonCanvasBlueprintFunctionLib
void UDungeonCanvasBlueprintFunctionLib::StaticRegisterNativesUDungeonCanvasBlueprintFunctionLib()
{
	UClass* Class = UDungeonCanvasBlueprintFunctionLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BlurTexture3x", &UDungeonCanvasBlueprintFunctionLib::execBlurTexture3x },
		{ "BlurTexture5x", &UDungeonCanvasBlueprintFunctionLib::execBlurTexture5x },
		{ "DungeonCanvasDrawLayoutIcons", &UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawLayoutIcons },
		{ "DungeonCanvasDrawMaterial", &UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawMaterial },
		{ "DungeonCanvasDrawStairIcons", &UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawStairIcons },
		{ "DungeonCanvasDrawTrackedActorIcons", &UDungeonCanvasBlueprintFunctionLib::execDungeonCanvasDrawTrackedActorIcons },
		{ "GenerateSDF", &UDungeonCanvasBlueprintFunctionLib::execGenerateSDF },
		{ "GenerateVoronoiSdfEffect", &UDungeonCanvasBlueprintFunctionLib::execGenerateVoronoiSdfEffect },
		{ "SetCanvasMaterialColorParameter", &UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialColorParameter },
		{ "SetCanvasMaterialScalarParameter", &UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialScalarParameter },
		{ "SetCanvasMaterialTextureParameter", &UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialTextureParameter },
		{ "SetCanvasMaterialVectorParameter", &UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialVectorParameter },
		{ "SetCanvasMaterialWorldBounds", &UDungeonCanvasBlueprintFunctionLib::execSetCanvasMaterialWorldBounds },
		{ "UpdateDynamicOcclusions", &UDungeonCanvasBlueprintFunctionLib::execUpdateDynamicOcclusions },
		{ "UpdateFogOfWarTexture", &UDungeonCanvasBlueprintFunctionLib::execUpdateFogOfWarTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasBlueprintFunctionLib);
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_NoRegister()
{
	return UDungeonCanvasBlueprintFunctionLib::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture3x, "BlurTexture3x" }, // 2116135274
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_BlurTexture5x, "BlurTexture5x" }, // 3046859982
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawLayoutIcons, "DungeonCanvasDrawLayoutIcons" }, // 1095393613
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawMaterial, "DungeonCanvasDrawMaterial" }, // 1316784878
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawStairIcons, "DungeonCanvasDrawStairIcons" }, // 3026275848
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_DungeonCanvasDrawTrackedActorIcons, "DungeonCanvasDrawTrackedActorIcons" }, // 3456056169
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateSDF, "GenerateSDF" }, // 2740251900
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_GenerateVoronoiSdfEffect, "GenerateVoronoiSdfEffect" }, // 2427156469
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialColorParameter, "SetCanvasMaterialColorParameter" }, // 893836145
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialScalarParameter, "SetCanvasMaterialScalarParameter" }, // 3832982601
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialTextureParameter, "SetCanvasMaterialTextureParameter" }, // 2784142918
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialVectorParameter, "SetCanvasMaterialVectorParameter" }, // 3480878414
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_SetCanvasMaterialWorldBounds, "SetCanvasMaterialWorldBounds" }, // 3000502758
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateDynamicOcclusions, "UpdateDynamicOcclusions" }, // 2504500142
		{ &Z_Construct_UFunction_UDungeonCanvasBlueprintFunctionLib_UpdateFogOfWarTexture, "UpdateFogOfWarTexture" }, // 1448821233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasBlueprintFunctionLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics::ClassParams = {
	&UDungeonCanvasBlueprintFunctionLib::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasBlueprintFunctionLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasBlueprintFunctionLib.OuterSingleton, Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasBlueprintFunctionLib.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasBlueprintFunctionLib>()
{
	return UDungeonCanvasBlueprintFunctionLib::StaticClass();
}
UDungeonCanvasBlueprintFunctionLib::UDungeonCanvasBlueprintFunctionLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasBlueprintFunctionLib);
UDungeonCanvasBlueprintFunctionLib::~UDungeonCanvasBlueprintFunctionLib() {}
// End Class UDungeonCanvasBlueprintFunctionLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib, UDungeonCanvasBlueprintFunctionLib::StaticClass, TEXT("UDungeonCanvasBlueprintFunctionLib"), &Z_Registration_Info_UClass_UDungeonCanvasBlueprintFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasBlueprintFunctionLib), 3467330741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_387347039(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
