

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Survival_System.generated.h"


//don't Change these delegates 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOxygenChanged, float, NewOxygen);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerChanged, float, NewPower);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHungerChanged, float, NewHunger);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThirstChanged, float, NewThirst);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTREDDUST_API USurvival_System : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USurvival_System();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//This is shows all the basic stats that the player will need to manage. Add any other stats If missing.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	float Hunger = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	float Thirst = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	float Health = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	float Oxygen = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	float Power = 100;

	//These are some extra properties that are required for the system to work. These will be shown in the Editor.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	bool ConsumeOxygen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	bool ConsumePower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	bool IsRefillingOxygen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	bool IsGeneratingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	bool Eating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	bool Drinking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival")
	bool IsHealing;

	//These Functions will be used to modify the stats. Warning to touch them if you don't know what your doing.
	UFUNCTION(BlueprintCallable, Category = "Survival")
	void ModifyOxygen(bool UseOxygen,bool RefillOxygen, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Survival")
	void ModifyPower( bool UsePower, bool GeneratePower, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Survival")
	void ModifyHunger(float Amount,bool IsEating);

	UFUNCTION(BlueprintCallable, Category = "Survival")
	void ModifyThirst(float Amount,bool IsDrinking);

	UFUNCTION(BlueprintCallable, Category = "Survival")
	void ModifyHealth(float Amount,bool Heal);

	// These are delegates that will be used to broadcast the changes in the stats. You can bind them to any function you want.
	UPROPERTY(BlueprintAssignable, Category = "Survival")
	FOnPowerChanged OnPowerChanged;

	UPROPERTY(BlueprintAssignable, Category = "Survival")
	FOnOxygenChanged OnOxygenChanged;

	UPROPERTY(BlueprintAssignable, Category = "Survival")
	FOnHungerChanged OnHungerChanged;
	
	UPROPERTY(BlueprintAssignable, Category = "Survival")
	FOnThirstChanged OnThirstChanged;
	
	UPROPERTY(BlueprintAssignable, Category = "Survival")
	FOnHealthChanged OnHealthChanged;


};
