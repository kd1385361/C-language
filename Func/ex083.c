#include <stdio.h>
int strcnt(char*);
main()
{
	char buf[256];
	int mojisu;
	printf("文字列？");
	gets(buf);
	mojisu = strcnt(buf);
	printf("入力された文字列の文字数は%d文字です。\n", mojisu);
}
int strcnt(char* a) {
	int cnt;
	for (cnt = 0; *a != '\0'; cnt++, a++);
	return cnt;
}