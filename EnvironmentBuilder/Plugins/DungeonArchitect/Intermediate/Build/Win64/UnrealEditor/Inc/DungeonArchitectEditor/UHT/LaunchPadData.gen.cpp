// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/LaunchPad/Data/LaunchPadData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPadData() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType();
DUNGEONARCHITECTEDITOR_API UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategories();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategoryItem();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageActionData();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageHeader();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin ScriptStruct FLaunchPadCategoryItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem;
class UScriptStruct* FLaunchPadCategoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadCategoryItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadCategoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadCategoryItem>()
{
	return FLaunchPadCategoryItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////// Categories /////////////////// \n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Categories /" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Page_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Page;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadCategoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadCategoryItem, Page), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Page_MetaData), NewProp_Page_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadCategoryItem, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Page,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Title,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadCategoryItem",
	Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::PropPointers),
	sizeof(FLaunchPadCategoryItem),
	alignof(FLaunchPadCategoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.InnerSingleton;
}
// End ScriptStruct FLaunchPadCategoryItem

// Begin ScriptStruct FLaunchPadCategories
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadCategories;
class UScriptStruct* FLaunchPadCategories::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadCategories.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadCategories.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadCategories, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadCategories"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadCategories.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadCategories>()
{
	return FLaunchPadCategories::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadCategories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadCategories>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaunchPadCategoryItem, METADATA_PARAMS(0, nullptr) }; // 1657935054
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadCategories, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1657935054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadCategories",
	Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::PropPointers),
	sizeof(FLaunchPadCategories),
	alignof(FLaunchPadCategories),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategories()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadCategories.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadCategories.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadCategories.InnerSingleton;
}
// End ScriptStruct FLaunchPadCategories

// Begin Enum ELaunchPagePageLayout
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELaunchPagePageLayout;
static UEnum* ELaunchPagePageLayout_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELaunchPagePageLayout.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELaunchPagePageLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("ELaunchPagePageLayout"));
	}
	return Z_Registration_Info_UEnum_ELaunchPagePageLayout.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<ELaunchPagePageLayout>()
{
	return ELaunchPagePageLayout_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CardGrid.Name", "ELaunchPagePageLayout::CardGrid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////// Page /////////////////// \n" },
#endif
		{ "Details.Name", "ELaunchPagePageLayout::Details" },
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
		{ "News.Name", "ELaunchPagePageLayout::News" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Page /" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELaunchPagePageLayout::CardGrid", (int64)ELaunchPagePageLayout::CardGrid },
		{ "ELaunchPagePageLayout::Details", (int64)ELaunchPagePageLayout::Details },
		{ "ELaunchPagePageLayout::News", (int64)ELaunchPagePageLayout::News },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	"ELaunchPagePageLayout",
	"ELaunchPagePageLayout",
	Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout()
{
	if (!Z_Registration_Info_UEnum_ELaunchPagePageLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELaunchPagePageLayout.InnerSingleton, Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELaunchPagePageLayout.InnerSingleton;
}
// End Enum ELaunchPagePageLayout

// Begin ScriptStruct FLaunchPadPageHeader
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageHeader;
class UScriptStruct* FLaunchPadPageHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageHeader, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageHeader"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageHeader>()
{
	return FLaunchPadPageHeader::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageHeader, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageHeader, Layout), Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 3050571212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadPageHeader",
	Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::PropPointers),
	sizeof(FLaunchPadPageHeader),
	alignof(FLaunchPadPageHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageHeader()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.InnerSingleton;
}
// End ScriptStruct FLaunchPadPageHeader

// Begin ScriptStruct FLaunchPadPageLayout_CardGrid_CardInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo;
class UScriptStruct* FLaunchPadPageLayout_CardGrid_CardInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_CardGrid_CardInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_CardGrid_CardInfo>()
{
	return FLaunchPadPageLayout_CardGrid_CardInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////// Page Layout: CardGrid /////////////////// \n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Page Layout: CardGrid /" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Link;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_CardGrid_CardInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Desc_MetaData), NewProp_Desc_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Image), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Link), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Link_MetaData), NewProp_Link_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Desc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Link,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadPageLayout_CardGrid_CardInfo",
	Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::PropPointers),
	sizeof(FLaunchPadPageLayout_CardGrid_CardInfo),
	alignof(FLaunchPadPageLayout_CardGrid_CardInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.InnerSingleton;
}
// End ScriptStruct FLaunchPadPageLayout_CardGrid_CardInfo

// Begin ScriptStruct FLaunchPadPageLayout_CardGrid_Category
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category;
class UScriptStruct* FLaunchPadPageLayout_CardGrid_Category::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_CardGrid_Category"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_CardGrid_Category>()
{
	return FLaunchPadPageLayout_CardGrid_Category::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_CardGrid_Category>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_Category, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo, METADATA_PARAMS(0, nullptr) }; // 2585888763
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_Category, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_MetaData), NewProp_Cards_MetaData) }; // 2585888763
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadPageLayout_CardGrid_Category",
	Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::PropPointers),
	sizeof(FLaunchPadPageLayout_CardGrid_Category),
	alignof(FLaunchPadPageLayout_CardGrid_Category),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.InnerSingleton;
}
// End ScriptStruct FLaunchPadPageLayout_CardGrid_Category

