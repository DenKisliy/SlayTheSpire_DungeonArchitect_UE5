// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/DungeonDoorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonDoorInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonDoorInterface();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonDoorInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Interface UDungeonDoorInterface Function GetDoorBaseRotation
struct DungeonDoorInterface_eventGetDoorBaseRotation_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonDoorInterface_eventGetDoorBaseRotation_Parms()
		: ReturnValue(0)
	{
	}
};
float IDungeonDoorInterface::GetDoorBaseRotation() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDoorBaseRotation instead.");
	DungeonDoorInterface_eventGetDoorBaseRotation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDungeonDoorInterface_GetDoorBaseRotation = FName(TEXT("GetDoorBaseRotation"));
float IDungeonDoorInterface::Execute_GetDoorBaseRotation(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonDoorInterface::StaticClass()));
	DungeonDoorInterface_eventGetDoorBaseRotation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonDoorInterface_GetDoorBaseRotation);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDungeonDoorInterface*)(O->GetNativeInterfaceAddress(UDungeonDoorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDoorBaseRotation_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect Door" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonDoorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonDoorInterface_eventGetDoorBaseRotation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonDoorInterface, nullptr, "GetDoorBaseRotation", nullptr, nullptr, Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::PropPointers), sizeof(DungeonDoorInterface_eventGetDoorBaseRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonDoorInterface_eventGetDoorBaseRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonDoorInterface::execGetDoorBaseRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDoorBaseRotation_Implementation();
	P_NATIVE_END;
}
// End Interface UDungeonDoorInterface Function GetDoorBaseRotation

// Begin Interface UDungeonDoorInterface Function GetDoorWidth
struct DungeonDoorInterface_eventGetDoorWidth_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonDoorInterface_eventGetDoorWidth_Parms()
		: ReturnValue(0)
	{
	}
};
float IDungeonDoorInterface::GetDoorWidth() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDoorWidth instead.");
	DungeonDoorInterface_eventGetDoorWidth_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDungeonDoorInterface_GetDoorWidth = FName(TEXT("GetDoorWidth"));
float IDungeonDoorInterface::Execute_GetDoorWidth(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonDoorInterface::StaticClass()));
	DungeonDoorInterface_eventGetDoorWidth_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonDoorInterface_GetDoorWidth);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDungeonDoorInterface*)(O->GetNativeInterfaceAddress(UDungeonDoorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDoorWidth_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect Door" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonDoorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonDoorInterface_eventGetDoorWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonDoorInterface, nullptr, "GetDoorWidth", nullptr, nullptr, Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::PropPointers), sizeof(DungeonDoorInterface_eventGetDoorWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonDoorInterface_eventGetDoorWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonDoorInterface::execGetDoorWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDoorWidth_Implementation();
	P_NATIVE_END;
}
// End Interface UDungeonDoorInterface Function GetDoorWidth

// Begin Interface UDungeonDoorInterface Function IsOneWayPassage
struct DungeonDoorInterface_eventIsOneWayPassage_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonDoorInterface_eventIsOneWayPassage_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDungeonDoorInterface::IsOneWayPassage() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsOneWayPassage instead.");
	DungeonDoorInterface_eventIsOneWayPassage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDungeonDoorInterface_IsOneWayPassage = FName(TEXT("IsOneWayPassage"));
bool IDungeonDoorInterface::Execute_IsOneWayPassage(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonDoorInterface::StaticClass()));
	DungeonDoorInterface_eventIsOneWayPassage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonDoorInterface_IsOneWayPassage);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDungeonDoorInterface*)(O->GetNativeInterfaceAddress(UDungeonDoorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsOneWayPassage_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect Door" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonDoorInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonDoorInterface_eventIsOneWayPassage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonDoorInterface_eventIsOneWayPassage_Parms), &Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonDoorInterface, nullptr, "IsOneWayPassage", nullptr, nullptr, Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::PropPointers), sizeof(DungeonDoorInterface_eventIsOneWayPassage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonDoorInterface_eventIsOneWayPassage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonDoorInterface::execIsOneWayPassage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOneWayPassage_Implementation();
	P_NATIVE_END;
}
// End Interface UDungeonDoorInterface Function IsOneWayPassage

// Begin Interface UDungeonDoorInterface Function IsPassageOpen
struct DungeonDoorInterface_eventIsPassageOpen_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonDoorInterface_eventIsPassageOpen_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDungeonDoorInterface::IsPassageOpen() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsPassageOpen instead.");
	DungeonDoorInterface_eventIsPassageOpen_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDungeonDoorInterface_IsPassageOpen = FName(TEXT("IsPassageOpen"));
bool IDungeonDoorInterface::Execute_IsPassageOpen(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonDoorInterface::StaticClass()));
	DungeonDoorInterface_eventIsPassageOpen_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonDoorInterface_IsPassageOpen);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDungeonDoorInterface*)(O->GetNativeInterfaceAddress(UDungeonDoorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsPassageOpen_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect Door" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonDoorInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonDoorInterface_eventIsPassageOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonDoorInterface_eventIsPassageOpen_Parms), &Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonDoorInterface, nullptr, "IsPassageOpen", nullptr, nullptr, Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::PropPointers), sizeof(DungeonDoorInterface_eventIsPassageOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonDoorInterface_eventIsPassageOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonDoorInterface::execIsPassageOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPassageOpen_Implementation();
	P_NATIVE_END;
}
// End Interface UDungeonDoorInterface Function IsPassageOpen

// Begin Interface UDungeonDoorInterface Function SupportsLocking
struct DungeonDoorInterface_eventSupportsLocking_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonDoorInterface_eventSupportsLocking_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDungeonDoorInterface::SupportsLocking() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SupportsLocking instead.");
	DungeonDoorInterface_eventSupportsLocking_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDungeonDoorInterface_SupportsLocking = FName(TEXT("SupportsLocking"));
bool IDungeonDoorInterface::Execute_SupportsLocking(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonDoorInterface::StaticClass()));
	DungeonDoorInterface_eventSupportsLocking_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonDoorInterface_SupportsLocking);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDungeonDoorInterface*)(O->GetNativeInterfaceAddress(UDungeonDoorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->SupportsLocking_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect Door" },
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonDoorInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonDoorInterface_eventSupportsLocking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonDoorInterface_eventSupportsLocking_Parms), &Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonDoorInterface, nullptr, "SupportsLocking", nullptr, nullptr, Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::PropPointers), sizeof(DungeonDoorInterface_eventSupportsLocking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonDoorInterface_eventSupportsLocking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonDoorInterface::execSupportsLocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsLocking_Implementation();
	P_NATIVE_END;
}
// End Interface UDungeonDoorInterface Function SupportsLocking

