#include <stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33,55 }, i, s;
	printf("’Tõ‚·‚é’l‚ğ“ü—Í:");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; d[i] != s; i++);
	if (i == 10) {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	else {
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚è‚Ü‚µ‚½\n", i);
	}
}