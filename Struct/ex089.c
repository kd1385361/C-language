#include <stdio.h>
#include <string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile info1;
	printf("名前を入力：");
	gets(info1.name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d", &info1.birth[0], &info1.birth[1], &info1.birth[2]);
	printf("血液型を入力：");
	scanf("%s", info1.blood);
	printf("%s----%d年%d月%d日生 血液型ー%s型\n", info1.name, info1.birth[0], info1.birth[1], info1.birth[2], info1.blood);
}