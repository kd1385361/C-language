#include <stdio.h>
main()
{
	char moji = 'A';
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji, moji, moji, moji + 1, moji + 1, moji + 1);
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji + 2, moji + 2, moji + 2, moji + 32, moji + 32, moji + 32);
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji + 33, moji + 33, moji + 33, moji + 34, moji + 34, moji + 34);
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji - 17, moji - 17, moji - 17, moji - 16, moji - 16, moji - 16);
	printf("%c: %d 0x%x    : %d 0x%x \n", moji - 15, moji - 15, moji - 15, moji - 33, moji - 33, moji - 33);
}