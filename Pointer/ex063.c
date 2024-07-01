#include <stdio.h>
main()
{
	int i;
	char* p_ride[3] = { "car","bus","shinkansen" };
	for (i = 0; i < 3; i++) { 
		puts(p_ride[i]);
	}
}