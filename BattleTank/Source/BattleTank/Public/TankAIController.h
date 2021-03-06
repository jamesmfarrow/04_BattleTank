// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

protected:
		// How cloae can AI tank get to the player
		UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float AcceptanceRadius = 8000; // assume measued in cm
	
private:

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnPossessedTankDeath();

	virtual void SetPawn(APawn* InPawn) override;

	/// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
};
