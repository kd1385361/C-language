#include <stdio.h>
main()
{
	int i, sum;
	sum = 0;
	do {
		printf("��������:");
		scanf("%d", &i);
		if (i == -999)break;
		sum += i;
	} while (1);
	printf("���v=%d\n", sum);
}