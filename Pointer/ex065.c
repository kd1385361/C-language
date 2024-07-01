#include <stdio.h>
#include <string.h>
main()
{
	int ia, ib;
	char* ptbl[] = { "Programming2","Algorithm","Programming1","C" }, * a;
	for (ia = 0; ia < 4; ia++) {
		for (ib = 0; ib < 4; ib++) {
			if (strcmp(ptbl[ia], ptbl[ib]) < 0) {
				a = ptbl[ia];
				ptbl[ia] = ptbl[ib];
				ptbl[ib] = a;
			}
		}
	}
	for (ia = 0; ia < 4; ia++) {
		puts(ptbl[ia]);
	}
}