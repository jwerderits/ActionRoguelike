// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "thundaPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AthundaCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef THUNDA_thundaPickUpComponent_generated_h
#error "thundaPickUpComponent.generated.h already included, missing '#pragma once' in thundaPickUpComponent.h"
#endif
#define THUNDA_thundaPickUpComponent_generated_h

#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_12_DELEGATE \
THUNDA_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AthundaCharacter* PickUpCharacter);


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUthundaPickUpComponent(); \
	friend struct Z_Construct_UClass_UthundaPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UthundaPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/thunda"), NO_API) \
	DECLARE_SERIALIZER(UthundaPickUpComponent)


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UthundaPickUpComponent(UthundaPickUpComponent&&); \
	UthundaPickUpComponent(const UthundaPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UthundaPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UthundaPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UthundaPickUpComponent) \
	NO_API virtual ~UthundaPickUpComponent();


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_14_PROLOG
#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THUNDA_API UClass* StaticClass<class UthundaPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
