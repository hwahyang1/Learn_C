#include <stdio.h>;

void main() {
	/* 타입 주의!! Python / JS와 달리 변수 타입이 유동적이지 않음!! */

	int Level; // 변수/타입 선언
	Level = 1; // 대입
	printf("Level: %d\n", Level);

	Level = Level + 1;
	printf("Level: %d\n\n", Level);

	printf("%d\n\n", sizeof(int)); // int 타입의 크기 (Byte) / 음수도 써야해서 절반은 양수, 절반은 음수에 할당.

	// 상수 -> 이름 없는 숫자
	const int LevelMax = 99; // 변수를 상수화 (Readonly)

	/* -------------------------------- */

	//int Level = 1; // 변수는 Redefine 불가
	printf("Level: %d\n", Level);
	float Critical = 25.13;
	printf("Critical: %f\n", Critical);

}