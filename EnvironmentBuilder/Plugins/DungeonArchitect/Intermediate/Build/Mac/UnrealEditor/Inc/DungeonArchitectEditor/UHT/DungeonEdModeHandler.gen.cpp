// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/EditorMode/Legacy/DungeonEdMode/DungeonEdModeHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEdModeHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdModeHandler();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdModeHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UDungeonEdModeHandler
void UDungeonEdModeHandler::StaticRegisterNativesUDungeonEdModeHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEdModeHandler);
UClass* Z_Construct_UClass_UDungeonEdModeHandler_NoRegister()
{
	return UDungeonEdModeHandler::StaticClass();
}
struct Z_Construct_UClass_UDungeonEdModeHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Legacy/DungeonEdMode/DungeonEdModeHandler.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/Legacy/DungeonEdMode/DungeonEdModeHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEdModeHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonEdModeHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdModeHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEdModeHandler_Statics::ClassParams = {
	&UDungeonEdModeHandler::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdModeHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonEdModeHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonEdModeHandler()
{
	if (!Z_Registration_Info_UClass_UDungeonEdModeHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEdModeHandler.OuterSingleton, Z_Construct_UClass_UDungeonEdModeHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonEdModeHandler.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonEdModeHandler>()
{
	return UDungeonEdModeHandler::StaticClass();
}
UDungeonEdModeHandler::UDungeonEdModeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEdModeHandler);
UDungeonEdModeHandler::~UDungeonEdModeHandler() {}
// End Class UDungeonEdModeHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_Legacy_DungeonEdMode_DungeonEdModeHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonEdModeHandler, UDungeonEdModeHandler::StaticClass, TEXT("UDungeonEdModeHandler"), &Z_Registration_Info_UClass_UDungeonEdModeHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEdModeHandler), 3576691620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_Legacy_DungeonEdMode_DungeonEdModeHandler_h_67766165(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_Legacy_DungeonEdMode_DungeonEdModeHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_Legacy_DungeonEdMode_DungeonEdModeHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
