// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/Widgets/DungeonViewportWidget.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonViewportWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonPreviewScene();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonPreviewScene_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonViewportWidget();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonViewportWidget_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode();
DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonViewportKeyBindings();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonPreviewScene Function CreateDungeonPreviewScene
struct Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics
{
	struct DungeonPreviewScene_eventCreateDungeonPreviewScene_Parms
	{
		UDungeonPreviewScene* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonPreviewScene_eventCreateDungeonPreviewScene_Parms, ReturnValue), Z_Construct_UClass_UDungeonPreviewScene_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonPreviewScene, nullptr, "CreateDungeonPreviewScene", nullptr, nullptr, Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::DungeonPreviewScene_eventCreateDungeonPreviewScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::DungeonPreviewScene_eventCreateDungeonPreviewScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonPreviewScene::execCreateDungeonPreviewScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDungeonPreviewScene**)Z_Param__Result=UDungeonPreviewScene::CreateDungeonPreviewScene();
	P_NATIVE_END;
}
// End Class UDungeonPreviewScene Function CreateDungeonPreviewScene

// Begin Class UDungeonPreviewScene Function GetSceneWorld
struct Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics
{
	struct DungeonPreviewScene_eventGetSceneWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonPreviewScene_eventGetSceneWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonPreviewScene, nullptr, "GetSceneWorld", nullptr, nullptr, Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::DungeonPreviewScene_eventGetSceneWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::DungeonPreviewScene_eventGetSceneWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonPreviewScene::execGetSceneWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=P_THIS->GetSceneWorld();
	P_NATIVE_END;
}
// End Class UDungeonPreviewScene Function GetSceneWorld

