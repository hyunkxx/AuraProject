#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
	
public:
	AAuraCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess))
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, Category = "SpringArm", meta = (AllowPrivateAccess))
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "SpringArm", meta = (AllowPrivateAccess))
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "SpringArm", meta = (AllowPrivateAccess))
	float SpringArmLegnth;
};
