#include <stdio.h>;

int Scan() {
	int select;
	scanf_s("%d", &select, sizeof(4));
	if (select < 2 || select > 99) {
		return 0;
	}
	return select;
}

void ThreeFive(int n) {
	if (n % 3 == 0 && n % 5 == 0) {
		printf("%d는 3과 5의 공배수가 맞습니다.\n", n);
	}
	else {
		printf("%d는 3과 5의 공배수가 아닙니다.\n", n);
	}
}

void main() {
	int Level = 10;
	printf("내 레벨은 %d이다.\n", Level);

	const int JobLevel = 50;
	printf("전직 가능 레벨은 %d이다.\n", JobLevel);

	if (Level >= JobLevel) {
		printf("전직이 가능합니다!\n");
	}
	else {
		printf("전직이 불가능합니다.\n");
	}

	/* ======================================================== */

	const int JobWarrior = 1;
	const int JobMage = 2;
	const int JobStudent = 3;

	int MyJob = 0;
	scanf_s("%d", &MyJob, sizeof(2)); // &: 해당되는 변수에 대입해주겠다

	if (JobWarrior == MyJob) printf("나는 워리어입니다.\n");
	if (JobMage == MyJob) printf("나는 메이지입니다.\n");
	if (JobStudent == MyJob) printf("나는 학생입니다.\n");

	/* ======================================================== */
	
	int Power = 1;
	Power = (Level % 2 == 0) ? Power + 1 : Power + 2; // 삼항연산자.. 이름은 처음 알음

	printf("내 파워: %d\n", Power);

	/* ======================================================== */

	int Number = Scan();
	if (Number) {
		printf("잘못된 숫자입니다.");
	}
	else {
		ThreeFive(Number);
	}
}