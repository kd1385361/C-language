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
	printf("���O����́F");
	gets(info1.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &info1.birth[0], &info1.birth[1], &info1.birth[2]);
	printf("���t�^����́F");
	scanf("%s", info1.blood);
	printf("%s----%d�N%d��%d���� ���t�^�[%s�^\n", info1.name, info1.birth[0], info1.birth[1], info1.birth[2], info1.blood);
}