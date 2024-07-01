#include <stdio.h>
main()
{
	char calc;
	int a, b, c;
	printf("処理を入力:");
	scanf("%c", &calc);
	printf("整数を入力:");
	scanf("%d%d%d", &a, &b, &c);
	switch (calc) {
	case 'd':
	case 'D':
		if (a >= b && a >= c) {
			printf("最大値は%dです\n", a);
		}
		else if (b >= c) {
			printf("最大値は%dです\n", b);
		}
		else {
			printf("最大値は%dです\n", c);
		}
		break;
	case 's':
	case 'S':
		if (a <= b && a <= c) {
			printf("最小値は%dです\n", a);
		}
		else if (b <= c) {
			printf("最小値は%dです\n", b);
		}
		else {
			printf("最小値は%dです\n", c);
		}
		break;
	case 'g':
	case 'G':
		printf("合計は%dです\n", a + b + c);
		break;
	case 'h':
	case 'H':
		printf("平均は%.2fです\n", (a + b + c) / 3.0);
		break;
	default:
		printf("エラー\n");
	}
}