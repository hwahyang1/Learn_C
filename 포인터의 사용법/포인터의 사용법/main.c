#include <stdio.h>
#include <stdlib.h>

int Random(int* arr, int length) { // 주소로 불러오면 메모리 관리에 편리함
	//rand() % length; // 범위가 0~length-1 로 한정됨 (INDEX에는 바로 넣어도 되어서 편리)
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