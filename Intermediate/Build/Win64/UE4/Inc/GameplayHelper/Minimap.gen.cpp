// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayHelper/Public/Minimap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimap() {}
// Cross Module References
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UMinimap_NoRegister();
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UMinimap();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMinimap::StaticRegisterNativesUMinimap()
	{
	}
	UClass* Z_Construct_UClass_UMinimap_NoRegister()
	{
		return UMinimap::StaticClass();
	}
	struct Z_Construct_UClass_UMinimap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinimap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayHelper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Minimap.h" },
		{ "ModuleRelativePath", "Public/Minimap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimap_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "Minimap" },
		{ "ModuleRelativePath", "Public/Minimap.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMinimap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinimap, Map), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMinimap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimap_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinimap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimap_Statics::NewProp_Map,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinimap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinimap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMinimap_Statics::ClassParams = {
		&UMinimap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMinimap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMinimap_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMinimap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinimap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMinimap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMinimap, 3324699860);
	template<> GAMEPLAYHELPER_API UClass* StaticClass<UMinimap>()
	{
		return UMinimap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMinimap(Z_Construct_UClass_UMinimap, &UMinimap::StaticClass, TEXT("/Script/GameplayHelper"), TEXT("UMinimap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinimap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
