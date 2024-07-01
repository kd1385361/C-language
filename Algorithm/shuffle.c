#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
main()
{
	int i, data[20], target, work;
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}
	Sleep(1000);
	srand(time(0));
	rand();
	for (i = 0; i < 20; i++) {
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}
	for (i = 0; i < 20; i++) {
		printf("%2d  ", data[i]);
		if ((i + 1) % 5 == 0) {
			printf("\n");
		}
	}
}