// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// ������� ������ ���� �Ҵ�
AMyActor::AMyActor() : TotalDamage(10), DamageTimeInSeconds(1.2f)
{
	PrimaryActorTick.bCanEverTick = true;

	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
	CharacterName = TEXT("Name");
	bAttackable = true;

	// ����� ��ũ�� 
	/*
		UE_LOG(�α�ī�װ�, �α׷���, TEXT("����� ���ڿ�"));
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

