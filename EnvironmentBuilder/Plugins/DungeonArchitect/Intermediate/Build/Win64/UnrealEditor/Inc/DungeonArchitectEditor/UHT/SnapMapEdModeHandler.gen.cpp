// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Builders/SnapMap/EditorMode/SnapMapEdModeHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapEdModeHandler() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdModeHandler();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeHandler();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapMapEdModeHandler
void USnapMapEdModeHandler::StaticRegisterNativesUSnapMapEdModeHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapEdModeHandler);
UClass* Z_Construct_UClass_USnapMapEdModeHandler_NoRegister()
{
	return USnapMapEdModeHandler::StaticClass();
}
struct Z_Construct_UClass_USnapMapEdModeHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/SnapMap/EditorMode/SnapMapEdModeHandler.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/EditorMode/SnapMapEdModeHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapEdModeHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapEdModeHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEdModeHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapEdModeHandler_Statics::ClassParams = {
	&USnapMapEdModeHandler::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapEdModeHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapEdModeHandler()
{
	if (!Z_Registration_Info_UClass_USnapMapEdModeHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapEdModeHandler.OuterSingleton, Z_Construct_UClass_USnapMapEdModeHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapEdModeHandler.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapEdModeHandler>()
{
	return USnapMapEdModeHandler::StaticClass();
}
USnapMapEdModeHandler::USnapMapEdModeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapEdModeHandler);
USnapMapEdModeHandler::~USnapMapEdModeHandler() {}
// End Class USnapMapEdModeHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapEdModeHandler, USnapMapEdModeHandler::StaticClass, TEXT("USnapMapEdModeHandler"), &Z_Registration_Info_UClass_USnapMapEdModeHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapEdModeHandler), 656207861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_2059530070(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
