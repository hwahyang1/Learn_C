#include <stdio.h>;

void main() {
	/* Ÿ�� ����!! Python / JS�� �޸� ���� Ÿ���� ���������� ����!! */

	int Level; // ����/Ÿ�� ����
	Level = 1; // ����
	printf("Level: %d\n", Level);

	Level = Level + 1;
	printf("Level: %d\n\n", Level);

	printf("%d\n\n", sizeof(int)); // int Ÿ���� ũ�� (Byte) / ������ ����ؼ� ������ ���, ������ ������ �Ҵ�.

	// ��� -> �̸� ���� ����
	const int LevelMax = 99; // ������ ���ȭ (Readonly)

	/* -------------------------------- */

	//int Level = 1; // ������ Redefine �Ұ�
	printf("Level: %d\n", Level);
	float Critical = 25.13;
	printf("Critical: %f\n", Critical);

}