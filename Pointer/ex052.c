#include <stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* pa, * pb;
	printf("%実行前:a = %d  b = %d\n", a, b);
	pa = &a;
	pb = &b;
	w = *pa;
	*pa = *pb;
	*pb = w;
	printf("実行後:a = %d  b = %d\n", a, b);
}