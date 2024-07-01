#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int k;
	srand(time(0));
	rand();
	k = rand() % 100;
	if (k < 30) {
		printf("かいしんのいちげき！\n");
	}
	else if (k < 95) {
		printf("通常攻撃！\n");
	}
	else {
		printf("ミス！\n");
	}
}