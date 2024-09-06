// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMarkerEmitter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMarkerEmitter();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EDungeonMarkerEmitterExecStage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage;
static UEnum* EDungeonMarkerEmitterExecStage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonMarkerEmitterExecStage"));
	}
	return Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonMarkerEmitterExecStage>()
{
	return EDungeonMarkerEmitterExecStage_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AfterPatternMatcher.Comment", "/**\n\x09 * Executes after the pattern matcher\n\x09 * Markers emitted using the Pattern Matcher are available to this blueprint\n\x09 * However, markers emitted from this blueprint will not be available to the pattern matcher\n\x09 */" },
		{ "AfterPatternMatcher.Name", "EDungeonMarkerEmitterExecStage::AfterPatternMatcher" },
		{ "AfterPatternMatcher.ToolTip", "Executes after the pattern matcher\nMarkers emitted using the Pattern Matcher are available to this blueprint\nHowever, markers emitted from this blueprint will not be available to the pattern matcher" },
		{ "BeforePatternMatcher.Comment", "/**\n\x09 * Execute before the pattern matcher\n\x09 * Markers emitted by this blueprint are available to the pattern matcher\n\x09 * However, the Patter Matcher emitted markers are not available to this blueprint, since they haven't executed yet\n\x09 */" },
		{ "BeforePatternMatcher.Name", "EDungeonMarkerEmitterExecStage::BeforePatternMatcher" },
		{ "BeforePatternMatcher.ToolTip", "Execute before the pattern matcher\nMarkers emitted by this blueprint are available to the pattern matcher\nHowever, the Patter Matcher emitted markers are not available to this blueprint, since they haven't executed yet" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonMarkerEmitterExecStage::BeforePatternMatcher", (int64)EDungeonMarkerEmitterExecStage::BeforePatternMatcher },
		{ "EDungeonMarkerEmitterExecStage::AfterPatternMatcher", (int64)EDungeonMarkerEmitterExecStage::AfterPatternMatcher },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EDungeonMarkerEmitterExecStage",
	"EDungeonMarkerEmitterExecStage",
	Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage()
{
	if (!Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage.InnerSingleton;
}
// End Enum EDungeonMarkerEmitterExecStage

// Begin Class UDungeonMarkerEmitter Function EmitMarkers
struct DungeonMarkerEmitter_eventEmitMarkers_Parms
{
	UDungeonBuilder* Builder;
	UDungeonModel* Model;
	UDungeonConfig* Config;
	UDungeonQuery* Query;
};
static FName NAME_UDungeonMarkerEmitter_EmitMarkers = FName(TEXT("EmitMarkers"));
void UDungeonMarkerEmitter::EmitMarkers(UDungeonBuilder* Builder, UDungeonModel* Model, UDungeonConfig* Config, UDungeonQuery* Query)
{
	DungeonMarkerEmitter_eventEmitMarkers_Parms Parms;
	Parms.Builder=Builder;
	Parms.Model=Model;
	Parms.Config=Config;
	Parms.Query=Query;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonMarkerEmitter_EmitMarkers),&Parms);
}
struct Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called by the theming engine to emit markers */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the theming engine to emit markers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Builder), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Model), Z_Construct_UClass_UDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Config), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Query), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Query,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonMarkerEmitter, nullptr, "EmitMarkers", nullptr, nullptr, Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::PropPointers), sizeof(DungeonMarkerEmitter_eventEmitMarkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonMarkerEmitter_eventEmitMarkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonMarkerEmitter::execEmitMarkers)
{
	P_GET_OBJECT(UDungeonBuilder,Z_Param_Builder);
	P_GET_OBJECT(UDungeonModel,Z_Param_Model);
	P_GET_OBJECT(UDungeonConfig,Z_Param_Config);
	P_GET_OBJECT(UDungeonQuery,Z_Param_Query);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EmitMarkers_Implementation(Z_Param_Builder,Z_Param_Model,Z_Param_Config,Z_Param_Query);
	P_NATIVE_END;
}
// End Class UDungeonMarkerEmitter Function EmitMarkers

// Begin Class UDungeonMarkerEmitter
void UDungeonMarkerEmitter::StaticRegisterNativesUDungeonMarkerEmitter()
{
	UClass* Class = UDungeonMarkerEmitter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EmitMarkers", &UDungeonMarkerEmitter::execEmitMarkers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonMarkerEmitter);
UClass* Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister()
{
	return UDungeonMarkerEmitter::StaticClass();
}
struct Z_Construct_UClass_UDungeonMarkerEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Implement this class in blueprint (or C++) to emit your own custom markers in the scene\n*/" },
#endif
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement this class in blueprint (or C++) to emit your own custom markers in the scene" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionStage_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionStage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers, "EmitMarkers" }, // 562548636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonMarkerEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDungeonMarkerEmitter_Statics::NewProp_ExecutionStage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDungeonMarkerEmitter_Statics::NewProp_ExecutionStage = { "ExecutionStage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMarkerEmitter, ExecutionStage), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMarkerEmitterExecStage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionStage_MetaData), NewProp_ExecutionStage_MetaData) }; // 962477486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonMarkerEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMarkerEmitter_Statics::NewProp_ExecutionStage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMarkerEmitter_Statics::NewProp_ExecutionStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMarkerEmitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonMarkerEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMarkerEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonMarkerEmitter_Statics::ClassParams = {
	&UDungeonMarkerEmitter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonMarkerEmitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMarkerEmitter_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMarkerEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonMarkerEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonMarkerEmitter()
{
	if (!Z_Registration_Info_UClass_UDungeonMarkerEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonMarkerEmitter.OuterSingleton, Z_Construct_UClass_UDungeonMarkerEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonMarkerEmitter.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonMarkerEmitter>()
{
	return UDungeonMarkerEmitter::StaticClass();
}
UDungeonMarkerEmitter::UDungeonMarkerEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonMarkerEmitter);
UDungeonMarkerEmitter::~UDungeonMarkerEmitter() {}
// End Class UDungeonMarkerEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDungeonMarkerEmitterExecStage_StaticEnum, TEXT("EDungeonMarkerEmitterExecStage"), &Z_Registration_Info_UEnum_EDungeonMarkerEmitterExecStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 962477486U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonMarkerEmitter, UDungeonMarkerEmitter::StaticClass, TEXT("UDungeonMarkerEmitter"), &Z_Registration_Info_UClass_UDungeonMarkerEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonMarkerEmitter), 1237265903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_1075132458(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
