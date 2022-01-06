#include <stdio.h>

enum Equip {
	Equip_Weapon,
	Equip_Armor,
	Equip_End
};

typedef struct TagItem {
	int Price;
} ITEM;

typedef struct TagWeapon {
	ITEM Item;
	int dp;
} WEAPON;

typedef struct TagArmor {
	ITEM Item;
	int Ap;
} ARMOR;

typedef struct TagPlayer {
	// Equip���� ����� ���ϰ� ������ End �Ʒ������� ���������� ��!
#if Equip_End > Equip_Weapon
	WEAPON weapon;
#endif
#if Equip_End > Equip_Armor
	ARMOR armor;
#endif
} PLAYER;

void main() {

}