// Copyright RafaCP

#include "ActorPool.h"


// Sets default values for this component's properties
UActorPool::UActorPool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

AActor * UActorPool::Checkout()
{
	return nullptr;
}

void UActorPool::Return(AActor * ActorToReturn)
{
	if (!ensure(ActorToReturn))
	{
		UE_LOG(LogTemp, Error, TEXT("Returned null actor!"));
		return;
	}

}

void UActorPool::Add(AActor * ActorToAdd)
{
	if (!ensure(ActorToAdd))
	{
		UE_LOG(LogTemp, Error, TEXT("Added null actor!"));
		return;
	}

}
