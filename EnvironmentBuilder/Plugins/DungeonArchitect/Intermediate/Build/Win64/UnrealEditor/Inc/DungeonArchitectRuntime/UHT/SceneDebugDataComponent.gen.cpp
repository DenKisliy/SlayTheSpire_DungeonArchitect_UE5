// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/Debug/SceneDebugDataComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneDebugDataComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDASceneDebugDataComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDASceneDebugDataComponent_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDASceneDebugDataTextEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry;
class UScriptStruct* FDASceneDebugDataTextEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DASceneDebugDataTextEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDASceneDebugDataTextEntry>()
{
	return FDASceneDebugDataTextEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDASceneDebugDataTextEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataTextEntry, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataTextEntry, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataTextEntry, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DASceneDebugDataTextEntry",
	Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::PropPointers),
	sizeof(FDASceneDebugDataTextEntry),
	alignof(FDASceneDebugDataTextEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry.InnerSingleton, Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry.InnerSingleton;
}
// End ScriptStruct FDASceneDebugDataTextEntry

// Begin ScriptStruct FDASceneDebugDataSphereEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry;
class UScriptStruct* FDASceneDebugDataSphereEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DASceneDebugDataSphereEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDASceneDebugDataSphereEntry>()
{
	return FDASceneDebugDataSphereEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDASceneDebugDataSphereEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataSphereEntry, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataSphereEntry, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataSphereEntry, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DASceneDebugDataSphereEntry",
	Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::PropPointers),
	sizeof(FDASceneDebugDataSphereEntry),
	alignof(FDASceneDebugDataSphereEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry.InnerSingleton, Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry.InnerSingleton;
}
// End ScriptStruct FDASceneDebugDataSphereEntry

// Begin ScriptStruct FDASceneDebugDataBoxEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry;
class UScriptStruct* FDASceneDebugDataBoxEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DASceneDebugDataBoxEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDASceneDebugDataBoxEntry>()
{
	return FDASceneDebugDataBoxEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDASceneDebugDataBoxEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataBoxEntry, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataBoxEntry, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugDataBoxEntry, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DASceneDebugDataBoxEntry",
	Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::PropPointers),
	sizeof(FDASceneDebugDataBoxEntry),
	alignof(FDASceneDebugDataBoxEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry.InnerSingleton, Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry.InnerSingleton;
}
// End ScriptStruct FDASceneDebugDataBoxEntry

