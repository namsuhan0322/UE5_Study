// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// 헤더에서 설정한 변수 할당
AMyActor::AMyActor() : TotalDamage(10), DamageTimeInSeconds(1.2f)
{
	PrimaryActorTick.bCanEverTick = true;

	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
	CharacterName = TEXT("Name");
	bAttackable = true;

	// 디버그 매크로 
	/*
		UE_LOG(로그카테고리, 로그레벨, TEXT("출력할 문자열"));
		UE_LOG(LogTemp, Log, TEXT("Constructor"));
	*/
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

