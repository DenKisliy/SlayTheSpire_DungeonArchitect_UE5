// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBPFunctionLibrary.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/DungeonLayoutData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBPFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonBPFunctionLibrary Function ActorBelongsToDungeon
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics
{
	struct DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms
	{
		ADungeon* Dungeon;
		AActor* ActorToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms), &Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ActorToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "ActorBelongsToDungeon", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execActorBelongsToDungeon)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_GET_OBJECT(AActor,Z_Param_ActorToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBPFunctionLibrary::ActorBelongsToDungeon(Z_Param_Dungeon,Z_Param_ActorToCheck);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function ActorBelongsToDungeon

// Begin Class UDungeonBPFunctionLibrary Function DACreateCanvasRenderTexture
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics
{
	struct DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms
	{
		UObject* Owner;
		TEnumAsByte<ETextureRenderTargetFormat> Format;
		int32 Width;
		int32 Height;
		FLinearColor ClearColor;
		UCanvasRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "DefaultToSelf", "Owner" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(0, nullptr) }; // 338846453
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DACreateCanvasRenderTexture", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::DungeonBPFunctionLibrary_eventDACreateCanvasRenderTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDACreateCanvasRenderTexture)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_PROPERTY(FByteProperty,Z_Param_Format);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCanvasRenderTarget2D**)Z_Param__Result=UDungeonBPFunctionLibrary::DACreateCanvasRenderTexture(Z_Param_Owner,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_Width,Z_Param_Height,Z_Param_ClearColor);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DACreateCanvasRenderTexture

// Begin Class UDungeonBPFunctionLibrary Function DAGetActorOfClass
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics
{
	struct DungeonBPFunctionLibrary_eventDAGetActorOfClass_Parms
	{
		const UObject* WorldContextObject;
		TSubclassOf<AActor> ActorClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAGetActorOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAGetActorOfClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAGetActorOfClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DAGetActorOfClass", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::DungeonBPFunctionLibrary_eventDAGetActorOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::DungeonBPFunctionLibrary_eventDAGetActorOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDAGetActorOfClass)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UDungeonBPFunctionLibrary::DAGetActorOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DAGetActorOfClass

// Begin Class UDungeonBPFunctionLibrary Function DAGetAllActorsOfClass
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics
{
	struct DungeonBPFunctionLibrary_eventDAGetAllActorsOfClass_Parms
	{
		const UObject* WorldContextObject;
		TSubclassOf<AActor> ActorClass;
		TArray<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAGetAllActorsOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAGetAllActorsOfClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAGetAllActorsOfClass_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DAGetAllActorsOfClass", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::DungeonBPFunctionLibrary_eventDAGetAllActorsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::DungeonBPFunctionLibrary_eventDAGetAllActorsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDAGetAllActorsOfClass)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBPFunctionLibrary::DAGetAllActorsOfClass(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DAGetAllActorsOfClass

// Begin Class UDungeonBPFunctionLibrary Function DAHashCombine
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics
{
	struct DungeonBPFunctionLibrary_eventDAHashCombine_Parms
	{
		int32 A;
		int32 B;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAHashCombine_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAHashCombine_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAHashCombine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DAHashCombine", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::DungeonBPFunctionLibrary_eventDAHashCombine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::DungeonBPFunctionLibrary_eventDAHashCombine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDAHashCombine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDungeonBPFunctionLibrary::DAHashCombine(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DAHashCombine

// Begin Class UDungeonBPFunctionLibrary Function DAHashLocation
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics
{
	struct DungeonBPFunctionLibrary_eventDAHashLocation_Parms
	{
		FVector Location;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAHashLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAHashLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DAHashLocation", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::DungeonBPFunctionLibrary_eventDAHashLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::DungeonBPFunctionLibrary_eventDAHashLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDAHashLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDungeonBPFunctionLibrary::DAHashLocation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DAHashLocation

// Begin Class UDungeonBPFunctionLibrary Function DAHashTransform
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics
{
	struct DungeonBPFunctionLibrary_eventDAHashTransform_Parms
	{
		FTransform Transform;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAHashTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDAHashTransform_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DAHashTransform", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::DungeonBPFunctionLibrary_eventDAHashTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::DungeonBPFunctionLibrary_eventDAHashTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDAHashTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDungeonBPFunctionLibrary::DAHashTransform(Z_Param_Out_Transform);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DAHashTransform

// Begin Class UDungeonBPFunctionLibrary Function DARecreateActorInLevel
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics
{
	struct DungeonBPFunctionLibrary_eventDARecreateActorInLevel_Parms
	{
		AActor* InActor;
		ULevel* TargetLevel;
		AActor* NewTargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDARecreateActorInLevel_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::NewProp_TargetLevel = { "TargetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDARecreateActorInLevel_Parms, TargetLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::NewProp_NewTargetActor = { "NewTargetActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDARecreateActorInLevel_Parms, NewTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::NewProp_TargetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::NewProp_NewTargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DARecreateActorInLevel", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::DungeonBPFunctionLibrary_eventDARecreateActorInLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::DungeonBPFunctionLibrary_eventDARecreateActorInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDARecreateActorInLevel)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT(ULevel,Z_Param_TargetLevel);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_NewTargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBPFunctionLibrary::DARecreateActorInLevel(Z_Param_InActor,Z_Param_TargetLevel,P_ARG_GC_BARRIER(Z_Param_Out_NewTargetActor));
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DARecreateActorInLevel

// Begin Class UDungeonBPFunctionLibrary Function DungeonObjectHasAuthority
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics
{
	struct DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms
	{
		UObject* Object;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms), &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DungeonObjectHasAuthority", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDungeonObjectHasAuthority)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBPFunctionLibrary::DungeonObjectHasAuthority(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function DungeonObjectHasAuthority

// Begin Class UDungeonBPFunctionLibrary Function GenerateDungeonLayoutBounds
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics
{
	struct DungeonBPFunctionLibrary_eventGenerateDungeonLayoutBounds_Parms
	{
		FDungeonLayoutData DungeonLayout;
		float Margin;
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "CPP_Default_Margin", "1000.000000" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLayout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLayout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Margin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::NewProp_DungeonLayout = { "DungeonLayout", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventGenerateDungeonLayoutBounds_Parms, DungeonLayout), Z_Construct_UScriptStruct_FDungeonLayoutData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLayout_MetaData), NewProp_DungeonLayout_MetaData) }; // 3618463371
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventGenerateDungeonLayoutBounds_Parms, Margin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventGenerateDungeonLayoutBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::NewProp_DungeonLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::NewProp_Margin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "GenerateDungeonLayoutBounds", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::DungeonBPFunctionLibrary_eventGenerateDungeonLayoutBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::DungeonBPFunctionLibrary_eventGenerateDungeonLayoutBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execGenerateDungeonLayoutBounds)
{
	P_GET_STRUCT_REF(FDungeonLayoutData,Z_Param_Out_DungeonLayout);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Margin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=UDungeonBPFunctionLibrary::GenerateDungeonLayoutBounds(Z_Param_Out_DungeonLayout,Z_Param_Margin);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function GenerateDungeonLayoutBounds

// Begin Class UDungeonBPFunctionLibrary Function GetDungeonBounds
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics
{
	struct DungeonBPFunctionLibrary_eventGetDungeonBounds_Parms
	{
		ADungeon* Dungeon;
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventGetDungeonBounds_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventGetDungeonBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "GetDungeonBounds", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::DungeonBPFunctionLibrary_eventGetDungeonBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::DungeonBPFunctionLibrary_eventGetDungeonBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execGetDungeonBounds)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=UDungeonBPFunctionLibrary::GetDungeonBounds(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function GetDungeonBounds

// Begin Class UDungeonBPFunctionLibrary Function GetDungeonLayout
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics
{
	struct DungeonBPFunctionLibrary_eventGetDungeonLayout_Parms
	{
		ADungeon* Dungeon;
		FDungeonLayoutData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventGetDungeonLayout_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventGetDungeonLayout_Parms, ReturnValue), Z_Construct_UScriptStruct_FDungeonLayoutData, METADATA_PARAMS(0, nullptr) }; // 3618463371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "GetDungeonLayout", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::DungeonBPFunctionLibrary_eventGetDungeonLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::DungeonBPFunctionLibrary_eventGetDungeonLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execGetDungeonLayout)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDungeonLayoutData*)Z_Param__Result=UDungeonBPFunctionLibrary::GetDungeonLayout(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function GetDungeonLayout

// Begin Class UDungeonBPFunctionLibrary Function SpawnDungeonOwnedActor
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics
{
	struct DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms
	{
		ADungeon* Dungeon;
		TSubclassOf<AActor> ActorClass;
		FTransform Transform;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Set basic global leap tracking options */" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
		{ "ToolTip", "Set basic global leap tracking options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "SpawnDungeonOwnedActor", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execSpawnDungeonOwnedActor)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UDungeonBPFunctionLibrary::SpawnDungeonOwnedActor(Z_Param_Dungeon,Z_Param_ActorClass,Z_Param_Out_Transform);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function SpawnDungeonOwnedActor

// Begin Class UDungeonBPFunctionLibrary Function TextureNeedsRecreation
struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics
{
	struct DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms
	{
		UTextureRenderTarget2D* Texture;
		TEnumAsByte<ETextureRenderTargetFormat> Format;
		int32 Width;
		int32 Height;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "DefaultToSelf", "Owner" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(0, nullptr) }; // 338846453
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms), &Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "TextureNeedsRecreation", nullptr, nullptr, Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::DungeonBPFunctionLibrary_eventTextureNeedsRecreation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execTextureNeedsRecreation)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
	P_GET_PROPERTY(FByteProperty,Z_Param_Format);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBPFunctionLibrary::TextureNeedsRecreation(Z_Param_Texture,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UDungeonBPFunctionLibrary Function TextureNeedsRecreation

// Begin Class UDungeonBPFunctionLibrary
void UDungeonBPFunctionLibrary::StaticRegisterNativesUDungeonBPFunctionLibrary()
{
	UClass* Class = UDungeonBPFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActorBelongsToDungeon", &UDungeonBPFunctionLibrary::execActorBelongsToDungeon },
		{ "DACreateCanvasRenderTexture", &UDungeonBPFunctionLibrary::execDACreateCanvasRenderTexture },
		{ "DAGetActorOfClass", &UDungeonBPFunctionLibrary::execDAGetActorOfClass },
		{ "DAGetAllActorsOfClass", &UDungeonBPFunctionLibrary::execDAGetAllActorsOfClass },
		{ "DAHashCombine", &UDungeonBPFunctionLibrary::execDAHashCombine },
		{ "DAHashLocation", &UDungeonBPFunctionLibrary::execDAHashLocation },
		{ "DAHashTransform", &UDungeonBPFunctionLibrary::execDAHashTransform },
		{ "DARecreateActorInLevel", &UDungeonBPFunctionLibrary::execDARecreateActorInLevel },
		{ "DungeonObjectHasAuthority", &UDungeonBPFunctionLibrary::execDungeonObjectHasAuthority },
		{ "GenerateDungeonLayoutBounds", &UDungeonBPFunctionLibrary::execGenerateDungeonLayoutBounds },
		{ "GetDungeonBounds", &UDungeonBPFunctionLibrary::execGetDungeonBounds },
		{ "GetDungeonLayout", &UDungeonBPFunctionLibrary::execGetDungeonLayout },
		{ "SpawnDungeonOwnedActor", &UDungeonBPFunctionLibrary::execSpawnDungeonOwnedActor },
		{ "TextureNeedsRecreation", &UDungeonBPFunctionLibrary::execTextureNeedsRecreation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonBPFunctionLibrary);
UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary_NoRegister()
{
	return UDungeonBPFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Utils/DungeonBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon, "ActorBelongsToDungeon" }, // 1239784129
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DACreateCanvasRenderTexture, "DACreateCanvasRenderTexture" }, // 400222269
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetActorOfClass, "DAGetActorOfClass" }, // 3403801866
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAGetAllActorsOfClass, "DAGetAllActorsOfClass" }, // 3822347549
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashCombine, "DAHashCombine" }, // 1821901857
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashLocation, "DAHashLocation" }, // 3595887450
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DAHashTransform, "DAHashTransform" }, // 3341174429
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DARecreateActorInLevel, "DARecreateActorInLevel" }, // 1866077515
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority, "DungeonObjectHasAuthority" }, // 77376151
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_GenerateDungeonLayoutBounds, "GenerateDungeonLayoutBounds" }, // 3033010724
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonBounds, "GetDungeonBounds" }, // 1306079407
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_GetDungeonLayout, "GetDungeonLayout" }, // 4262240211
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor, "SpawnDungeonOwnedActor" }, // 3475237764
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_TextureNeedsRecreation, "TextureNeedsRecreation" }, // 4018685213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBPFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::ClassParams = {
	&UDungeonBPFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UDungeonBPFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonBPFunctionLibrary.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonBPFunctionLibrary>()
{
	return UDungeonBPFunctionLibrary::StaticClass();
}
UDungeonBPFunctionLibrary::UDungeonBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBPFunctionLibrary);
UDungeonBPFunctionLibrary::~UDungeonBPFunctionLibrary() {}
// End Class UDungeonBPFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBPFunctionLibrary, UDungeonBPFunctionLibrary::StaticClass, TEXT("UDungeonBPFunctionLibrary"), &Z_Registration_Info_UClass_UDungeonBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBPFunctionLibrary), 574494435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_3192915851(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
