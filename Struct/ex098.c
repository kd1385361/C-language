#include <stdio.h>
#include <string.h>
#define DATEND -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendat[] = { {1,"�k�C��",NULL},{2,"�X��",NULL}, {3,"��茧",NULL}, {4,"�{�錧",NULL}, {5,"�H�c��",NULL}, {6,"�R�`��",NULL}, {7,"������",NULL}, {DATEND,"",NULL} };
	struct ken* p, * wp;
	p = wp = kendat;
	do {
		p++;
	wp->next = p;
	wp = p;
	}while (p->code != DATEND);
	p++;
	p->code = 28;
	strcpy(p->name, "���Ɍ�");
	for (wp = kendat; wp->code != 1; wp++);
	p->next = wp->next;
	wp->next = p;
	for (p = kendat; p->code != DATEND; p = p->next) {
		printf("code = %d  name = %s\n", p->code, p->name);
	}
}