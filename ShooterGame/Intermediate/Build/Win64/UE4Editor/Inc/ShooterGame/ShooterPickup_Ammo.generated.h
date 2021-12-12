// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterPickup_Ammo_generated_h
#error "ShooterPickup_Ammo.generated.h already included, missing '#pragma once' in ShooterPickup_Ammo.h"
#endif
#define SHOOTERGAME_ShooterPickup_Ammo_generated_h

#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPickup_Ammo(); \
	friend struct Z_Construct_UClass_AShooterPickup_Ammo_Statics; \
public: \
	DECLARE_CLASS(AShooterPickup_Ammo, AShooterPickup, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPickup_Ammo)


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShooterPickup_Ammo(); \
	friend struct Z_Construct_UClass_AShooterPickup_Ammo_Statics; \
public: \
	DECLARE_CLASS(AShooterPickup_Ammo, AShooterPickup, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPickup_Ammo)


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPickup_Ammo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPickup_Ammo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup_Ammo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup_Ammo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPickup_Ammo(AShooterPickup_Ammo&&); \
	NO_API AShooterPickup_Ammo(const AShooterPickup_Ammo&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPickup_Ammo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPickup_Ammo(AShooterPickup_Ammo&&); \
	NO_API AShooterPickup_Ammo(const AShooterPickup_Ammo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup_Ammo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup_Ammo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPickup_Ammo)


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmmoClips() { return STRUCT_OFFSET(AShooterPickup_Ammo, AmmoClips); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(AShooterPickup_Ammo, WeaponType); }


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_12_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterPickup_Ammo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterPickup_Ammo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
