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
		printf("���O����́F");
		gets(p->name);
		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		gets(dumy);
		printf("���t�^����́F");
		scanf("%s", p->blood);
		gets(dumy);
	}
	putchar('\n');
	p = info;
	for (int i = 0; i < 5; i++, p++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s----%d�N%d��%d���� ���t�^�[%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}