#include <stdio.h>
main()
{
	char dat[10] = "Orange", * pdat, * p = "Apple";
	pdat = dat;
	printf("data[] = ");
	while (*pdat) {
		putchar(*pdat++);
	}
	printf("\n*p = ");
	while (*p) {
		putchar(*p++);
	}
	printf("\n");
}