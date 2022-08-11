// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CustomCharacter.generated.h"

UENUM(BlueprintType)		
enum class ECharacterState : uint8
{
	CharacterState_Standing 	UMETA(DisplayName = "Standing"),
	CharacterState_Crouching 	UMETA(DisplayName = "Crouching"),
	CharacterState_Prone		UMETA(DisplayName = "Prone"),
	CharacterState_Pushing		UMETA(DisplayName = "Pushing")
};

UCLASS()
class DTEIXEIRA_ASSIGNMENT_API ACustomCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACustomCharacter();

	UPROPERTY(EditAnywhere, Category = "Character State")
	ECharacterState CharacterState;
	//--------------------Speeds--------------------------//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speeds")
	float RunningSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speeds")
	float WalkingSpeed = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speeds")
	float CrouchingSpeed = 120.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speeds")
	float ProneSpeed = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speeds")
	float PushingSpeed = 150.0f;
	//---------------------------------------------------//

	UFUNCTION(BlueprintPure, Category = "Character State")
	ECharacterState GetCharacterState();

	UFUNCTION(BlueprintCallable, Category = "Character State")
	void SetCharacterState(ECharacterState InCharacterState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
