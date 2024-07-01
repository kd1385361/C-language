#include <stdio.h>
main()
{
	int i, n, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("’Tõ’l‚ÍH");
	scanf("%d", &n);
	for (i = 0; i < 10; i++) {
		if (n == d[i]) {
			break;
		}
	}
	if (n == d[i]) {
		printf("%d”Ô–Ú‚É‚ ‚è‚Ü‚µ‚½\n", i);
	}
	else {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
}