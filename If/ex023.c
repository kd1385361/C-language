#include <stdio.h>
main()
{
	int time, h, m, s;
	printf("•b”‚ğ“ü—Í:");
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
		printf("%dŠÔ%d•ª%d•b‚Å‚·", h, m, s);
	} else {
		printf("ƒGƒ‰[:“ü—Í‚Í5000‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}
/* {
	int h, m, s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &s);
	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·", h, m, s);
	} else {
		printf("ƒGƒ‰[:“ü—Í‚Í5000‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n")
	}
}*/