// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/RoomLayouts/IsaacRoomLayoutBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacRoomLayoutBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UIsaacRoomLayoutBuilder
void UIsaacRoomLayoutBuilder::StaticRegisterNativesUIsaacRoomLayoutBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacRoomLayoutBuilder);
UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder_NoRegister()
{
	return UIsaacRoomLayoutBuilder::StaticClass();
}
struct Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Isaac/RoomLayouts/IsaacRoomLayoutBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/RoomLayouts/IsaacRoomLayoutBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacRoomLayoutBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::ClassParams = {
	&UIsaacRoomLayoutBuilder::StaticClass,
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
	0x043010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder()
{
	if (!Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder.OuterSingleton, Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacRoomLayoutBuilder>()
{
	return UIsaacRoomLayoutBuilder::StaticClass();
}
UIsaacRoomLayoutBuilder::UIsaacRoomLayoutBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacRoomLayoutBuilder);
UIsaacRoomLayoutBuilder::~UIsaacRoomLayoutBuilder() {}
// End Class UIsaacRoomLayoutBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacRoomLayoutBuilder, UIsaacRoomLayoutBuilder::StaticClass, TEXT("UIsaacRoomLayoutBuilder"), &Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacRoomLayoutBuilder), 684545798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_1555085572(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
