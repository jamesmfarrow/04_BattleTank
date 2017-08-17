// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankAimingComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimingComponent() {}
// Cross Module References
	BATTLETANK_API UEnum* Z_Construct_UEnum_BattleTank_EFiringState();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
static UEnum* EFiringState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_BattleTank_EFiringState, Z_Construct_UPackage__Script_BattleTank(), TEXT("EFiringState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringState(EFiringState_StaticEnum, TEXT("/Script/BattleTank"), TEXT("EFiringState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_BattleTank_EFiringState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BattleTank();
		extern uint32 Get_Z_Construct_UEnum_BattleTank_EFiringState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringState"), 0, Get_Z_Construct_UEnum_BattleTank_EFiringState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFiringState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFiringState::Reloading"), 0);
			EnumNames.Emplace(TEXT("EFiringState::Aiming"), 1);
			EnumNames.Emplace(TEXT("EFiringState::Locked"), 2);
			EnumNames.Emplace(TEXT("EFiringState::EFiringState_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFiringState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_BattleTank_EFiringState_CRC() { return 3724748293U; }
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
		UClass* Class = UTankAimingComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&UTankAimingComponent::execFire },
			{ "Initialise", (Native)&UTankAimingComponent::execInitialise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire()
	{
		UObject* Outer = Z_Construct_UClass_UTankAimingComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Firing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise()
	{
		struct TankAimingComponent_eventInitialise_Parms
		{
			UTankBarrel* BarrelToSet;
			UTankTurret* TurretToSet;
		};
		UObject* Outer = Z_Construct_UClass_UTankAimingComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Initialise"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TankAimingComponent_eventInitialise_Parms));
			UProperty* NewProp_TurretToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TurretToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TurretToSet, TankAimingComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTurret_NoRegister());
			UProperty* NewProp_BarrelToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BarrelToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BarrelToSet, TankAimingComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankBarrel_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
			MetaData->SetValue(NewProp_TurretToSet, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_BarrelToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankAimingComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankAimingComponent_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankAimingComponent_Initialise());

				UProperty* NewProp_ReloadTimeInSeconds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadTimeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReloadTimeInSeconds, UTankAimingComponent), 0x0040000000010001);
				UProperty* NewProp_ProjectileBluePrint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileBluePrint"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileBluePrint, UTankAimingComponent), 0x0044000000010001, Z_Construct_UClass_AProjectile_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_LaunchSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LaunchSpeed, UTankAimingComponent), 0x0040000000010001);
				UProperty* NewProp_FiringState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FiringState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FiringState, UTankAimingComponent), 0x0020080000000014, Z_Construct_UEnum_BattleTank_EFiringState());
				UProperty* NewProp_FiringState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FiringState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankAimingComponent_Fire(), "Fire"); // 3517979577
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankAimingComponent_Initialise(), "Initialise"); // 2301087609
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankAimingComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Holds barrels properties and elevate method"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ToolTip"), TEXT("TODO remove once firing moved to aiming component"));
				MetaData->SetValue(NewProp_ProjectileBluePrint, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_ProjectileBluePrint, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(NewProp_ProjectileBluePrint, TEXT("ToolTip"), TEXT("TODO find sensible default"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(NewProp_FiringState, TEXT("Category"), TEXT("State"));
				MetaData->SetValue(NewProp_FiringState, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAimingComponent, 1414122115);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
