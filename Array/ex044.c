#include <stdio.h>
main()
{
	char moji1[80], moji2[80], keep[80];
	int i;
	printf("������1�����:");
	scanf("%s", moji1);
	printf("������2�����:");
	scanf("%s", moji2);
	printf("moji1 = %s   moji2 = %s\n", moji1, moji2);
	printf("����ւ����\n");
	for (i = 0; moji1[i] != '\0'; i++) {
		keep[i] = moji1[i];
	}
	keep[i] = '\0';
	//for( i = 0; keep[i] = moji1[i]; i++);
	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';
	for (i = 0; keep[i] != '\0'; i++) {
		moji2[i] = keep[i];
	}
	moji2[i] = '\0';
	printf("moji1 = %s   moji2 = %s\n", moji1, moji2);
}