#include <stdio.h>
main()
{
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 }, high = 10, low = 0, mid, s;
	printf("探索する値を入力:");
	scanf("%d", &s);
	while (high >= low) {
		mid = (high + low) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("見つかりませんでした\n");
	}
	else {
		printf("%d番目に見つかりました\n", mid);
	}
}