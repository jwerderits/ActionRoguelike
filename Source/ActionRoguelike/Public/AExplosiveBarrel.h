// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AExplosiveBarrel.generated.h"


class USphereComponent;
class UStaticMeshComponent;


UCLASS()
class ACTIONROGUELIKE_API AExplosiveBarrel : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AExplosiveBarrel();

protected:

	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
