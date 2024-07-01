#include <stdio.h>
enum BitState {
	Base = 0,			//í èÌ
	Poison = 1 << 0,	//Ç«Ç≠
	Sleep = 1 << 1,		//ÇÀÇﬁÇË
	Paralysis = 1 << 2,	//Ç‹Ç–
	Burn = 1 << 3,		//Ç‚ÇØÇ«
	AtkUp = 1 << 4,		//çUåÇÉAÉbÉv
	AtkDown = 1 << 5	//çUåÇÉ_ÉEÉì
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
	printf("****åªç›ÇÃèÛë‘****\n");
	if (s & Poison)
		printf("ì≈\n");
	if (s & Sleep)
		printf("êáñ∞\n");
	if (s & Paralysis)
		printf("ñÉ·É\n");
	if (s & Burn)
		printf("âŒèù\n");
	if (s & AtkUp)
		printf("çUåÇóÕëùâ¡\n");
	if (s & AtkDown)
		printf("çUåÇóÕí·â∫\n");
	if (s == Base)
		printf("í èÌèÛë‘\n");
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©ÅH\n1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:èIóπ>");
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
		printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©ÅH\n1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:èIóπ>");
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