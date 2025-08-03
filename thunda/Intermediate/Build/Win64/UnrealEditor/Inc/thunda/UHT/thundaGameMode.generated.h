// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "thundaGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THUNDA_thundaGameMode_generated_h
#error "thundaGameMode.generated.h already included, missing '#pragma once' in thundaGameMode.h"
#endif
#define THUNDA_thundaGameMode_generated_h

#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAthundaGameMode(); \
	friend struct Z_Construct_UClass_AthundaGameMode_Statics; \
public: \
	DECLARE_CLASS(AthundaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/thunda"), THUNDA_API) \
	DECLARE_SERIALIZER(AthundaGameMode)


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AthundaGameMode(AthundaGameMode&&); \
	AthundaGameMode(const AthundaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THUNDA_API, AthundaGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AthundaGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AthundaGameMode) \
	THUNDA_API virtual ~AthundaGameMode();


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_9_PROLOG
#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THUNDA_API UClass* StaticClass<class AthundaGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
