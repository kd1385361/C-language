#include <stdio.h>
#include <conio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;
void display(void);
int enqueue(int);
int dequeue(int*);
main()
{
	int key, dat, res;
	do {
		printf("◆エンキューはi、デキューはoを入力して＞");
		key = getche();
		system("cls");
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &dat);
			res = enqueue(dat);
			if (res == -1) {
				printf("※※※キューが一杯です※※※\n");
			}
			else {
				display();
			}
		}
		if (key == 'o') {
			res = dequeue(&dat);
			if (res == -1) {
				printf("※※※キューが空です※※※\n");
			}
			else {
				printf("キューからデータ(%d)を取り出しました\n", dat);
				display();
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;
	printf("===現在のキューの内容===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%d]は%5d", i, queue[i]);
		if (i == head) {
			printf("←headが示している所(現在headは%d)", head);
		}
		if (i == tail) {
			printf("←tailが示している所(現在tailは%d)", tail);
		}
		putchar('\n');
	}
}
int enqueue(int d) {
	if (queue[tail + 1] == queue[head] && queue[head] != 0) {
		return -1;
	}
	queue[tail] = d;
	tail++;
	tail %= QUEUESIZE;
	return 0;
}
int dequeue(int* pd) {
	if (head == tail && queue[head] == 0) {
		return -1;
	}
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head %= QUEUESIZE;
	return 0;
}