// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonActorTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonActorTemplate();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonActorTemplate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonActorTemplate
void UDungeonActorTemplate::StaticRegisterNativesUDungeonActorTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonActorTemplate);
UClass* Z_Construct_UClass_UDungeonActorTemplate_NoRegister()
{
	return UDungeonActorTemplate::StaticClass();
}
struct Z_Construct_UClass_UDungeonActorTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Core/Actors/DungeonActorTemplate.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTemplate_MetaData[] = {
		{ "Comment", "/** Property to point to the template child actor for details panel purposes */" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonActorTemplate.h" },
		{ "ToolTip", "Property to point to the template child actor for details panel purposes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonActorTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ClassTemplate = { "ClassTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonActorTemplate, ClassTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassTemplate_MetaData), NewProp_ClassTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ActorTemplate = { "ActorTemplate", nullptr, (EPropertyFlags)0x0010000000000008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonActorTemplate, ActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTemplate_MetaData), NewProp_ActorTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonActorTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ClassTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ActorTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonActorTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonActorTemplate_Statics::ClassParams = {
	&UDungeonActorTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonActorTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonActorTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonActorTemplate()
{
	if (!Z_Registration_Info_UClass_UDungeonActorTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonActorTemplate.OuterSingleton, Z_Construct_UClass_UDungeonActorTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonActorTemplate.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonActorTemplate>()
{
	return UDungeonActorTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonActorTemplate);
UDungeonActorTemplate::~UDungeonActorTemplate() {}
// End Class UDungeonActorTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonActorTemplate, UDungeonActorTemplate::StaticClass, TEXT("UDungeonActorTemplate"), &Z_Registration_Info_UClass_UDungeonActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonActorTemplate), 3172798454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_1285657446(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
