#include <stdio.h>
#include <stdlib.h>
main(int a, char* b[])
{
	int n, m;
	if (a == !3) {
		printf("エラー：２つの整数を入力してください\n");
	}
	else {
		n = atoi(*(b + 1));
		m = atoi(*(b + 2));
		printf("%d + %d = %d\n", n, m, n + m);
	}
}