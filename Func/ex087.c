#include <stdio.h>
#include <stdlib.h>
main(int a, char* b[])
{
	int n, m;
	if (a == !3) {
		printf("�G���[�F�Q�̐�������͂��Ă�������\n");
	}
	else {
		n = atoi(*(b + 1));
		m = atoi(*(b + 2));
		printf("%d + %d = %d\n", n, m, n + m);
	}
}