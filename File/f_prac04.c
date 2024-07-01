#include <stdio.h>
#define Sol_Num 3
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;
void SetInfo(Soldier*, char*);
void Display(Soldier*);
main()
{
	Soldier sols[Sol_Num];
	SetInfo(sols, "file04.txt");
	Display(sols);
}
void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r"))
		for (i = 0; i < Sol_Num; i++, s++)
			fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
	fclose(fp);
}
void Display(Soldier* s) {
	int i;
	for (i = 0; i < Sol_Num; i++, s++)
		printf("–¼‘O:%s ‘Ì—Í:%d \n•Ší–¼:%s Žc’e”:%d UŒ‚—Í:%.2f\n", s->name, s->hp, s->wpn.Wname, s->wpn.bullet, s->wpn.atk);
}