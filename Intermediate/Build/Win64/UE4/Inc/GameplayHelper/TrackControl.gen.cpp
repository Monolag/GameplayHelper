// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayHelper/Public/TrackControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackControl() {}
// Cross Module References
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UTrackControl_NoRegister();
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UTrackControl();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayHelper();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_UTrackControl_Initialize();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UTrackControl::StaticRegisterNativesUTrackControl()
	{
		UClass* Class = UTrackControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UTrackControl::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrackControl_Initialize_Statics
	{
		struct TrackControl_eventInitialize_Parms
		{
			TArray<USceneComponent*> inComponents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackControl_Initialize_Statics::NewProp_inComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTrackControl_Initialize_Statics::NewProp_inComponents = { "inComponents", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackControl_eventInitialize_Parms, inComponents), METADATA_PARAMS(Z_Construct_UFunction_UTrackControl_Initialize_Statics::NewProp_inComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackControl_Initialize_Statics::NewProp_inComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackControl_Initialize_Statics::NewProp_inComponents_Inner = { "inComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackControl_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackControl_Initialize_Statics::NewProp_inComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackControl_Initialize_Statics::NewProp_inComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackControl_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialize" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackControl_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackControl, nullptr, "Initialize", nullptr, nullptr, sizeof(TrackControl_eventInitialize_Parms), Z_Construct_UFunction_UTrackControl_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackControl_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrackControl_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackControl_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrackControl_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTrackControl_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTrackControl_NoRegister()
	{
		return UTrackControl::StaticClass();
	}
	struct Z_Construct_UClass_UTrackControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecalClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrackControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrackControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrackControl_Initialize, "Initialize" }, // 1250942432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackControl_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TrackControl.h" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackControl_Statics::NewProp_DrawTime_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrackControl_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrackControl, DrawTime), METADATA_PARAMS(Z_Construct_UClass_UTrackControl_Statics::NewProp_DrawTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::NewProp_DrawTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalScale_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalScale = { "DecalScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrackControl, DecalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalClass_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalClass = { "DecalClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrackControl, DecalClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackControl_Statics::NewProp_LifeSpanTime_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrackControl_Statics::NewProp_LifeSpanTime = { "LifeSpanTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrackControl, LifeSpanTime), METADATA_PARAMS(Z_Construct_UClass_UTrackControl_Statics::NewProp_LifeSpanTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::NewProp_LifeSpanTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalRotation_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalRotation = { "DecalRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrackControl, DecalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/TrackControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrackControl, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrackControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackControl_Statics::NewProp_DrawTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackControl_Statics::NewProp_LifeSpanTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackControl_Statics::NewProp_DecalSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrackControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrackControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrackControl_Statics::ClassParams = {
		&UTrackControl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTrackControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTrackControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrackControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrackControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrackControl, 1521629629);
	template<> GAMEPLAYHELPER_API UClass* StaticClass<UTrackControl>()
	{
		return UTrackControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrackControl(Z_Construct_UClass_UTrackControl, &UTrackControl::StaticClass, TEXT("/Script/GameplayHelper"), TEXT("UTrackControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrackControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
