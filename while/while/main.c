#include <stdio.h>;

void main() {
	int Level = 1;
	int Exp = 0;
	int GetExp = 0;

	while (GetExp >= 0) {
		printf("���� ������ %d �Դϴ�.\n", Level);

		printf("ȹ���� ����ġ�� �����ּ���: ");
		scanf_s("%d", &GetExp);

		Exp = Exp + GetExp;
		printf("���� ����ġ %d ȹ���Ͽ� ���� %d ����ġ�� ������ �ֽ��ϴ�.\n", GetExp, Exp);

		while (Level * 100 <= Exp) { // if�� ���� ����ġ�� ������� �ѹ��� ����!
			Exp = Exp - Level * 100;
			Level = Level + 1;
		}
	}
}