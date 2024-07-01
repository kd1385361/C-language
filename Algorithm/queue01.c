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
		printf("���G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		system("cls");
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &dat);
			res = enqueue(dat);
			if (res == -1) {
				printf("�������L���[����t�ł�������\n");
			}
			else {
				display();
			}
		}
		if (key == 'o') {
			res = dequeue(&dat);
			if (res == -1) {
				printf("�������L���[����ł�������\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", dat);
				display();
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;
	printf("===���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%d]��%5d", i, queue[i]);
		if (i == head) {
			printf("��head�������Ă��鏊(����head��%d)", head);
		}
		if (i == tail) {
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
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