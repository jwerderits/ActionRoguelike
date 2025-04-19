#include "AExplosiveBarrel.h"
#include "Components/SphereComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"



AExplosiveBarrel::AExplosiveBarrel()
{
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SphereComponent->SetCollisionProfileName("Explosive");

	MeshComponent = CreateDefaultSubobject <UStaticMeshComponent>("MeshComponent");


	//SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AExplosiveBarrel::Explode);
	SphereComponent->SetSphereRadius(100.0f);

	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComponent->SetCollisionObjectType(ECC_WorldDynamic);
	SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComponent->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
	SphereComponent->SetGenerateOverlapEvents(true);
	MeshComponent->SetupAttachment(SphereComponent);
	RootComponent = SphereComponent;
	MeshComponent->SetRelativeLocation(FVector(0.f, 0.f, -50.f));

}

void AExplosiveBarrel::Explode()
{
	bool exploded = false;
	if (ForceComponent)
	{
		ForceComponent->FireImpulse();
		exploded = true;
		UE_LOG(LogTemp, Warning, TEXT("Explosive Barrel Exploded!"));
	}
	
	ForceComponent = NewObject<URadialForceComponent>(this, URadialForceComponent::StaticClass());
	ForceComponent->SetupAttachment(SphereComponent);
	ForceComponent->Radius = 1000.0f;
	ForceComponent->ImpulseStrength = 1000.0f;
	ForceComponent->bImpulseVelChange = true;

	MeshComponent->SetSimulatePhysics(true);
	MeshComponent->AddImpulse(FVector(0.f, 0.f, 1000.f), NAME_None, true);
}

void AExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AExplosiveBarrel::OnSphereBeginOverlap);

}

void AExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AExplosiveBarrel::OnSphereBeginOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{

	UE_LOG(LogTemp, Warning, TEXT("Overlap function working"));
	if (OtherActor && OtherActor != this)
	{
		Explode();
	}
}
