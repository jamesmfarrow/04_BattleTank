// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/Tank.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATank_Fire();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
		UClass* Class = ATank::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&ATank::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ATank_Fire()
	{
		UObject* Outer = Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Firing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ATank_Fire());

				UProperty* NewProp_ReloadTimeInSeconds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadTimeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReloadTimeInSeconds, ATank), 0x0040000000010001);
				UProperty* NewProp_LaunchSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LaunchSpeed, ATank), 0x0040000000010001);
				UProperty* NewProp_ProjectileBluePrint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileBluePrint"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileBluePrint, ATank), 0x0044000000010001, Z_Construct_UClass_AProjectile_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_TankAimingComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TankAimingComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TankAimingComponent, ATank), 0x002008000008001c, Z_Construct_UClass_UTankAimingComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_Fire(), "Fire"); // 929031273
				static TCppClassTypeInfo<TCppClassTypeTraits<ATank> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Tank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ToolTip"), TEXT("TODO remove once firing moved to aiming component"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ProjectileBluePrint, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_ProjectileBluePrint, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_TankAimingComponent, TEXT("Category"), TEXT("Tank"));
				MetaData->SetValue(NewProp_TankAimingComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TankAimingComponent, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 3879824287);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
