// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasTrackedObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasTrackedObject_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonCanvasTrackedObject
void UDungeonCanvasTrackedObject::StaticRegisterNativesUDungeonCanvasTrackedObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasTrackedObject);
UClass* Z_Construct_UClass_UDungeonCanvasTrackedObject_NoRegister()
{
	return UDungeonCanvasTrackedObject::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////// Object Tracking ////////////////////////\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvasStructs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
		{ "ToolTip", "Object Tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientToRotation_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOccludesFogOfWar_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideWhenOutOfSight_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "Comment", "/** Higher numbers show up on top when overlapped with other icons. E.g. if you want your player icon to be drawn on top of everything else, bump this number up (e.g. 1000) */" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
		{ "ToolTip", "Higher numbers show up on top when overlapped with other icons. E.g. if you want your player icon to be drawn on top of everything else, bump this number up (e.g. 1000)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarOcclusionChannel_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "EditCondition", "bOccludesFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
	static void NewProp_bOrientToRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToRotation;
	static void NewProp_bOccludesFogOfWar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOccludesFogOfWar;
	static void NewProp_bHideWhenOutOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideWhenOutOfSight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FogOfWarOcclusionChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FogOfWarOcclusionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasTrackedObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasTrackedObject, IconName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) };
void Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOrientToRotation_SetBit(void* Obj)
{
	((UDungeonCanvasTrackedObject*)Obj)->bOrientToRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOrientToRotation = { "bOrientToRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasTrackedObject), &Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOrientToRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientToRotation_MetaData), NewProp_bOrientToRotation_MetaData) };
void Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOccludesFogOfWar_SetBit(void* Obj)
{
	((UDungeonCanvasTrackedObject*)Obj)->bOccludesFogOfWar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOccludesFogOfWar = { "bOccludesFogOfWar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasTrackedObject), &Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOccludesFogOfWar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOccludesFogOfWar_MetaData), NewProp_bOccludesFogOfWar_MetaData) };
void Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bHideWhenOutOfSight_SetBit(void* Obj)
{
	((UDungeonCanvasTrackedObject*)Obj)->bHideWhenOutOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bHideWhenOutOfSight = { "bHideWhenOutOfSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasTrackedObject), &Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bHideWhenOutOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideWhenOutOfSight_MetaData), NewProp_bHideWhenOutOfSight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasTrackedObject, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_FogOfWarOcclusionChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_FogOfWarOcclusionChannel = { "FogOfWarOcclusionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasTrackedObject, FogOfWarOcclusionChannel), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarOcclusionChannel_MetaData), NewProp_FogOfWarOcclusionChannel_MetaData) }; // 3835936595
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_IconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOrientToRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bOccludesFogOfWar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_bHideWhenOutOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_FogOfWarOcclusionChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::NewProp_FogOfWarOcclusionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::ClassParams = {
	&UDungeonCanvasTrackedObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasTrackedObject()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasTrackedObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasTrackedObject.OuterSingleton, Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasTrackedObject.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasTrackedObject>()
{
	return UDungeonCanvasTrackedObject::StaticClass();
}
UDungeonCanvasTrackedObject::UDungeonCanvasTrackedObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasTrackedObject);
UDungeonCanvasTrackedObject::~UDungeonCanvasTrackedObject() {}
// End Class UDungeonCanvasTrackedObject

// Begin Enum EDungeonCanvasIconCoordinateSystem
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem;
static UEnum* EDungeonCanvasIconCoordinateSystem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonCanvasIconCoordinateSystem"));
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonCanvasIconCoordinateSystem>()
{
	return EDungeonCanvasIconCoordinateSystem_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
		{ "Pixels.DisplayName", "Pixels" },
		{ "Pixels.Name", "EDungeonCanvasIconCoordinateSystem::Pixels" },
		{ "WorldCoordinates.DisplayName", "World Coordinates" },
		{ "WorldCoordinates.Name", "EDungeonCanvasIconCoordinateSystem::WorldCoordinates" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonCanvasIconCoordinateSystem::Pixels", (int64)EDungeonCanvasIconCoordinateSystem::Pixels },
		{ "EDungeonCanvasIconCoordinateSystem::WorldCoordinates", (int64)EDungeonCanvasIconCoordinateSystem::WorldCoordinates },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EDungeonCanvasIconCoordinateSystem",
	"EDungeonCanvasIconCoordinateSystem",
	Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem.InnerSingleton;
}
// End Enum EDungeonCanvasIconCoordinateSystem

// Begin ScriptStruct FDungeonCanvasOverlayInternalIcon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon;
class UScriptStruct* FDungeonCanvasOverlayInternalIcon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasOverlayInternalIcon"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasOverlayInternalIcon>()
{
	return FDungeonCanvasOverlayInternalIcon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dungeon Canvas" },
		{ "DisallowedClasses", "/Script/MediaAssets.MediaTexture" },
		{ "DisplayName", "Image" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteRotation_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "Comment", "/** The base rotation will be ignored.   Enable this if you want the icon to always face a certain angle.  E.g. When the whole map rotates when the player looks around,  if you have an up or down arrow in a lift room, you don't this arrow icon to rotate */" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
		{ "ToolTip", "The base rotation will be ignored.   Enable this if you want the icon to always face a certain angle.  E.g. When the whole map rotates when the player looks around,  if you have an up or down arrow in a lift room, you don't this arrow icon to rotate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ResourceObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static void NewProp_bAbsoluteRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasOverlayInternalIcon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayInternalIcon, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceObject_MetaData), NewProp_ResourceObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayInternalIcon, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tint_MetaData), NewProp_Tint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayInternalIcon, RotationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayInternalIcon, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
void Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_bAbsoluteRotation_SetBit(void* Obj)
{
	((FDungeonCanvasOverlayInternalIcon*)Obj)->bAbsoluteRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_bAbsoluteRotation = { "bAbsoluteRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDungeonCanvasOverlayInternalIcon), &Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_bAbsoluteRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteRotation_MetaData), NewProp_bAbsoluteRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_ResourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewProp_bAbsoluteRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasOverlayInternalIcon",
	Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::PropPointers),
	sizeof(FDungeonCanvasOverlayInternalIcon),
	alignof(FDungeonCanvasOverlayInternalIcon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasOverlayInternalIcon

// Begin ScriptStruct FDungeonCanvasOverlayIcon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon;
class UScriptStruct* FDungeonCanvasOverlayIcon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasOverlayIcon"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasOverlayIcon>()
{
	return FDungeonCanvasOverlayIcon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dungeon Canvas" },
		{ "DisallowedClasses", "/Script/MediaAssets.MediaTexture" },
		{ "DisplayName", "Image" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSizeType_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteRotation_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "Comment", "/** The base rotation will be ignored.   Enable this if you want the icon to always face a certain angle.  E.g. When the whole map rotates when the player looks around,  if you have an up or down arrow in a lift room, you don't this arrow icon to rotate */" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
		{ "ToolTip", "The base rotation will be ignored.   Enable this if you want the icon to always face a certain angle.  E.g. When the whole map rotates when the player looks around,  if you have an up or down arrow in a lift room, you don't this arrow icon to rotate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenSizeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScreenSizeType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationOffset;
	static void NewProp_bAbsoluteRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteRotation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasOverlayIcon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceObject_MetaData), NewProp_ResourceObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ScreenSizeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ScreenSizeType = { "ScreenSizeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, ScreenSizeType), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonCanvasIconCoordinateSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSizeType_MetaData), NewProp_ScreenSizeType_MetaData) }; // 1713847382
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tint_MetaData), NewProp_Tint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, RotationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
void Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_bAbsoluteRotation_SetBit(void* Obj)
{
	((FDungeonCanvasOverlayIcon*)Obj)->bAbsoluteRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_bAbsoluteRotation = { "bAbsoluteRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDungeonCanvasOverlayIcon), &Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_bAbsoluteRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteRotation_MetaData), NewProp_bAbsoluteRotation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasOverlayIcon, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ResourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ScreenSizeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_ScreenSizeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_bAbsoluteRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasOverlayIcon",
	Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::PropPointers),
	sizeof(FDungeonCanvasOverlayIcon),
	alignof(FDungeonCanvasOverlayIcon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasOverlayIcon

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDungeonCanvasIconCoordinateSystem_StaticEnum, TEXT("EDungeonCanvasIconCoordinateSystem"), &Z_Registration_Info_UEnum_EDungeonCanvasIconCoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1713847382U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonCanvasOverlayInternalIcon::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics::NewStructOps, TEXT("DungeonCanvasOverlayInternalIcon"), &Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayInternalIcon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasOverlayInternalIcon), 3469200709U) },
		{ FDungeonCanvasOverlayIcon::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics::NewStructOps, TEXT("DungeonCanvasOverlayIcon"), &Z_Registration_Info_UScriptStruct_DungeonCanvasOverlayIcon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasOverlayIcon), 657378812U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasTrackedObject, UDungeonCanvasTrackedObject::StaticClass, TEXT("UDungeonCanvasTrackedObject"), &Z_Registration_Info_UClass_UDungeonCanvasTrackedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasTrackedObject), 58378625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_942921764(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
