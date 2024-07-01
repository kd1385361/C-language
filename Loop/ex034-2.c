#include <stdio.h>
main()
{
	int count, i;
	printf("”‚ÍH");
	scanf("%d", &count);
	do {
		i = 5;
		do {
			printf("*");
			i--;
		} while (i > 0);
		printf("\n");
		count--;
	} while (count > 0);
}