#include <stdio.h>
main()
{
	int i;
	float a[3], sum;
	for (i = 0; i < 3; i++) {
		printf("実数を入力:");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("合計は %.2f です\n", sum);
	printf("平均は %.2f です\n", sum / 3.0);
}