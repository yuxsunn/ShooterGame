// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterPersistentUser_generated_h
#error "ShooterPersistentUser.generated.h already included, missing '#pragma once' in ShooterPersistentUser.h"
#endif
#define SHOOTERGAME_ShooterPersistentUser_generated_h

#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterPersistentUser(); \
	friend struct Z_Construct_UClass_UShooterPersistentUser_Statics; \
public: \
	DECLARE_CLASS(UShooterPersistentUser, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterPersistentUser)


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUShooterPersistentUser(); \
	friend struct Z_Construct_UClass_UShooterPersistentUser_Statics; \
public: \
	DECLARE_CLASS(UShooterPersistentUser, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterPersistentUser)


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterPersistentUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterPersistentUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterPersistentUser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterPersistentUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterPersistentUser(UShooterPersistentUser&&); \
	NO_API UShooterPersistentUser(const UShooterPersistentUser&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterPersistentUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterPersistentUser(UShooterPersistentUser&&); \
	NO_API UShooterPersistentUser(const UShooterPersistentUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterPersistentUser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterPersistentUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterPersistentUser)


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Kills() { return STRUCT_OFFSET(UShooterPersistentUser, Kills); } \
	FORCEINLINE static uint32 __PPO__Deaths() { return STRUCT_OFFSET(UShooterPersistentUser, Deaths); } \
	FORCEINLINE static uint32 __PPO__Wins() { return STRUCT_OFFSET(UShooterPersistentUser, Wins); } \
	FORCEINLINE static uint32 __PPO__Losses() { return STRUCT_OFFSET(UShooterPersistentUser, Losses); } \
	FORCEINLINE static uint32 __PPO__BulletsFired() { return STRUCT_OFFSET(UShooterPersistentUser, BulletsFired); } \
	FORCEINLINE static uint32 __PPO__RocketsFired() { return STRUCT_OFFSET(UShooterPersistentUser, RocketsFired); } \
	FORCEINLINE static uint32 __PPO__BotsCount() { return STRUCT_OFFSET(UShooterPersistentUser, BotsCount); } \
	FORCEINLINE static uint32 __PPO__bIsRecordingDemos() { return STRUCT_OFFSET(UShooterPersistentUser, bIsRecordingDemos); } \
	FORCEINLINE static uint32 __PPO__Gamma() { return STRUCT_OFFSET(UShooterPersistentUser, Gamma); } \
	FORCEINLINE static uint32 __PPO__AimSensitivity() { return STRUCT_OFFSET(UShooterPersistentUser, AimSensitivity); } \
	FORCEINLINE static uint32 __PPO__bInvertedYAxis() { return STRUCT_OFFSET(UShooterPersistentUser, bInvertedYAxis); } \
	FORCEINLINE static uint32 __PPO__bVibrationOpt() { return STRUCT_OFFSET(UShooterPersistentUser, bVibrationOpt); }


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_6_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterPersistentUser."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class UShooterPersistentUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Player_ShooterPersistentUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
