#include <stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33,55 }, i, s;
	printf("探索する値を入力:");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; d[i] != s; i++);
	if (i == 10) {
		printf("見つかりませんでした\n");
	}
	else {
		printf("%d番目に見つかりました\n", i);
	}
}