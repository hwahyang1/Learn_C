#include <stdio.h>
#include <stdlib.h>

void main() {
	int* a[10];
	a[0] = (int*)malloc(1024); // �����Ҵ� (4Byte ũ���� ������ ����, Pointer ����
	(*a[0]) = 10; // �����Ҵ�� ������ �� �ֱ�
	free(a[0]); // �����Ҵ� ����
}