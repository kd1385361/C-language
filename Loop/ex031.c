#include <stdio.h>
main()
{
	int num, sum;
	sum = 0;
	for (num = 1; num <= 10; num++) {
		sum += num;
		printf("1 から %d までの和 = %d\n", num, sum);
	}
}