#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int player, computer, result;
	srand(time(0));
	rand();
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)＞");
	scanf("%d", &player);
	printf("\n");
	computer = rand() % 3;
	switch (player) {
	case 1:
		printf("プレイヤーは、グーです。");
		break;
	case 2:
		printf("プレイヤーは、チョキです。");
		break;
	case 3:
		printf("プレイヤーは、パーです。");
	}
	printf("\n");
	switch (computer) {
	case 0:
		printf("コンピュータは、グーです。");
		break;
	case 1:
		printf("コンピュータは、チョキです。");
		break;
	case 2:
		printf("コンピュータは、パーです。");
	}
	printf("\n\n");
	result = player - computer;
	if (result == 1) {
		printf("あいこです。\n");
	}
	else if (result == 0 || result == 3) {
		printf("プレイヤーの勝ちです。\n");
	}
	else {
		printf("コンピュータの勝ちです。\n");
	}
}