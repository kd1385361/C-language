#include <stdio.h>
main()
{
	int time, h, m, s;
	printf("�b�������:");
	scanf("%d", &time);
	if (time <= 5000) {
		if (time >= 3600) {
			h = time / 3600;
			time = time - h * 3600;
		} else {
			h = 0;
		}if (time >= 60) {
			m = time / 60;
			time = time - m * 60;
		} else {
			m = 0;
		}
		s = time;
		printf("%d����%d��%d�b�ł�", h, m, s);
	} else {
		printf("�G���[:���͂�5000�܂łɂ��Ă�������\n");
	}
}
/* {
	int h, m, s;
	printf("�b�������:");
	scanf("%d", &s);
	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d����%d��%d�b�ł�", h, m, s);
	} else {
		printf("�G���[:���͂�5000�܂łɂ��Ă�������\n")
	}
}*/