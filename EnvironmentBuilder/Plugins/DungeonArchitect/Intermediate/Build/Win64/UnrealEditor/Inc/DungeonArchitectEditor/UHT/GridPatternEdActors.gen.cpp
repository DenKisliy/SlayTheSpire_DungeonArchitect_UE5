// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPatternEdActors() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AGridPatternEdCursorActor();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AGridPatternEdCursorActor_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AGridPatternEdGroundActor();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AGridPatternEdGroundActor_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AGridPatternEdRuleActor();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AGridPatternEdRuleActor_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridPatternEdGroundItem();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridPatternEdGroundItem_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPatternRule_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UGridPatternEdGroundItem
void UGridPatternEdGroundItem::StaticRegisterNativesUGridPatternEdGroundItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridPatternEdGroundItem);
UClass* Z_Construct_UClass_UGridPatternEdGroundItem_NoRegister()
{
	return UGridPatternEdGroundItem::StaticClass();
}
struct Z_Construct_UClass_UGridPatternEdGroundItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverAnimation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPatternEdGroundItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPatternEdGroundItem, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_HoverAnimation = { "HoverAnimation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPatternEdGroundItem, HoverAnimation), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverAnimation_MetaData), NewProp_HoverAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPatternEdGroundItem, Coord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coord_MetaData), NewProp_Coord_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPatternEdGroundItem, ItemType), Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 2458490519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPatternEdGroundItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_HoverAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_Coord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPatternEdGroundItem_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPatternEdGroundItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridPatternEdGroundItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPatternEdGroundItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridPatternEdGroundItem_Statics::ClassParams = {
	&UGridPatternEdGroundItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridPatternEdGroundItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridPatternEdGroundItem_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPatternEdGroundItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridPatternEdGroundItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridPatternEdGroundItem()
{
	if (!Z_Registration_Info_UClass_UGridPatternEdGroundItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridPatternEdGroundItem.OuterSingleton, Z_Construct_UClass_UGridPatternEdGroundItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridPatternEdGroundItem.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridPatternEdGroundItem>()
{
	return UGridPatternEdGroundItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPatternEdGroundItem);
UGridPatternEdGroundItem::~UGridPatternEdGroundItem() {}
// End Class UGridPatternEdGroundItem

// Begin Class AGridPatternEdCursorActor
void AGridPatternEdCursorActor::StaticRegisterNativesAGridPatternEdCursorActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridPatternEdCursorActor);
UClass* Z_Construct_UClass_AGridPatternEdCursorActor_NoRegister()
{
	return AGridPatternEdCursorActor::StaticClass();
}
struct Z_Construct_UClass_AGridPatternEdCursorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPatternEdCursorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdCursorActor_Statics::NewProp_CursorMesh = { "CursorMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdCursorActor, CursorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorMesh_MetaData), NewProp_CursorMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridPatternEdCursorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdCursorActor_Statics::NewProp_CursorMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdCursorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridPatternEdCursorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdCursorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridPatternEdCursorActor_Statics::ClassParams = {
	&AGridPatternEdCursorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGridPatternEdCursorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdCursorActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdCursorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridPatternEdCursorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridPatternEdCursorActor()
{
	if (!Z_Registration_Info_UClass_AGridPatternEdCursorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridPatternEdCursorActor.OuterSingleton, Z_Construct_UClass_AGridPatternEdCursorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridPatternEdCursorActor.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<AGridPatternEdCursorActor>()
{
	return AGridPatternEdCursorActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPatternEdCursorActor);
AGridPatternEdCursorActor::~AGridPatternEdCursorActor() {}
// End Class AGridPatternEdCursorActor

// Begin Class AGridPatternEdRuleActor Function RenderCanvas
struct Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics
{
	struct GridPatternEdRuleActor_eventRenderCanvas_Parms
	{
		UCanvas* Canvas;
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPatternEdRuleActor_eventRenderCanvas_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPatternEdRuleActor_eventRenderCanvas_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPatternEdRuleActor_eventRenderCanvas_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridPatternEdRuleActor, nullptr, "RenderCanvas", nullptr, nullptr, Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::GridPatternEdRuleActor_eventRenderCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::GridPatternEdRuleActor_eventRenderCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPatternEdRuleActor::execRenderCanvas)
{
	P_GET_OBJECT(UCanvas,Z_Param_Canvas);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderCanvas(Z_Param_Canvas,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class AGridPatternEdRuleActor Function RenderCanvas

// Begin Class AGridPatternEdRuleActor
void AGridPatternEdRuleActor::StaticRegisterNativesAGridPatternEdRuleActor()
{
	UClass* Class = AGridPatternEdRuleActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RenderCanvas", &AGridPatternEdRuleActor::execRenderCanvas },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridPatternEdRuleActor);
UClass* Z_Construct_UClass_AGridPatternEdRuleActor_NoRegister()
{
	return AGridPatternEdRuleActor::StaticClass();
}
struct Z_Construct_UClass_AGridPatternEdRuleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontTitle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FontTitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridPatternEdRuleActor_RenderCanvas, "RenderCanvas" }, // 1961978537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPatternEdRuleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_CanvasTexture = { "CanvasTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, CanvasTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasTexture_MetaData), NewProp_CanvasTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, Rule), Z_Construct_UClass_UMarkerGenGridPatternRule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rule_MetaData), NewProp_Rule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_FontTitle = { "FontTitle", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdRuleActor, FontTitle), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontTitle_MetaData), NewProp_FontTitle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridPatternEdRuleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_CanvasTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_Rule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdRuleActor_Statics::NewProp_FontTitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdRuleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridPatternEdRuleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdRuleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridPatternEdRuleActor_Statics::ClassParams = {
	&AGridPatternEdRuleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridPatternEdRuleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdRuleActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdRuleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridPatternEdRuleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridPatternEdRuleActor()
{
	if (!Z_Registration_Info_UClass_AGridPatternEdRuleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridPatternEdRuleActor.OuterSingleton, Z_Construct_UClass_AGridPatternEdRuleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridPatternEdRuleActor.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<AGridPatternEdRuleActor>()
{
	return AGridPatternEdRuleActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPatternEdRuleActor);
AGridPatternEdRuleActor::~AGridPatternEdRuleActor() {}
// End Class AGridPatternEdRuleActor

// Begin Class AGridPatternEdGroundActor
void AGridPatternEdGroundActor::StaticRegisterNativesAGridPatternEdGroundActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridPatternEdGroundActor);
UClass* Z_Construct_UClass_AGridPatternEdGroundActor_NoRegister()
{
	return AGridPatternEdGroundActor::StaticClass();
}
struct Z_Construct_UClass_AGridPatternEdGroundActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XEdges_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YEdges_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Corners_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEdActors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tiles_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XEdges_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XEdges_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_XEdges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YEdges_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YEdges_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_YEdges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Corners_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Corners_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Corners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPatternEdGroundActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdGroundActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Tiles_ValueProp = { "Tiles", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGridPatternEdGroundItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Tiles_Key_KeyProp = { "Tiles_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdGroundActor, Tiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_XEdges_ValueProp = { "XEdges", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGridPatternEdGroundItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_XEdges_Key_KeyProp = { "XEdges_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_XEdges = { "XEdges", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdGroundActor, XEdges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XEdges_MetaData), NewProp_XEdges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_YEdges_ValueProp = { "YEdges", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGridPatternEdGroundItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_YEdges_Key_KeyProp = { "YEdges_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_YEdges = { "YEdges", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdGroundActor, YEdges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YEdges_MetaData), NewProp_YEdges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Corners_ValueProp = { "Corners", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGridPatternEdGroundItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Corners_Key_KeyProp = { "Corners_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Corners = { "Corners", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPatternEdGroundActor, Corners), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Corners_MetaData), NewProp_Corners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridPatternEdGroundActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Tiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Tiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Tiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_XEdges_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_XEdges_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_XEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_YEdges_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_YEdges_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_YEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Corners_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Corners_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPatternEdGroundActor_Statics::NewProp_Corners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdGroundActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridPatternEdGroundActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdGroundActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridPatternEdGroundActor_Statics::ClassParams = {
	&AGridPatternEdGroundActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGridPatternEdGroundActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdGroundActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPatternEdGroundActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridPatternEdGroundActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridPatternEdGroundActor()
{
	if (!Z_Registration_Info_UClass_AGridPatternEdGroundActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridPatternEdGroundActor.OuterSingleton, Z_Construct_UClass_AGridPatternEdGroundActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridPatternEdGroundActor.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<AGridPatternEdGroundActor>()
{
	return AGridPatternEdGroundActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPatternEdGroundActor);
AGridPatternEdGroundActor::~AGridPatternEdGroundActor() {}
// End Class AGridPatternEdGroundActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEdActors_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridPatternEdGroundItem, UGridPatternEdGroundItem::StaticClass, TEXT("UGridPatternEdGroundItem"), &Z_Registration_Info_UClass_UGridPatternEdGroundItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridPatternEdGroundItem), 3692404944U) },
		{ Z_Construct_UClass_AGridPatternEdCursorActor, AGridPatternEdCursorActor::StaticClass, TEXT("AGridPatternEdCursorActor"), &Z_Registration_Info_UClass_AGridPatternEdCursorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPatternEdCursorActor), 3659924807U) },
		{ Z_Construct_UClass_AGridPatternEdRuleActor, AGridPatternEdRuleActor::StaticClass, TEXT("AGridPatternEdRuleActor"), &Z_Registration_Info_UClass_AGridPatternEdRuleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPatternEdRuleActor), 1406673944U) },
		{ Z_Construct_UClass_AGridPatternEdGroundActor, AGridPatternEdGroundActor::StaticClass, TEXT("AGridPatternEdGroundActor"), &Z_Registration_Info_UClass_AGridPatternEdGroundActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPatternEdGroundActor), 1288847078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEdActors_h_4002971442(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEdActors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEdActors_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
