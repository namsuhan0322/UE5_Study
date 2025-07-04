// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class FIRSTCPP_API AMyActor : public AActor
{
	GENERATED_BODY()

	//Ŭ������ ��� �Լ��� ����Ϸ���, ���(.h) ���Ͽ� ���� �Լ� ������ �ۼ��� ��, CPP(.cpp) ���Ͽ��� ����(����)�ؾ� �մϴ�.
public:	
	// Unity�� Awake �Ǵ� ������
	AMyActor();

	//�����Ϳ��� ����ϱ� ���ؼ� UPROPERTY() ��ũ�θ� �����Ѵ�.
	/* UPROPERTY();
	int _i;*/

	//������ ����� ��� ǥ���� �� �ִ� ���� Ÿ��
	/* ��Ʈ ������ �� ���� ����
	int8 i8;

	* ���� �Ⱦ���
	int16 i16;

	* �𸮾󿡼� ���� �Ϲ����� ������ �� ��κ��� ���� (Score, HP, Index, ��)�� int32
	int32 i32;

	* �ð�, ���� ID
	int64 i64;*/

	// ����� �ʿ��� �� ����ϴ� ��ȣ ���� ���� Ÿ��
	/* �𸮾��� enum class�� �⺻ Ÿ������ uint8�� ���� ���ϴ� �� �޸� ���� + ȿ����
	uint8 ui8;

	* ���� �Ⱦ���
	uint16 ui16;

	* uint32�� ��Ʈ ������ �� ���� ����
	uint32 ui32;

	* �ð�, ���� ID
	uint64 ui64;*/

	//�� �� ���� ���ڿ� ���� ���
	/* ���ڿ�
	* C++ std::string s = "text"
	* C# string s = "text"
	* UE5 C++ FString fStr = TEXT("text")
	FString fStr;*/

	// �������� Details �гΰ� �������Ʈ���� ���� ���̰�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	int32 TotalDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float DamageTimeInSeconds;

	// ���� ���̱� ������ �����Ϳ��� ���� ������ �� �ϰ� �ϰ�, �������Ʈ������ �б⸸ ����
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Transient, Category = "Damage")
	float DamagePerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttackable;

protected:
	// Unity�� Start
	virtual void BeginPlay() override;

public:	
	// Unity�� Update
	virtual void Tick(float DeltaTime) override;

};
