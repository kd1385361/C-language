#include <stdio.h>
main()
{
	int star, i, cnt;
	star = 0;
	printf("”‚ÍH");
	scanf("%d", &i);
	do {
		star++;
		cnt = star;
		do {
			printf("*");
			cnt--;
		} while (cnt > 0);
		printf("\n");
	} while (i > star);
}