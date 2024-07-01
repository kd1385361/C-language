#include <stdio.h>
main()
{
	int i;
	char s[101];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", s);
	for (i = 0; s[i]; i++) {
		s[i]--;
	}
	printf("•¡‡‰»•¶š—ñ‚ÍA%s\n", s);
}