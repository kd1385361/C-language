#include <stdio.h>
main()
{
	int num, sum;
	sum = 0;
	for (num = 1; num <= 10; num++) {
		sum += num;
		printf("1 ‚©‚ç %d ‚Ü‚Å‚Ì˜a = %d\n", num, sum);
	}
}