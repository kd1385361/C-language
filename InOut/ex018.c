#include <stdio.h>
main()
{
	int a, b, c, d;
	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	printf("���v=%d   ", d);
	//printf("����=%.2f\n", d / 3.0);
	printf("����=%.2f\n", (float)d / 3); //�L���X�g(�^�ϊ�)�̗�
}