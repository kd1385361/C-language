#include <stdio.h>
main()
{
	int i, n, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���l�́H");
	scanf("%d", &n);
	for (i = 0; i < 10; i++) {
		if (n == d[i]) {
			break;
		}
	}
	if (n == d[i]) {
		printf("%d�Ԗڂɂ���܂���\n", i);
	}
	else {
		printf("������܂���ł���\n");
	}
}