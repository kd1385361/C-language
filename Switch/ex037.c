#include <stdio.h>
main()
{

	char calc;
	printf("���Z�q������:");
	scanf("%c", &calc);
	switch (calc) {
	case '+':
		printf("���Z�ł�\n");
		break;
	case '-':
		printf("���Z�ł�\n");
		break;
	case '*':
		printf("��Z�ł�\n");
		break;
	case '/':
		printf("���Z�ł�\n");
		break;
	case '%':
		printf("���܂�ł�\n");
		break;
	default:
		printf("���̑��ł�\n");
	}
}