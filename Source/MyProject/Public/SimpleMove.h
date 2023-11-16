// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimpleMove.generated.h"

UCLASS()
class MYPROJECT_API ASimpleMove : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASimpleMove();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:
	UFUNCTION(BlueprintCallable, Category = "Move Actor")
	void MoveActorForward (float Amount);

	UFUNCTION(BlueprintImplementableEvent,Category="Move Actor")
	void KillEverythingWithGiantMassiveExplosion();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Move Actor")
	int32 Counter;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Move Actor")
	int32 RandomProbability;
};
