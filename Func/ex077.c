#include <stdio.h>
void compare(int, int, int, int*, int*);
main()
{
	int a, b, c, max, min;
	printf("�������R���́F");
	scanf("%d%d%d", &a, &b, &c);
	compare(a, b, c, &max, &min);
	printf("�ő�l = %d  �ŏ��l = %d\n", max, min);
}

void compare(int a, int b, int c, int *d, int *e) {
	*d = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);
	*e = (a <= b) ? (a <= c ? a : c) : (b <= c ? b : c);
}