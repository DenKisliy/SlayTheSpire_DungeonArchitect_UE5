// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/RoomLayouts/StylizedIsaacRoomLayoutBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStylizedIsaacRoomLayoutBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UStylizedIsaacRoomLayoutBuilder
void UStylizedIsaacRoomLayoutBuilder::StaticRegisterNativesUStylizedIsaacRoomLayoutBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStylizedIsaacRoomLayoutBuilder);
UClass* Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_NoRegister()
{
	return UStylizedIsaacRoomLayoutBuilder::StaticClass();
}
struct Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Isaac/RoomLayouts/StylizedIsaacRoomLayoutBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/RoomLayouts/StylizedIsaacRoomLayoutBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minBrushSize_MetaData[] = {
		{ "Category", "LayoutBuilder" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/RoomLayouts/StylizedIsaacRoomLayoutBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxBrushSize_MetaData[] = {
		{ "Category", "LayoutBuilder" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/RoomLayouts/StylizedIsaacRoomLayoutBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_minBrushSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxBrushSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStylizedIsaacRoomLayoutBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::NewProp_minBrushSize = { "minBrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStylizedIsaacRoomLayoutBuilder, minBrushSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minBrushSize_MetaData), NewProp_minBrushSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::NewProp_maxBrushSize = { "maxBrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStylizedIsaacRoomLayoutBuilder, maxBrushSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxBrushSize_MetaData), NewProp_maxBrushSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::NewProp_minBrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::NewProp_maxBrushSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsaacRoomLayoutBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::ClassParams = {
	&UStylizedIsaacRoomLayoutBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder()
{
	if (!Z_Registration_Info_UClass_UStylizedIsaacRoomLayoutBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStylizedIsaacRoomLayoutBuilder.OuterSingleton, Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStylizedIsaacRoomLayoutBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UStylizedIsaacRoomLayoutBuilder>()
{
	return UStylizedIsaacRoomLayoutBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStylizedIsaacRoomLayoutBuilder);
UStylizedIsaacRoomLayoutBuilder::~UStylizedIsaacRoomLayoutBuilder() {}
// End Class UStylizedIsaacRoomLayoutBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_StylizedIsaacRoomLayoutBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStylizedIsaacRoomLayoutBuilder, UStylizedIsaacRoomLayoutBuilder::StaticClass, TEXT("UStylizedIsaacRoomLayoutBuilder"), &Z_Registration_Info_UClass_UStylizedIsaacRoomLayoutBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStylizedIsaacRoomLayoutBuilder), 1646146565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_StylizedIsaacRoomLayoutBuilder_h_127013208(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_StylizedIsaacRoomLayoutBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_StylizedIsaacRoomLayoutBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
