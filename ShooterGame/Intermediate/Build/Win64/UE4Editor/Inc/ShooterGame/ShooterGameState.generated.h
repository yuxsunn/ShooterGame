// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterGameState_generated_h
#error "ShooterGameState.generated.h already included, missing '#pragma once' in ShooterGameState.h"
#endif
#define SHOOTERGAME_ShooterGameState_generated_h

#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameState(); \
	friend struct Z_Construct_UClass_AShooterGameState_Statics; \
public: \
	DECLARE_CLASS(AShooterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumTeams=NETFIELD_REP_START, \
		TeamScores, \
		RemainingTime, \
		bTimerPaused, \
		NETFIELD_REP_END=bTimerPaused	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShooterGameState(); \
	friend struct Z_Construct_UClass_AShooterGameState_Statics; \
public: \
	DECLARE_CLASS(AShooterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumTeams=NETFIELD_REP_START, \
		TeamScores, \
		RemainingTime, \
		bTimerPaused, \
		NETFIELD_REP_END=bTimerPaused	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameState(AShooterGameState&&); \
	NO_API AShooterGameState(const AShooterGameState&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameState(AShooterGameState&&); \
	NO_API AShooterGameState(const AShooterGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameState)


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActivityId() { return STRUCT_OFFSET(AShooterGameState, ActivityId); } \
	FORCEINLINE static uint32 __PPO__bEnableGameFeedback() { return STRUCT_OFFSET(AShooterGameState, bEnableGameFeedback); }


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_11_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterGameState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Online_ShooterGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
