#include "Character/AuraEnemy.h"

AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	WeaponMesh->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	GetMesh()->CustomDepthStencilValue = CUSTOM_DEPTH_RED;
	WeaponMesh->CustomDepthStencilValue = CUSTOM_DEPTH_RED;
}

void AAuraEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraEnemy::Tick(float TimeDelta)
{
	Super::Tick(TimeDelta);

}

void AAuraEnemy::HightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	WeaponMesh->SetRenderCustomDepth(true);
}

void AAuraEnemy::UnHightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	WeaponMesh->SetRenderCustomDepth(false);
}
