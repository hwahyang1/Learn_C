#include <stdio.h>
#include <stdlib.h>

void main() {
	int* a[10];
	a[0] = (int*)malloc(1024); // 동적할당 (4Byte 크기의 변수를 생성, Pointer 리턴
	(*a[0]) = 10; // 동적할당된 공간에 수 넣기
	free(a[0]); // 동적할당 해제
}