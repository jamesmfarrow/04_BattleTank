// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/ProjectileMovementComponent_BP.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileMovementComponent_BP() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UProjectileMovementComponent_BP_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UProjectileMovementComponent_BP();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UProjectileMovementComponent_BP::StaticRegisterNativesUProjectileMovementComponent_BP()
	{
	}
	UClass* Z_Construct_UClass_UProjectileMovementComponent_BP_NoRegister()
	{
		return UProjectileMovementComponent_BP::StaticClass();
	}
	UClass* Z_Construct_UClass_UProjectileMovementComponent_BP()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UProjectileMovementComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UProjectileMovementComponent_BP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UProjectileMovementComponent_BP> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectileMovementComponent_BP.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ProjectileMovementComponent_BP.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectileMovementComponent_BP, 3247944090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectileMovementComponent_BP(Z_Construct_UClass_UProjectileMovementComponent_BP, &UProjectileMovementComponent_BP::StaticClass, TEXT("/Script/BattleTank"), TEXT("UProjectileMovementComponent_BP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileMovementComponent_BP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
