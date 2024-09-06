// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/RoomLayouts/SimpleIsaacRoomLayoutBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleIsaacRoomLayoutBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USimpleIsaacRoomLayoutBuilder
void USimpleIsaacRoomLayoutBuilder::StaticRegisterNativesUSimpleIsaacRoomLayoutBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleIsaacRoomLayoutBuilder);
UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_NoRegister()
{
	return USimpleIsaacRoomLayoutBuilder::StaticClass();
}
struct Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Isaac/RoomLayouts/SimpleIsaacRoomLayoutBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/RoomLayouts/SimpleIsaacRoomLayoutBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleIsaacRoomLayoutBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsaacRoomLayoutBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::ClassParams = {
	&USimpleIsaacRoomLayoutBuilder::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder()
{
	if (!Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder.OuterSingleton, Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleIsaacRoomLayoutBuilder>()
{
	return USimpleIsaacRoomLayoutBuilder::StaticClass();
}
USimpleIsaacRoomLayoutBuilder::USimpleIsaacRoomLayoutBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleIsaacRoomLayoutBuilder);
USimpleIsaacRoomLayoutBuilder::~USimpleIsaacRoomLayoutBuilder() {}
// End Class USimpleIsaacRoomLayoutBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder, USimpleIsaacRoomLayoutBuilder::StaticClass, TEXT("USimpleIsaacRoomLayoutBuilder"), &Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleIsaacRoomLayoutBuilder), 3558133114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_1127609119(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
