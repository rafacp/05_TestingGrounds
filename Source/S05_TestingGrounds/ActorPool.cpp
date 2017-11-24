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
	if(Pool.Num() > 0)
	{
		return Pool.Pop();
	}
	else
	{
		return nullptr;
	}
}

void UActorPool::Return(AActor * ActorToReturn)
{
	if (!ensure(ActorToReturn))
	{
		return;
	}
	Add(ActorToReturn);
}

void UActorPool::Add(AActor * ActorToAdd)
{
	if (!ensure(ActorToAdd))
	{
		return;
	}
	Pool.Push(ActorToAdd);
}
