#include <stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	printf("������:%s\n", &str[0]);
	for (cnt = 0; str[cnt] != '\0'; cnt++);
	printf("�������%d����\n",cnt);
}