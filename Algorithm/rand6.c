#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int player, computer, result;
	srand(time(0));
	rand();
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)��");
	scanf("%d", &player);
	printf("\n");
	computer = rand() % 3;
	switch (player) {
	case 1:
		printf("�v���C���[�́A�O�[�ł��B");
		break;
	case 2:
		printf("�v���C���[�́A�`���L�ł��B");
		break;
	case 3:
		printf("�v���C���[�́A�p�[�ł��B");
	}
	printf("\n");
	switch (computer) {
	case 0:
		printf("�R���s���[�^�́A�O�[�ł��B");
		break;
	case 1:
		printf("�R���s���[�^�́A�`���L�ł��B");
		break;
	case 2:
		printf("�R���s���[�^�́A�p�[�ł��B");
	}
	printf("\n\n");
	result = player - computer;
	if (result == 1) {
		printf("�������ł��B\n");
	}
	else if (result == 0 || result == 3) {
		printf("�v���C���[�̏����ł��B\n");
	}
	else {
		printf("�R���s���[�^�̏����ł��B\n");
	}
}