// Begin Interface UDungeonDoorInterface
void UDungeonDoorInterface::StaticRegisterNativesUDungeonDoorInterface()
{
	UClass* Class = UDungeonDoorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDoorBaseRotation", &IDungeonDoorInterface::execGetDoorBaseRotation },
		{ "GetDoorWidth", &IDungeonDoorInterface::execGetDoorWidth },
		{ "IsOneWayPassage", &IDungeonDoorInterface::execIsOneWayPassage },
		{ "IsPassageOpen", &IDungeonDoorInterface::execIsPassageOpen },
		{ "SupportsLocking", &IDungeonDoorInterface::execSupportsLocking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonDoorInterface);
UClass* Z_Construct_UClass_UDungeonDoorInterface_NoRegister()
{
	return UDungeonDoorInterface::StaticClass();
}
struct Z_Construct_UClass_UDungeonDoorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/DungeonDoorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonDoorInterface_GetDoorBaseRotation, "GetDoorBaseRotation" }, // 503062866
		{ &Z_Construct_UFunction_UDungeonDoorInterface_GetDoorWidth, "GetDoorWidth" }, // 2065662389
		{ &Z_Construct_UFunction_UDungeonDoorInterface_IsOneWayPassage, "IsOneWayPassage" }, // 307091121
		{ &Z_Construct_UFunction_UDungeonDoorInterface_IsPassageOpen, "IsPassageOpen" }, // 2137718486
		{ &Z_Construct_UFunction_UDungeonDoorInterface_SupportsLocking, "SupportsLocking" }, // 1481564563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDungeonDoorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonDoorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonDoorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonDoorInterface_Statics::ClassParams = {
	&UDungeonDoorInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonDoorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonDoorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonDoorInterface()
{
	if (!Z_Registration_Info_UClass_UDungeonDoorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonDoorInterface.OuterSingleton, Z_Construct_UClass_UDungeonDoorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonDoorInterface.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonDoorInterface>()
{
	return UDungeonDoorInterface::StaticClass();
}
UDungeonDoorInterface::UDungeonDoorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonDoorInterface);
UDungeonDoorInterface::~UDungeonDoorInterface() {}
// End Interface UDungeonDoorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonDoorInterface, UDungeonDoorInterface::StaticClass, TEXT("UDungeonDoorInterface"), &Z_Registration_Info_UClass_UDungeonDoorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonDoorInterface), 3789273901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_3817658097(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
