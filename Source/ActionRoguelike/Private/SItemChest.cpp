#include "SItemChest.h"
#include "Components/StaticMeshComponent.h"
#include "SGameplayInterface.h"


ASItemChest::ASItemChest()
{
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));

	RootComponent = BaseMesh;
	LidMesh->SetupAttachment(BaseMesh);

	TargetPitch = 100.f;
}

void ASItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	UE_LOG(LogTemp, Display, TEXT("Opening"));

	LidMesh->SetRelativeRotation(FRotator(TargetPitch, 0.f, 0.f));
}

void ASItemChest::BeginPlay()
{
	Super::BeginPlay();
}

void ASItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}