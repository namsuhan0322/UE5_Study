// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionActor.h"

// Sets default values
AFunctionActor::AFunctionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TotalDamage = 400;
	DamageTimeInSeconds = 2.5f;
}

// Called when the game starts or when spawned
void AFunctionActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFunctionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFunctionActor::PostInitProperties()
{
	Super::PostInitProperties();

	CalculateDPS();
}

void AFunctionActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	CalculateDPS();

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

// ������� ������ �Լ��� ������ ���⼭ �ۼ�
void AFunctionActor::CalculateDPS()
{
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}