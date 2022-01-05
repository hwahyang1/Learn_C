#include <stdio.h>

// typedef A B: A라는 자료형을 B라는 이름으로 추가. #define A B와 같은 성격.
typedef int A;
// 이런 것도 가능
typedef struct Player {
	int Level;
	char Name[20];
	int Gold;
} PLAYER, *POINTERPLAYER;

void main() {
	// 두개가 같음
	int aa;
	A ab;

	PLAYER Player;
	POINTERPLAYER PPlayer = &Player; // 이렇게도 가능
}