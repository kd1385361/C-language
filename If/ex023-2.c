#include <stdio.h>
main()
{
	int seireki;
	printf("��������:");
	scanf("%d", &seireki);
	if (seireki <= 0) {
		printf("�G���[:�������������͂��Ă�������\n");
	} else {

		if (seireki % 4 == 0 && seireki % 100 != 0 || seireki % 400 == 0) {
			printf("���邤�N�ł�\n");
		}
		else {
			printf("���邤�N�ł͂���܂���\n");
		}
	}
}