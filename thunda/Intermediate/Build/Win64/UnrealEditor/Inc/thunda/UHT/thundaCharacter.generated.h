// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "thundaCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THUNDA_thundaCharacter_generated_h
#error "thundaCharacter.generated.h already included, missing '#pragma once' in thundaCharacter.h"
#endif
#define THUNDA_thundaCharacter_generated_h

#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAthundaCharacter(); \
	friend struct Z_Construct_UClass_AthundaCharacter_Statics; \
public: \
	DECLARE_CLASS(AthundaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/thunda"), NO_API) \
	DECLARE_SERIALIZER(AthundaCharacter)


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AthundaCharacter(AthundaCharacter&&); \
	AthundaCharacter(const AthundaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AthundaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AthundaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AthundaCharacter) \
	NO_API virtual ~AthundaCharacter();


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaCharacter_h_19_PROLOG
#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THUNDA_API UClass* StaticClass<class AthundaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
