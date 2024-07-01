#include <stdio.h>
#include <string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile info[5] = { {"nobita",{1964,8,7},"O"},{"shizuka",{1964,5,1},"A"},{"suneo",{1965,2,1},"B"},{"takeshi",{1964,6,15},"B"},{"dora",{2112,9,3},"O"}, };
	struct profile* p;
	p = info;
	p = info;
	for (int i = 0; i < 5; i++, p++) {
		if (p->date.tuki == 2) {
			printf("%s----%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%sŒ^\n", p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}