#include <stdio.h>
main()
{
	int calc, a, b;
	a = 1;
	b = 1;
	printf("���Z�q�����:");
	scanf("%d", &calc);
	if (calc != 1 && calc !=2 && calc !=3 && calc !=4) {
		printf("�G���[:���̉��Z�q�͎g�p�ł��܂���\n");
	} else {
		printf("�Q�̐��������:");
		scanf("%d%d", &a, &b);
		if (calc == 4 && a == 0 || calc == 4 && b == 0) {
			printf("�G���[:���̉��Z�q��0���܂ތv�Z�͂ł��܂���\n");
		}
		else {
			if (calc == 1) {
				printf("%d\n", a + b);
			} if (calc == 2) {
				printf("%d\n", a - b);
			} if (calc == 3) {
				printf("%d\n", a * b);
			} if (calc == 4) {
				printf("%d\n", a / b);
			}
		}
	}
}