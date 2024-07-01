#include <stdio.h>
struct syohindat {
	char name[20];
	int tanka;
};
void display1(int);
void display2(struct syohindat);
main()
{
	int a = 10;
	struct syohindat syohin = { "ÉPÉVÉSÉÄ",50 };
	display1(a);
	display2(syohin);
}
void display1(int a) {
	printf("a = %d\n", a);
}
void display2(struct syohindat syohin) {
	printf("syohin.name = %s\tsyohin.tanka = %d\n", syohin.name, syohin.tanka);	
}