#include <stdio.h>
struct syohindat {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohindat syohin[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	int i;
	for (i = 0; i < 3; i++) {
		printf("商品名：%s\t単価：%4d\t個数：%4d\n", syohin[i].name, syohin[i].tanka, syohin[i].kosuu);
	}
}