


#include "Survival_System.h"


// Sets default values for this component's properties
USurvival_System::USurvival_System()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USurvival_System::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USurvival_System::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USurvival_System::ModifyOxygen( bool UseOxygen,bool RefillOxygen, float Amount)
{
	if(UseOxygen)
	{
		Oxygen -= Amount;
		if(Oxygen < 0)
		{
			Oxygen = 0;
		}
		OnOxygenChanged.Broadcast(Oxygen);
	}
	if(RefillOxygen)
	{
		Oxygen += Amount;
		if(Oxygen > 100)
		{
			Oxygen = 100;
		}
		OnOxygenChanged.Broadcast(Oxygen);
	}
}

void USurvival_System::ModifyPower( bool UsePower,bool GeneratePower, float Amount)
{
	if(UsePower)
	{
		Power -= Amount;
		if(Power < 0)
		{
			Power = 0;
		}
		OnPowerChanged.Broadcast(Power);
	}
	if(GeneratePower)
	{
		Power += Amount;
		if(Power > 100)
		{
			Power = 100;
		}
		OnPowerChanged.Broadcast(Power);
	}
}