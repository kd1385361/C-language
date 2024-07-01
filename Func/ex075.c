#include <stdio.h>
void error(void);
void shisoku(int, int, int*, int*, int*, int*, int*);
main()
{
	int a, b, c, d, e, f, g;
	printf("数値1？");
	scanf("%d", &a);
	printf("数値2？");
	scanf("%d", &b);
	if (b == 0) {
		error();
	} else {
		shisoku(a, b, &c, &d, &e, &f, &g);
		puts("数値1と数値2の四則演算");
		printf("和 = %d 差 = %d 積 = %d 商 = %d 余 = %d\n", c, d, e, f, g);
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
	puts("エラー：0で割り算は出来ません");
}