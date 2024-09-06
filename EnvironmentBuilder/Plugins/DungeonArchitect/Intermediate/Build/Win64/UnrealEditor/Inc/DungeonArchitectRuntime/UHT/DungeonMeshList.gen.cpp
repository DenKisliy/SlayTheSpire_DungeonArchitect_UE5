// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonMeshList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMeshList() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMeshList();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMeshList_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonActorTemplateListItem();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMeshListItem();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonMeshListItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonMeshListItem;
class UScriptStruct* FDungeonMeshListItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonMeshListItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonMeshListItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonMeshListItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonMeshListItem"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonMeshListItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonMeshListItem>()
{
	return FDungeonMeshListItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonMeshListItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonMeshListItem, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonMeshListItem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonMeshListItem",
	Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::PropPointers),
	sizeof(FDungeonMeshListItem),
	alignof(FDungeonMeshListItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonMeshListItem()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonMeshListItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonMeshListItem.InnerSingleton, Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonMeshListItem.InnerSingleton;
}
// End ScriptStruct FDungeonMeshListItem

// Begin ScriptStruct FDungeonActorTemplateListItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem;
class UScriptStruct* FDungeonActorTemplateListItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonActorTemplateListItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonActorTemplateListItem"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonActorTemplateListItem>()
{
	return FDungeonActorTemplateListItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassTemplate_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonActorTemplateListItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::NewProp_ClassTemplate = { "ClassTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonActorTemplateListItem, ClassTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassTemplate_MetaData), NewProp_ClassTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonActorTemplateListItem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::NewProp_ClassTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonActorTemplateListItem",
	Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::PropPointers),
	sizeof(FDungeonActorTemplateListItem),
	alignof(FDungeonActorTemplateListItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonActorTemplateListItem()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem.InnerSingleton, Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem.InnerSingleton;
}
// End ScriptStruct FDungeonActorTemplateListItem

// Begin Class UDungeonMeshList
void UDungeonMeshList::StaticRegisterNativesUDungeonMeshList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonMeshList);
UClass* Z_Construct_UClass_UDungeonMeshList_NoRegister()
{
	return UDungeonMeshList::StaticClass();
}
struct Z_Construct_UClass_UDungeonMeshList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Actors/DungeonMeshList.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMeshList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTemplates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorTemplates;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HashCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonMeshList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonMeshListItem, METADATA_PARAMS(0, nullptr) }; // 2451025421
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMeshList, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshes_MetaData), NewProp_StaticMeshes_MetaData) }; // 2451025421
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_ActorTemplates_Inner = { "ActorTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonActorTemplateListItem, METADATA_PARAMS(0, nullptr) }; // 2283579774
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_ActorTemplates = { "ActorTemplates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMeshList, ActorTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTemplates_MetaData), NewProp_ActorTemplates_MetaData) }; // 2283579774
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_HashCode = { "HashCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMeshList, HashCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashCode_MetaData), NewProp_HashCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonMeshList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_StaticMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_StaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_ActorTemplates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_ActorTemplates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMeshList_Statics::NewProp_HashCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMeshList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonMeshList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMeshList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonMeshList_Statics::ClassParams = {
	&UDungeonMeshList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonMeshList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMeshList_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMeshList_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonMeshList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonMeshList()
{
	if (!Z_Registration_Info_UClass_UDungeonMeshList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonMeshList.OuterSingleton, Z_Construct_UClass_UDungeonMeshList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonMeshList.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonMeshList>()
{
	return UDungeonMeshList::StaticClass();
}
UDungeonMeshList::UDungeonMeshList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonMeshList);
UDungeonMeshList::~UDungeonMeshList() {}
// End Class UDungeonMeshList

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMeshList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonMeshListItem::StaticStruct, Z_Construct_UScriptStruct_FDungeonMeshListItem_Statics::NewStructOps, TEXT("DungeonMeshListItem"), &Z_Registration_Info_UScriptStruct_DungeonMeshListItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonMeshListItem), 2451025421U) },
		{ FDungeonActorTemplateListItem::StaticStruct, Z_Construct_UScriptStruct_FDungeonActorTemplateListItem_Statics::NewStructOps, TEXT("DungeonActorTemplateListItem"), &Z_Registration_Info_UScriptStruct_DungeonActorTemplateListItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonActorTemplateListItem), 2283579774U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonMeshList, UDungeonMeshList::StaticClass, TEXT("UDungeonMeshList"), &Z_Registration_Info_UClass_UDungeonMeshList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonMeshList), 2745621329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMeshList_h_4265334355(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMeshList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMeshList_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMeshList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMeshList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
