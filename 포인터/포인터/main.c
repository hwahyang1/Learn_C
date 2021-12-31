#include <stdio.h>

void A(int* n) {
	*n = *n * 50; // 이러면 리턴 안해도 되고 변수값 지워질 일도 없음!
}

void main() {
	int a = 10;
	printf("내 이름은 %d\n", a);
	printf("내 주소는 %d\n", &a);

	int *ptr; // 정수형 변수의 주소를 저장할 수 있는 포인터
	ptr = &a; // 주소 대입 가능
	
	printf("내 주소는 %d\n", ptr);
	*ptr = 15; // == 복사된 주소의 변수(여기서는 a), 주소를 공유하기 때문에 얘를 변경하면 a도 바뀜
	printf("내 이름은 %d\n", a);

	A(&a);
	printf("내 이름은 %d\n", a);
}