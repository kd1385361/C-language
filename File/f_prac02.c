#include <stdio.h>
main()
{
	int score = 0, Mscore;
	char ch, name[20], Mname[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", Mname, &Mscore);
	fclose(fp);
	printf("�����ߋ��ō��L�^����\n�v���C���[���F%s\n�X�R�A�F%d\n\n\n", Mname, Mscore);
	printf("�v���C���[��(19�����܂�)�F");
	gets(name);
	while (1) {
		printf("���݂̃X�R�A�F%d (e�L�[�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
			break;
		score++;
	}
	if (Mscore < score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("�n�C�X�R�A�X�V�I\n");
	}
}