// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTTPTEST_HttpTestCharacter_generated_h
#error "HttpTestCharacter.generated.h already included, missing '#pragma once' in HttpTestCharacter.h"
#endif
#define HTTPTEST_HttpTestCharacter_generated_h

#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_SPARSE_DATA
#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_RPC_WRAPPERS
#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHttpTestCharacter(); \
	friend struct Z_Construct_UClass_AHttpTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AHttpTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HttpTest"), NO_API) \
	DECLARE_SERIALIZER(AHttpTestCharacter)


#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHttpTestCharacter(); \
	friend struct Z_Construct_UClass_AHttpTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AHttpTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HttpTest"), NO_API) \
	DECLARE_SERIALIZER(AHttpTestCharacter)


#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHttpTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHttpTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHttpTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHttpTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHttpTestCharacter(AHttpTestCharacter&&); \
	NO_API AHttpTestCharacter(const AHttpTestCharacter&); \
public:


#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHttpTestCharacter(AHttpTestCharacter&&); \
	NO_API AHttpTestCharacter(const AHttpTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHttpTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHttpTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHttpTestCharacter)


#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHttpTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AHttpTestCharacter, FollowCamera); }


#define HttpTest_Source_HttpTest_HttpTestCharacter_h_9_PROLOG
#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_SPARSE_DATA \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_RPC_WRAPPERS \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_INCLASS \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HttpTest_Source_HttpTest_HttpTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_SPARSE_DATA \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HttpTest_Source_HttpTest_HttpTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPTEST_API UClass* StaticClass<class AHttpTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HttpTest_Source_HttpTest_HttpTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
