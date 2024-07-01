#include <stdio.h>
main()
{
	int ia, ib, sum;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (ia = 0; ia < 2; ia++) {
		for (ib = 0, sum = 0; ib < 3; ib++) {
			printf("\na[%d][%d] = %d", ia, ib, a[ia][ib]);
			sum += a[ia][ib];
		}
		printf("\n%ds–Ú‚Ì‡Œv = %d\n", ia, sum);
	}
}