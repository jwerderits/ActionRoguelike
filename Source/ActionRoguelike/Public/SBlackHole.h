#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBlackHole.generated.h"


class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;
class URadialForceComponent;

UCLASS()
class ACTIONROGUELIKE_API ASBlackHole : public AActor
{
	GENERATED_BODY()

public:

	ASBlackHole();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Black Hole")
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Black Hole")
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Black Hole")
	UParticleSystemComponent* ParticleSystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Black Hole")
	URadialForceComponent* RadialForceComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Black Hole")
	float Radius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Black Hole")
	float PullStrength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Black Hole")
	float Lifetime;


	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	virtual void BeginPlay() override;
public:

	virtual void Tick(float DeltaTime) override;

};
