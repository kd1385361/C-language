#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int ans, a, cnt = 0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("1～1000の中で当たりの数を予想してください");
		while (1) {
			printf("\n当たりの数は？->");
			scanf("%d", &a);
			if (a > 1000 || a < 1) {
				printf("エラー");
				continue;
			}
			cnt++;
			if (a == ans) {
				break;
			}
			if (a > ans) {
				printf("当たりの数より大きいです");
			}
			else {
				printf("当たりの数より小さいです");
			}
		}
	printf("正解！%d回目で当たりました\n", cnt);
}