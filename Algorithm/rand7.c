#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int ans, a, cnt = 0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("1�`1000�̒��œ�����̐���\�z���Ă�������");
		while (1) {
			printf("\n������̐��́H->");
			scanf("%d", &a);
			if (a > 1000 || a < 1) {
				printf("�G���[");
				continue;
			}
			cnt++;
			if (a == ans) {
				break;
			}
			if (a > ans) {
				printf("������̐����傫���ł�");
			}
			else {
				printf("������̐���菬�����ł�");
			}
		}
	printf("�����I%d��ڂœ�����܂���\n", cnt);
}