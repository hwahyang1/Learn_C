#include <stdio.h>

void Print(int n) {
	if (n == 0) return; // 0이 되면 return 함수로 인해 0부터 1000까지 거슬러 올라가게 됨.
	Print(n - 1);
	printf("%d\n", n);
}

void main() {
	Print(1000);
}