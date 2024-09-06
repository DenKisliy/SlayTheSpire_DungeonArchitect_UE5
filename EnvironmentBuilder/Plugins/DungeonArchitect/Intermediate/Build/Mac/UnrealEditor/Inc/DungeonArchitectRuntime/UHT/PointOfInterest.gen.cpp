// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/PointOfInterest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointOfInterest() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonPointOfInterestActor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonPointOfInterestActor_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonPointOfInterestComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonPointOfInterestComponent_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonPointOfInterest();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonPointOfInterest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonPointOfInterest;
class UScriptStruct* FDungeonPointOfInterest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonPointOfInterest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonPointOfInterest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonPointOfInterest, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonPointOfInterest"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonPointOfInterest.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonPointOfInterest>()
{
	return FDungeonPointOfInterest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Caption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonPointOfInterest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonPointOfInterest, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonPointOfInterest, Caption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caption_MetaData), NewProp_Caption_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonPointOfInterest, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::NewProp_Caption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonPointOfInterest",
	Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::PropPointers),
	sizeof(FDungeonPointOfInterest),
	alignof(FDungeonPointOfInterest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonPointOfInterest()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonPointOfInterest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonPointOfInterest.InnerSingleton, Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonPointOfInterest.InnerSingleton;
}
// End ScriptStruct FDungeonPointOfInterest

// Begin Class UDungeonPointOfInterestComponent
void UDungeonPointOfInterestComponent::StaticRegisterNativesUDungeonPointOfInterestComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonPointOfInterestComponent);
UClass* Z_Construct_UClass_UDungeonPointOfInterestComponent_NoRegister()
{
	return UDungeonPointOfInterestComponent::StaticClass();
}
struct Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Physics Lighting LOD Rendering TextureStreaming Transform Activation Components|Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Core/Utils/PointOfInterest.h" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInCanvas_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Caption;
	static void NewProp_bVisibleInCanvas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInCanvas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonPointOfInterestComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonPointOfInterestComponent, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonPointOfInterestComponent, Caption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caption_MetaData), NewProp_Caption_MetaData) };
void Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_bVisibleInCanvas_SetBit(void* Obj)
{
	((UDungeonPointOfInterestComponent*)Obj)->bVisibleInCanvas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_bVisibleInCanvas = { "bVisibleInCanvas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonPointOfInterestComponent), &Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_bVisibleInCanvas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInCanvas_MetaData), NewProp_bVisibleInCanvas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_Caption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::NewProp_bVisibleInCanvas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::ClassParams = {
	&UDungeonPointOfInterestComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::PropPointers),
	0,
	0x04B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonPointOfInterestComponent()
{
	if (!Z_Registration_Info_UClass_UDungeonPointOfInterestComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonPointOfInterestComponent.OuterSingleton, Z_Construct_UClass_UDungeonPointOfInterestComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonPointOfInterestComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonPointOfInterestComponent>()
{
	return UDungeonPointOfInterestComponent::StaticClass();
}
UDungeonPointOfInterestComponent::UDungeonPointOfInterestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonPointOfInterestComponent);
UDungeonPointOfInterestComponent::~UDungeonPointOfInterestComponent() {}
// End Class UDungeonPointOfInterestComponent

// Begin Class ADungeonPointOfInterestActor
void ADungeonPointOfInterestActor::StaticRegisterNativesADungeonPointOfInterestActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonPointOfInterestActor);
UClass* Z_Construct_UClass_ADungeonPointOfInterestActor_NoRegister()
{
	return ADungeonPointOfInterestActor::StaticClass();
}
struct Z_Construct_UClass_ADungeonPointOfInterestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Core/Utils/PointOfInterest.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointOfInterestComponent_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/PointOfInterest.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointOfInterestComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonPointOfInterestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::NewProp_PointOfInterestComponent = { "PointOfInterestComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonPointOfInterestActor, PointOfInterestComponent), Z_Construct_UClass_UDungeonPointOfInterestComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointOfInterestComponent_MetaData), NewProp_PointOfInterestComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x0010000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonPointOfInterestActor, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Billboard_MetaData), NewProp_Billboard_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::NewProp_PointOfInterestComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::NewProp_Billboard,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::ClassParams = {
	&ADungeonPointOfInterestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonPointOfInterestActor()
{
	if (!Z_Registration_Info_UClass_ADungeonPointOfInterestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonPointOfInterestActor.OuterSingleton, Z_Construct_UClass_ADungeonPointOfInterestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonPointOfInterestActor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonPointOfInterestActor>()
{
	return ADungeonPointOfInterestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonPointOfInterestActor);
ADungeonPointOfInterestActor::~ADungeonPointOfInterestActor() {}
// End Class ADungeonPointOfInterestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_PointOfInterest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonPointOfInterest::StaticStruct, Z_Construct_UScriptStruct_FDungeonPointOfInterest_Statics::NewStructOps, TEXT("DungeonPointOfInterest"), &Z_Registration_Info_UScriptStruct_DungeonPointOfInterest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonPointOfInterest), 586671446U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonPointOfInterestComponent, UDungeonPointOfInterestComponent::StaticClass, TEXT("UDungeonPointOfInterestComponent"), &Z_Registration_Info_UClass_UDungeonPointOfInterestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonPointOfInterestComponent), 2800008465U) },
		{ Z_Construct_UClass_ADungeonPointOfInterestActor, ADungeonPointOfInterestActor::StaticClass, TEXT("ADungeonPointOfInterestActor"), &Z_Registration_Info_UClass_ADungeonPointOfInterestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonPointOfInterestActor), 1119340411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_PointOfInterest_h_2183917217(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_PointOfInterest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_PointOfInterest_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_PointOfInterest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_PointOfInterest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
