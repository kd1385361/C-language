#include <stdio.h>
main()
{
	int i;
	char s[101];
	printf("文字列を入力してください＞");
	scanf("%s", s);
	for (i = 0; s[i]; i++) {
		s[i]--;
	}
	printf("複合化文字列は、%s\n", s);
}