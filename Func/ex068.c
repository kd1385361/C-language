#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);		//入力バッファのクリア(2文字以上入力された際、１文字目→改行→２文字目→改行となってしまう)、dumy[]に残りの入力された文字を格納している
		c = getchar();
	}
}