#include <stdio.h>

void main() {
	int a = 01234567;
	int* ptr = &a; // (*ptr) == a
	int** ptr2 = &ptr; // (*ptr2) == ptr || *(*ptr2) == *ptr == a
}