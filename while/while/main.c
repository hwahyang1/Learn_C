#include <stdio.h>;

void main() {
	int Level = 1;
	int Exp = 0;
	int GetExp = 0;

	while (GetExp >= 0) {
		printf("나의 레벨은 %d 입니다.\n", Level);

		printf("획득할 경험치를 적어주세요: ");
		scanf_s("%d", &GetExp);

		Exp = Exp + GetExp;
		printf("현재 경험치 %d 획득하여 현재 %d 경험치를 가지고 있습니다.\n", GetExp, Exp);

		while (Level * 100 <= Exp) { // if로 쓰면 경험치에 관계없이 한번만 오름!
			Exp = Exp - Level * 100;
			Level = Level + 1;
		}
	}
}