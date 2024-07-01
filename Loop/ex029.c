#include <stdio.h>
main()
{
	int count, check;
	check = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &count);
	if (count > 0) {
		while (count > check)
		{
			printf("*");
			check++;
		}
		printf("\n");
	}
	else {
		printf("ƒGƒ‰[:³‚µ‚¢”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}