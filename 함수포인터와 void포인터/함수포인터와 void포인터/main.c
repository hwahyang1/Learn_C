#include <stdio.h>

void A() {

}

void main() {
	// �Լ������� init
	// void (*������)(���ڰ�)
	void (*B)();
	B = A;
}