#include <stdio.h>;

int Scan() {
	int select;
	scanf_s("%d", &select, sizeof(4));
	if (select < 2 || select > 99) {
		return 0;
	}
	return select;
}

void ThreeFive(int n) {
	if (n % 3 == 0 && n % 5 == 0) {
		printf("%d�� 3�� 5�� ������� �½��ϴ�.\n", n);
	}
	else {
		printf("%d�� 3�� 5�� ������� �ƴմϴ�.\n", n);
	}
}

void main() {
	int Level = 10;
	printf("�� ������ %d�̴�.\n", Level);

	const int JobLevel = 50;
	printf("���� ���� ������ %d�̴�.\n", JobLevel);

	if (Level >= JobLevel) {
		printf("������ �����մϴ�!\n");
	}
	else {
		printf("������ �Ұ����մϴ�.\n");
	}

	/* ======================================================== */

	const int JobWarrior = 1;
	const int JobMage = 2;
	const int JobStudent = 3;

	int MyJob = 0;
	scanf_s("%d", &MyJob, sizeof(2)); // &: �ش�Ǵ� ������ �������ְڴ�

	if (JobWarrior == MyJob) printf("���� �������Դϴ�.\n");
	if (JobMage == MyJob) printf("���� �������Դϴ�.\n");
	if (JobStudent == MyJob) printf("���� �л��Դϴ�.\n");

	/* ======================================================== */
	
	int Power = 1;
	Power = (Level % 2 == 0) ? Power + 1 : Power + 2; // ���׿�����.. �̸��� ó�� ����

	printf("�� �Ŀ�: %d\n", Power);

	/* ======================================================== */

	int Number = Scan();
	if (Number) {
		printf("�߸��� �����Դϴ�.");
	}
	else {
		ThreeFive(Number);
	}
}