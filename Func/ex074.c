#include <stdio.h>
void display1(int);
void display2(int*);
main()
{
	int a, b;
	printf("���la�H");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);
	printf("���lb�H");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d\n", b);
}

void display1(int n) {
	printf("���la�́A%d�ł��B\n", n);
	n += 10;
	return;
}

void display2(int* n) {
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;
	return;
}