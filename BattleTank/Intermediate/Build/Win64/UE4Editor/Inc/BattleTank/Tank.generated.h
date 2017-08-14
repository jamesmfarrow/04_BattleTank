// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define BATTLETANK_Tank_generated_h

#define BattleTank_Source_BattleTank_Public_Tank_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_Tank_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_Tank_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_ATank(); \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATank) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_Tank_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_ATank(); \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATank) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_Tank_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define BattleTank_Source_BattleTank_Public_Tank_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define BattleTank_Source_BattleTank_Public_Tank_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankAimingComponent() { return STRUCT_OFFSET(ATank, TankAimingComponent); } \
	FORCEINLINE static uint32 __PPO__TankMovementComponent() { return STRUCT_OFFSET(ATank, TankMovementComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileBluePrint() { return STRUCT_OFFSET(ATank, ProjectileBluePrint); } \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(ATank, LaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__ReloadTimeInSeconds() { return STRUCT_OFFSET(ATank, ReloadTimeInSeconds); }


#define BattleTank_Source_BattleTank_Public_Tank_h_15_PROLOG
#define BattleTank_Source_BattleTank_Public_Tank_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_Tank_h_18_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_Tank_h_18_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_Tank_h_18_INCLASS \
	BattleTank_Source_BattleTank_Public_Tank_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_Tank_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_Tank_h_18_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_Tank_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_Tank_h_18_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_Tank_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
