#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);		//���̓o�b�t�@�̃N���A(2�����ȏ���͂��ꂽ�ہA�P�����ځ����s���Q�����ځ����s�ƂȂ��Ă��܂�)�Adumy[]�Ɏc��̓��͂��ꂽ�������i�[���Ă���
		c = getchar();
	}
}