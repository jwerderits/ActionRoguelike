#include "SMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "SAttributeComponent.h"


ASMagicProjectile::ASMagicProjectile()
{

	SphereComponent->SetSphereRadius(20.0f);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ASMagicProjectile::OnActorBeginOverlap);

	DamageAmount = 20.0f;
}


void ASMagicProjectile::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != GetInstigator())
	{
		USAttributeComponent* AttributeComponent = Cast<USAttributeComponent>(OtherActor->GetComponentByClass(USAttributeComponent::StaticClass()));
		if (AttributeComponent)
		{
			AttributeComponent->ApplyHealthChange(-DamageAmount);

			UE_LOG(LogTemp, Display, TEXT("Hit Actor With Cannon: %s"), *OtherActor->GetName());

			Explode();
		}
	}

}