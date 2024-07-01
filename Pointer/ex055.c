#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 }, ia, ib, n;
	int* pa;
	float b[] = { 11.1,22.2,33.3,44.4 }, sum;
	float* pb;
	pa = a;
	pb = b;
	ia = sizeof a / sizeof(int);
	ib = sizeof b / sizeof(float);
	for (sum = 0, n = ia; n > 0; n--) {
		sum += *pa;
		pa++;
	}
	printf("配列a\t合計 = %d\t平均 = %.3f\n", (int)sum, sum / ia);
	for (sum = 0, n = ib; n > 0; n--) {
		sum += *pb;
		pb++;
	}
	printf("配列b\t合計 = %.3f\t平均 = %.3f\n", sum, sum / ib);
}