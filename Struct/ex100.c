#include <stdio.h>
#define DATEND -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
void pro1(struct ken*, struct ken*);
void pro2(struct ken*, struct ken*, struct ken*, int*);
void pro3(struct ken*, struct ken*);
main()
{
	struct ken kendat[50] = { {1,"北海道",NULL},{2,"青森県",NULL}, {3,"岩手県",NULL}, {4,"宮城県",NULL}, {5,"秋田県",NULL}, {6,"山形県",NULL}, {7,"福島県",NULL}, {DATEND,"",NULL} };
	struct ken* p, * wp;
	struct ken* keep;
	p = wp = kendat;
	int kosuu = 8;
	int* ko;
	ko = &kosuu;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATEND);
	keep = p;
	while (1) {
		p = wp = kendat;
		printf("コマンドを選択してください(1:表示　　2:追加　　3:削除　　9:終了)\n＞");
		int nani = 0;
		scanf("%d", &nani);
		if (nani == 1) {
			pro1(p, kendat);
		}
		if (nani == 2) {
			pro2(p, wp, keep, ko);
		}
		if (nani == 3) {
			pro3(p, wp);
		}
		if (nani == 9) {
			break;
		}
	}
}
void pro1(struct ken* p, struct ken* kendat) {
	for (p = kendat; p->code != DATEND; p = p->next) {
		printf("code = %d  name = %s\n", p->code, p->name);
	}
	putchar('\n');
}
void pro2(struct ken* p, struct ken* wp, struct ken* keep, int* a) {
	int n;
	char m[5];
	for (int i = 0; i < *a; i++, wp++);
	printf("コード＞");
	scanf("%d", &n);
	wp->code = n;
	printf("都道府県名＞");
	scanf("%s", m);
	strcpy(wp->name, m);
	for (; p->next != keep; p++);
	p->next = wp;
	wp->next = keep;
	*a += 1;
}
void pro3(struct ken* p, struct ken* wp) {
	int o;
	printf("削除コードを入力してください＞");
	scanf("%d", &o);
	for (; p->code != o; p++);
	for (; wp->next != p; wp++);
	wp->next = p->next;
}