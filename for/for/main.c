#include <stdio.h>;

void main() {
	// for (;;) {} // 무한반복 (크게 쓸 일은 없)

	int Hp = 350;
	int HpMax = 500;
	int BarMax = 10;
	int BarNow = (Hp * BarMax) / HpMax;

	while (1) { // == while (true)
		printf("HP: %d/%d [", Hp, HpMax);
		for (int i = 0; i < BarNow; i++) {
			printf("#");
		}
		for (int i = 0; i < BarMax - BarNow; i++) {
			printf(" ");
		}
		printf("]\n");
		printf("체력 변화량을 설정하세요: ");
		int Change;
		scanf_s("%d", &Change);
		if (Change == 0) break;

		Hp = Hp + Change;
		BarNow = (Hp * BarMax) / HpMax;
	}
}