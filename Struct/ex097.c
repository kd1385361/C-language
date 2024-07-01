#include <stdio.h>
#define DATEND -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendat[] = { {1,"–kŠC“¹",NULL},{2,"ÂXŒ§",NULL}, {3,"ŠâŽèŒ§",NULL}, {4,"‹{éŒ§",NULL}, {5,"H“cŒ§",NULL}, {6,"ŽRŒ`Œ§",NULL}, {7,"•Ÿ“‡Œ§",NULL}, {DATEND,"",NULL} };
	struct ken* p, * wp;
	p = wp = kendat;
	do {
		p++;
	wp->next = p;
	wp = p;
	}while (p->code != DATEND);
	for (p = kendat; p->code != DATEND; p = p->next) {
		printf("code = %d  name = %s\n", p->code, p->name);
	}
}