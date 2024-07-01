#include <stdio.h>
#include <string.h>
void reverse(int, char*);
main()
{
	char a[51], * pa;
	int n;
	printf("•¶š—ñH");
	scanf("%s", a);
	printf("str1:%s\n", a);
	n = strlen(a);
	pa = a;
	reverse(n, pa);
	printf("str2:%s\n", a);
}
void reverse(int n, char* a) {
	int i, u;
	char o;
	i = n / 2;
	n--;
	for (u = 0; u < i; u++, n--) {
		o = *(a + u);
		*(a + u) = *(a + n);
		*(a + n) = o;
	}
}