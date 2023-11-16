// Fill out your copyright notice in the Description page of Project Settings.


#include "Example.h"


// Sets default values
AExample::AExample()
{

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");
	RootComponent = DefaultSceneRoot;

	Cube = CreateDefaultSubobject<UStaticMeshComponent>("Cube");
	Cube->SetupAttachment(DefaultSceneRoot);
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExample::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float NextZ = FMath::Sin(GetWorld()->GetTimeSeconds());
	
	Cube->SetRelativeLocation(FVector(0,0,NextZ*Amplitude));
}

