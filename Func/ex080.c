#include <stdio.h>
#define end 5
int kei4(int*);
main()
{
	int a[] = { 10,20,30,40,50 }, sum;
	sum = kei4(a);
	printf("gokei = %d\n", sum);
}
int kei4(int* a) {
	int sum, i;
	for (sum = 0, i = 0; i < end; i++) {
		sum += *a++;
	}
	return sum;
}