// Begin ScriptStruct FDASceneDebugData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DASceneDebugData;
class UScriptStruct* FDASceneDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DASceneDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDASceneDebugData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DASceneDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDASceneDebugData>()
{
	return FDASceneDebugData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDASceneDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextEntries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphereEntries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxEntries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDASceneDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_TextEntries_Inner = { "TextEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry, METADATA_PARAMS(0, nullptr) }; // 1189304476
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_TextEntries = { "TextEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugData, TextEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextEntries_MetaData), NewProp_TextEntries_MetaData) }; // 1189304476
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_SphereEntries_Inner = { "SphereEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry, METADATA_PARAMS(0, nullptr) }; // 1958082663
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_SphereEntries = { "SphereEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugData, SphereEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereEntries_MetaData), NewProp_SphereEntries_MetaData) }; // 1958082663
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_BoxEntries_Inner = { "BoxEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry, METADATA_PARAMS(0, nullptr) }; // 4122268383
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_BoxEntries = { "BoxEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASceneDebugData, BoxEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxEntries_MetaData), NewProp_BoxEntries_MetaData) }; // 4122268383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDASceneDebugData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_TextEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_TextEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_SphereEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_SphereEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_BoxEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewProp_BoxEntries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDASceneDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DASceneDebugData",
	Z_Construct_UScriptStruct_FDASceneDebugData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugData_Statics::PropPointers),
	sizeof(FDASceneDebugData),
	alignof(FDASceneDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASceneDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDASceneDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDASceneDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_DASceneDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DASceneDebugData.InnerSingleton, Z_Construct_UScriptStruct_FDASceneDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DASceneDebugData.InnerSingleton;
}
// End ScriptStruct FDASceneDebugData

// Begin Class UDASceneDebugDataComponent
void UDASceneDebugDataComponent::StaticRegisterNativesUDASceneDebugDataComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDASceneDebugDataComponent);
UClass* Z_Construct_UClass_UDASceneDebugDataComponent_NoRegister()
{
	return UDASceneDebugDataComponent::StaticClass();
}
struct Z_Construct_UClass_UDASceneDebugDataComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Utils/Debug/SceneDebugDataComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/SceneDebugDataComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDASceneDebugDataComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASceneDebugDataComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASceneDebugDataComponent, Data), Z_Construct_UScriptStruct_FDASceneDebugData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 313502064
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASceneDebugDataComponent_Statics::NewProp_RenderScale = { "RenderScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASceneDebugDataComponent, RenderScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderScale_MetaData), NewProp_RenderScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDASceneDebugDataComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASceneDebugDataComponent_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASceneDebugDataComponent_Statics::NewProp_RenderScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASceneDebugDataComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDASceneDebugDataComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASceneDebugDataComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDASceneDebugDataComponent_Statics::ClassParams = {
	&UDASceneDebugDataComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDASceneDebugDataComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDASceneDebugDataComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASceneDebugDataComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDASceneDebugDataComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDASceneDebugDataComponent()
{
	if (!Z_Registration_Info_UClass_UDASceneDebugDataComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDASceneDebugDataComponent.OuterSingleton, Z_Construct_UClass_UDASceneDebugDataComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDASceneDebugDataComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDASceneDebugDataComponent>()
{
	return UDASceneDebugDataComponent::StaticClass();
}
UDASceneDebugDataComponent::UDASceneDebugDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDASceneDebugDataComponent);
UDASceneDebugDataComponent::~UDASceneDebugDataComponent() {}
// End Class UDASceneDebugDataComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_SceneDebugDataComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDASceneDebugDataTextEntry::StaticStruct, Z_Construct_UScriptStruct_FDASceneDebugDataTextEntry_Statics::NewStructOps, TEXT("DASceneDebugDataTextEntry"), &Z_Registration_Info_UScriptStruct_DASceneDebugDataTextEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDASceneDebugDataTextEntry), 1189304476U) },
		{ FDASceneDebugDataSphereEntry::StaticStruct, Z_Construct_UScriptStruct_FDASceneDebugDataSphereEntry_Statics::NewStructOps, TEXT("DASceneDebugDataSphereEntry"), &Z_Registration_Info_UScriptStruct_DASceneDebugDataSphereEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDASceneDebugDataSphereEntry), 1958082663U) },
		{ FDASceneDebugDataBoxEntry::StaticStruct, Z_Construct_UScriptStruct_FDASceneDebugDataBoxEntry_Statics::NewStructOps, TEXT("DASceneDebugDataBoxEntry"), &Z_Registration_Info_UScriptStruct_DASceneDebugDataBoxEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDASceneDebugDataBoxEntry), 4122268383U) },
		{ FDASceneDebugData::StaticStruct, Z_Construct_UScriptStruct_FDASceneDebugData_Statics::NewStructOps, TEXT("DASceneDebugData"), &Z_Registration_Info_UScriptStruct_DASceneDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDASceneDebugData), 313502064U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDASceneDebugDataComponent, UDASceneDebugDataComponent::StaticClass, TEXT("UDASceneDebugDataComponent"), &Z_Registration_Info_UClass_UDASceneDebugDataComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDASceneDebugDataComponent), 4289920135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_SceneDebugDataComponent_h_563665659(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_SceneDebugDataComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_SceneDebugDataComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_SceneDebugDataComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_SceneDebugDataComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
