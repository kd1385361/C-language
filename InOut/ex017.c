#include <stdio.h>
main()
{
	float num1, num2, num3, sum;
	printf("１つ目の実数:");
	scanf("%f", &num1);
	printf("２つ目の実数:");
	scanf("%f", &num2);
	printf("３つ目の実数:");
	scanf("%f", &num3);
	sum = num1 + num2 + num3;
	printf("合計= %.2f 平均= %.2f\n", sum, sum / 3.0);
}