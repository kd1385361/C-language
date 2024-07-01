#include <stdio.h>
main()
{
	char* p = "peach", dat1[10] = "banana", * pdat1, dat2[10], * pdat2;
	pdat1 = dat1;
	pdat2 = dat2;
	while (*pdat2++ = *pdat1++);
	pdat1 = dat1;
	while (*pdat1++ = *p++);
	printf("data1[] = %s\ndata2[] = %s\n", dat1, dat2);
}