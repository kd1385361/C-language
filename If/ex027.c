#include <stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		moji = moji + 32;
		printf("�ϊ������%c\n", moji);
	}
	else if (moji >= 'a' && moji <= 'z') {
		moji = moji - 32;
		printf("�ϊ������%c\n", moji);
	}
	else {
		printf("�G���[:��������������͂��Ă�������\n");
	}
}