#include <stdio.h>
void result(int, int, int*, float*);
main()
{
	int a, b, sum;
	float avg;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);
	result(a, b, &sum, &avg);
	printf("���v��%d�A���ς�%.2f\n", sum, avg);
}

void result(int a, int b, int* c, float* d) {
	*c = a + b;
	*d = *c / 2.0;
}