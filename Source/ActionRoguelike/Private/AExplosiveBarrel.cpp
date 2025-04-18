#include "AExplosiveBarrel.h"
#include "Components/SphereComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"



AExplosiveBarrel::AExplosiveBarrel()
{
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->SetCollisionProfileName("Explosive");
	//SphereComponent->SetCollisionResponseToChannel()

	MeshComponent = CreateDefaultSubobject <UStaticMeshComponent>("MeshComponent");


	//SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AExplosiveBarrel::Explode);
	SphereComponent->SetSphereRadius(50.0f);

	ForceComponent = CreateDefaultSubobject<URadialForceComponent>("ForceComponent");

}

void AExplosiveBarrel::Explode()
{
	
	UE_LOG(LogTemp, Warning, TEXT("Explosive Barrel Exploded!"));
}

void AExplosiveBarrel::BeginPlay()
{
	UE_LOG(LogTemp, Display, TEXT("Barrel Alive"));
	//SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AExplosiveBarrel::Explode);
	//SphereComponent->OnComponentHit.AddDynamic(this, &AExplosiveBarrel::Explode);
	//SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AExplosiveBarrel::Explode);
	//SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AExplosiveBarrel::Explode);

	Super::BeginPlay();
}

void AExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}