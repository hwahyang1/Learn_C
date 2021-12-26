#include <stdio.h>;

int Scan() {
	int Number;
	scanf_s("%d", &Number);
	return Number;
}

void main() {
	int Level = 1;
	int Exp = 0;
	int Menu = 0;

	do {
		printf("레벨: [%d] 경험치: [%d/%d]\n", Level, Exp, Level * 100);
		printf("1. 경험치 획득 2. 종료\n");
		printf("선택하세요: ");
		Menu = Scan();

		if (Menu == 1) {
			printf("획득할 경험치를 입력하세요: ");
			Exp = Exp + Scan();
			while (Exp >= Level * 100) {
				Exp = Exp - Level * 100;
				Level += 1;
			}
		}
	} while (Menu != 2);
}