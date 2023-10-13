#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interface/EnemyInterface.h"
#include "AuraEnemy.generated.h"

UCLASS()
class AURA_API AAuraEnemy 
	: public AAuraCharacterBase
	, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	AAuraEnemy();

public:
	virtual void Tick(float TimeDelta) override;
	virtual void HightActor() override;
	virtual void UnHightActor() override;

protected:
	virtual void BeginPlay() override;


private:
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess))
	USkeletalMeshComponent* WeaponMesh;

};
