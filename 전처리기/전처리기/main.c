#include <stdio.h>

/*
 * ���� ���� ���Ǵ� ��ó����
 * #include <filename>: �ٸ� ������ �ҽ��ڵ带 �ش� ���Ͽ� ���Խ�Ű�� ��
 * #define A B: ��ũ��, B ��� A �Է��ص� ����ǰ� ��.
 * #pragma region A ~ #pragma endregion: Ư�� ������ ��� IDE �󿡼� ���� �ݱ� ���ϰ� ��, ������ �̸�(A)�� ����.
 * #if (...) ~ #endif: �ش� ������ �����ϸ� ������ �� �߰���. �������� ������ �ȿ� �ִ� ������ ���� ���� ��.
 */

#define PRINT printf
#define ENTER printf("\n")

#define SQUARE(number) Square(number, 2)
int Square(int x, int y) {
	int sum = 1;
	for (int i = 0; i < y; i++) {
		sum = sum * x;
	}
	return sum;
}

void main() {
	PRINT("TEST");
	ENTER;

	printf("%d", SQUARE(4)); // == printf("%d", Square(4, 2))
}