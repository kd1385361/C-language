#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[21];
	int i, a;
	printf("���������͂��Ă���������");
	scanf("%s", s);
	for (i = 0; s[i]; i++) {
		printf("s[%d]�̕������L�[��",i);
		scanf("%d", &a);
		s[i] -= a;
	}
	printf("�������ςݕ�����́A%s\n", s);
}

//main()
//{
//	char s[21], a[21];
//	int i;
//	printf("���������͂��Ă���������");
//	scanf("%s", s);
//	printf("�������L�[����͂��Ă���������");
//	scanf("%s", a);
//	for (i = 0; s[i]; i++) {
//		s[i] = s[i] - a[i] + 48;
//	}
//	printf("�������ςݕ�����́A%s\n", s);
//}