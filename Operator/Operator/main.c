#include <stdio.h>;

void main() {
	// 서식 문자는 여기서부터 유용하게 쓰이기 시작함!! //

	/* 사칙연산 (int/float 반환) */
	4 + 2;
	4 - 2;
	4 * 2;
	4 / 2;
	4 % 2; // 나눈 나머지

	/* 관계 연산자 (Boolean 반환) */
	4 < 2;
	4 > 2;
	// 작거나 같다 !!! 기호 순서 주의
	4 <= 2;
	4 >= 2;
	// 일치, 불일치
	4 == 2;
	4 != 2;

	/* 논리 연산자 (두개 이상의 관게 연산자 연결) */
	10 >= 20 && 1 == 2; // AND
	10 >= 20 || 1 == 2; // OR
}