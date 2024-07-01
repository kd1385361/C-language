#include <stdio.h>
main(int argc, char* argv[])
{
	printf("argc=%d\n", argc);
	for (int n = 0; *argv[n]; n++) {
		printf("*argv[%d] = %s\n", n, argv[n]);
	}
}