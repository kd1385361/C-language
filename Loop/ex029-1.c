#include <stdio.h>
main()
{
	int count;
	printf("数を入れて:");
	scanf("%d", &count);
	if (count > 0) {
		while (count > 0)
		{
			printf("*");
			count--;
		}
		printf("\n");
	}
	else {
		printf("エラー:正しい数値を入力してください\n");
	}
}