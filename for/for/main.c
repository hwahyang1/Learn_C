#include <stdio.h>;

void main() {
	// for (;;) {} // ���ѹݺ� (ũ�� �� ���� ��)

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
		printf("ü�� ��ȭ���� �����ϼ���: ");
		int Change;
		scanf_s("%d", &Change);
		if (Change == 0) break;

		Hp = Hp + Change;
		BarNow = (Hp * BarMax) / HpMax;
	}
}