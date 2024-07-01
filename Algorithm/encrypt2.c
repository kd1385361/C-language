#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[21], k[21];
	int i;
	printf("文字列を入力してください＞");
	scanf("%s", s);
	srand(time(0));
	rand();
	for (i = 0; s[i]; i++) {
		k[i] = rand() % 6;
		s[i] += k[i];
		k[i] += 48;
	}
	k[i] = '\0';
	printf("暗号化文字列は、%s\n暗号化キーは、%s\n", s, k);
}