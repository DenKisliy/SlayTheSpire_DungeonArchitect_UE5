// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBoundingShapes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBoundingShapes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeCircle();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeLine();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeList();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EDABoundsShapeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDABoundsShapeType;
static UEnum* EDABoundsShapeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDABoundsShapeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDABoundsShapeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDABoundsShapeType"));
	}
	return Z_Registration_Info_UEnum_EDABoundsShapeType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDABoundsShapeType>()
{
	return EDABoundsShapeType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "EDABoundsShapeType::Box" },
		{ "Circle.Name", "EDABoundsShapeType::Circle" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
		{ "Polygon.Name", "EDABoundsShapeType::Polygon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDABoundsShapeType::Polygon", (int64)EDABoundsShapeType::Polygon },
		{ "EDABoundsShapeType::Box", (int64)EDABoundsShapeType::Box },
		{ "EDABoundsShapeType::Circle", (int64)EDABoundsShapeType::Circle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EDABoundsShapeType",
	"EDABoundsShapeType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType()
{
	if (!Z_Registration_Info_UEnum_EDABoundsShapeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDABoundsShapeType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDABoundsShapeType.InnerSingleton;
}
// End Enum EDABoundsShapeType

// Begin ScriptStruct FDABoundsShapeCircle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DABoundsShapeCircle;
class UScriptStruct* FDABoundsShapeCircle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeCircle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DABoundsShapeCircle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDABoundsShapeCircle, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DABoundsShapeCircle"));
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeCircle.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDABoundsShapeCircle>()
{
	return FDABoundsShapeCircle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDABoundsShapeCircle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeCircle, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeCircle, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeCircle, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeCircle, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DABoundsShapeCircle",
	Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::PropPointers),
	sizeof(FDABoundsShapeCircle),
	alignof(FDABoundsShapeCircle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeCircle()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeCircle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DABoundsShapeCircle.InnerSingleton, Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeCircle.InnerSingleton;
}
// End ScriptStruct FDABoundsShapeCircle

// Begin ScriptStruct FDABoundsShapeLine
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DABoundsShapeLine;
class UScriptStruct* FDABoundsShapeLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DABoundsShapeLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDABoundsShapeLine, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DABoundsShapeLine"));
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeLine.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDABoundsShapeLine>()
{
	return FDABoundsShapeLine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineStart_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineEnd_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineEnd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDABoundsShapeLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeLine, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeLine, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeLine, LineStart), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineStart_MetaData), NewProp_LineStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeLine, LineEnd), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineEnd_MetaData), NewProp_LineEnd_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeLine, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_LineStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_LineEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DABoundsShapeLine",
	Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::PropPointers),
	sizeof(FDABoundsShapeLine),
	alignof(FDABoundsShapeLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeLine()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DABoundsShapeLine.InnerSingleton, Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeLine.InnerSingleton;
}
// End ScriptStruct FDABoundsShapeLine

// Begin ScriptStruct FDABoundsShapeConvexPoly
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly;
class UScriptStruct* FDABoundsShapeConvexPoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DABoundsShapeConvexPoly"));
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDABoundsShapeConvexPoly>()
{
	return FDABoundsShapeConvexPoly::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDABoundsShapeConvexPoly>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeConvexPoly, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeConvexPoly, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeConvexPoly, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeConvexPoly, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DABoundsShapeConvexPoly",
	Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::PropPointers),
	sizeof(FDABoundsShapeConvexPoly),
	alignof(FDABoundsShapeConvexPoly),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly.InnerSingleton, Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly.InnerSingleton;
}
// End ScriptStruct FDABoundsShapeConvexPoly

// Begin ScriptStruct FDABoundsShapeList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DABoundsShapeList;
class UScriptStruct* FDABoundsShapeList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DABoundsShapeList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDABoundsShapeList, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DABoundsShapeList"));
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeList.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDABoundsShapeList>()
{
	return FDABoundsShapeList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDABoundsShapeList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexPolys_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Circles_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBoundingShapes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexPolys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexPolys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Circles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Circles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDABoundsShapeList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_ConvexPolys_Inner = { "ConvexPolys", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly, METADATA_PARAMS(0, nullptr) }; // 4286470268
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_ConvexPolys = { "ConvexPolys", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeList, ConvexPolys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexPolys_MetaData), NewProp_ConvexPolys_MetaData) }; // 4286470268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_Circles_Inner = { "Circles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDABoundsShapeCircle, METADATA_PARAMS(0, nullptr) }; // 1588341372
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_Circles = { "Circles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDABoundsShapeList, Circles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Circles_MetaData), NewProp_Circles_MetaData) }; // 1588341372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_ConvexPolys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_ConvexPolys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_Circles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewProp_Circles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DABoundsShapeList",
	Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::PropPointers),
	sizeof(FDABoundsShapeList),
	alignof(FDABoundsShapeList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeList()
{
	if (!Z_Registration_Info_UScriptStruct_DABoundsShapeList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DABoundsShapeList.InnerSingleton, Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DABoundsShapeList.InnerSingleton;
}
// End ScriptStruct FDABoundsShapeList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDABoundsShapeType_StaticEnum, TEXT("EDABoundsShapeType"), &Z_Registration_Info_UEnum_EDABoundsShapeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 168514795U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDABoundsShapeCircle::StaticStruct, Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics::NewStructOps, TEXT("DABoundsShapeCircle"), &Z_Registration_Info_UScriptStruct_DABoundsShapeCircle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDABoundsShapeCircle), 1588341372U) },
		{ FDABoundsShapeLine::StaticStruct, Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics::NewStructOps, TEXT("DABoundsShapeLine"), &Z_Registration_Info_UScriptStruct_DABoundsShapeLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDABoundsShapeLine), 2274881132U) },
		{ FDABoundsShapeConvexPoly::StaticStruct, Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics::NewStructOps, TEXT("DABoundsShapeConvexPoly"), &Z_Registration_Info_UScriptStruct_DABoundsShapeConvexPoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDABoundsShapeConvexPoly), 4286470268U) },
		{ FDABoundsShapeList::StaticStruct, Z_Construct_UScriptStruct_FDABoundsShapeList_Statics::NewStructOps, TEXT("DABoundsShapeList"), &Z_Registration_Info_UScriptStruct_DABoundsShapeList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDABoundsShapeList), 4252500473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_858744935(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
