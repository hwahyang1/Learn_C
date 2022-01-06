#include <stdio.h>

#define KOR 13
#define JAPAN 15
#define LOCAL KOR

// �������� ����ؾ� �� ������ ���� ��� �̷��� ��ó ����!
#if LOCAL == KOR
typedef char Level; // �ѱ��� ������ 255�� �ϰڴ�
#else
typedef int Level; // �ٸ� �������� ������ 25������ �ϰڴ�.
#endif

enum PlayerState {
	Player_Idle,
	Player_Attack,
	Player_Damaged,
	Player_Magic,
	Player_Sleep,
	Player_Buy
};

void LevelUp(Level *level) {
	*level += 1;
}

void main() {
	Level level = 255;
	LevelUp(&level);
	printf("%d\n", level);

	enum PlayerState PlayerState = Player_Sleep; // ������!
}