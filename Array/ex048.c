#include <stdio.h>
main()
{
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	int sum, ia, ib, ic;
	for (ia = 0, sum = 0; ia < 2; ia++) {
		printf("アパート%d ", ia + 1);
		for (ib = 0; ib < 2; ib++) {
			printf("(%d階):", ib + 1);
			for (ic = 0; ic < 3; ic++) {
				printf("%d ", a[ia][ib][ic]);
				sum += a[ia][ib][ic];
			}
		}
		printf("\n");
	}
	printf("全体で %d 人住んでいます\n", sum);
}