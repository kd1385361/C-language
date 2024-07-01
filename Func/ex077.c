#include <stdio.h>
void compare(int, int, int, int*, int*);
main()
{
	int a, b, c, max, min;
	printf("®”‚ð‚R‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);
	compare(a, b, c, &max, &min);
	printf("Å‘å’l = %d  Å¬’l = %d\n", max, min);
}

void compare(int a, int b, int c, int *d, int *e) {
	*d = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);
	*e = (a <= b) ? (a <= c ? a : c) : (b <= c ? b : c);
}