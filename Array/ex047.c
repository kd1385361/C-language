#include <stdio.h>
main()
{
	float x[3][2];
	int ia, ib;
	for (ia = 0; ia < 3; ia++) {
		printf("\n");
		for (ib = 0; ib < 2; ib++) {
			printf("x[%d][%d] = ", ia, ib);
			scanf("%f", &x[ia][ib]);
		}
		printf("%ds–Ú‚Ì‡Œv = %.2f\n", ia, (x[ia][0] + x[ia][1]) / 2.0);
	}
}