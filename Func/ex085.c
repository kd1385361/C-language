#include <stdio.h>
#include <string.h>
void link(char*, char*);
main()
{
	char a[51], b[51];
	printf("�z��a�F");
	gets(a);
	printf("�z��b�F");
	gets(b);
	link(a, b);
	printf("�z��a�F%s\n", a);
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