// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonModel() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraph_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapDungeonModelBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapMapDungeonModel
void USnapMapDungeonModel::StaticRegisterNativesUSnapMapDungeonModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonModel);
UClass* Z_Construct_UClass_USnapMapDungeonModel_NoRegister()
{
	return USnapMapDungeonModel::StaticClass();
}
struct Z_Construct_UClass_USnapMapDungeonModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_MissionGraph = { "MissionGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapDungeonModel, MissionGraph), Z_Construct_UClass_UGrammarScriptGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionGraph_MetaData), NewProp_MissionGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapDungeonModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_MissionGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapMapDungeonModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USnapDungeonModelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonModel_Statics::ClassParams = {
	&USnapMapDungeonModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapMapDungeonModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapDungeonModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapDungeonModel()
{
	if (!Z_Registration_Info_UClass_USnapMapDungeonModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonModel.OuterSingleton, Z_Construct_UClass_USnapMapDungeonModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapDungeonModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonModel>()
{
	return USnapMapDungeonModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonModel);
USnapMapDungeonModel::~USnapMapDungeonModel() {}
// End Class USnapMapDungeonModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonModel, USnapMapDungeonModel::StaticClass, TEXT("USnapMapDungeonModel"), &Z_Registration_Info_UClass_USnapMapDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonModel), 1633386034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_1525661778(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
