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
	// Equip에서 사용을 안하고 싶으면 End 아래쪽으로 보내버리면 됨!
#if Equip_End > Equip_Weapon
	WEAPON weapon;
#endif
#if Equip_End > Equip_Armor
	ARMOR armor;
#endif
} PLAYER;

void main() {

}