// Begin ScriptStruct FLaunchPadPageLayout_CardGrid
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid;
class UScriptStruct* FLaunchPadPageLayout_CardGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_CardGrid"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_CardGrid>()
{
	return FLaunchPadPageLayout_CardGrid::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowCategoryTitles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_ShowCategoryTitles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCategoryTitles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImageWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImageHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_CardGrid>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles_SetBit(void* Obj)
{
	((FLaunchPadPageLayout_CardGrid*)Obj)->ShowCategoryTitles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles = { "ShowCategoryTitles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLaunchPadPageLayout_CardGrid), &Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowCategoryTitles_MetaData), NewProp_ShowCategoryTitles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageWidth = { "ImageWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, ImageWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageWidth_MetaData), NewProp_ImageWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageHeight = { "ImageHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, ImageHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageHeight_MetaData), NewProp_ImageHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardHeight = { "CardHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, CardHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardHeight_MetaData), NewProp_CardHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardPadding = { "CardPadding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, CardPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPadding_MetaData), NewProp_CardPadding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category, METADATA_PARAMS(0, nullptr) }; // 3050021491
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) }; // 3050021491
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadPageLayout_CardGrid",
	Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::PropPointers),
	sizeof(FLaunchPadPageLayout_CardGrid),
	alignof(FLaunchPadPageLayout_CardGrid),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.InnerSingleton;
}
// End ScriptStruct FLaunchPadPageLayout_CardGrid

