#include <stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	printf("文字列:%s\n", &str[0]);
	for (cnt = 0; str[cnt] != '\0'; cnt++);
	printf("文字列は%d文字\n",cnt);
}