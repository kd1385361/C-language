#include <stdio.h>
main()
{
	int n, dd;
	printf("月を入力(小数点以下切り捨て):");
	scanf("%d", &n);
	if (n < 1 || n >= 13) {
		printf("エラー:正しい数値を入力してください");
	}
	else {
		if (n == 2) {
			dd = 28;
		}
		if (n == 4 || n == 6 || n == 9 || n == 11) {
			dd = 30;
		}
		else {
			dd = 31;
		}
		printf("最終日は%d日です", dd);
	}
}