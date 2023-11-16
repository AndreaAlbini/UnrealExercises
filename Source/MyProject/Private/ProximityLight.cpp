// Fill out your copyright notice in the Description page of Project Settings.


#include "ProximityLight.h"

#include "Components/PointLightComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProximityLight::AProximityLight()
{

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");
	RootComponent = DefaultSceneRoot;
	
	Lamp = CreateDefaultSubobject<UPointLightComponent>("Lamp");
	Lamp->SetupAttachment(DefaultSceneRoot);
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProximityLight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProximityLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	const float Distance = GetDistanceTo(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	Lamp->SetIntensity(FMath::Clamp(MaxIntensity-Distance,0.f,MaxIntensity));
	UE_LOG(LogTemp, Warning, TEXT("Distance is: %f "), Distance);
	
}

