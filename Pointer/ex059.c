#include <stdio.h>
main()
{
	char dat[15] = "C Language";
	char dat2[15];
	char* pdat, * pdat2;
	pdat = dat;
	pdat2 = dat2;
	printf("dat[] = %s\n", dat);
	while (*pdat2++ = *pdat++);
	pdat2 = dat2;
	printf("dat2[] = %s\n", pdat2);
	while (*pdat2) {
		putchar(*pdat2++);
	}
	putchar('\n');
}