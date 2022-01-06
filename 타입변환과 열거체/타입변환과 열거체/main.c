#include <stdio.h>

#define KOR 13
#define JAPAN 15
#define LOCAL KOR

// 국가별로 고려해야 할 사항이 있을 경우 이렇게 대처 가능!
#if LOCAL == KOR
typedef char Level; // 한국은 만렙을 255로 하겠다
#else
typedef int Level; // 다른 국가들은 만렙을 25억으로 하겠다.
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

	enum PlayerState PlayerState = Player_Sleep; // 직관적!
}