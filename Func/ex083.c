#include <stdio.h>
int strcnt(char*);
main()
{
	char buf[256];
	int mojisu;
	printf("•¶š—ñH");
	gets(buf);
	mojisu = strcnt(buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d•¶š‚Å‚·B\n", mojisu);
}
int strcnt(char* a) {
	int cnt;
	for (cnt = 0; *a != '\0'; cnt++, a++);
	return cnt;
}