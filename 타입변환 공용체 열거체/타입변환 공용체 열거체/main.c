#include <stdio.h>

// typedef A B: A��� �ڷ����� B��� �̸����� �߰�. #define A B�� ���� ����.
typedef int A;
// �̷� �͵� ����
typedef struct Player {
	int Level;
	char Name[20];
	int Gold;
} PLAYER, *POINTERPLAYER;

void main() {
	// �ΰ��� ����
	int aa;
	A ab;

	PLAYER Player;
	POINTERPLAYER PPlayer = &Player; // �̷��Ե� ����
}