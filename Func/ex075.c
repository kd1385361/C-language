#include <stdio.h>
void error(void);
void shisoku(int, int, int*, int*, int*, int*, int*);
main()
{
	int a, b, c, d, e, f, g;
	printf("���l1�H");
	scanf("%d", &a);
	printf("���l2�H");
	scanf("%d", &b);
	if (b == 0) {
		error();
	} else {
		shisoku(a, b, &c, &d, &e, &f, &g);
		puts("���l1�Ɛ��l2�̎l�����Z");
		printf("�a = %d �� = %d �� = %d �� = %d �] = %d\n", c, d, e, f, g);
	}
}

void shisoku(int a, int b, int* wa, int* sa, int* seki, int* sho, int* yo) {
	*wa = a + b;
	*sa = a - b;
	*seki = a * b;
	*sho = a / b;
	*yo = a % b;
}

void error(void) {
	puts("�G���[�F0�Ŋ���Z�͏o���܂���");
}