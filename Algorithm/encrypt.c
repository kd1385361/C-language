#include <stdio.h>
main()
{
	int i;
	char s[101];
	printf("文字列を入力して下さい＞");
	scanf("%s", s);
	for (i = 0; s[i]; i++) {
		s[i]++;
	}
	printf("暗号化文字列は、%s\n", s);
}