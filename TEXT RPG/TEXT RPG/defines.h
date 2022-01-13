#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagUnit {
	char NAME[20];
	int HP;
	int HPMAX;
	int DP;
	int AP;
}UNIT, *PUNIT;

typedef struct tagPlayer {
	UNIT Unit;
	int Level;
	int Exp;
}PLAYER, *PPLAYER;

int Select();

void SetUnit(PUNIT unit, char* name, int hp, int dp, int ap);
void SetPlayer(PPLAYER player, char* name, int hp, int dp, int ap);
void PrintPlayer(PPLAYER player);
void PrintUnit(PUNIT unit);

void DamagedUnit(PUNIT Attack, PUNIT Damaged);

void GetExp(PPLAYER player);