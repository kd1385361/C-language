#include <stdio.h>
enum BitState {
	Base = 0,			//通常
	Poison = 1 << 0,	//どく
	Sleep = 1 << 1,		//ねむり
	Paralysis = 1 << 2,	//まひ
	Burn = 1 << 3,		//やけど
	AtkUp = 1 << 4,		//攻撃アップ
	AtkDown = 1 << 5	//攻撃ダウン
};
typedef unsigned int UINT;
void DisplayStatus(UINT);
void ChangeFlag(UINT*);
void ClearFlag(UINT*);
main()
{
	UINT MyState = Base;
	MyState |= (Poison | Sleep);
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison)
		printf("毒\n");
	if (s & Sleep)
		printf("睡眠\n");
	if (s & Paralysis)
		printf("麻痺\n");
	if (s & Burn)
		printf("火傷\n");
	if (s & AtkUp)
		printf("攻撃力増加\n");
	if (s & AtkDown)
		printf("攻撃力低下\n");
	if (s == Base)
		printf("通常状態\n");
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("どの状態にしますか？\n1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
		scanf("%d", &a);
		if (a == 0)
			break;
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1) {
		printf("どの状態を解除しますか？\n1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
		scanf("%d", &a);
		if (a == 0)
			break;
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		}
	}
}