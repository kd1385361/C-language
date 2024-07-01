#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa, * pb, * w;
	printf("%é¿çsëO:*pa = %d  *pb = %d\n", a, b);
	pa = &a;
	pb = &b;
	w = pa;
	pa = pb;
	pb = w;
	printf("é¿çså„:*pa = %d  *pb = %d\n", *pa, *pb);
}