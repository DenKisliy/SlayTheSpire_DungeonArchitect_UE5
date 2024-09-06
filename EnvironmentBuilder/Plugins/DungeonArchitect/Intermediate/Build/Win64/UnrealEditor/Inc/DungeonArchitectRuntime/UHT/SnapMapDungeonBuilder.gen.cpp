// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapMapDungeonBuilder Function BuildPreviewSnapLayout
struct Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapMapDungeonBuilder, nullptr, "BuildPreviewSnapLayout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapMapDungeonBuilder::execBuildPreviewSnapLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildPreviewSnapLayout();
	P_NATIVE_END;
}
// End Class USnapMapDungeonBuilder Function BuildPreviewSnapLayout

// Begin Class USnapMapDungeonBuilder
void USnapMapDungeonBuilder::StaticRegisterNativesUSnapMapDungeonBuilder()
{
	UClass* Class = USnapMapDungeonBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildPreviewSnapLayout", &USnapMapDungeonBuilder::execBuildPreviewSnapLayout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonBuilder);
UClass* Z_Construct_UClass_USnapMapDungeonBuilder_NoRegister()
{
	return USnapMapDungeonBuilder::StaticClass();
}
struct Z_Construct_UClass_USnapMapDungeonBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The snap map builder\n*/" },
#endif
		{ "Description", "Get full artistic control on designing the rooms, which are then stitched together using an intuitive Graph Grammar rule editor, offering you complete control on the procedural layout of your dungeons." },
		{ "DisplayName", "Snap Map" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonBuilder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The snap map builder" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout, "BuildPreviewSnapLayout" }, // 1135794085
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapDungeonBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonBuilder_Statics::ClassParams = {
	&USnapMapDungeonBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapDungeonBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapDungeonBuilder()
{
	if (!Z_Registration_Info_UClass_USnapMapDungeonBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonBuilder.OuterSingleton, Z_Construct_UClass_USnapMapDungeonBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapDungeonBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonBuilder>()
{
	return USnapMapDungeonBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonBuilder);
USnapMapDungeonBuilder::~USnapMapDungeonBuilder() {}
// End Class USnapMapDungeonBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonBuilder, USnapMapDungeonBuilder::StaticClass, TEXT("USnapMapDungeonBuilder"), &Z_Registration_Info_UClass_USnapMapDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonBuilder), 4198112954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_1078336153(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
