#include <stdio.h>
void result(int, int, int*, float*);
main()
{
	int a, b, sum;
	float avg;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);
	result(a, b, &sum, &avg);
	printf("合計は%d、平均は%.2f\n", sum, avg);
}

void result(int a, int b, int* c, float* d) {
	*c = a + b;
	*d = *c / 2.0;
}