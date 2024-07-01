#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[21];
	int i, a;
	printf("文字列を入力してください＞");
	scanf("%s", s);
	for (i = 0; s[i]; i++) {
		printf("s[%d]の複合化キー＞",i);
		scanf("%d", &a);
		s[i] -= a;
	}
	printf("複合化済み文字列は、%s\n", s);
}

//main()
//{
//	char s[21], a[21];
//	int i;
//	printf("文字列を入力してください＞");
//	scanf("%s", s);
//	printf("複合化キーを入力してください＞");
//	scanf("%s", a);
//	for (i = 0; s[i]; i++) {
//		s[i] = s[i] - a[i] + 48;
//	}
//	printf("複合化済み文字列は、%s\n", s);
//}