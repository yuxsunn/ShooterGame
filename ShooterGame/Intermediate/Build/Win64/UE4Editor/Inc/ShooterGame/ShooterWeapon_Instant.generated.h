// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantizeNormal;
struct FHitResult;
#ifdef SHOOTERGAME_ShooterWeapon_Instant_generated_h
#error "ShooterWeapon_Instant.generated.h already included, missing '#pragma once' in ShooterWeapon_Instant.h"
#endif
#define SHOOTERGAME_ShooterWeapon_Instant_generated_h

#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstantWeaponData_Statics; \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SHOOTERGAME_API UScriptStruct* StaticStruct<struct FInstantWeaponData>();

#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstantHitInfo_Statics; \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SHOOTERGAME_API UScriptStruct* StaticStruct<struct FInstantHitInfo>();

#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_RPC_WRAPPERS \
	virtual bool ServerNotifyMiss_Validate(FVector_NetQuantizeNormal , int32 , float ); \
	virtual void ServerNotifyMiss_Implementation(FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
	virtual bool ServerNotifyHit_Validate(FHitResult const& , FVector_NetQuantizeNormal , int32 , float ); \
	virtual void ServerNotifyHit_Implementation(FHitResult const& Impact, FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
 \
	DECLARE_FUNCTION(execOnRep_HitNotify); \
	DECLARE_FUNCTION(execServerNotifyMiss); \
	DECLARE_FUNCTION(execServerNotifyHit);


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerNotifyMiss_Validate(FVector_NetQuantizeNormal , int32 , float ); \
	virtual void ServerNotifyMiss_Implementation(FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
	virtual bool ServerNotifyHit_Validate(FHitResult const& , FVector_NetQuantizeNormal , int32 , float ); \
	virtual void ServerNotifyHit_Implementation(FHitResult const& Impact, FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
 \
	DECLARE_FUNCTION(execOnRep_HitNotify); \
	DECLARE_FUNCTION(execServerNotifyMiss); \
	DECLARE_FUNCTION(execServerNotifyHit);


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_EVENT_PARMS \
	struct ShooterWeapon_Instant_eventServerNotifyHit_Parms \
	{ \
		FHitResult Impact; \
		FVector_NetQuantizeNormal ShootDir; \
		int32 RandomSeed; \
		float ReticleSpread; \
	}; \
	struct ShooterWeapon_Instant_eventServerNotifyMiss_Parms \
	{ \
		FVector_NetQuantizeNormal ShootDir; \
		int32 RandomSeed; \
		float ReticleSpread; \
	};


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_CALLBACK_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterWeapon_Instant(); \
	friend struct Z_Construct_UClass_AShooterWeapon_Instant_Statics; \
public: \
	DECLARE_CLASS(AShooterWeapon_Instant, AShooterWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon_Instant) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitNotify=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitNotify	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_INCLASS \
private: \
	static void StaticRegisterNativesAShooterWeapon_Instant(); \
	friend struct Z_Construct_UClass_AShooterWeapon_Instant_Statics; \
public: \
	DECLARE_CLASS(AShooterWeapon_Instant, AShooterWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon_Instant) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitNotify=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitNotify	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon_Instant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon_Instant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon_Instant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon_Instant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterWeapon_Instant(AShooterWeapon_Instant&&); \
	NO_API AShooterWeapon_Instant(const AShooterWeapon_Instant&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon_Instant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterWeapon_Instant(AShooterWeapon_Instant&&); \
	NO_API AShooterWeapon_Instant(const AShooterWeapon_Instant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon_Instant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon_Instant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon_Instant)


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstantConfig() { return STRUCT_OFFSET(AShooterWeapon_Instant, InstantConfig); } \
	FORCEINLINE static uint32 __PPO__ImpactTemplate() { return STRUCT_OFFSET(AShooterWeapon_Instant, ImpactTemplate); } \
	FORCEINLINE static uint32 __PPO__TrailFX() { return STRUCT_OFFSET(AShooterWeapon_Instant, TrailFX); } \
	FORCEINLINE static uint32 __PPO__TrailTargetParam() { return STRUCT_OFFSET(AShooterWeapon_Instant, TrailTargetParam); } \
	FORCEINLINE static uint32 __PPO__HitNotify() { return STRUCT_OFFSET(AShooterWeapon_Instant, HitNotify); }


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_82_PROLOG \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_EVENT_PARMS


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_CALLBACK_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_CALLBACK_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h_85_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterWeapon_Instant."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterWeapon_Instant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_Instant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
