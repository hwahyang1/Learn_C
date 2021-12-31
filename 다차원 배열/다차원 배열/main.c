#include <stdio.h>

void main() {
	int GuGudan[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			GuGudan[i][j] = (i + 1) * (j + 1);
		}
	}

	printf("%d\n", GuGudan[8-1][3-1]); // 8 * 3
}