// Begin Class UDungeonPreviewScene Function SetupSky
struct Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics
{
	struct DungeonPreviewScene_eventSetupSky_Parms
	{
		UTextureCube* Cubemap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonPreviewScene_eventSetupSky_Parms, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::NewProp_Cubemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonPreviewScene, nullptr, "SetupSky", nullptr, nullptr, Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::DungeonPreviewScene_eventSetupSky_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::DungeonPreviewScene_eventSetupSky_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonPreviewScene_SetupSky()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonPreviewScene_SetupSky_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonPreviewScene::execSetupSky)
{
	P_GET_OBJECT(UTextureCube,Z_Param_Cubemap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupSky(Z_Param_Cubemap);
	P_NATIVE_END;
}
// End Class UDungeonPreviewScene Function SetupSky

// Begin Class UDungeonPreviewScene Function Spawn
struct Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics
{
	struct DungeonPreviewScene_eventSpawn_Parms
	{
		TSubclassOf<AActor> ActorClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonPreviewScene_eventSpawn_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonPreviewScene_eventSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonPreviewScene, nullptr, "Spawn", nullptr, nullptr, Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::DungeonPreviewScene_eventSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::DungeonPreviewScene_eventSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonPreviewScene_Spawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonPreviewScene_Spawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonPreviewScene::execSpawn)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->Spawn(Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UDungeonPreviewScene Function Spawn

// Begin Class UDungeonPreviewScene
void UDungeonPreviewScene::StaticRegisterNativesUDungeonPreviewScene()
{
	UClass* Class = UDungeonPreviewScene::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDungeonPreviewScene", &UDungeonPreviewScene::execCreateDungeonPreviewScene },
		{ "GetSceneWorld", &UDungeonPreviewScene::execGetSceneWorld },
		{ "SetupSky", &UDungeonPreviewScene::execSetupSky },
		{ "Spawn", &UDungeonPreviewScene::execSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonPreviewScene);
UClass* Z_Construct_UClass_UDungeonPreviewScene_NoRegister()
{
	return UDungeonPreviewScene::StaticClass();
}
struct Z_Construct_UClass_UDungeonPreviewScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Utils/Widgets/DungeonViewportWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonPreviewScene_CreateDungeonPreviewScene, "CreateDungeonPreviewScene" }, // 1475822462
		{ &Z_Construct_UFunction_UDungeonPreviewScene_GetSceneWorld, "GetSceneWorld" }, // 3774593750
		{ &Z_Construct_UFunction_UDungeonPreviewScene_SetupSky, "SetupSky" }, // 3669679525
		{ &Z_Construct_UFunction_UDungeonPreviewScene_Spawn, "Spawn" }, // 3866962624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonPreviewScene>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonPreviewScene_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonPreviewScene_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonPreviewScene_Statics::ClassParams = {
	&UDungeonPreviewScene::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonPreviewScene_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonPreviewScene_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonPreviewScene()
{
	if (!Z_Registration_Info_UClass_UDungeonPreviewScene.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonPreviewScene.OuterSingleton, Z_Construct_UClass_UDungeonPreviewScene_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonPreviewScene.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonPreviewScene>()
{
	return UDungeonPreviewScene::StaticClass();
}
UDungeonPreviewScene::UDungeonPreviewScene(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonPreviewScene);
UDungeonPreviewScene::~UDungeonPreviewScene() {}
// End Class UDungeonPreviewScene

// Begin Enum EDungeonViewportCameraTrackMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode;
static UEnum* EDungeonViewportCameraTrackMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonViewportCameraTrackMode"));
	}
	return Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonViewportCameraTrackMode>()
{
	return EDungeonViewportCameraTrackMode_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FreeMovement.Name", "EDungeonViewportCameraTrackMode::FreeMovement" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
		{ "TrackPlayerCharacter.Name", "EDungeonViewportCameraTrackMode::TrackPlayerCharacter" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonViewportCameraTrackMode::TrackPlayerCharacter", (int64)EDungeonViewportCameraTrackMode::TrackPlayerCharacter },
		{ "EDungeonViewportCameraTrackMode::FreeMovement", (int64)EDungeonViewportCameraTrackMode::FreeMovement },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EDungeonViewportCameraTrackMode",
	"EDungeonViewportCameraTrackMode",
	Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode()
{
	if (!Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode.InnerSingleton;
}
// End Enum EDungeonViewportCameraTrackMode

// Begin ScriptStruct FDungeonViewportKeyBindings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings;
class UScriptStruct* FDungeonViewportKeyBindings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonViewportKeyBindings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonViewportKeyBindings"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonViewportKeyBindings>()
{
	return FDungeonViewportKeyBindings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementLeft_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRight_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementUp_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementDown_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomIn_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomOut_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementLeft_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementRight_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementRight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementUp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDown_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementDown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ZoomIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ZoomOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackButton_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonViewportKeyBindings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementLeft_Inner = { "MovementLeft", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementLeft = { "MovementLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonViewportKeyBindings, MovementLeft), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementLeft_MetaData), NewProp_MovementLeft_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementRight_Inner = { "MovementRight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementRight = { "MovementRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonViewportKeyBindings, MovementRight), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRight_MetaData), NewProp_MovementRight_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementUp_Inner = { "MovementUp", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementUp = { "MovementUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonViewportKeyBindings, MovementUp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementUp_MetaData), NewProp_MovementUp_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementDown_Inner = { "MovementDown", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementDown = { "MovementDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonViewportKeyBindings, MovementDown), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementDown_MetaData), NewProp_MovementDown_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomIn_Inner = { "ZoomIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomIn = { "ZoomIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonViewportKeyBindings, ZoomIn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomIn_MetaData), NewProp_ZoomIn_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomOut_Inner = { "ZoomOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomOut = { "ZoomOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonViewportKeyBindings, ZoomOut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomOut_MetaData), NewProp_ZoomOut_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_BackButton_Inner = { "BackButton", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonViewportKeyBindings, BackButton), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementLeft_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementRight_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementUp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementDown_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_MovementDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_ZoomOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_BackButton_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewProp_BackButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonViewportKeyBindings",
	Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::PropPointers),
	sizeof(FDungeonViewportKeyBindings),
	alignof(FDungeonViewportKeyBindings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonViewportKeyBindings()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings.InnerSingleton, Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings.InnerSingleton;
}
// End ScriptStruct FDungeonViewportKeyBindings

// Begin Delegate FDungeonViewportFreeCameraBack
struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DungeonViewportFreeCameraBack__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDungeonViewportFreeCameraBack_DelegateWrapper(const FMulticastScriptDelegate& DungeonViewportFreeCameraBack)
{
	DungeonViewportFreeCameraBack.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDungeonViewportFreeCameraBack

// Begin Class UDungeonViewportWidget Function GetViewLocation
struct Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics
{
	struct DungeonViewportWidget_eventGetViewLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonViewportWidget_eventGetViewLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonViewportWidget, nullptr, "GetViewLocation", nullptr, nullptr, Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::DungeonViewportWidget_eventGetViewLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::DungeonViewportWidget_eventGetViewLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonViewportWidget::execGetViewLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetViewLocation();
	P_NATIVE_END;
}
// End Class UDungeonViewportWidget Function GetViewLocation

// Begin Class UDungeonViewportWidget Function GetViewRotation
struct Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics
{
	struct DungeonViewportWidget_eventGetViewRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonViewportWidget_eventGetViewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonViewportWidget, nullptr, "GetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::DungeonViewportWidget_eventGetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::DungeonViewportWidget_eventGetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonViewportWidget::execGetViewRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation();
	P_NATIVE_END;
}
// End Class UDungeonViewportWidget Function GetViewRotation

// Begin Class UDungeonViewportWidget Function SetPreviewScene
struct Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics
{
	struct DungeonViewportWidget_eventSetPreviewScene_Parms
	{
		UDungeonPreviewScene* PreviewScene;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::NewProp_PreviewScene = { "PreviewScene", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonViewportWidget_eventSetPreviewScene_Parms, PreviewScene), Z_Construct_UClass_UDungeonPreviewScene_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::NewProp_PreviewScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonViewportWidget, nullptr, "SetPreviewScene", nullptr, nullptr, Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::DungeonViewportWidget_eventSetPreviewScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::DungeonViewportWidget_eventSetPreviewScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonViewportWidget::execSetPreviewScene)
{
	P_GET_OBJECT(UDungeonPreviewScene,Z_Param_PreviewScene);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPreviewScene(Z_Param_PreviewScene);
	P_NATIVE_END;
}
// End Class UDungeonViewportWidget Function SetPreviewScene

// Begin Class UDungeonViewportWidget Function SetViewLocation
struct Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics
{
	struct DungeonViewportWidget_eventSetViewLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonViewportWidget_eventSetViewLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonViewportWidget, nullptr, "SetViewLocation", nullptr, nullptr, Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::DungeonViewportWidget_eventSetViewLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::DungeonViewportWidget_eventSetViewLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonViewportWidget::execSetViewLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewLocation(Z_Param_Location);
	P_NATIVE_END;
}
// End Class UDungeonViewportWidget Function SetViewLocation

// Begin Class UDungeonViewportWidget Function SetViewRotation
struct Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics
{
	struct DungeonViewportWidget_eventSetViewRotation_Parms
	{
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonViewportWidget_eventSetViewRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonViewportWidget, nullptr, "SetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::DungeonViewportWidget_eventSetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::DungeonViewportWidget_eventSetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonViewportWidget::execSetViewRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewRotation(Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class UDungeonViewportWidget Function SetViewRotation

// Begin Class UDungeonViewportWidget Function SwitchCameraMode
struct Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics
{
	struct DungeonViewportWidget_eventSwitchCameraMode_Parms
	{
		EDungeonViewportCameraTrackMode NewCameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewCameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::NewProp_NewCameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::NewProp_NewCameraMode = { "NewCameraMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonViewportWidget_eventSwitchCameraMode_Parms, NewCameraMode), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode, METADATA_PARAMS(0, nullptr) }; // 1475917762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::NewProp_NewCameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::NewProp_NewCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonViewportWidget, nullptr, "SwitchCameraMode", nullptr, nullptr, Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::DungeonViewportWidget_eventSwitchCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::DungeonViewportWidget_eventSwitchCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonViewportWidget::execSwitchCameraMode)
{
	P_GET_ENUM(EDungeonViewportCameraTrackMode,Z_Param_NewCameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchCameraMode(EDungeonViewportCameraTrackMode(Z_Param_NewCameraMode));
	P_NATIVE_END;
}
// End Class UDungeonViewportWidget Function SwitchCameraMode

// Begin Class UDungeonViewportWidget
void UDungeonViewportWidget::GetBackgroundColor_WrapperImpl(const void* Object, void* OutValue)
{
	const UDungeonViewportWidget* Obj = (const UDungeonViewportWidget*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetBackgroundColor();
}
void UDungeonViewportWidget::SetBackgroundColor_WrapperImpl(void* Object, const void* InValue)
{
	UDungeonViewportWidget* Obj = (UDungeonViewportWidget*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetBackgroundColor(Value);
}
void UDungeonViewportWidget::StaticRegisterNativesUDungeonViewportWidget()
{
	UClass* Class = UDungeonViewportWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetViewLocation", &UDungeonViewportWidget::execGetViewLocation },
		{ "GetViewRotation", &UDungeonViewportWidget::execGetViewRotation },
		{ "SetPreviewScene", &UDungeonViewportWidget::execSetPreviewScene },
		{ "SetViewLocation", &UDungeonViewportWidget::execSetViewLocation },
		{ "SetViewRotation", &UDungeonViewportWidget::execSetViewRotation },
		{ "SwitchCameraMode", &UDungeonViewportWidget::execSwitchCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonViewportWidget);
UClass* Z_Construct_UClass_UDungeonViewportWidget_NoRegister()
{
	return UDungeonViewportWidget::StaticClass();
}
struct Z_Construct_UClass_UDungeonViewportWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Utils/Widgets/DungeonViewportWidget.h" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOffset_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLookAt_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTrackMode_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeFormCameraInputBindings_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "EditCondition", "CameraTrackMode == EDungeonViewportCameraTrackMode::FreeMovement" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeFormCameraMovementSpeed_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFreeModeCameraBackPressed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeFormCameraInput_MetaData[] = {
		{ "Category", "DungeonArchitect" },
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonPreviewScene_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/Widgets/DungeonViewportWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLookAt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraTrackMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraTrackMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreeFormCameraInputBindings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FreeFormCameraMovementSpeed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFreeModeCameraBackPressed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreeFormCameraInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonPreviewScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonViewportWidget_GetViewLocation, "GetViewLocation" }, // 3282877373
		{ &Z_Construct_UFunction_UDungeonViewportWidget_GetViewRotation, "GetViewRotation" }, // 118465830
		{ &Z_Construct_UFunction_UDungeonViewportWidget_SetPreviewScene, "SetPreviewScene" }, // 3657949784
		{ &Z_Construct_UFunction_UDungeonViewportWidget_SetViewLocation, "SetViewLocation" }, // 3266273463
		{ &Z_Construct_UFunction_UDungeonViewportWidget_SetViewRotation, "SetViewRotation" }, // 3637062259
		{ &Z_Construct_UFunction_UDungeonViewportWidget_SwitchCameraMode, "SwitchCameraMode" }, // 2332907992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonViewportWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UDungeonViewportWidget::SetBackgroundColor_WrapperImpl, &UDungeonViewportWidget::GetBackgroundColor_WrapperImpl, 1, STRUCT_OFFSET(UDungeonViewportWidget, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_DefaultOffset = { "DefaultOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, DefaultOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOffset_MetaData), NewProp_DefaultOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_DefaultLookAt = { "DefaultLookAt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, DefaultLookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLookAt_MetaData), NewProp_DefaultLookAt_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_CameraTrackMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_CameraTrackMode = { "CameraTrackMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, CameraTrackMode), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonViewportCameraTrackMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTrackMode_MetaData), NewProp_CameraTrackMode_MetaData) }; // 1475917762
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_FreeFormCameraInputBindings = { "FreeFormCameraInputBindings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, FreeFormCameraInputBindings), Z_Construct_UScriptStruct_FDungeonViewportKeyBindings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeFormCameraInputBindings_MetaData), NewProp_FreeFormCameraInputBindings_MetaData) }; // 2976042053
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_FreeFormCameraMovementSpeed = { "FreeFormCameraMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, FreeFormCameraMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeFormCameraMovementSpeed_MetaData), NewProp_FreeFormCameraMovementSpeed_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_OnFreeModeCameraBackPressed = { "OnFreeModeCameraBackPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, OnFreeModeCameraBackPressed), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonViewportFreeCameraBack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFreeModeCameraBackPressed_MetaData), NewProp_OnFreeModeCameraBackPressed_MetaData) }; // 4049752341
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_FreeFormCameraInput = { "FreeFormCameraInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, FreeFormCameraInput), Z_Construct_UScriptStruct_FDungeonViewportKeyBindings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeFormCameraInput_MetaData), NewProp_FreeFormCameraInput_MetaData) }; // 2976042053
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_DungeonPreviewScene = { "DungeonPreviewScene", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonViewportWidget, DungeonPreviewScene), Z_Construct_UClass_UDungeonPreviewScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonPreviewScene_MetaData), NewProp_DungeonPreviewScene_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonViewportWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_DefaultOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_DefaultLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_CameraTrackMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_CameraTrackMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_FreeFormCameraInputBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_FreeFormCameraMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_OnFreeModeCameraBackPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_FreeFormCameraInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonViewportWidget_Statics::NewProp_DungeonPreviewScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonViewportWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonViewportWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonViewportWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonViewportWidget_Statics::ClassParams = {
	&UDungeonViewportWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonViewportWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonViewportWidget_Statics::PropPointers),
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonViewportWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonViewportWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonViewportWidget()
{
	if (!Z_Registration_Info_UClass_UDungeonViewportWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonViewportWidget.OuterSingleton, Z_Construct_UClass_UDungeonViewportWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonViewportWidget.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonViewportWidget>()
{
	return UDungeonViewportWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonViewportWidget);
UDungeonViewportWidget::~UDungeonViewportWidget() {}
// End Class UDungeonViewportWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDungeonViewportCameraTrackMode_StaticEnum, TEXT("EDungeonViewportCameraTrackMode"), &Z_Registration_Info_UEnum_EDungeonViewportCameraTrackMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1475917762U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonViewportKeyBindings::StaticStruct, Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics::NewStructOps, TEXT("DungeonViewportKeyBindings"), &Z_Registration_Info_UScriptStruct_DungeonViewportKeyBindings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonViewportKeyBindings), 2976042053U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonPreviewScene, UDungeonPreviewScene::StaticClass, TEXT("UDungeonPreviewScene"), &Z_Registration_Info_UClass_UDungeonPreviewScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonPreviewScene), 3188245700U) },
		{ Z_Construct_UClass_UDungeonViewportWidget, UDungeonViewportWidget::StaticClass, TEXT("UDungeonViewportWidget"), &Z_Registration_Info_UClass_UDungeonViewportWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonViewportWidget), 2722241787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_2643307068(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
