// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasRoomShapeTexture() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EDABoundsShapeTextureBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode;
static UEnum* EDABoundsShapeTextureBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDABoundsShapeTextureBlendMode"));
	}
	return Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDABoundsShapeTextureBlendMode>()
{
	return EDABoundsShapeTextureBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "EDABoundsShapeTextureBlendMode::Add" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
		{ "Multiply.Name", "EDABoundsShapeTextureBlendMode::Multiply" },
		{ "Opaque.Name", "EDABoundsShapeTextureBlendMode::Opaque" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDABoundsShapeTextureBlendMode::Add", (int64)EDABoundsShapeTextureBlendMode::Add },
		{ "EDABoundsShapeTextureBlendMode::Multiply", (int64)EDABoundsShapeTextureBlendMode::Multiply },
		{ "EDABoundsShapeTextureBlendMode::Opaque", (int64)EDABoundsShapeTextureBlendMode::Opaque },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EDABoundsShapeTextureBlendMode",
	"EDABoundsShapeTextureBlendMode",
	Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode()
{
	if (!Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode.InnerSingleton;
}
// End Enum EDABoundsShapeTextureBlendMode

// Begin ScriptStruct FDungeonCanvasRoomShapeTexture
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture;
class UScriptStruct* FDungeonCanvasRoomShapeTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasRoomShapeTexture"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasRoomShapeTexture>()
{
	return FDungeonCanvasRoomShapeTexture::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DungeonArchitect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The scale is applied on a 1m quad.  Apply the scale accordingly\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scale is applied on a 1m quad.  Apply the scale accordingly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureMask_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderOnCustomLayer_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRenderLayerName_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureMask;
	static void NewProp_bRenderOnCustomLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderOnCustomLayer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomRenderLayerName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasRoomShapeTexture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasRoomShapeTexture, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_TextureMask = { "TextureMask", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasRoomShapeTexture, TextureMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureMask_MetaData), NewProp_TextureMask_MetaData) };
void Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_bRenderOnCustomLayer_SetBit(void* Obj)
{
	((FDungeonCanvasRoomShapeTexture*)Obj)->bRenderOnCustomLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_bRenderOnCustomLayer = { "bRenderOnCustomLayer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDungeonCanvasRoomShapeTexture), &Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_bRenderOnCustomLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderOnCustomLayer_MetaData), NewProp_bRenderOnCustomLayer_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_CustomRenderLayerName = { "CustomRenderLayerName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasRoomShapeTexture, CustomRenderLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRenderLayerName_MetaData), NewProp_CustomRenderLayerName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasRoomShapeTexture, BlendMode), Z_Construct_UEnum_DungeonArchitectRuntime_EDABoundsShapeTextureBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 1936583857
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasRoomShapeTexture, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_TextureMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_bRenderOnCustomLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_CustomRenderLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasRoomShapeTexture",
	Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::PropPointers),
	sizeof(FDungeonCanvasRoomShapeTexture),
	alignof(FDungeonCanvasRoomShapeTexture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasRoomShapeTexture

// Begin ScriptStruct FDungeonCanvasRoomShapeTextureList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList;
class UScriptStruct* FDungeonCanvasRoomShapeTextureList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasRoomShapeTextureList"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasRoomShapeTextureList>()
{
	return FDungeonCanvasRoomShapeTextureList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureShapes_MetaData[] = {
		{ "Category", "DungeonArchitect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Texture shapes do not contribute to the bounds */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture shapes do not contribute to the bounds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureShapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureShapes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasRoomShapeTextureList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::NewProp_TextureShapes_Inner = { "TextureShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture, METADATA_PARAMS(0, nullptr) }; // 2712131317
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::NewProp_TextureShapes = { "TextureShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasRoomShapeTextureList, TextureShapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureShapes_MetaData), NewProp_TextureShapes_MetaData) }; // 2712131317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::NewProp_TextureShapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::NewProp_TextureShapes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasRoomShapeTextureList",
	Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::PropPointers),
	sizeof(FDungeonCanvasRoomShapeTextureList),
	alignof(FDungeonCanvasRoomShapeTextureList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasRoomShapeTextureList

// Begin Class UDungeonCanvasRoomShapeTextureComponent
void UDungeonCanvasRoomShapeTextureComponent::StaticRegisterNativesUDungeonCanvasRoomShapeTextureComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasRoomShapeTextureComponent);
UClass* Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_NoRegister()
{
	return UDungeonCanvasRoomShapeTextureComponent::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayTexture_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterialTemplate_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeTexture_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditorShowOnlyWhenSelected_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderOnCustomLayer_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * By default, the texture will be rendered in the layout mask for generating the shape of the layout\n\x09 * You can render your own RGB textures in a separate Render texture and use that in your materials\n\x09 * If this is what you need, then enable this flag and choose a layer name.   Then call\n\x09 * the render layout function in the canvas blueprint with this name and supply a texture\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By default, the texture will be rendered in the layout mask for generating the shape of the layout\nYou can render your own RGB textures in a separate Render texture and use that in your materials\nIf this is what you need, then enable this flag and choose a layer name.   Then call\nthe render layout function in the canvas blueprint with this name and supply a texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRenderLayerName_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "EditCondition", "bRenderOnCustomLayer" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverlayTexture;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverlayMaterialTemplate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static void NewProp_bVisualizeTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeTexture;
	static void NewProp_bEditorShowOnlyWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorShowOnlyWhenSelected;
	static void NewProp_bRenderOnCustomLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderOnCustomLayer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomRenderLayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasRoomShapeTextureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_OverlayTexture = { "OverlayTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasRoomShapeTextureComponent, OverlayTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayTexture_MetaData), NewProp_OverlayTexture_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_OverlayMaterialTemplate = { "OverlayMaterialTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasRoomShapeTextureComponent, OverlayMaterialTemplate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterialTemplate_MetaData), NewProp_OverlayMaterialTemplate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasRoomShapeTextureComponent, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
void Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bVisualizeTexture_SetBit(void* Obj)
{
	((UDungeonCanvasRoomShapeTextureComponent*)Obj)->bVisualizeTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bVisualizeTexture = { "bVisualizeTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasRoomShapeTextureComponent), &Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bVisualizeTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisualizeTexture_MetaData), NewProp_bVisualizeTexture_MetaData) };
void Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bEditorShowOnlyWhenSelected_SetBit(void* Obj)
{
	((UDungeonCanvasRoomShapeTextureComponent*)Obj)->bEditorShowOnlyWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bEditorShowOnlyWhenSelected = { "bEditorShowOnlyWhenSelected", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasRoomShapeTextureComponent), &Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bEditorShowOnlyWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditorShowOnlyWhenSelected_MetaData), NewProp_bEditorShowOnlyWhenSelected_MetaData) };
void Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bRenderOnCustomLayer_SetBit(void* Obj)
{
	((UDungeonCanvasRoomShapeTextureComponent*)Obj)->bRenderOnCustomLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bRenderOnCustomLayer = { "bRenderOnCustomLayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasRoomShapeTextureComponent), &Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bRenderOnCustomLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderOnCustomLayer_MetaData), NewProp_bRenderOnCustomLayer_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_CustomRenderLayerName = { "CustomRenderLayerName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasRoomShapeTextureComponent, CustomRenderLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRenderLayerName_MetaData), NewProp_CustomRenderLayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasRoomShapeTextureComponent, OverlayMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_WhiteTexture = { "WhiteTexture", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasRoomShapeTextureComponent, WhiteTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteTexture_MetaData), NewProp_WhiteTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_OverlayTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_OverlayMaterialTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bVisualizeTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bEditorShowOnlyWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_bRenderOnCustomLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_CustomRenderLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::NewProp_WhiteTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::ClassParams = {
	&UDungeonCanvasRoomShapeTextureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasRoomShapeTextureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasRoomShapeTextureComponent.OuterSingleton, Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasRoomShapeTextureComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasRoomShapeTextureComponent>()
{
	return UDungeonCanvasRoomShapeTextureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasRoomShapeTextureComponent);
UDungeonCanvasRoomShapeTextureComponent::~UDungeonCanvasRoomShapeTextureComponent() {}
// End Class UDungeonCanvasRoomShapeTextureComponent

// Begin Class ADungeonCanvasRoomShapeTextureActor
void ADungeonCanvasRoomShapeTextureActor::StaticRegisterNativesADungeonCanvasRoomShapeTextureActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonCanvasRoomShapeTextureActor);
UClass* Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_NoRegister()
{
	return ADungeonCanvasRoomShapeTextureActor::StaticClass();
}
struct Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayTextureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dungeon Canvas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayTextureComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonCanvasRoomShapeTextureActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::NewProp_OverlayTextureComponent = { "OverlayTextureComponent", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvasRoomShapeTextureActor, OverlayTextureComponent), Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayTextureComponent_MetaData), NewProp_OverlayTextureComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x0010000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvasRoomShapeTextureActor, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Billboard_MetaData), NewProp_Billboard_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::NewProp_OverlayTextureComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::NewProp_Billboard,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::ClassParams = {
	&ADungeonCanvasRoomShapeTextureActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor()
{
	if (!Z_Registration_Info_UClass_ADungeonCanvasRoomShapeTextureActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonCanvasRoomShapeTextureActor.OuterSingleton, Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonCanvasRoomShapeTextureActor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonCanvasRoomShapeTextureActor>()
{
	return ADungeonCanvasRoomShapeTextureActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonCanvasRoomShapeTextureActor);
ADungeonCanvasRoomShapeTextureActor::~ADungeonCanvasRoomShapeTextureActor() {}
// End Class ADungeonCanvasRoomShapeTextureActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDABoundsShapeTextureBlendMode_StaticEnum, TEXT("EDABoundsShapeTextureBlendMode"), &Z_Registration_Info_UEnum_EDABoundsShapeTextureBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1936583857U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonCanvasRoomShapeTexture::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTexture_Statics::NewStructOps, TEXT("DungeonCanvasRoomShapeTexture"), &Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasRoomShapeTexture), 2712131317U) },
		{ FDungeonCanvasRoomShapeTextureList::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList_Statics::NewStructOps, TEXT("DungeonCanvasRoomShapeTextureList"), &Z_Registration_Info_UScriptStruct_DungeonCanvasRoomShapeTextureList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasRoomShapeTextureList), 1407042147U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasRoomShapeTextureComponent, UDungeonCanvasRoomShapeTextureComponent::StaticClass, TEXT("UDungeonCanvasRoomShapeTextureComponent"), &Z_Registration_Info_UClass_UDungeonCanvasRoomShapeTextureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasRoomShapeTextureComponent), 821821133U) },
		{ Z_Construct_UClass_ADungeonCanvasRoomShapeTextureActor, ADungeonCanvasRoomShapeTextureActor::StaticClass, TEXT("ADungeonCanvasRoomShapeTextureActor"), &Z_Registration_Info_UClass_ADungeonCanvasRoomShapeTextureActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonCanvasRoomShapeTextureActor), 3704536416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_2644797764(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasRoomShapeTexture_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
