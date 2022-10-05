// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpTest/HttpTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpTestGameMode() {}
// Cross Module References
	HTTPTEST_API UClass* Z_Construct_UClass_AHttpTestGameMode_NoRegister();
	HTTPTEST_API UClass* Z_Construct_UClass_AHttpTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HttpTest();
// End Cross Module References
	void AHttpTestGameMode::StaticRegisterNativesAHttpTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHttpTestGameMode_NoRegister()
	{
		return AHttpTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHttpTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHttpTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HttpTestGameMode.h" },
		{ "ModuleRelativePath", "HttpTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHttpTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHttpTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHttpTestGameMode_Statics::ClassParams = {
		&AHttpTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHttpTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHttpTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHttpTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHttpTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHttpTestGameMode, 179149169);
	template<> HTTPTEST_API UClass* StaticClass<AHttpTestGameMode>()
	{
		return AHttpTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHttpTestGameMode(Z_Construct_UClass_AHttpTestGameMode, &AHttpTestGameMode::StaticClass, TEXT("/Script/HttpTest"), TEXT("AHttpTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHttpTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
