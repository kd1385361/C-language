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
	printf("�z��a\t���v = %d\t���� = %.3f\n", (int)sum, sum / ia);
	for (sum = 0, n = ib; n > 0; n--) {
		sum += *pb;
		pb++;
	}
	printf("�z��b\t���v = %.3f\t���� = %.3f\n", sum, sum / ib);
}