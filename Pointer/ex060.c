#include <stdio.h>
main()
{
	char dat[] = "Language", * pdat, s;
	int i = 0, a, flag = 0;
	pdat = dat;
	printf("���������́H");
	scanf("%c", &s);
	printf("�������ʂ́A");
	while(*pdat) {
		i++;
		if (s == *pdat++) {
			flag = 1;
			printf("%d,", i);
		}
	}
	if (flag == 1) {
		printf("\b�����ڂł�\n");
	}
	else {
		printf("�G���[\n");
	}
}