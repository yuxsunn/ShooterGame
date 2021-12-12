// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterGameInstance_generated_h
#error "ShooterGameInstance.generated.h already included, missing '#pragma once' in ShooterGameInstance.h"
#endif
#define SHOOTERGAME_ShooterGameInstance_generated_h

#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterGameInstance(); \
	friend struct Z_Construct_UClass_UShooterGameInstance_Statics; \
public: \
	DECLARE_CLASS(UShooterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterGameInstance)


#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUShooterGameInstance(); \
	friend struct Z_Construct_UClass_UShooterGameInstance_Statics; \
public: \
	DECLARE_CLASS(UShooterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterGameInstance)


#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterGameInstance(UShooterGameInstance&&); \
	NO_API UShooterGameInstance(const UShooterGameInstance&); \
public:


#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterGameInstance(UShooterGameInstance&&); \
	NO_API UShooterGameInstance(const UShooterGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterGameInstance)


#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WelcomeScreenMap() { return STRUCT_OFFSET(UShooterGameInstance, WelcomeScreenMap); } \
	FORCEINLINE static uint32 __PPO__MainMenuMap() { return STRUCT_OFFSET(UShooterGameInstance, MainMenuMap); }


#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_83_PROLOG
#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_INCLASS \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h_87_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterGameInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class UShooterGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_ShooterGameInstance_h


#define FOREACH_ENUM_EONLINEMODE(op) \
	op(EOnlineMode::Offline) \
	op(EOnlineMode::LAN) \
	op(EOnlineMode::Online) 

enum class EOnlineMode : uint8;
template<> SHOOTERGAME_API UEnum* StaticEnum<EOnlineMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
