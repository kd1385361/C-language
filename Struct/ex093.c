#include <stdio.h>
struct syohindat {
	char name[20];
	int tanka;
	int kosuu;
	int kingaku;
};
main()
{
	struct syohindat syohin[3] = { {"�G���s�c",30,5},{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	struct syohindat* p;
	p = syohin;
	int i;
	for (i = 0; i < 3; i++, p++) {
		p->kingaku = p->tanka * p->kosuu;
		printf("���i���F%s\t�P���F%4d\t���F%4d\t���z�F\\%4d\n", p->name, p->tanka, p->kosuu, p->kingaku);
	}
}