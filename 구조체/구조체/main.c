#include <stdio.h>

struct PlayerCharacter { // ����ü ����
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

	// �굵 ����
	Player->Level = 3;
	Player->Armor = 4;

	printf("%d\n", Player->Level); // ��µ� �Ȱ���.
}

void main() {
	struct PlayerCharacter Player; // �̷� ������ Player ������ ����ڴ�!
	Player.Level = 1;
	Player.Armor = 2;
	A(&Player); // �̷��� �ϳ��� �ѱ� �� ����!
}