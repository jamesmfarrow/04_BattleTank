// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:

	virtual void BeginPlay() override;

	/// Called every frame
	virtual void Tick(float DeltaTime) override;

	// How cloae can AI tank get to the player
	float AcceptanceRadius = 3000; // assume measued in cm
	
};
