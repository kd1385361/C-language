#include <stdio.h>
main()
{
	int i, n, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値は？");
	scanf("%d", &n);
	for (i = 0; i < 10; i++) {
		if (n == d[i]) {
			break;
		}
	}
	if (n == d[i]) {
		printf("%d番目にありました\n", i);
	}
	else {
		printf("見つかりませんでした\n");
	}
}