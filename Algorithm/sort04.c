#include <stdio.h>
#define dcnt 8
main()
{
	int d[dcnt] = { 70,60,80,50,40,20,30,10 }, i, j, w, gap;
	gap = dcnt / 2;
	while (gap > 0) {
		for (i = gap; i < dcnt; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				int k;
				for (k = 0; k < dcnt; k++) {
					printf("%d ", d[k]);
				}
				printf("\n");
				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}
			}
		}
		gap = gap / 2;
		printf("-------------------------\n");
	}
	for (i = 0; i < dcnt; i++) {
		printf("%d ", d[i]);
	}
}