// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYHELPER_WeaponBlock_generated_h
#error "WeaponBlock.generated.h already included, missing '#pragma once' in WeaponBlock.h"
#endif
#define GAMEPLAYHELPER_WeaponBlock_generated_h

#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_SPARSE_DATA
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBlockingState) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBlockingState(Z_Param_Out_Distance); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlockingState) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBlockingState(Z_Param_Out_Distance); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponBlock(); \
	friend struct Z_Construct_UClass_UWeaponBlock_Statics; \
public: \
	DECLARE_CLASS(UWeaponBlock, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(UWeaponBlock)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponBlock(); \
	friend struct Z_Construct_UClass_UWeaponBlock_Statics; \
public: \
	DECLARE_CLASS(UWeaponBlock, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(UWeaponBlock)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponBlock(UWeaponBlock&&); \
	NO_API UWeaponBlock(const UWeaponBlock&); \
public:


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponBlock(UWeaponBlock&&); \
	NO_API UWeaponBlock(const UWeaponBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponBlock)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_PRIVATE_PROPERTY_OFFSET
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_13_PROLOG
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_RPC_WRAPPERS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_INCLASS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_INCLASS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYHELPER_API UClass* StaticClass<class UWeaponBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
