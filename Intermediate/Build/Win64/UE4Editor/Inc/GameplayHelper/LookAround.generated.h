// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYHELPER_LookAround_generated_h
#error "LookAround.generated.h already included, missing '#pragma once' in LookAround.h"
#endif
#define GAMEPLAYHELPER_LookAround_generated_h

#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_SPARSE_DATA
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopLookAround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopLookAround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartLookAround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartLookAround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookingAround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLookingAround(); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopLookAround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopLookAround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartLookAround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartLookAround(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookingAround) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLookingAround(); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULookAround(); \
	friend struct Z_Construct_UClass_ULookAround_Statics; \
public: \
	DECLARE_CLASS(ULookAround, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(ULookAround)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULookAround(); \
	friend struct Z_Construct_UClass_ULookAround_Statics; \
public: \
	DECLARE_CLASS(ULookAround, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(ULookAround)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULookAround(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULookAround) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULookAround); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULookAround); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULookAround(ULookAround&&); \
	NO_API ULookAround(const ULookAround&); \
public:


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULookAround(ULookAround&&); \
	NO_API ULookAround(const ULookAround&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULookAround); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULookAround); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULookAround)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_PRIVATE_PROPERTY_OFFSET
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_11_PROLOG
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_RPC_WRAPPERS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_INCLASS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_INCLASS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYHELPER_API UClass* StaticClass<class ULookAround>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_LookAround_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
