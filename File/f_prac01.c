#include <stdio.h>
main()
{
	int score = 0;
	char ch, name[20];
	FILE* fp;
	printf("�v���C���[��(19�����܂�)�F");
	gets(name);
	while (1) {
		printf("���݂̃X�R�A�F%d (e�L�[�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
			break;
		score++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}