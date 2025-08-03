#include "SBlackHole.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"

ASBlackHole::ASBlackHole()
{
	PrimaryActorTick.bCanEverTick = true;
	Lifetime = 5.0f; // Default lifetime


	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SphereComponent->SetCollisionProfileName("BlackHole");
	SphereComponent->SetCollisionObjectType(ECC_WorldDynamic);
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	//SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	//SphereComponent->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
	SphereComponent->SetCollisionResponseToChannel(ECC_PhysicsBody, ECR_Overlap);
	SphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	SphereComponent->SetSphereRadius(75.0f);
	SphereComponent->SetGenerateOverlapEvents(true);
	SphereComponent->SetNotifyRigidBodyCollision(true); // Enable collision notifications
	SphereComponent->bHiddenInGame = false; // Hide the sphere in the game view
	RootComponent = SphereComponent;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ASBlackHole::OnOverlapBegin);

	ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>("EffectComponent");
	ParticleSystemComponent->SetupAttachment(SphereComponent);
	ParticleSystemComponent->SecondsBeforeInactive = Lifetime; // Set the particle system to deactivate after the lifetime

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComponent");
	ProjectileMovementComponent->SetUpdatedComponent(SphereComponent);
	ProjectileMovementComponent->InitialSpeed = 600.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bInitialVelocityInLocalSpace = true;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f; // No gravity for black hole

	

	RadialForceComponent = CreateDefaultSubobject<URadialForceComponent>("RadialForceComponent");
	RadialForceComponent->SetupAttachment(SphereComponent);
	RadialForceComponent->Radius = 1000.0f; // Radius of the black hole's pull
	RadialForceComponent->ForceStrength = -750000.0f; // Strength of the pull
	RadialForceComponent->bIgnoreOwningActor = true; // Ignore the black hole itself
	RadialForceComponent->bAutoActivate = true; // Activate the radial force component automatically
	RadialForceComponent->AddCollisionChannelToAffect(ECC_WorldDynamic); // Affect dynamic objects
	//RadialForceComponent->AddCollisionChannelToAffect(ECC_PhysicsBody); // Affect dynamic objects
	//RadialForceComponent->AddCollisionChannelToAffect(ECC_WorldStatic); // Affect dynamic objects
	RadialForceComponent->AddObjectTypeToAffect(EObjectTypeQuery::ObjectTypeQuery6); // Add World Dynamic objects to be affected by the radial force
	RadialForceComponent->RemoveObjectTypeToAffect(EObjectTypeQuery::ObjectTypeQuery3); // Remove Pawns from being affected by the radial force
	RadialForceComponent->bImpulseVelChange = true; // Apply impulse velocity change
	RadialForceComponent->bHiddenInGame = false; // Show the radial force in the game view


	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ASBlackHole::OnOverlapBegin);

	DrawDebugSphere(GetWorld(), GetActorLocation(), SphereComponent->GetScaledSphereRadius(), 32, FColor::Red);


}


void ASBlackHole::BeginPlay()
{
	Super::BeginPlay();


}

void ASBlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (Lifetime > 0.0f)
	{
		Lifetime -= DeltaTime;
		if (Lifetime <= 0.0f)
		{
			Destroy(); // Destroy the black hole after its lifetime expires
			return;
		}
	}
	DrawDebugSphere(GetWorld(), GetActorLocation(), RadialForceComponent->Radius, 32, FColor::Blue);
}

void ASBlackHole::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap Detected"));

	if (OtherActor && OtherActor != this && OtherComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attempting to Destroy OtherActor: %s"), *OtherActor->GetName());

		OtherActor->Destroy(); // Destroy the actor that overlaps with the black hole
	}

}