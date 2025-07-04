// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class FIRSTCPP_API AMyActor : public AActor
{
	GENERATED_BODY()

	//클래스의 멤버 함수로 사용하려면, 헤더(.h) 파일에 먼저 함수 선언을 작성한 뒤, CPP(.cpp) 파일에서 구현(정의)해야 합니다.
public:	
	// Unity의 Awake 또는 생성자
	AMyActor();

	//에디터에서 사용하기 위해서 UPROPERTY() 메크로를 선언한다.
	/* UPROPERTY();
	int _i;*/

	//음수와 양수를 모두 표현할 수 있는 정수 타입
	/* 비트 연산할 때 많이 사용됨
	int8 i8;

	* 거의 안쓰임
	int16 i16;

	* 언리얼에서 가장 일반적인 정수형 → 대부분의 변수 (Score, HP, Index, 등)는 int32
	int32 i32;

	* 시간, 고유 ID
	int64 i64;*/

	// 양수만 필요할 때 사용하는 부호 없는 정수 타입
	/* 언리얼의 enum class는 기본 타입으로 uint8을 많이 씁니다 → 메모리 절약 + 효율적
	uint8 ui8;

	* 거의 안쓰임
	uint16 ui16;

	* uint32는 비트 연산할 때 많이 사용됨
	uint32 ui32;

	* 시간, 고유 ID
	uint64 ui64;*/

	//각 언어에 따른 문자열 쓰는 방법
	/* 문자열
	* C++ std::string s = "text"
	* C# string s = "text"
	* UE5 C++ FString fStr = TEXT("text")
	FString fStr;*/

	// 에디터의 Details 패널과 블루프린트에서 변수 보이게
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	int32 TotalDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float DamageTimeInSeconds;

	// 계산된 값이기 때문에 에디터에서 직접 수정은 못 하게 하고, 블루프린트에서는 읽기만 가능
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Transient, Category = "Damage")
	float DamagePerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttackable;

protected:
	// Unity의 Start
	virtual void BeginPlay() override;

public:	
	// Unity의 Update
	virtual void Tick(float DeltaTime) override;

};
