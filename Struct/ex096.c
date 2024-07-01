#include <stdio.h>
struct syohindat {
	char name[20];
	int tanka;
};
void display3(struct syohindat*);
main()
{
	struct syohindat syohin = { "ƒPƒVƒSƒ€",50 };
	display3(&syohin);
}
void display3(struct syohindat* p) {
	printf("%s\t%d\n", p->name, p->tanka);
	printf("%s\t%d\n", (*p).name, (*p).tanka);
}