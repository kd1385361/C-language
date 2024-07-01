#include <stdio.h>
main()
{
	int count;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &count);
	if (count > 0) {
		while (count > 0)
		{
			printf("*");
			count--;
		}
		printf("\n");
	}
	else {
		printf("ƒGƒ‰[:³‚µ‚¢”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}