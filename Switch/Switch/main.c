#include <stdio.h>;

void main() {
	int Job = 1;
	if (Job == 1) {
		printf("���� ������ �����Դϴ�.\n");
	}

	int SecondJob = 3;
	switch (SecondJob)
	{
	case 1: /* ���ǿ��� ������ ������ !!!!!!!!!!!!! */
		break;
	case 2:
		printf("���� �ٹٸ������� ������ �߽��ϴ�.\n");
		break;
	case 3:
		printf("���� ������ ������ �߽��ϴ�.\n");
		break;
	default: // ��� ���� ���ش�
		printf("���� ����糪 �ٹٸ����� �ƴմϴ�.\n");
		break;
	}

	int Buy = 1;
	switch (SecondJob)
	{
	case 1:
		printf("���� ����\n");
		break;
	case 2:
		printf("��� ���� ����\n");
		break;
	}
}