#include <stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	printf("•¶Žš—ñ:%s\n", &str[0]);
	for (cnt = 0; str[cnt] != '\0'; cnt++);
	printf("•¶Žš—ñ‚Í%d•¶Žš\n",cnt);
}