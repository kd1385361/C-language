#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SkillNum 3
#define EnemyNum 3
typedef struct {
	char name[20];	//�X�L����
	int type;		//�X�L�����
	int usemp;		//�g�pMP��
	int effect;		//�X�L������
}Skill;
typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Spec;
typedef struct {
	Spec sp;			//Spec�^�\���̕ϐ�
	int maxhp;			//�ő�HP
	int mp;				//MP
	Skill skl[SkillNum];//Skill�^�\���̔z��
};
typedef struct {
	Spec sp;		//Spec�^�\���̕ϐ�
	int rate;		//��Ԉُ�U���������[�g%�\�L
}Mob;
enum BitState {
	Base = 0,			//�ʏ�
	Poison = 1 << 0,	//�ǂ�
	Sleep = 1 << 1,		//�˂ނ�
	Paralysis = 1 << 2,	//�܂�
	Burn = 1 << 3,		//�₯��
	AtkUp = 1 << 4,		//�U���A�b�v
	AtkDown = 1 << 5	//�U���_�E��
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
	printf("****���݂̏��****\n");
	if (s & Poison)
		printf("��\n");
	if (s & Sleep)
		printf("����\n");
	if (s & Paralysis)
		printf("���\n");
	if (s & Burn)
		printf("�Ώ�\n");
	if (s & AtkUp)
		printf("�U���͑���\n");
	if (s & AtkDown)
		printf("�U���͒ቺ\n");
	if (s == Base)
		printf("�ʏ���\n");
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂����H\n1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��>");
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
		printf("�ǂ̏�Ԃ��������܂����H\n1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��>");
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