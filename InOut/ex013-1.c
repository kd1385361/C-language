#include <stdio.h>
main()
{
	char mo, ji;
	mo = '5';
	ji = '6';
	printf("%c �~ %c = %d", mo, ji, (mo - 48) * (ji - 48));
}