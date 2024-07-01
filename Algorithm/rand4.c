#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int un, i = 0;
	srand(time(0));
	rand();
	un = rand() % 5;
	do {
		printf("™");
		i++;
	} while (i <= un);
	printf("\n");
}