#include <stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		moji = moji + 32;
		printf("•ÏŠ·‚·‚é‚Æ%c\n", moji);
	}
	else if (moji >= 'a' && moji <= 'z') {
		moji = moji - 32;
		printf("•ÏŠ·‚·‚é‚Æ%c\n", moji);
	}
	else {
		printf("ƒGƒ‰[:³‚µ‚¢•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}