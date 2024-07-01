#include <stdio.h>
main()
{
	int seireki;
	printf("西暦を入力:");
	scanf("%d", &seireki);
	if (seireki <= 0) {
		printf("エラー:正しい西暦を入力してください\n");
	} else {

		if (seireki % 4 == 0 && seireki % 100 != 0 || seireki % 400 == 0) {
			printf("うるう年です\n");
		}
		else {
			printf("うるう年ではありません\n");
		}
	}
}