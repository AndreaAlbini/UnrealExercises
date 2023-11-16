// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Example.generated.h"

UCLASS()
class MYPROJECT_API AExample : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Cube;
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* DefaultSceneRoot;

	UPROPERTY(EditAnywhere, Category ="FloatingSettings")
	float Amplitude;
	
public:	
	// Sets default values for this actor's properties
	AExample();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
