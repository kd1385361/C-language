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
		printf("���v�b�V����i�A�|�b�v��o����́�");
		key = getche();
		putchar('\n');
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &dat);
			res = push(dat);
			if (res == -1) {
				printf("\n�������X�^�b�N����t�ł�������\n");
			}
			else {
				display();
			}
		}
		if (key == 'o') {
			res = pop(&dat);
			if (res == -1) {
				printf("\n�������X�^�b�N����ł�������\n");
			}
			else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", dat);
				display();
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;
	printf("===���݂̃X�^�b�N�̓��e===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("��sp�������Ă��鏊(����sp��%d)", sp);
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