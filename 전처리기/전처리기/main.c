#include <stdio.h>

/*
 * 제일 자주 사용되는 전처리기
 * #include <filename>: 다른 파일의 소스코드를 해당 파일에 포함시키는 것
 * #define A B: 매크로, B 대신 A 입력해도 실행되게 함.
 * #pragma region A ~ #pragma endregion: 특정 구역을 묶어서 IDE 상에서 열고 닫기 편하게 함, 닫으면 이름(A)만 보임.
 * #if (...) ~ #endif: 해당 조건을 충족하면 컴파일 시 추가됨. 충족되지 않으면 안에 있는 구문은 없는 것이 됨.
 */

#define PRINT printf
#define ENTER printf("\n")

#define SQUARE(number) Square(number, 2)
int Square(int x, int y) {
	int sum = 1;
	for (int i = 0; i < y; i++) {
		sum = sum * x;
	}
	return sum;
}

void main() {
	PRINT("TEST");
	ENTER;

	printf("%d", SQUARE(4)); // == printf("%d", Square(4, 2))
}