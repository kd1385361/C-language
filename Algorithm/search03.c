#include <stdio.h>
main()
{
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 }, high = 10, low = 0, mid, s;
	printf("’Tõ‚·‚é’l‚ð“ü—Í:");
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
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	else {
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚è‚Ü‚µ‚½\n", mid);
	}
}