// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleMove.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ASimpleMove::ASimpleMove()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASimpleMove::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASimpleMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASimpleMove::MoveActorForward(float Amount)
{
	AddActorWorldOffset(FVector(Amount,0,0));
	Counter++;
	if(Counter>=1)
	{
		RandomProbability = FMath::RandRange(1,10);
		KillEverythingWithGiantMassiveExplosion();
	}	
}

