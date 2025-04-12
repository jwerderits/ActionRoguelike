#include "AExplosiveBarrel.h"
#include "Components/SphereComponent.h"





AExplosiveBarrel::AExplosiveBarrel()
{
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");

	MeshComponent = CreateDefaultSubobject <UStaticMeshComponent>("MeshComponent");
	//this->RootComponent = this->USphereComponent;
	//this->SphereComponent->SetSphereRadius(50.0f);
	//this->SphereComponent->SetCollisionProfileName("Explosive");
	//this->SphereComponent->SetGenerateOverlapEvents(true);
}

void AExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
}

void AExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}