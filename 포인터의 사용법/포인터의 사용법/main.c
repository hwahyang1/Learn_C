#include <stdio.h>
#include <stdlib.h>

int Random(int* arr, int length) { // �ּҷ� �ҷ����� �޸� ������ ����
	//rand() % length; // ������ 0~length-1 �� ������ (INDEX���� �ٷ� �־ �Ǿ ��)
	return arr[rand() % length];
}

void main() {
	int Lotto[45];
	for (int i = 0; i < 45; i++) {
		Lotto[i] = i + 1;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d\n", Random(Lotto, 45));
	}
}