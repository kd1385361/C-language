#include <stdio.h>
main()
{
	char calc;
	int a, b, c;
	printf("���������:");
	scanf("%c", &calc);
	printf("���������:");
	scanf("%d%d%d", &a, &b, &c);
	switch (calc) {
	case 'd':
	case 'D':
		if (a >= b && a >= c) {
			printf("�ő�l��%d�ł�\n", a);
		}
		else if (b >= c) {
			printf("�ő�l��%d�ł�\n", b);
		}
		else {
			printf("�ő�l��%d�ł�\n", c);
		}
		break;
	case 's':
	case 'S':
		if (a <= b && a <= c) {
			printf("�ŏ��l��%d�ł�\n", a);
		}
		else if (b <= c) {
			printf("�ŏ��l��%d�ł�\n", b);
		}
		else {
			printf("�ŏ��l��%d�ł�\n", c);
		}
		break;
	case 'g':
	case 'G':
		printf("���v��%d�ł�\n", a + b + c);
		break;
	case 'h':
	case 'H':
		printf("���ς�%.2f�ł�\n", (a + b + c) / 3.0);
		break;
	default:
		printf("�G���[\n");
	}
}