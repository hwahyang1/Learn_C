#include <stdio.h>

void Print(int n) {
	if (n == 0) return; // 0�� �Ǹ� return �Լ��� ���� 0���� 1000���� �Ž��� �ö󰡰� ��.
	Print(n - 1);
	printf("%d\n", n);
}

void main() {
	Print(1000);
}