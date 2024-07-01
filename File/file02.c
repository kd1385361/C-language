#include <stdio.h>
main()
{
	FILE* fp;
	char str[256], equip[100], nul;
	int lv, hp;
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("‘•”õ:%s\n", str);
	fscanf(fp, "%s", str);
	printf("‘•”õ:%s\n", str);
	fscanf(fp, "%s", str);
	printf("‘•”õ:%s\n", str);
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv:%d hp:%d ‘•”õ:%s\n", lv, hp, equip);
	nul = fgetc(fp);
	fgets(str, sizeof(str), fp);
	puts(str);
	fclose(fp);
}