#include <stdio.h>
main()
{
	int num, sum, i;
	num = 0;
	sum = 0;
	for (i = -1; num != -999; i++) {
		sum += num;
		printf("”‚ÍH");
		scanf("%d", &num);
	}
	printf("‡Œv = %d		•½‹Ï = %.2f\n", sum, sum / (float)i);
}