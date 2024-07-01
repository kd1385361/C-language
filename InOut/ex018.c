#include <stdio.h>
main()
{
	int a, b, c, d;
	printf("整数を３個入力:");
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	printf("合計=%d   ", d);
	//printf("平均=%.2f\n", d / 3.0);
	printf("平均=%.2f\n", (float)d / 3); //キャスト(型変換)の例
}