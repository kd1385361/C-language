#include <stdio.h>
main()
{
	int count, check;
	check = 0;
	printf("数を入れて:");
	scanf("%d", &count);
	if (count > 0) {
		while (count > check)
		{
			printf("*");
			check++;
		}
		printf("\n");
	}
	else {
		printf("エラー:正しい数値を入力してください\n");
	}
}