#include <stdio.h>
main()
{
	int i;
	char s[101];
	printf("���������͂��ĉ�������");
	scanf("%s", s);
	for (i = 0; s[i]; i++) {
		s[i]++;
	}
	printf("�Í���������́A%s\n", s);
}