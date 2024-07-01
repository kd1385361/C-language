#include <stdio.h>
#include <string.h>
#define len 8
void sortO(int[]);
void sortS(int[]);
main()
{
	int dat[8] = { 6,10,8,2,9,5,1,7 }, i;
	char m[3];
	printf("ソート方向を入力：");
	scanf("%s", m);
	if (strcmp(m, "降順") == 0) {
		sortO(dat);
	}
	else if (strcmp(m, "昇順") == 0) {
		sortS(dat);
	}
	for (i = 0; i < len; i++) {
		printf("%d ", dat[i]);
	}
	putchar('\n');
}
void sortO(int a[]) {
	int i, n, c;
	for (i = 0; i < 7; i++) {
		for (n = i + 1; n < 8; n++) {
			if (a[i] < a[n]) {
				c = a[i];
				a[i] = a[n];
				a[n] = c;
			}
		}
	}
}
void sortS(int a[]) {
	int i, n, c;
	for (i = 0; i < 7; i++) {
		for (n = i + 1; n < 8; n++) {
			if (a[i] > a[n]) {
				c = a[i];
				a[i] = a[n];
				a[n] = c;
			}
		}
	}
}