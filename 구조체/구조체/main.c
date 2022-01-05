#include <stdio.h>

struct PlayerCharacter { // 구조체 정의
	char Name[20];
	int Level;
	int Hp;
	int HpMax;
	int Mp;
	int MpMax;
	int DamageMin;
	int DamageMax;
	int Armor;
};

void A(struct PlayerCharacter* Player) {
	(*Player).Level = 3;
	(*Player).Armor = 4;

	// 얘도 가능
	Player->Level = 3;
	Player->Armor = 4;

	printf("%d\n", Player->Level); // 출력도 똑같이.
}

void main() {
	struct PlayerCharacter Player; // 이런 구조의 Player 변수를 만들겠다!
	Player.Level = 1;
	Player.Armor = 2;
	A(&Player); // 이렇게 하나로 넘길 수 있음!
}