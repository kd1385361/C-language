#include <stdio.h>
int kei1(int*);
int kei2(int[]);
main()
{
	int a[] = { 10,20,30,40,-999 }, sum;
	sum = kei1(a);
	printf("gokei = %d\n", sum);
	sum = kei2(a);
	printf("gokei = %d\n", sum);
}
int kei1(int* a) {
	int sum = 0;
	while (*a != -999) {
		sum += *a++;
	}
	return sum;
}
int kei2(int a[]) {
	int sum = 0, i = 0;
	while (a[i] != -999) {
		sum += a[i++];
	}
	return sum;
}