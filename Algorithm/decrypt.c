#include <stdio.h>
main()
{
	int i;
	char s[101];
	printf("���������͂��Ă���������");
	scanf("%s", s);
	for (i = 0; s[i]; i++) {
		s[i]--;
	}
	printf("������������́A%s\n", s);
}