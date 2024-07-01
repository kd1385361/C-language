#include <stdio.h>
int kei3(int[], int);
main()
{
	int a[] = { 10,20,30,40,50 }, sum;
	sum = kei3(a, 5);
	printf("gokei = %d\n", sum);
}
int kei3(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}