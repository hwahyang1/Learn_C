#include <stdio.h>;

void Function() {
	printf("ABCD %d EFGH", 3);
}

void main() { // 실행 시 기본호출, 얘 없으면 실행이 안됨(에러남)
	printf("Hello World!");
	Function();
}