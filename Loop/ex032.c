#include <stdio.h>
main()
{
	int a, i, num;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &a);
	for (i = 1; i <= 5; i++) {
		num = a * i;
		printf("%d ", num);
	}
	printf("\n");
}