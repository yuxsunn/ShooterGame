// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterCharacter;
#ifdef SHOOTERGAME_ShooterAIController_generated_h
#error "ShooterAIController.generated.h already included, missing '#pragma once' in ShooterAIController.h"
#endif
#define SHOOTERGAME_ShooterAIController_generated_h

#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindClosestEnemyWithLOS); \
	DECLARE_FUNCTION(execFindClosestEnemy); \
	DECLARE_FUNCTION(execShootEnemy);


#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindClosestEnemyWithLOS); \
	DECLARE_FUNCTION(execFindClosestEnemy); \
	DECLARE_FUNCTION(execShootEnemy);


#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterAIController(); \
	friend struct Z_Construct_UClass_AShooterAIController_Statics; \
public: \
	DECLARE_CLASS(AShooterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAShooterAIController(); \
	friend struct Z_Construct_UClass_AShooterAIController_Statics; \
public: \
	DECLARE_CLASS(AShooterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterAIController(AShooterAIController&&); \
	NO_API AShooterAIController(const AShooterAIController&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterAIController(AShooterAIController&&); \
	NO_API AShooterAIController(const AShooterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterAIController)


#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardComp() { return STRUCT_OFFSET(AShooterAIController, BlackboardComp); } \
	FORCEINLINE static uint32 __PPO__BehaviorComp() { return STRUCT_OFFSET(AShooterAIController, BehaviorComp); }


#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_10_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterAIController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Bots_ShooterAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
