#include <stdio.h>
struct syohindat {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohindat syohin[3] = { {"�G���s�c",30,5},{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	int i;
	for (i = 0; i < 3; i++) {
		printf("���i���F%s\t�P���F%4d\t���F%4d\n", syohin[i].name, syohin[i].tanka, syohin[i].kosuu);
	}
}