#include <stdio.h>
main()
{
	int score = 0, Mscore;
	char ch, name[20], Mname[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", Mname, &Mscore);
	fclose(fp);
	printf("★☆過去最高記録☆★\nプレイヤー名：%s\nスコア：%d\n\n\n", Mname, Mscore);
	printf("プレイヤー名(19文字まで)：");
	gets(name);
	while (1) {
		printf("現在のスコア：%d (eキーで終了)\n", score);
		ch = getch();
		if (ch == 'e')
			break;
		score++;
	}
	if (Mscore < score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("ハイスコア更新！\n");
	}
}