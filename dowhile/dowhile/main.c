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
		printf("����: [%d] ����ġ: [%d/%d]\n", Level, Exp, Level * 100);
		printf("1. ����ġ ȹ�� 2. ����\n");
		printf("�����ϼ���: ");
		Menu = Scan();

		if (Menu == 1) {
			printf("ȹ���� ����ġ�� �Է��ϼ���: ");
			Exp = Exp + Scan();
			while (Exp >= Level * 100) {
				Exp = Exp - Level * 100;
				Level += 1;
			}
		}
	} while (Menu != 2);
}