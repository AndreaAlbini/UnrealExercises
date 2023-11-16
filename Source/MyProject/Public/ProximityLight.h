// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProximityLight.generated.h"

class UPointLightComponent;

UCLASS()
class MYPROJECT_API AProximityLight : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	USceneComponent* DefaultSceneRoot;
	
	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Lamp;
	
	UPROPERTY(EditAnywhere)
	float MaxIntensity;
	
public:	
	// Sets default values for this actor's properties
	AProximityLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
