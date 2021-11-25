// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEFORCES_TitanController_generated_h
#error "TitanController.generated.h already included, missing '#pragma once' in TitanController.h"
#endif
#define BATTLEFORCES_TitanController_generated_h

#define BattleForces_Source_BattleForces_Public_TitanController_h_25_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_TitanController_h_25_RPC_WRAPPERS
#define BattleForces_Source_BattleForces_Public_TitanController_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleForces_Source_BattleForces_Public_TitanController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitanController(); \
	friend struct Z_Construct_UClass_ATitanController_Statics; \
public: \
	DECLARE_CLASS(ATitanController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(ATitanController)


#define BattleForces_Source_BattleForces_Public_TitanController_h_25_INCLASS \
private: \
	static void StaticRegisterNativesATitanController(); \
	friend struct Z_Construct_UClass_ATitanController_Statics; \
public: \
	DECLARE_CLASS(ATitanController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(ATitanController)


#define BattleForces_Source_BattleForces_Public_TitanController_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitanController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATitanController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitanController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitanController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATitanController(ATitanController&&); \
	NO_API ATitanController(const ATitanController&); \
public:


#define BattleForces_Source_BattleForces_Public_TitanController_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATitanController(ATitanController&&); \
	NO_API ATitanController(const ATitanController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitanController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitanController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATitanController)


#define BattleForces_Source_BattleForces_Public_TitanController_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocationToGoKey() { return STRUCT_OFFSET(ATitanController, LocationToGoKey); } \
	FORCEINLINE static uint32 __PPO__PlayerKey() { return STRUCT_OFFSET(ATitanController, PlayerKey); }


#define BattleForces_Source_BattleForces_Public_TitanController_h_22_PROLOG
#define BattleForces_Source_BattleForces_Public_TitanController_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_INCLASS \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_TitanController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_INCLASS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_TitanController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class ATitanController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_TitanController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
