#include <stdio.h>
main()
{
	int num, sum, i;
	num = 0;
	sum = 0;
	for (i = -1; num != -999; i++) {
		sum += num;
		printf("���́H");
		scanf("%d", &num);
	}
	printf("���v = %d		���� = %.2f\n", sum, sum / (float)i);
}