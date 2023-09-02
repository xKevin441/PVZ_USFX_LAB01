#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <string> 

#include "Plant.generated.h" // Esta libreria siempre debe ser la ultima

UCLASS()
class PVZ_USFX_LAB01_API APlant : public AActor
{
	GENERATED_BODY() 
	
public:	
	// Sets default values for this actor's properties
	APlant();

	UPROPERTY (EditAnywhere)
	UStaticMeshComponent* PlantMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Llamado en cada frame
	virtual void Tick(float DeltaTime) override;

};
