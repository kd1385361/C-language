#include <stdio.h>
int strcnt(char*);
main()
{
	char buf[256];
	int mojisu;
	printf("������H");
	gets(buf);
	mojisu = strcnt(buf);
	printf("���͂��ꂽ������̕�������%d�����ł��B\n", mojisu);
}
int strcnt(char* a) {
	int cnt;
	for (cnt = 0; *a != '\0'; cnt++, a++);
	return cnt;
}