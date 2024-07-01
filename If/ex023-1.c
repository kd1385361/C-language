#include <stdio.h>
main()
{
	int time, h, m, s;
	printf("秒数を入力:");
	scanf("%d", &time);
	if (time < 0) {
		printf("マイナスはエラーです");
	} else if (time <= 5000) {
		if (time >= 3600) {
			h = time / 3600;
			time = time - h * 3600;
		}if (time >= 60) {
			m = time / 60;
			time = time - m * 60;
		}
		s = time;
		printf("%d時間%d分%d秒です", h, m, s);
	} else {
		printf("エラー:入力は5000までにしてください\n");
	}
}
/* {
	int h, m, s;
	printf("秒数を入力:");
	scanf("%d", &s);
	if (s < 0) {
	printf("マイナスはエラーです")
	}else if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d時間%d分%d秒です", h, m, s);
		} else {
			printf("エラー:入力は5000までにしてください\n")
	}
}*/