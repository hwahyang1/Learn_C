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
	printf("레벨: %d [%d/%d]\n", player->Level, player->Exp, player->Level * 100);
	PrintUnit(&player->Unit);
}

void PrintUnit(PUNIT unit) {
	printf("이름: %s\n", unit->NAME);
	printf("체력: %d/%d\n", unit->HP, unit->HPMAX);
	printf("공격력: %d\n", unit->DP);
	printf("방어력: %d\n", unit->AP);
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
	SetPlayer(&player, "홍길동", 100, 5, 1);

	UNIT monster;
	SetUnit(&monster, "고블린", 50, 3, 0);

	while (1) {
		system("cls"); // 콘솔 명령어 사용 가능!
		PrintPlayer(&player);
		printf("=======================\n");
		PrintUnit(&monster);
		printf("=======================\n");

		if (player.Unit.HP < 1) {
			printf("사망하셨습니다.\n");
			break;
		}

		printf("1. 공격\n2. 방어\n3. 종료\n>> ");
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
			SetUnit(&monster, "오크", 100, 10, 3);
		}
	}
}