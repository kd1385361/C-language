#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa, * pb, * w;
	printf("%���s�O:*pa = %d  *pb = %d\n", a, b);
	pa = &a;
	pb = &b;
	w = pa;
	pa = pb;
	pb = w;
	printf("���s��:*pa = %d  *pb = %d\n", *pa, *pb);
}