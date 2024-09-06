// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonStreamingActorSerialization() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingActorData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingActorData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingActorSerialization();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingActorSerialization_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonStreamingActorDataEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry;
class UScriptStruct* FDungeonStreamingActorDataEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonStreamingActorDataEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonStreamingActorDataEntry>()
{
	return FDungeonStreamingActorDataEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActorData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonStreamingActorDataEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonStreamingActorDataEntry, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonStreamingActorDataEntry, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonStreamingActorDataEntry, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorData_Inner = { "ActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorData = { "ActorData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonStreamingActorDataEntry, ActorData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorData_MetaData), NewProp_ActorData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewProp_ActorData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonStreamingActorDataEntry",
	Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::PropPointers),
	sizeof(FDungeonStreamingActorDataEntry),
	alignof(FDungeonStreamingActorDataEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry.InnerSingleton, Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry.InnerSingleton;
}
// End ScriptStruct FDungeonStreamingActorDataEntry

// Begin Class UDungeonStreamingActorData
void UDungeonStreamingActorData::StaticRegisterNativesUDungeonStreamingActorData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonStreamingActorData);
UClass* Z_Construct_UClass_UDungeonStreamingActorData_NoRegister()
{
	return UDungeonStreamingActorData::StaticClass();
}
struct Z_Construct_UClass_UDungeonStreamingActorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorEntries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonStreamingActorData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStreamingActorData_Statics::NewProp_ActorEntries_Inner = { "ActorEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry, METADATA_PARAMS(0, nullptr) }; // 2786942983
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonStreamingActorData_Statics::NewProp_ActorEntries = { "ActorEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStreamingActorData, ActorEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorEntries_MetaData), NewProp_ActorEntries_MetaData) }; // 2786942983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonStreamingActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingActorData_Statics::NewProp_ActorEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingActorData_Statics::NewProp_ActorEntries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingActorData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonStreamingActorData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingActorData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonStreamingActorData_Statics::ClassParams = {
	&UDungeonStreamingActorData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonStreamingActorData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingActorData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingActorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonStreamingActorData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonStreamingActorData()
{
	if (!Z_Registration_Info_UClass_UDungeonStreamingActorData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonStreamingActorData.OuterSingleton, Z_Construct_UClass_UDungeonStreamingActorData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonStreamingActorData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonStreamingActorData>()
{
	return UDungeonStreamingActorData::StaticClass();
}
UDungeonStreamingActorData::UDungeonStreamingActorData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonStreamingActorData);
UDungeonStreamingActorData::~UDungeonStreamingActorData() {}
// End Class UDungeonStreamingActorData

// Begin Interface UDungeonStreamingActorSerialization Function OnSerializedDataLoaded
void IDungeonStreamingActorSerialization::OnSerializedDataLoaded()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSerializedDataLoaded instead.");
}
static FName NAME_UDungeonStreamingActorSerialization_OnSerializedDataLoaded = FName(TEXT("OnSerializedDataLoaded"));
void IDungeonStreamingActorSerialization::Execute_OnSerializedDataLoaded(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonStreamingActorSerialization::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDungeonStreamingActorSerialization_OnSerializedDataLoaded);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDungeonStreamingActorSerialization*)(O->GetNativeInterfaceAddress(UDungeonStreamingActorSerialization::StaticClass())))
	{
		I->OnSerializedDataLoaded_Implementation();
	}
}
struct Z_Construct_UFunction_UDungeonStreamingActorSerialization_OnSerializedDataLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingActorSerialization_OnSerializedDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingActorSerialization, nullptr, "OnSerializedDataLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingActorSerialization_OnSerializedDataLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingActorSerialization_OnSerializedDataLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonStreamingActorSerialization_OnSerializedDataLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingActorSerialization_OnSerializedDataLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonStreamingActorSerialization::execOnSerializedDataLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSerializedDataLoaded_Implementation();
	P_NATIVE_END;
}
// End Interface UDungeonStreamingActorSerialization Function OnSerializedDataLoaded

// Begin Interface UDungeonStreamingActorSerialization
void UDungeonStreamingActorSerialization::StaticRegisterNativesUDungeonStreamingActorSerialization()
{
	UClass* Class = UDungeonStreamingActorSerialization::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSerializedDataLoaded", &IDungeonStreamingActorSerialization::execOnSerializedDataLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonStreamingActorSerialization);
UClass* Z_Construct_UClass_UDungeonStreamingActorSerialization_NoRegister()
{
	return UDungeonStreamingActorSerialization::StaticClass();
}
struct Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonStreamingActorSerialization_OnSerializedDataLoaded, "OnSerializedDataLoaded" }, // 1116789253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDungeonStreamingActorSerialization>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics::ClassParams = {
	&UDungeonStreamingActorSerialization::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonStreamingActorSerialization()
{
	if (!Z_Registration_Info_UClass_UDungeonStreamingActorSerialization.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonStreamingActorSerialization.OuterSingleton, Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonStreamingActorSerialization.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonStreamingActorSerialization>()
{
	return UDungeonStreamingActorSerialization::StaticClass();
}
UDungeonStreamingActorSerialization::UDungeonStreamingActorSerialization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonStreamingActorSerialization);
UDungeonStreamingActorSerialization::~UDungeonStreamingActorSerialization() {}
// End Interface UDungeonStreamingActorSerialization

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonStreamingActorDataEntry::StaticStruct, Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics::NewStructOps, TEXT("DungeonStreamingActorDataEntry"), &Z_Registration_Info_UScriptStruct_DungeonStreamingActorDataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonStreamingActorDataEntry), 2786942983U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonStreamingActorData, UDungeonStreamingActorData::StaticClass, TEXT("UDungeonStreamingActorData"), &Z_Registration_Info_UClass_UDungeonStreamingActorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonStreamingActorData), 3077626038U) },
		{ Z_Construct_UClass_UDungeonStreamingActorSerialization, UDungeonStreamingActorSerialization::StaticClass, TEXT("UDungeonStreamingActorSerialization"), &Z_Registration_Info_UClass_UDungeonStreamingActorSerialization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonStreamingActorSerialization), 2166746319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_2192114690(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
