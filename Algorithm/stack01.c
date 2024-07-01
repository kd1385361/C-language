#include <stdio.h>
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;
void display(void);
int push(int);
int pop(int*);
main()
{
	int key, dat, res;
	do {
		printf("◆プッシュはi、ポップはoを入力＞");
		key = getche();
		putchar('\n');
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &dat);
			res = push(dat);
			if (res == -1) {
				printf("\n※※※スタックが一杯です※※※\n");
			}
			else {
				display();
			}
		}
		if (key == 'o') {
			res = pop(&dat);
			if (res == -1) {
				printf("\n※※※スタックが空です※※※\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", dat);
				display();
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;
	printf("===現在のスタックの内容===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("←spが示している所(現在spは%d)", sp);
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
	stack[sp] = 0;
	return 0;
}