#include <stdio.h>
main()
{
	int count, check;
	check = 0;
	printf("��������:");
	scanf("%d", &count);
	if (count > 0) {
		while (count > check)
		{
			printf("*");
			check++;
		}
		printf("\n");
	}
	else {
		printf("�G���[:���������l����͂��Ă�������\n");
	}
}