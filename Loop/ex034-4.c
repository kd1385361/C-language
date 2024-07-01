#include <stdio.h>
main()
{
	int i, count, space, star;
	count = 0;
	printf("”‚ÍH");
	scanf("%d", &i);
	do {
		count++;
		space = i - count;
		do {
			printf(" ");
			space--;
		} while (space > 0);
		if (i <= count) {
			printf("\b");
		}
		star = count;
		do {
			printf("*");
			star--;
		} while (star > 0);
		printf("\n");
	} while (i > count);
}