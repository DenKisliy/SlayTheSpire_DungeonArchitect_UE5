// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasBlueprintGeneratedClass() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasMaterialLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonCanvasBlueprintGeneratedClass
void UDungeonCanvasBlueprintGeneratedClass::StaticRegisterNativesUDungeonCanvasBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasBlueprintGeneratedClass);
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_NoRegister()
{
	return UDungeonCanvasBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvasBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasBlueprintGeneratedClass, MaterialInstance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::NewProp_MaterialLayers_Inner = { "MaterialLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonCanvasMaterialLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::NewProp_MaterialLayers = { "MaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasBlueprintGeneratedClass, MaterialLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayers_MetaData), NewProp_MaterialLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::NewProp_MaterialLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::NewProp_MaterialLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::ClassParams = {
	&UDungeonCanvasBlueprintGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::PropPointers),
	0,
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasBlueprintGeneratedClass.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasBlueprintGeneratedClass>()
{
	return UDungeonCanvasBlueprintGeneratedClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasBlueprintGeneratedClass);
UDungeonCanvasBlueprintGeneratedClass::~UDungeonCanvasBlueprintGeneratedClass() {}
// End Class UDungeonCanvasBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasBlueprintGeneratedClass, UDungeonCanvasBlueprintGeneratedClass::StaticClass, TEXT("UDungeonCanvasBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UDungeonCanvasBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasBlueprintGeneratedClass), 2488402935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintGeneratedClass_h_1862472398(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
