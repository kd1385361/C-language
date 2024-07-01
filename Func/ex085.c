#include <stdio.h>
#include <string.h>
void link(char*, char*);
main()
{
	char a[51], b[51];
	printf("配列a：");
	gets(a);
	printf("配列b：");
	gets(b);
	link(a, b);
	printf("配列a：%s\n", a);
}
void link(char* a, char* b) {
	while (*a != '\0') {
		a++;
	}
	for (; *b != '\0'; a++, b++) {
		*a = *b;
	}
	*a = '\0';
}