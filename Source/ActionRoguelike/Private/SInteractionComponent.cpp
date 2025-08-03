#include "SInteractionComponent.h"
#include <SGameplayInterface.h>
#include <DrawDebugHelpers.h>



USInteractionComponent::USInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void USInteractionComponent::PrimaryInteract()
{

	UE_LOG(LogTemp, Display, TEXT("Component Function Hit"));
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	//FHitResult Hit;

	AActor* MyOwner = GetOwner();

	FVector EyeLocation;
	FRotator EyeRotation;
	MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

	FVector End = EyeLocation + (EyeRotation.Vector() * 1000.f);

	/*GetWorld()->LineTraceSingleByObjectType(Hit, EyeLocation, End, ObjectQueryParams);*/

	TArray<FHitResult> Hits;

	float Radius = 30.f;
	FCollisionShape CollisionShape = FCollisionShape::MakeSphere(Radius);

	bool bBlockingHit = GetWorld()->SweepMultiByObjectType(Hits, EyeLocation, End, FQuat::Identity, ObjectQueryParams, CollisionShape);
	FColor LineColor = bBlockingHit ? FColor::Green : FColor::Red;

	for (const FHitResult& Hit : Hits)
	{
		AActor* HitActor = Hit.GetActor();
		if (HitActor)
		{
			UE_LOG(LogTemp, Display, TEXT("Hit Actor: %s"), *HitActor->GetName());
			if (HitActor->Implements<USGameplayInterface>())
			{
				APawn* MyPawn = Cast<APawn>(MyOwner);
				ISGameplayInterface::Execute_Interact(HitActor, MyPawn);
				break;
			}

			DrawDebugSphere(GetWorld(), Hit.ImpactPoint, Radius, 32, LineColor, false, 2.f);
		}
	}

	
	DrawDebugLine(GetWorld(), EyeLocation, End, LineColor, false, 2.f, 0, 2.f);

	
}



void USInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
}

void USInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}