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
		printf("��������̂��������I\n");
	}
	else if (k < 95) {
		printf("�ʏ�U���I\n");
	}
	else {
		printf("�~�X�I\n");
	}
}