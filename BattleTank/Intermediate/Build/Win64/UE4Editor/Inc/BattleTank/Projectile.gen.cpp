// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/Projectile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile() {}
// Cross Module References
	BATTLETANK_API UFunction* Z_Construct_UFunction_AProjectile_OnHit();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProjectile::StaticRegisterNativesAProjectile()
	{
		UClass* Class = AProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AProjectile_OnHit()
	{
		struct Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_AProjectile();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C40401, 65535, sizeof(Projectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, Projectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, Projectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, Projectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Projectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, Projectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = AProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AProjectile_OnHit());

				UProperty* NewProp_ExplosionForce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionForce"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExplosionForce, AProjectile), 0x00400000000a0009, Z_Construct_UClass_URadialForceComponent_NoRegister());
				UProperty* NewProp_ImpactBlast = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImpactBlast"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ImpactBlast, AProjectile), 0x00400000000a0009, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_LaunchBlast = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchBlast"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LaunchBlast, AProjectile), 0x00400000000a0009, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_CollisionMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionMesh, AProjectile), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_DestroyDelay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DestroyDelay"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DestroyDelay, AProjectile), 0x0040000000010001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AProjectile_OnHit(), "OnHit"); // 4047160438
				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_ExplosionForce, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_ExplosionForce, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ExplosionForce, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_ImpactBlast, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_ImpactBlast, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ImpactBlast, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_LaunchBlast, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_LaunchBlast, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LaunchBlast, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_CollisionMesh, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_CollisionMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionMesh, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_DestroyDelay, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_DestroyDelay, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile, 1335531936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("/Script/BattleTank"), TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
