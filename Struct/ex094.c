#include <stdio.h>
#include <string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile info[5];
	struct profile* p;
	char dumy[500];
	p = info;
	for (int i = 0; i < 5; i++, p++) {
		printf("名前を入力：");
		gets(p->name);
		printf("生年月日を空白で区切って入力：");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		gets(dumy);
		printf("血液型を入力：");
		scanf("%s", p->blood);
		gets(dumy);
	}
	putchar('\n');
	p = info;
	for (int i = 0; i < 5; i++, p++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s----%d年%d月%d日生 血液型ー%s型\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}