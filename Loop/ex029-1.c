#include <stdio.h>
main()
{
	int count;
	printf("��������:");
	scanf("%d", &count);
	if (count > 0) {
		while (count > 0)
		{
			printf("*");
			count--;
		}
		printf("\n");
	}
	else {
		printf("�G���[:���������l����͂��Ă�������\n");
	}
}