#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int a, i;
	srand(time(0));
	rand();
	for (i = 0; i < 100; i++) {
		a = rand() % 300 + 1; 
		printf("%d ", a);
	}
	printf("\n");
}