#include <stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* pa, * pb;
	printf("%é¿çsëO:a = %d  b = %d\n", a, b);
	pa = &a;
	pb = &b;
	w = *pa;
	*pa = *pb;
	*pb = w;
	printf("é¿çså„:a = %d  b = %d\n", a, b);
}