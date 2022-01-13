#include "defines.h"

int Select() {
	int sel;
	scanf_s("%d", &sel);
	return sel;
}
	

void SetUnit(PUNIT unit, char* name, int hp, int dp, int ap) {
	strcpy_s(unit->NAME, sizeof(unit->NAME), name);
	unit->HP = hp;
	unit->HPMAX = hp;
	unit->DP = dp;
	unit->AP = ap;
}

void SetPlayer(PPLAYER player, char* name, int hp, int dp, int ap) {
	SetUnit(&player->Unit, name, hp, dp, ap);
	player->Level = 1;
	player->Exp = 0;
}

void PrintPlayer(PPLAYER player) {
	printf("����: %d [%d/%d]\n", player->Level, player->Exp, player->Level * 100);
	PrintUnit(&player->Unit);
}

void PrintUnit(PUNIT unit) {
	printf("�̸�: %s\n", unit->NAME);
	printf("ü��: %d/%d\n", unit->HP, unit->HPMAX);
	printf("���ݷ�: %d\n", unit->DP);
	printf("����: %d\n", unit->AP);
}

void DamagedUnit(PUNIT Attack, PUNIT Damaged) {
	int DP = Attack->DP - Damaged->AP;
	if (DP < 1)
		DP = 1;
	Damaged->HP = Damaged->HP - DP;
}

void GetExp(PPLAYER player) {
	player->Exp += 50;
	while (player->Exp >= player->Level * 100) {
		player->Exp -= player->Level * 100;
		player->Level++;
		player->Unit.HPMAX += 10;
		player->Unit.HP = player->Unit.HPMAX;
	}
}

void main() {
	PLAYER player;
	SetPlayer(&player, "ȫ�浿", 100, 5, 1);

	UNIT monster;
	SetUnit(&monster, "���", 50, 3, 0);

	while (1) {
		system("cls"); // �ܼ� ��ɾ� ��� ����!
		PrintPlayer(&player);
		printf("=======================\n");
		PrintUnit(&monster);
		printf("=======================\n");

		if (player.Unit.HP < 1) {
			printf("����ϼ̽��ϴ�.\n");
			break;
		}

		printf("1. ����\n2. ���\n3. ����\n>> ");
		int sel = Select();

		switch (sel) {
		case 1:
			DamagedUnit(&player.Unit, &monster);
			DamagedUnit(&monster, &player.Unit);
			break;
		case 2:
			player.Unit.AP += 9999;
			DamagedUnit(&monster, &player.Unit);
			player.Unit.AP -= 9999;
			break;
		case 3:
			return;
		default:
			break;
		}

		if (monster.HP < 1) {
			GetExp(&player);
			SetUnit(&monster, "��ũ", 100, 10, 3);
		}
	}
}