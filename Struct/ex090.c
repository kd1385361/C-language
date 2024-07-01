#include <stdio.h>
struct syohindat {
	char name[20];
	int tanka;
};
main()
{
	struct syohindat syohin;
	struct syohindat* p;
	p = &syohin;
	printf("¤•i–¼=");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p-tanka = %d\n", p->tanka);
	printf("syohin.name = %s\n", syohin.name);
	printf("syohin.tanka = %d\n", syohin.tanka);
}