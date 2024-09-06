// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMarkerEmitter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBoxBoundaryMarkerEmitter();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBoxBoundaryMarkerEmitter_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UProceduralMarkerEmitter();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UProceduralMarkerEmitter_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UProceduralMarkerEmitter
void UProceduralMarkerEmitter::StaticRegisterNativesUProceduralMarkerEmitter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralMarkerEmitter);
UClass* Z_Construct_UClass_UProceduralMarkerEmitter_NoRegister()
{
	return UProceduralMarkerEmitter::StaticClass();
}
struct Z_Construct_UClass_UProceduralMarkerEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralMarkerEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProceduralMarkerEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMarkerEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralMarkerEmitter_Statics::ClassParams = {
	&UProceduralMarkerEmitter::StaticClass,
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
	0x043010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMarkerEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralMarkerEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProceduralMarkerEmitter()
{
	if (!Z_Registration_Info_UClass_UProceduralMarkerEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralMarkerEmitter.OuterSingleton, Z_Construct_UClass_UProceduralMarkerEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProceduralMarkerEmitter.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UProceduralMarkerEmitter>()
{
	return UProceduralMarkerEmitter::StaticClass();
}
UProceduralMarkerEmitter::UProceduralMarkerEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralMarkerEmitter);
UProceduralMarkerEmitter::~UProceduralMarkerEmitter() {}
// End Class UProceduralMarkerEmitter

// Begin Enum EProcMarkerGenSimpleHeightFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction;
static UEnum* EProcMarkerGenSimpleHeightFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EProcMarkerGenSimpleHeightFunction"));
	}
	return Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EProcMarkerGenSimpleHeightFunction>()
{
	return EProcMarkerGenSimpleHeightFunction_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HighestPoint.Name", "EProcMarkerGenSimpleHeightFunction::HighestPoint" },
		{ "LowestPoint.Name", "EProcMarkerGenSimpleHeightFunction::LowestPoint" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProcMarkerGenSimpleHeightFunction::LowestPoint", (int64)EProcMarkerGenSimpleHeightFunction::LowestPoint },
		{ "EProcMarkerGenSimpleHeightFunction::HighestPoint", (int64)EProcMarkerGenSimpleHeightFunction::HighestPoint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EProcMarkerGenSimpleHeightFunction",
	"EProcMarkerGenSimpleHeightFunction",
	Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction()
{
	if (!Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction.InnerSingleton;
}
// End Enum EProcMarkerGenSimpleHeightFunction

// Begin Enum EProcMarkerGenHeightFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction;
static UEnum* EProcMarkerGenHeightFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EProcMarkerGenHeightFunction"));
	}
	return Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EProcMarkerGenHeightFunction>()
{
	return EProcMarkerGenHeightFunction_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HighestPoint.Name", "EProcMarkerGenHeightFunction::HighestPoint" },
		{ "LowestPoint.Name", "EProcMarkerGenHeightFunction::LowestPoint" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
		{ "OriginalHeight.Name", "EProcMarkerGenHeightFunction::OriginalHeight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProcMarkerGenHeightFunction::OriginalHeight", (int64)EProcMarkerGenHeightFunction::OriginalHeight },
		{ "EProcMarkerGenHeightFunction::LowestPoint", (int64)EProcMarkerGenHeightFunction::LowestPoint },
		{ "EProcMarkerGenHeightFunction::HighestPoint", (int64)EProcMarkerGenHeightFunction::HighestPoint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EProcMarkerGenHeightFunction",
	"EProcMarkerGenHeightFunction",
	Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction()
{
	if (!Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenHeightFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction.InnerSingleton;
}
// End Enum EProcMarkerGenHeightFunction

// Begin Class UBoxBoundaryMarkerEmitter
void UBoxBoundaryMarkerEmitter::StaticRegisterNativesUBoxBoundaryMarkerEmitter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoxBoundaryMarkerEmitter);
UClass* Z_Construct_UClass_UBoxBoundaryMarkerEmitter_NoRegister()
{
	return UBoxBoundaryMarkerEmitter::StaticClass();
}
struct Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeMultiplier_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilePadding_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "Comment", "/**\n\x09 * No. of tiles to pad on the boundary. This is in local coords and not world coord.  This value would be multiplied by the grid size \n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
		{ "ToolTip", "No. of tiles to pad on the boundary. This is in local coords and not world coord.  This value would be multiplied by the grid size" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToCenter_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "Comment", "/** The boundary box might be bigger than the actual boundary (if the size multiplier is higher or the tile padding is non-zero. In this case, align the box to the center */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
		{ "ToolTip", "The boundary box might be bigger than the actual boundary (if the size multiplier is higher or the tile padding is non-zero. In this case, align the box to the center" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFunction_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitEdges_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMarkerName_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "EditCondition", "bEmitEdges" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitEdgeSeparators_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeSeparatorMarkerName_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "EditCondition", "bEmitEdgeSeparators" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitCorners_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerMarkerName_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "EditCondition", "bEmitCorners" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitGroundTiles_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMarkerName_MetaData[] = {
		{ "Category", "Box Boundary" },
		{ "EditCondition", "bEmitGroundTiles" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/ProceduralMarkers/ProceduralMarkerEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TilePadding;
	static void NewProp_bAlignToCenter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToCenter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightFunction;
	static void NewProp_bEmitEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitEdges;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EdgeMarkerName;
	static void NewProp_bEmitEdgeSeparators_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitEdgeSeparators;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EdgeSeparatorMarkerName;
	static void NewProp_bEmitCorners_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitCorners;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CornerMarkerName;
	static void NewProp_bEmitGroundTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitGroundTiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroundMarkerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxBoundaryMarkerEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_SizeMultiplier = { "SizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxBoundaryMarkerEmitter, SizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeMultiplier_MetaData), NewProp_SizeMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_TilePadding = { "TilePadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxBoundaryMarkerEmitter, TilePadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilePadding_MetaData), NewProp_TilePadding_MetaData) };
void Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bAlignToCenter_SetBit(void* Obj)
{
	((UBoxBoundaryMarkerEmitter*)Obj)->bAlignToCenter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bAlignToCenter = { "bAlignToCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoxBoundaryMarkerEmitter), &Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bAlignToCenter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToCenter_MetaData), NewProp_bAlignToCenter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_HeightFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_HeightFunction = { "HeightFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxBoundaryMarkerEmitter, HeightFunction), Z_Construct_UEnum_DungeonArchitectRuntime_EProcMarkerGenSimpleHeightFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFunction_MetaData), NewProp_HeightFunction_MetaData) }; // 3249443032
void Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdges_SetBit(void* Obj)
{
	((UBoxBoundaryMarkerEmitter*)Obj)->bEmitEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdges = { "bEmitEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoxBoundaryMarkerEmitter), &Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitEdges_MetaData), NewProp_bEmitEdges_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_EdgeMarkerName = { "EdgeMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxBoundaryMarkerEmitter, EdgeMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMarkerName_MetaData), NewProp_EdgeMarkerName_MetaData) };
void Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdgeSeparators_SetBit(void* Obj)
{
	((UBoxBoundaryMarkerEmitter*)Obj)->bEmitEdgeSeparators = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdgeSeparators = { "bEmitEdgeSeparators", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoxBoundaryMarkerEmitter), &Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdgeSeparators_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitEdgeSeparators_MetaData), NewProp_bEmitEdgeSeparators_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_EdgeSeparatorMarkerName = { "EdgeSeparatorMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxBoundaryMarkerEmitter, EdgeSeparatorMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeSeparatorMarkerName_MetaData), NewProp_EdgeSeparatorMarkerName_MetaData) };
void Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitCorners_SetBit(void* Obj)
{
	((UBoxBoundaryMarkerEmitter*)Obj)->bEmitCorners = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitCorners = { "bEmitCorners", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoxBoundaryMarkerEmitter), &Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitCorners_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitCorners_MetaData), NewProp_bEmitCorners_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_CornerMarkerName = { "CornerMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxBoundaryMarkerEmitter, CornerMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerMarkerName_MetaData), NewProp_CornerMarkerName_MetaData) };
void Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitGroundTiles_SetBit(void* Obj)
{
	((UBoxBoundaryMarkerEmitter*)Obj)->bEmitGroundTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitGroundTiles = { "bEmitGroundTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoxBoundaryMarkerEmitter), &Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitGroundTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitGroundTiles_MetaData), NewProp_bEmitGroundTiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_GroundMarkerName = { "GroundMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxBoundaryMarkerEmitter, GroundMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMarkerName_MetaData), NewProp_GroundMarkerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_SizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_TilePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bAlignToCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_HeightFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_HeightFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_EdgeMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitEdgeSeparators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_EdgeSeparatorMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitCorners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_CornerMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_bEmitGroundTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::NewProp_GroundMarkerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProceduralMarkerEmitter,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::ClassParams = {
	&UBoxBoundaryMarkerEmitter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoxBoundaryMarkerEmitter()
{
	if (!Z_Registration_Info_UClass_UBoxBoundaryMarkerEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoxBoundaryMarkerEmitter.OuterSingleton, Z_Construct_UClass_UBoxBoundaryMarkerEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoxBoundaryMarkerEmitter.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBoxBoundaryMarkerEmitter>()
{
	return UBoxBoundaryMarkerEmitter::StaticClass();
}
UBoxBoundaryMarkerEmitter::UBoxBoundaryMarkerEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxBoundaryMarkerEmitter);
UBoxBoundaryMarkerEmitter::~UBoxBoundaryMarkerEmitter() {}
// End Class UBoxBoundaryMarkerEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_ProceduralMarkers_ProceduralMarkerEmitter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProcMarkerGenSimpleHeightFunction_StaticEnum, TEXT("EProcMarkerGenSimpleHeightFunction"), &Z_Registration_Info_UEnum_EProcMarkerGenSimpleHeightFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3249443032U) },
		{ EProcMarkerGenHeightFunction_StaticEnum, TEXT("EProcMarkerGenHeightFunction"), &Z_Registration_Info_UEnum_EProcMarkerGenHeightFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 10874411U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralMarkerEmitter, UProceduralMarkerEmitter::StaticClass, TEXT("UProceduralMarkerEmitter"), &Z_Registration_Info_UClass_UProceduralMarkerEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralMarkerEmitter), 4155431210U) },
		{ Z_Construct_UClass_UBoxBoundaryMarkerEmitter, UBoxBoundaryMarkerEmitter::StaticClass, TEXT("UBoxBoundaryMarkerEmitter"), &Z_Registration_Info_UClass_UBoxBoundaryMarkerEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoxBoundaryMarkerEmitter), 1020252879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_ProceduralMarkers_ProceduralMarkerEmitter_h_2619903128(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_ProceduralMarkers_ProceduralMarkerEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_ProceduralMarkers_ProceduralMarkerEmitter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_ProceduralMarkers_ProceduralMarkerEmitter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_ProceduralMarkers_ProceduralMarkerEmitter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
