//�X�^�b�N�\�����g�p�����o���T���v���O����
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//�X�^�[�g�ʒu�̍��W
const int SX = 1;
const int SY = 1;
//�S�[���ʒu�̍��W
const int GX = 8;
const int GY = 1;
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};
#define STACKSIZE 58
int stack[STACKSIZE];
int sp = 0;
void drawmaze(int, int);
int push(int);
int pop(int*);
int susumu(int, int);
main()
{
	system("cls");
	printf("�����̏�Ԃ�\��\n");
	drawmaze(-1, -1);
	printf("�uEnter�v�L�[�F�������s\n");
	getch();
	susumu(SX, SY);
	system("cls");
	printf("�Ō�̏�Ԃ�\��\n");
	drawmaze(-1, -1);
}
void drawmaze(int x, int y) {
	int i, j;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 10; j++) {
			if (i == y && j == x) {
				printf("�o");
			}
			else if (i == SY && j == SX) {
				printf("�r");
			}
			else if (i == GY && j == GX) {
				printf("�f");
			}
			else if (map[i][j] == 1) {
				printf("��");
			}
			else if (map[i][j] == 2) {
				printf("�E");
			}
			else {
				printf("�@");
			}
		}
		putchar('\n');
	}
}
int push(int d) {
	if (sp == STACKSIZE) {
		return -1;
	}
	stack[sp] = d;
	sp++;
	return 0;
}
int pop(int* pd) {
	if (sp == 0) {
		return -1;
	}
	sp--;
	*pd = stack[sp];
	return 0;
}
int susumu(int x, int y) {
	int i;
	while (1) {
		system("cls");
		printf("�T���r���̏󋵂�\���@�u�o�v���T�����̈ʒu\n");
		drawmaze(x, y);
		printf("�uEnter�v�L�[�F�������s\n");
		getch();
		map[y][x] = 2;
		if (x == GX && y == GY) {
			return 0;
		}
		push(x);
		push(y);
		if (map[y - 1][x] == 0) {
			y -= 1;
			continue;
		}
		if (map[y + 1][x] == 0) {
			y += 1;
			continue;
		}
		if (map[y][x - 1] == 0) {
			x -= 1;
			continue;
		}
		if (map[y][x + 1] == 0) {
			x += 1;
			continue;
		}
		//�㉺���E�ǂ��ɂ��s���Ȃ������ꍇ�X�^�b�N������W�����o���i�ЂƂO�ɂ������W�ɖ߂�j
		pop(&y);
		pop(&x);
		pop(&y);
		//�o���ɓ��B�ł��Ȃ������Ƃ�
		if (pop(&x) == -1) {
			return -1;
		}
	}
}