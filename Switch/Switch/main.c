#include <stdio.h>;

void main() {
	int Job = 1;
	if (Job == 1) {
		printf("나의 직업은 전사입니다.\n");
	}

	int SecondJob = 3;
	switch (SecondJob)
	{
	case 1: /* 조건에는 정수만 들어가야함 !!!!!!!!!!!!! */
		break;
	case 2:
		printf("나는 바바리안으로 전직을 했습니다.\n");
		break;
	case 3:
		printf("나는 성기사로 전직을 했습니다.\n");
		break;
	default: // 모든 조건 미해당
		printf("나는 성기사나 바바리안이 아닙니다.\n");
		break;
	}

	int Buy = 1;
	switch (SecondJob)
	{
	case 1:
		printf("포션 구매\n");
		break;
	case 2:
		printf("상급 포션 구매\n");
		break;
	}
}