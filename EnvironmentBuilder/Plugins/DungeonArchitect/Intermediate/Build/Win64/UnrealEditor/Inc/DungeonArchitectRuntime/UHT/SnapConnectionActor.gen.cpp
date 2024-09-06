// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapConnectionActor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapConnectionActor_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ASnapConnectionActor Function GetSpawnedInstances
struct Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics
{
	struct SnapConnectionActor_eventGetSpawnedInstances_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapConnectionActor_eventGetSpawnedInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnapConnectionActor, nullptr, "GetSpawnedInstances", nullptr, nullptr, Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::SnapConnectionActor_eventGetSpawnedInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::SnapConnectionActor_eventGetSpawnedInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnapConnectionActor::execGetSpawnedInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpawnedInstances();
	P_NATIVE_END;
}
// End Class ASnapConnectionActor Function GetSpawnedInstances

// Begin Class ASnapConnectionActor
void ASnapConnectionActor::StaticRegisterNativesASnapConnectionActor()
{
	UClass* Class = ASnapConnectionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpawnedInstances", &ASnapConnectionActor::execGetSpawnedInstances },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnapConnectionActor);
UClass* Z_Construct_UClass_ASnapConnectionActor_NoRegister()
{
	return ASnapConnectionActor::StaticClass();
}
struct Z_Construct_UClass_ASnapConnectionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorSpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionConstraintSpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintDebugDecal_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintMagnet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintPlugMale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintPlugFemale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintRoomEntry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintRoomExit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDebugDecal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDebugDecalInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionId;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorSpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionConstraintSpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintDebugDecal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintMagnet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintPlugMale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintPlugFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintRoomEntry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintRoomExit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialDebugDecal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialDebugDecalInstance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances, "GetSpawnedInstances" }, // 2532096785
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnapConnectionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionComponent = { "ConnectionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, ConnectionComponent), Z_Construct_UClass_USnapConnectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionComponent_MetaData), NewProp_ConnectionComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, ConnectionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionId_MetaData), NewProp_ConnectionId_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_DoorSpriteComponent = { "DoorSpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, DoorSpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorSpriteComponent_MetaData), NewProp_DoorSpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionConstraintSpriteComponent = { "ConnectionConstraintSpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, ConnectionConstraintSpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionConstraintSpriteComponent_MetaData), NewProp_ConnectionConstraintSpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConstraintDebugDecal = { "ConstraintDebugDecal", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, ConstraintDebugDecal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintDebugDecal_MetaData), NewProp_ConstraintDebugDecal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintMagnet = { "IconConstraintMagnet", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintMagnet), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconConstraintMagnet_MetaData), NewProp_IconConstraintMagnet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugMale = { "IconConstraintPlugMale", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintPlugMale), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconConstraintPlugMale_MetaData), NewProp_IconConstraintPlugMale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugFemale = { "IconConstraintPlugFemale", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintPlugFemale), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconConstraintPlugFemale_MetaData), NewProp_IconConstraintPlugFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintRoomEntry = { "IconConstraintRoomEntry", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintRoomEntry), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconConstraintRoomEntry_MetaData), NewProp_IconConstraintRoomEntry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintRoomExit = { "IconConstraintRoomExit", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintRoomExit), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconConstraintRoomExit_MetaData), NewProp_IconConstraintRoomExit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecal = { "MaterialDebugDecal", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, MaterialDebugDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDebugDecal_MetaData), NewProp_MaterialDebugDecal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecalInstance = { "MaterialDebugDecalInstance", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapConnectionActor, MaterialDebugDecalInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDebugDecalInstance_MetaData), NewProp_MaterialDebugDecalInstance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnapConnectionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionId,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_DoorSpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionConstraintSpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConstraintDebugDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ArrowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintMagnet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintRoomEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintRoomExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecalInstance,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnapConnectionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnapConnectionActor_Statics::ClassParams = {
	&ASnapConnectionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASnapConnectionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnapConnectionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnapConnectionActor()
{
	if (!Z_Registration_Info_UClass_ASnapConnectionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnapConnectionActor.OuterSingleton, Z_Construct_UClass_ASnapConnectionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnapConnectionActor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ASnapConnectionActor>()
{
	return ASnapConnectionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnapConnectionActor);
ASnapConnectionActor::~ASnapConnectionActor() {}
// End Class ASnapConnectionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnapConnectionActor, ASnapConnectionActor::StaticClass, TEXT("ASnapConnectionActor"), &Z_Registration_Info_UClass_ASnapConnectionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnapConnectionActor), 2788157395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_2130785305(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
