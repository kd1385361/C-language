#include <stdio.h>
main()
{
	char dat[] = "Language", * pdat, s;
	int i = 0, a, flag = 0;
	pdat = dat;
	printf("検索文字は？");
	scanf("%c", &s);
	printf("検索結果は、");
	while(*pdat) {
		i++;
		if (s == *pdat++) {
			flag = 1;
			printf("%d,", i);
		}
	}
	if (flag == 1) {
		printf("\b文字目です\n");
	}
	else {
		printf("エラー\n");
	}
}