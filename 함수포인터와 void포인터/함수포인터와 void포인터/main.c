#include <stdio.h>

void A() {

}

void main() {
	// 함수포인터 init
	// void (*변수명)(인자값)
	void (*B)();
	B = A;
}