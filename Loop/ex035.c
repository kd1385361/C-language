#include <stdio.h>
main()
{
	int i, sum;
	sum = 0;
	do {
		printf("数を入れて:");
		scanf("%d", &i);
		if (i == -999)break;
		sum += i;
	} while (1);
	printf("合計=%d\n", sum);
}