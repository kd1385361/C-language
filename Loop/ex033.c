#include <stdio.h>
main()
{
	int num, sum, i;
	num = 0;
	sum = 0;
	for (i = -1; num != -999; i++) {
		sum += num;
		printf("数は？");
		scanf("%d", &num);
	}
	printf("合計 = %d		平均 = %.2f\n", sum, sum / (float)i);
}