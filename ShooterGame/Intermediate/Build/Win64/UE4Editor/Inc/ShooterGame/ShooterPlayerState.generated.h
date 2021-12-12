// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterPlayerState;
class UDamageType;
#ifdef SHOOTERGAME_ShooterPlayerState_generated_h
#error "ShooterPlayerState.generated.h already included, missing '#pragma once' in ShooterPlayerState.h"
#endif
#define SHOOTERGAME_ShooterPlayerState_generated_h

#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_RPC_WRAPPERS \
	virtual void BroadcastDeath_Implementation(AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState); \
	virtual void InformAboutKill_Implementation(AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState); \
 \
	DECLARE_FUNCTION(execOnRep_TeamColor); \
	DECLARE_FUNCTION(execBroadcastDeath); \
	DECLARE_FUNCTION(execInformAboutKill);


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BroadcastDeath_Implementation(AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState); \
	virtual void InformAboutKill_Implementation(AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState); \
 \
	DECLARE_FUNCTION(execOnRep_TeamColor); \
	DECLARE_FUNCTION(execBroadcastDeath); \
	DECLARE_FUNCTION(execInformAboutKill);


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_EVENT_PARMS \
	struct ShooterPlayerState_eventBroadcastDeath_Parms \
	{ \
		AShooterPlayerState* KillerPlayerState; \
		const UDamageType* KillerDamageType; \
		AShooterPlayerState* KilledPlayerState; \
	}; \
	struct ShooterPlayerState_eventInformAboutKill_Parms \
	{ \
		AShooterPlayerState* KillerPlayerState; \
		const UDamageType* KillerDamageType; \
		AShooterPlayerState* KilledPlayerState; \
	};


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_CALLBACK_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPlayerState(); \
	friend struct Z_Construct_UClass_AShooterPlayerState_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamNumber=NETFIELD_REP_START, \
		NumKills, \
		NumDeaths, \
		MatchId, \
		NETFIELD_REP_END=MatchId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAShooterPlayerState(); \
	friend struct Z_Construct_UClass_AShooterPlayerState_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamNumber=NETFIELD_REP_START, \
		NumKills, \
		NumDeaths, \
		MatchId, \
		NETFIELD_REP_END=MatchId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerState(AShooterPlayerState&&); \
	NO_API AShooterPlayerState(const AShooterPlayerState&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerState(AShooterPlayerState&&); \
	NO_API AShooterPlayerState(const AShooterPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerState)


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeamNumber() { return STRUCT_OFFSET(AShooterPlayerState, TeamNumber); } \
	FORCEINLINE static uint32 __PPO__NumKills() { return STRUCT_OFFSET(AShooterPlayerState, NumKills); } \
	FORCEINLINE static uint32 __PPO__NumDeaths() { return STRUCT_OFFSET(AShooterPlayerState, NumDeaths); } \
	FORCEINLINE static uint32 __PPO__NumBulletsFired() { return STRUCT_OFFSET(AShooterPlayerState, NumBulletsFired); } \
	FORCEINLINE static uint32 __PPO__NumRocketsFired() { return STRUCT_OFFSET(AShooterPlayerState, NumRocketsFired); } \
	FORCEINLINE static uint32 __PPO__MatchId() { return STRUCT_OFFSET(AShooterPlayerState, MatchId); }


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_7_PROLOG \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_EVENT_PARMS


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_CALLBACK_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_CALLBACK_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterPlayerState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Online_ShooterPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