// Begin Enum ELaunchPadActionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELaunchPadActionType;
static UEnum* ELaunchPadActionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELaunchPadActionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELaunchPadActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("ELaunchPadActionType"));
	}
	return Z_Registration_Info_UEnum_ELaunchPadActionType.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<ELaunchPadActionType>()
{
	return ELaunchPadActionType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AddStarterContent.Name", "ELaunchPadActionType::AddStarterContent" },
		{ "CloneGridFlow.Name", "ELaunchPadActionType::CloneGridFlow" },
		{ "CloneScene.Name", "ELaunchPadActionType::CloneScene" },
		{ "CloneSceneAndBuild.Name", "ELaunchPadActionType::CloneSceneAndBuild" },
		{ "CloneSnapFlow.Name", "ELaunchPadActionType::CloneSnapFlow" },
		{ "CloneSnapGridFlow.Name", "ELaunchPadActionType::CloneSnapGridFlow" },
		{ "CloneTheme.Name", "ELaunchPadActionType::CloneTheme" },
		{ "Documentation.Name", "ELaunchPadActionType::Documentation" },
		{ "LauncherURL.Name", "ELaunchPadActionType::LauncherURL" },
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
		{ "None.Name", "ELaunchPadActionType::None" },
		{ "OpenFolder.Name", "ELaunchPadActionType::OpenFolder" },
		{ "OpenGridFlow.Name", "ELaunchPadActionType::OpenGridFlow" },
		{ "OpenScene.Name", "ELaunchPadActionType::OpenScene" },
		{ "OpenSnapFlow.Name", "ELaunchPadActionType::OpenSnapFlow" },
		{ "OpenTheme.Name", "ELaunchPadActionType::OpenTheme" },
		{ "Video.Name", "ELaunchPadActionType::Video" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELaunchPadActionType::None", (int64)ELaunchPadActionType::None },
		{ "ELaunchPadActionType::OpenFolder", (int64)ELaunchPadActionType::OpenFolder },
		{ "ELaunchPadActionType::OpenScene", (int64)ELaunchPadActionType::OpenScene },
		{ "ELaunchPadActionType::OpenTheme", (int64)ELaunchPadActionType::OpenTheme },
		{ "ELaunchPadActionType::OpenSnapFlow", (int64)ELaunchPadActionType::OpenSnapFlow },
		{ "ELaunchPadActionType::OpenGridFlow", (int64)ELaunchPadActionType::OpenGridFlow },
		{ "ELaunchPadActionType::CloneScene", (int64)ELaunchPadActionType::CloneScene },
		{ "ELaunchPadActionType::CloneSceneAndBuild", (int64)ELaunchPadActionType::CloneSceneAndBuild },
		{ "ELaunchPadActionType::CloneTheme", (int64)ELaunchPadActionType::CloneTheme },
		{ "ELaunchPadActionType::CloneSnapFlow", (int64)ELaunchPadActionType::CloneSnapFlow },
		{ "ELaunchPadActionType::CloneGridFlow", (int64)ELaunchPadActionType::CloneGridFlow },
		{ "ELaunchPadActionType::CloneSnapGridFlow", (int64)ELaunchPadActionType::CloneSnapGridFlow },
		{ "ELaunchPadActionType::Documentation", (int64)ELaunchPadActionType::Documentation },
		{ "ELaunchPadActionType::LauncherURL", (int64)ELaunchPadActionType::LauncherURL },
		{ "ELaunchPadActionType::AddStarterContent", (int64)ELaunchPadActionType::AddStarterContent },
		{ "ELaunchPadActionType::Video", (int64)ELaunchPadActionType::Video },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	"ELaunchPadActionType",
	"ELaunchPadActionType",
	Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType()
{
	if (!Z_Registration_Info_UEnum_ELaunchPadActionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELaunchPadActionType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELaunchPadActionType.InnerSingleton;
}
// End Enum ELaunchPadActionType

// Begin ScriptStruct FLaunchPadPageActionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageActionData;
class UScriptStruct* FLaunchPadPageActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageActionData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageActionData"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageActionData>()
{
	return FLaunchPadPageActionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Type), Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 572196580
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Icon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadPageActionData",
	Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::PropPointers),
	sizeof(FLaunchPadPageActionData),
	alignof(FLaunchPadPageActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageActionData()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.InnerSingleton;
}
// End ScriptStruct FLaunchPadPageActionData

// Begin ScriptStruct FLaunchPadPageLayout_Details
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details;
class UScriptStruct* FLaunchPadPageLayout_Details::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_Details"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_Details>()
{
	return FLaunchPadPageLayout_Details::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_Details>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Desc_MetaData), NewProp_Desc_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Image), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaunchPadPageActionData, METADATA_PARAMS(0, nullptr) }; // 2111847152
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) }; // 2111847152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Desc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"LaunchPadPageLayout_Details",
	Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::PropPointers),
	sizeof(FLaunchPadPageLayout_Details),
	alignof(FLaunchPadPageLayout_Details),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.InnerSingleton;
}
// End ScriptStruct FLaunchPadPageLayout_Details

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELaunchPagePageLayout_StaticEnum, TEXT("ELaunchPagePageLayout"), &Z_Registration_Info_UEnum_ELaunchPagePageLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3050571212U) },
		{ ELaunchPadActionType_StaticEnum, TEXT("ELaunchPadActionType"), &Z_Registration_Info_UEnum_ELaunchPadActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 572196580U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLaunchPadCategoryItem::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewStructOps, TEXT("LaunchPadCategoryItem"), &Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadCategoryItem), 1657935054U) },
		{ FLaunchPadCategories::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewStructOps, TEXT("LaunchPadCategories"), &Z_Registration_Info_UScriptStruct_LaunchPadCategories, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadCategories), 577097915U) },
		{ FLaunchPadPageHeader::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewStructOps, TEXT("LaunchPadPageHeader"), &Z_Registration_Info_UScriptStruct_LaunchPadPageHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageHeader), 4226172280U) },
		{ FLaunchPadPageLayout_CardGrid_CardInfo::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewStructOps, TEXT("LaunchPadPageLayout_CardGrid_CardInfo"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_CardGrid_CardInfo), 2585888763U) },
		{ FLaunchPadPageLayout_CardGrid_Category::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewStructOps, TEXT("LaunchPadPageLayout_CardGrid_Category"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_CardGrid_Category), 3050021491U) },
		{ FLaunchPadPageLayout_CardGrid::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewStructOps, TEXT("LaunchPadPageLayout_CardGrid"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_CardGrid), 4044726262U) },
		{ FLaunchPadPageActionData::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewStructOps, TEXT("LaunchPadPageActionData"), &Z_Registration_Info_UScriptStruct_LaunchPadPageActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageActionData), 2111847152U) },
		{ FLaunchPadPageLayout_Details::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewStructOps, TEXT("LaunchPadPageLayout_Details"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_Details), 3491427315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_3426324851(TEXT("/Script/DungeonArchitectEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
