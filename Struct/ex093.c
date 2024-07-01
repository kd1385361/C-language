#include <stdio.h>
struct syohindat {
	char name[20];
	int tanka;
	int kosuu;
	int kingaku;
};
main()
{
	struct syohindat syohin[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syohindat* p;
	p = syohin;
	int i;
	for (i = 0; i < 3; i++, p++) {
		p->kingaku = p->tanka * p->kosuu;
		printf("商品名：%s\t単価：%4d\t個数：%4d\t金額：\\%4d\n", p->name, p->tanka, p->kosuu, p->kingaku);
	}
}