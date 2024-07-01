//スタック構造を使用した出口探索プログラム
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//スタート位置の座標
const int SX = 1;
const int SY = 1;
//ゴール位置の座標
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
	printf("初期の状態を表示\n");
	drawmaze(-1, -1);
	printf("「Enter」キー：処理続行\n");
	getch();
	susumu(SX, SY);
	system("cls");
	printf("最後の状態を表示\n");
	drawmaze(-1, -1);
}
void drawmaze(int x, int y) {
	int i, j;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 10; j++) {
			if (i == y && j == x) {
				printf("Ｐ");
			}
			else if (i == SY && j == SX) {
				printf("Ｓ");
			}
			else if (i == GY && j == GX) {
				printf("Ｇ");
			}
			else if (map[i][j] == 1) {
				printf("■");
			}
			else if (map[i][j] == 2) {
				printf("・");
			}
			else {
				printf("　");
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
		printf("探索途中の状況を表示　「Ｐ」が探索中の位置\n");
		drawmaze(x, y);
		printf("「Enter」キー：処理続行\n");
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
		//上下左右どこにも行けなかった場合スタックから座標を取り出す（ひとつ前にいた座標に戻る）
		pop(&y);
		pop(&x);
		pop(&y);
		//出口に到達できなかったとき
		if (pop(&x) == -1) {
			return -1;
		}
	}
}