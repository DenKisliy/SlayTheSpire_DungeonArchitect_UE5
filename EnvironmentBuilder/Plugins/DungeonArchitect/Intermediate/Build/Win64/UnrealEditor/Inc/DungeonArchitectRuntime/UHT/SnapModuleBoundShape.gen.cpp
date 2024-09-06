// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapModuleBoundShape() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapModuleBoundShape();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapModuleBoundShape_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapModuleBoundShapeRenderComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapModuleBoundShapeRenderComponent
void USnapModuleBoundShapeRenderComponent::StaticRegisterNativesUSnapModuleBoundShapeRenderComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapModuleBoundShapeRenderComponent);
UClass* Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_NoRegister()
{
	return USnapModuleBoundShapeRenderComponent::StaticClass();
}
struct Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapModuleBoundShapeRenderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_Statics::ClassParams = {
	&USnapModuleBoundShapeRenderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapModuleBoundShapeRenderComponent()
{
	if (!Z_Registration_Info_UClass_USnapModuleBoundShapeRenderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapModuleBoundShapeRenderComponent.OuterSingleton, Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapModuleBoundShapeRenderComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapModuleBoundShapeRenderComponent>()
{
	return USnapModuleBoundShapeRenderComponent::StaticClass();
}
USnapModuleBoundShapeRenderComponent::USnapModuleBoundShapeRenderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapModuleBoundShapeRenderComponent);
USnapModuleBoundShapeRenderComponent::~USnapModuleBoundShapeRenderComponent() {}
// End Class USnapModuleBoundShapeRenderComponent

// Begin ScriptStruct FSnapModuleBoundShapeConvexPoly
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly;
class UScriptStruct* FSnapModuleBoundShapeConvexPoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapModuleBoundShapeConvexPoly"));
	}
	return Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapModuleBoundShapeConvexPoly>()
{
	return FSnapModuleBoundShapeConvexPoly::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapModuleBoundShapeConvexPoly>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleBoundShapeConvexPoly, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapModuleBoundShapeConvexPoly",
	Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::PropPointers),
	sizeof(FSnapModuleBoundShapeConvexPoly),
	alignof(FSnapModuleBoundShapeConvexPoly),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly()
{
	if (!Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly.InnerSingleton, Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly.InnerSingleton;
}
// End ScriptStruct FSnapModuleBoundShapeConvexPoly

// Begin Class ASnapModuleBoundShape
void ASnapModuleBoundShape::StaticRegisterNativesASnapModuleBoundShape()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnapModuleBoundShape);
UClass* Z_Construct_UClass_ASnapModuleBoundShape_NoRegister()
{
	return ASnapModuleBoundShape::StaticClass();
}
struct Z_Construct_UClass_ASnapModuleBoundShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsRenderComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBounds_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderOnCanvas_MetaData[] = {
		{ "Category", "Dungeon Architect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we render this bounds in the Dungeon Canvas texture */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we render this bounds in the Dungeon Canvas texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsType_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonPoints_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOnDungeonCanvas_MetaData[] = {
		{ "Category", "Dungeon Architect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should these bounds be used to draw the shape of the module in the dungeon canvas? */" },
#endif
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should these bounds be used to draw the shape of the module in the dungeon canvas?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexPolys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPolyTriangulationValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Module/SnapModuleBoundShape.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsRenderComponent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bDrawBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBounds;
	static void NewProp_bRenderOnCanvas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderOnCanvas;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawColor;
	static void NewProp_bDrawOnDungeonCanvas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOnDungeonCanvas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexPolys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexPolys;
	static void NewProp_bPolyTriangulationValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPolyTriangulationValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnapModuleBoundShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoundsRenderComponent = { "BoundsRenderComponent", nullptr, (EPropertyFlags)0x0010000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, BoundsRenderComponent), Z_Construct_UClass_USnapModuleBoundShapeRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsRenderComponent_MetaData), NewProp_BoundsRenderComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawBounds_SetBit(void* Obj)
{
	((ASnapModuleBoundShape*)Obj)->bDrawBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawBounds = { "bDrawBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASnapModuleBoundShape), &Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawBounds_MetaData), NewProp_bDrawBounds_MetaData) };
void Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bRenderOnCanvas_SetBit(void* Obj)
{
	((ASnapModuleBoundShape*)Obj)->bRenderOnCanvas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bRenderOnCanvas = { "bRenderOnCanvas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASnapModuleBoundShape), &Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bRenderOnCanvas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderOnCanvas_MetaData), NewProp_bRenderOnCanvas_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoundsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoundsType = { "BoundsType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, BoundsType), Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsType_MetaData), NewProp_BoundsType_MetaData) }; // 168514795
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_PolygonPoints_Inner = { "PolygonPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_PolygonPoints = { "PolygonPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, PolygonPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonPoints_MetaData), NewProp_PolygonPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, CircleRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtent_MetaData), NewProp_BoxExtent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, Height), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, DrawColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawColor_MetaData), NewProp_DrawColor_MetaData) };
void Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawOnDungeonCanvas_SetBit(void* Obj)
{
	((ASnapModuleBoundShape*)Obj)->bDrawOnDungeonCanvas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawOnDungeonCanvas = { "bDrawOnDungeonCanvas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASnapModuleBoundShape), &Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawOnDungeonCanvas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawOnDungeonCanvas_MetaData), NewProp_bDrawOnDungeonCanvas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_ConvexPolys_Inner = { "ConvexPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly, METADATA_PARAMS(0, nullptr) }; // 3902206242
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_ConvexPolys = { "ConvexPolys", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapModuleBoundShape, ConvexPolys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexPolys_MetaData), NewProp_ConvexPolys_MetaData) }; // 3902206242
void Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bPolyTriangulationValid_SetBit(void* Obj)
{
	((ASnapModuleBoundShape*)Obj)->bPolyTriangulationValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bPolyTriangulationValid = { "bPolyTriangulationValid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASnapModuleBoundShape), &Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bPolyTriangulationValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPolyTriangulationValid_MetaData), NewProp_bPolyTriangulationValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnapModuleBoundShape_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoundsRenderComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bRenderOnCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoundsType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoundsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_PolygonPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_PolygonPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_BoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_DrawColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bDrawOnDungeonCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_ConvexPolys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_ConvexPolys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapModuleBoundShape_Statics::NewProp_bPolyTriangulationValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapModuleBoundShape_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnapModuleBoundShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapModuleBoundShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnapModuleBoundShape_Statics::ClassParams = {
	&ASnapModuleBoundShape::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASnapModuleBoundShape_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnapModuleBoundShape_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapModuleBoundShape_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnapModuleBoundShape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnapModuleBoundShape()
{
	if (!Z_Registration_Info_UClass_ASnapModuleBoundShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnapModuleBoundShape.OuterSingleton, Z_Construct_UClass_ASnapModuleBoundShape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnapModuleBoundShape.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ASnapModuleBoundShape>()
{
	return ASnapModuleBoundShape::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnapModuleBoundShape);
ASnapModuleBoundShape::~ASnapModuleBoundShape() {}
// End Class ASnapModuleBoundShape

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Module_SnapModuleBoundShape_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapModuleBoundShapeConvexPoly::StaticStruct, Z_Construct_UScriptStruct_FSnapModuleBoundShapeConvexPoly_Statics::NewStructOps, TEXT("SnapModuleBoundShapeConvexPoly"), &Z_Registration_Info_UScriptStruct_SnapModuleBoundShapeConvexPoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapModuleBoundShapeConvexPoly), 3902206242U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapModuleBoundShapeRenderComponent, USnapModuleBoundShapeRenderComponent::StaticClass, TEXT("USnapModuleBoundShapeRenderComponent"), &Z_Registration_Info_UClass_USnapModuleBoundShapeRenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapModuleBoundShapeRenderComponent), 2036541909U) },
		{ Z_Construct_UClass_ASnapModuleBoundShape, ASnapModuleBoundShape::StaticClass, TEXT("ASnapModuleBoundShape"), &Z_Registration_Info_UClass_ASnapModuleBoundShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnapModuleBoundShape), 4174461883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Module_SnapModuleBoundShape_h_3647931293(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Module_SnapModuleBoundShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Module_SnapModuleBoundShape_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Module_SnapModuleBoundShape_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Module_SnapModuleBoundShape_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
