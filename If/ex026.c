#include <stdio.h>
main()
{
	int n, dd;
	printf("�������(�����_�ȉ��؂�̂�):");
	scanf("%d", &n);
	if (n < 1 || n >= 13) {
		printf("�G���[:���������l����͂��Ă�������");
	}
	else {
		if (n == 2) {
			dd = 28;
		}
		if (n == 4 || n == 6 || n == 9 || n == 11) {
			dd = 30;
		}
		else {
			dd = 31;
		}
		printf("�ŏI����%d���ł�", dd);
	}
}