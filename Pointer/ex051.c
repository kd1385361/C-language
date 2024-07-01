#include <stdio.h>
main()
{
	int a = 50, b = 10, c;
	int* pa, * pb;
	pa = &a;
	pb = &b;
	c = *pa + *pb;
	printf("%d + %d = %d\n", a, b, c);
}