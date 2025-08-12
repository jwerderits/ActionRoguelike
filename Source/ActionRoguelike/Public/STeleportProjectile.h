#pragma once

#include "CoreMinimal.h"
#include "SProjectileBase.h"
#include "STeleportProjectile.generated.h"



UCLASS()
class ACTIONROGUELIKE_API ASTeleportProjectile : public ASProjectileBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleport")
	float TeleportDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleport")
	float DetonateDelay;

	FTimerHandle TimerHandle_DelayedDetonate;

	virtual void Explode_Implementation() override;

	void TeleportInstigator();

	virtual void BeginPlay() override;

public:

	ASTeleportProjectile();

};
