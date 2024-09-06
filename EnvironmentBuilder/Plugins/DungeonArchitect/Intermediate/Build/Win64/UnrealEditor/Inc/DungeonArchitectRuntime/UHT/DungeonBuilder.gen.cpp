// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonBuilder.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAMarkerInfo();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonBuilder Function EmitDungeonMarkers
static FName NAME_UDungeonBuilder_EmitDungeonMarkers = FName(TEXT("EmitDungeonMarkers"));
void UDungeonBuilder::EmitDungeonMarkers()
{
	ProcessEvent(FindFunctionChecked(NAME_UDungeonBuilder_EmitDungeonMarkers),NULL);
}
struct Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuilder, nullptr, "EmitDungeonMarkers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuilder::execEmitDungeonMarkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EmitDungeonMarkers_Implementation();
	P_NATIVE_END;
}
// End Class UDungeonBuilder Function EmitDungeonMarkers

// Begin Class UDungeonBuilder Function EmitMarker
struct Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics
{
	struct DungeonBuilder_eventEmitMarker_Parms
	{
		FString SocketType;
		FTransform Transform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SocketType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_SocketType = { "SocketType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuilder_eventEmitMarker_Parms, SocketType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketType_MetaData), NewProp_SocketType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuilder_eventEmitMarker_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_SocketType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuilder, nullptr, "EmitMarker", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::DungeonBuilder_eventEmitMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::DungeonBuilder_eventEmitMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuilder_EmitMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuilder::execEmitMarker)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SocketType);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EmitMarker(Z_Param_SocketType,Z_Param_Out_Transform);
	P_NATIVE_END;
}
// End Class UDungeonBuilder Function EmitMarker

// Begin Class UDungeonBuilder Function GetMarkers
struct Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics
{
	struct DungeonBuilder_eventGetMarkers_Parms
	{
		TArray<FDAMarkerInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAMarkerInfo, METADATA_PARAMS(0, nullptr) }; // 1218632746
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuilder_eventGetMarkers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1218632746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuilder, nullptr, "GetMarkers", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::DungeonBuilder_eventGetMarkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::DungeonBuilder_eventGetMarkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuilder_GetMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuilder::execGetMarkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDAMarkerInfo>*)Z_Param__Result=P_THIS->GetMarkers();
	P_NATIVE_END;
}
// End Class UDungeonBuilder Function GetMarkers

// Begin Class UDungeonBuilder Function GetRandomStream
struct Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics
{
	struct DungeonBuilder_eventGetRandomStream_Parms
	{
		FRandomStream OutRandomStream;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRandomStream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::NewProp_OutRandomStream = { "OutRandomStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuilder_eventGetRandomStream_Parms, OutRandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::NewProp_OutRandomStream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuilder, nullptr, "GetRandomStream", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::DungeonBuilder_eventGetRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::DungeonBuilder_eventGetRandomStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuilder_GetRandomStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuilder_GetRandomStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuilder::execGetRandomStream)
{
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_OutRandomStream);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRandomStream(Z_Param_Out_OutRandomStream);
	P_NATIVE_END;
}
// End Class UDungeonBuilder Function GetRandomStream

// Begin Class UDungeonBuilder
void UDungeonBuilder::StaticRegisterNativesUDungeonBuilder()
{
	UClass* Class = UDungeonBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EmitDungeonMarkers", &UDungeonBuilder::execEmitDungeonMarkers },
		{ "EmitMarker", &UDungeonBuilder::execEmitMarker },
		{ "GetMarkers", &UDungeonBuilder::execGetMarkers },
		{ "GetRandomStream", &UDungeonBuilder::execGetRandomStream },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonBuilder);
UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister()
{
	return UDungeonBuilder::StaticClass();
}
struct Z_Construct_UClass_UDungeonBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "IncludePath", "Core/DungeonBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dungeon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonQuery_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers, "EmitDungeonMarkers" }, // 3009538029
		{ &Z_Construct_UFunction_UDungeonBuilder_EmitMarker, "EmitMarker" }, // 1693588226
		{ &Z_Construct_UFunction_UDungeonBuilder_GetMarkers, "GetMarkers" }, // 1613765573
		{ &Z_Construct_UFunction_UDungeonBuilder_GetRandomStream, "GetRandomStream" }, // 3273191266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_DungeonConfig = { "DungeonConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonBuilder, DungeonConfig), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonConfig_MetaData), NewProp_DungeonConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonBuilder, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dungeon_MetaData), NewProp_Dungeon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_DungeonModel = { "DungeonModel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonBuilder, DungeonModel), Z_Construct_UClass_UDungeonModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonModel_MetaData), NewProp_DungeonModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_DungeonQuery = { "DungeonQuery", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonBuilder, DungeonQuery), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonQuery_MetaData), NewProp_DungeonQuery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_DungeonConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_DungeonModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_DungeonQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBuilder_Statics::ClassParams = {
	&UDungeonBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonBuilder()
{
	if (!Z_Registration_Info_UClass_UDungeonBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBuilder.OuterSingleton, Z_Construct_UClass_UDungeonBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonBuilder>()
{
	return UDungeonBuilder::StaticClass();
}
UDungeonBuilder::UDungeonBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBuilder);
UDungeonBuilder::~UDungeonBuilder() {}
// End Class UDungeonBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBuilder, UDungeonBuilder::StaticClass, TEXT("UDungeonBuilder"), &Z_Registration_Info_UClass_UDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBuilder), 1400680320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_3946054592(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
