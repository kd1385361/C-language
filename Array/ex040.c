#include <stdio.h>
main()
{
	int i, a[5] = { 10,20,30,40,50 };
	//a[0] = 10;
	//a[1] = 20;
	//a[2] = 30;
	//a[3] = 40;
	//a[4] = 50;
	for (i = 0; i < 5; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}