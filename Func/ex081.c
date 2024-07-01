#include <stdio.h>
int getmax(int[]);
int getmin(int[]);
main()
{
	int dat[8] = { 6,10,8,2,9,5,1,7 };
	int min, max;
	max = getmax(dat);
	min = getmin(dat);
	printf("Å‘å’l = %d\nÅ¬’l = %d\n", max, min);
}
int getmax(int a[]) {
	int max = 0;
	for (int i = 0; i < 8; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
int getmin(int a[]) {
	int min = 99;
	for (int i = 0; i < 8; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}