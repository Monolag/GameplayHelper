// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef GAMEPLAYHELPER_TrackControl_generated_h
#error "TrackControl.generated.h already included, missing '#pragma once' in TrackControl.h"
#endif
#define GAMEPLAYHELPER_TrackControl_generated_h

#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_SPARSE_DATA
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_TARRAY(USceneComponent*,Z_Param_inComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(Z_Param_inComponents); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_TARRAY(USceneComponent*,Z_Param_inComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(Z_Param_inComponents); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackControl(); \
	friend struct Z_Construct_UClass_UTrackControl_Statics; \
public: \
	DECLARE_CLASS(UTrackControl, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(UTrackControl)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTrackControl(); \
	friend struct Z_Construct_UClass_UTrackControl_Statics; \
public: \
	DECLARE_CLASS(UTrackControl, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(UTrackControl)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackControl(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackControl(UTrackControl&&); \
	NO_API UTrackControl(const UTrackControl&); \
public:


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackControl(UTrackControl&&); \
	NO_API UTrackControl(const UTrackControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrackControl)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_PRIVATE_PROPERTY_OFFSET
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_14_PROLOG
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_RPC_WRAPPERS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_INCLASS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_INCLASS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYHELPER_API UClass* StaticClass<class UTrackControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_TrackControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
