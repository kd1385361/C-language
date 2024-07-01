#include <stdio.h>
main()
{
	int calc, a, b;
	a = 1;
	b = 1;
	printf("演算子を入力:");
	scanf("%d", &calc);
	if (calc != 1 && calc !=2 && calc !=3 && calc !=4) {
		printf("エラー:この演算子は使用できません\n");
	} else {
		printf("２つの整数を入力:");
		scanf("%d%d", &a, &b);
		if (calc == 4 && a == 0 || calc == 4 && b == 0) {
			printf("エラー:この演算子で0を含む計算はできません\n");
		}
		else {
			if (calc == 1) {
				printf("%d\n", a + b);
			} if (calc == 2) {
				printf("%d\n", a - b);
			} if (calc == 3) {
				printf("%d\n", a * b);
			} if (calc == 4) {
				printf("%d\n", a / b);
			}
		}
	}
}