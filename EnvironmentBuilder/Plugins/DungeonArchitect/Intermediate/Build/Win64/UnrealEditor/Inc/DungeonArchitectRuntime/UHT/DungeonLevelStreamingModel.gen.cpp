// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBoundingShapes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLevelStreamingModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonStreamingChunkLevelInstance();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingNavigation_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunk();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunk_NoRegister();
DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature();
DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeList();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ALevelInstance();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonStreamingChunkLevelInstance
void ADungeonStreamingChunkLevelInstance::StaticRegisterNativesADungeonStreamingChunkLevelInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonStreamingChunkLevelInstance);
UClass* Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_NoRegister()
{
	return ADungeonStreamingChunkLevelInstance::StaticClass();
}
struct Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chunk_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Chunk;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkGuid;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LevelStreaming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonStreamingChunkLevelInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::NewProp_Chunk = { "Chunk", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonStreamingChunkLevelInstance, Chunk), Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chunk_MetaData), NewProp_Chunk_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::NewProp_NetworkGuid = { "NetworkGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonStreamingChunkLevelInstance, NetworkGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkGuid_MetaData), NewProp_NetworkGuid_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::NewProp_LevelStreaming = { "LevelStreaming", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonStreamingChunkLevelInstance, LevelStreaming), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreaming_MetaData), NewProp_LevelStreaming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::NewProp_Chunk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::NewProp_NetworkGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::NewProp_LevelStreaming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALevelInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::ClassParams = {
	&ADungeonStreamingChunkLevelInstance::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonStreamingChunkLevelInstance()
{
	if (!Z_Registration_Info_UClass_ADungeonStreamingChunkLevelInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonStreamingChunkLevelInstance.OuterSingleton, Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonStreamingChunkLevelInstance.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonStreamingChunkLevelInstance>()
{
	return ADungeonStreamingChunkLevelInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonStreamingChunkLevelInstance);
ADungeonStreamingChunkLevelInstance::~ADungeonStreamingChunkLevelInstance() {}
// End Class ADungeonStreamingChunkLevelInstance

// Begin Class UDungeonStreamingChunk Function GetLoadedChunkActorOfType
struct Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics
{
	struct DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms
	{
		const UClass* ActorClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "GetLoadedChunkActorOfType", nullptr, nullptr, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonStreamingChunk::execGetLoadedChunkActorOfType)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetLoadedChunkActorOfType(Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UDungeonStreamingChunk Function GetLoadedChunkActorOfType

// Begin Class UDungeonStreamingChunk Function GetLoadedChunkActors
struct Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics
{
	struct DungeonStreamingChunk_eventGetLoadedChunkActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "GetLoadedChunkActors", nullptr, nullptr, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::DungeonStreamingChunk_eventGetLoadedChunkActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::DungeonStreamingChunk_eventGetLoadedChunkActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonStreamingChunk::execGetLoadedChunkActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetLoadedChunkActors();
	P_NATIVE_END;
}
// End Class UDungeonStreamingChunk Function GetLoadedChunkActors

// Begin Class UDungeonStreamingChunk Function GetLoadedChunkActorsOfType
struct Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics
{
	struct DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms
	{
		const UClass* ActorClass;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "GetLoadedChunkActorsOfType", nullptr, nullptr, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonStreamingChunk::execGetLoadedChunkActorsOfType)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetLoadedChunkActorsOfType(Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UDungeonStreamingChunk Function GetLoadedChunkActorsOfType

// Begin Class UDungeonStreamingChunk Function HandleChunkHidden
struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkHidden", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkHidden)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChunkHidden();
	P_NATIVE_END;
}
// End Class UDungeonStreamingChunk Function HandleChunkHidden

// Begin Class UDungeonStreamingChunk Function HandleChunkLoaded
struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChunkLoaded();
	P_NATIVE_END;
}
// End Class UDungeonStreamingChunk Function HandleChunkLoaded

// Begin Class UDungeonStreamingChunk Function HandleChunkUnloaded
struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkUnloaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkUnloaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChunkUnloaded();
	P_NATIVE_END;
}
// End Class UDungeonStreamingChunk Function HandleChunkUnloaded

// Begin Class UDungeonStreamingChunk Function HandleChunkVisible
struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkVisible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChunkVisible();
	P_NATIVE_END;
}
// End Class UDungeonStreamingChunk Function HandleChunkVisible

// Begin Class UDungeonStreamingChunk
void UDungeonStreamingChunk::StaticRegisterNativesUDungeonStreamingChunk()
{
	UClass* Class = UDungeonStreamingChunk::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLoadedChunkActorOfType", &UDungeonStreamingChunk::execGetLoadedChunkActorOfType },
		{ "GetLoadedChunkActors", &UDungeonStreamingChunk::execGetLoadedChunkActors },
		{ "GetLoadedChunkActorsOfType", &UDungeonStreamingChunk::execGetLoadedChunkActorsOfType },
		{ "HandleChunkHidden", &UDungeonStreamingChunk::execHandleChunkHidden },
		{ "HandleChunkLoaded", &UDungeonStreamingChunk::execHandleChunkLoaded },
		{ "HandleChunkUnloaded", &UDungeonStreamingChunk::execHandleChunkUnloaded },
		{ "HandleChunkVisible", &UDungeonStreamingChunk::execHandleChunkVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonStreamingChunk);
UClass* Z_Construct_UClass_UDungeonStreamingChunk_NoRegister()
{
	return UDungeonStreamingChunk::StaticClass();
}
struct Z_Construct_UClass_UDungeonStreamingChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundShapes_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnRoomChunk_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkListeners_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundShapes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Neighbors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Neighbors;
	static void NewProp_bSpawnRoomChunk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnRoomChunk;
	static void NewProp_bShouldBeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LevelInstanceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelPackage;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ChunkListeners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkListeners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType, "GetLoadedChunkActorOfType" }, // 2082313013
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors, "GetLoadedChunkActors" }, // 666384377
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType, "GetLoadedChunkActorsOfType" }, // 1388916572
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden, "HandleChunkHidden" }, // 1156832215
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded, "HandleChunkLoaded" }, // 1533608957
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded, "HandleChunkUnloaded" }, // 2297926814
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible, "HandleChunkVisible" }, // 3228809653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonStreamingChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingChunk, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingChunk, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_BoundShapes = { "BoundShapes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingChunk, BoundShapes), Z_Construct_UScriptStruct_FDABoundsShapeList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundShapes_MetaData), NewProp_BoundShapes_MetaData) }; // 4252500473
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors_ElementProp = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingChunk, Neighbors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Neighbors_MetaData), NewProp_Neighbors_MetaData) };
void Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk_SetBit(void* Obj)
{
	((UDungeonStreamingChunk*)Obj)->bSpawnRoomChunk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk = { "bSpawnRoomChunk", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonStreamingChunk), &Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnRoomChunk_MetaData), NewProp_bSpawnRoomChunk_MetaData) };
void Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
{
	((UDungeonStreamingChunk*)Obj)->bShouldBeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonStreamingChunk), &Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeVisible_MetaData), NewProp_bShouldBeVisible_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelInstanceActor = { "LevelInstanceActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingChunk, LevelInstanceActor), Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceActor_MetaData), NewProp_LevelInstanceActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelPackage = { "LevelPackage", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingChunk, LevelPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelPackage_MetaData), NewProp_LevelPackage_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ChunkListeners_Inner = { "ChunkListeners", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ChunkListeners = { "ChunkListeners", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingChunk, ChunkListeners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkListeners_MetaData), NewProp_ChunkListeners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonStreamingChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_BoundShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelInstanceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ChunkListeners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ChunkListeners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonStreamingChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::ClassParams = {
	&UDungeonStreamingChunk::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonStreamingChunk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonStreamingChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonStreamingChunk()
{
	if (!Z_Registration_Info_UClass_UDungeonStreamingChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonStreamingChunk.OuterSingleton, Z_Construct_UClass_UDungeonStreamingChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonStreamingChunk.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonStreamingChunk>()
{
	return UDungeonStreamingChunk::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonStreamingChunk);
UDungeonStreamingChunk::~UDungeonStreamingChunk() {}
// End Class UDungeonStreamingChunk

// Begin Delegate FDALevelStreamerBindableEvent
struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics
{
	struct _Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms
	{
		ADungeon* Dungeon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DALevelStreamerBindableEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDALevelStreamerBindableEvent_DelegateWrapper(const FMulticastScriptDelegate& DALevelStreamerBindableEvent, ADungeon* Dungeon)
{
	struct _Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms
	{
		ADungeon* Dungeon;
	};
	_Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms Parms;
	Parms.Dungeon=Dungeon;
	DALevelStreamerBindableEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDALevelStreamerBindableEvent

// Begin Delegate FDALevelStreamerStateChangeDelegate
struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics
{
	struct _Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms
	{
		ADungeon* Dungeon;
		UDungeonStreamingChunk* Chunk;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chunk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Chunk = { "Chunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms, Chunk), Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Chunk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DALevelStreamerStateChangeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDALevelStreamerStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& DALevelStreamerStateChangeDelegate, ADungeon* Dungeon, UDungeonStreamingChunk* Chunk)
{
	struct _Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms
	{
		ADungeon* Dungeon;
		UDungeonStreamingChunk* Chunk;
	};
	_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms Parms;
	Parms.Dungeon=Dungeon;
	Parms.Chunk=Chunk;
	DALevelStreamerStateChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDALevelStreamerStateChangeDelegate

// Begin Class UDungeonLevelStreamingModel
void UDungeonLevelStreamingModel::StaticRegisterNativesUDungeonLevelStreamingModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonLevelStreamingModel);
UClass* Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister()
{
	return UDungeonLevelStreamingModel::StaticClass();
}
struct Z_Construct_UClass_UDungeonLevelStreamingModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInitialChunksLoaded_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkLoaded_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkUnloaded_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkVisible_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkHidden_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingNavigation;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitialChunksLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkUnloaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkVisible;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkHidden;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Chunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonLevelStreamingModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_StreamingNavigation = { "StreamingNavigation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, StreamingNavigation), Z_Construct_UClass_UDungeonLevelStreamingNavigation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingNavigation_MetaData), NewProp_StreamingNavigation_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnInitialChunksLoaded = { "OnInitialChunksLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnInitialChunksLoaded), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInitialChunksLoaded_MetaData), NewProp_OnInitialChunksLoaded_MetaData) }; // 1343213244
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkLoaded = { "OnChunkLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkLoaded), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChunkLoaded_MetaData), NewProp_OnChunkLoaded_MetaData) }; // 727929707
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkUnloaded = { "OnChunkUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkUnloaded), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChunkUnloaded_MetaData), NewProp_OnChunkUnloaded_MetaData) }; // 727929707
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkVisible = { "OnChunkVisible", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkVisible), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChunkVisible_MetaData), NewProp_OnChunkVisible_MetaData) }; // 727929707
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkHidden = { "OnChunkHidden", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkHidden), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChunkHidden_MetaData), NewProp_OnChunkHidden_MetaData) }; // 727929707
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks_Inner = { "Chunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks = { "Chunks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, Chunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chunks_MetaData), NewProp_Chunks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_StreamingNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnInitialChunksLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkUnloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::ClassParams = {
	&UDungeonLevelStreamingModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonLevelStreamingModel()
{
	if (!Z_Registration_Info_UClass_UDungeonLevelStreamingModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonLevelStreamingModel.OuterSingleton, Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonLevelStreamingModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonLevelStreamingModel>()
{
	return UDungeonLevelStreamingModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonLevelStreamingModel);
UDungeonLevelStreamingModel::~UDungeonLevelStreamingModel() {}
// End Class UDungeonLevelStreamingModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonStreamingChunkLevelInstance, ADungeonStreamingChunkLevelInstance::StaticClass, TEXT("ADungeonStreamingChunkLevelInstance"), &Z_Registration_Info_UClass_ADungeonStreamingChunkLevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonStreamingChunkLevelInstance), 1500185883U) },
		{ Z_Construct_UClass_UDungeonStreamingChunk, UDungeonStreamingChunk::StaticClass, TEXT("UDungeonStreamingChunk"), &Z_Registration_Info_UClass_UDungeonStreamingChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonStreamingChunk), 2470140319U) },
		{ Z_Construct_UClass_UDungeonLevelStreamingModel, UDungeonLevelStreamingModel::StaticClass, TEXT("UDungeonLevelStreamingModel"), &Z_Registration_Info_UClass_UDungeonLevelStreamingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonLevelStreamingModel), 1340349206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_173307829(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
