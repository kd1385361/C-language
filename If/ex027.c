#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		moji = moji + 32;
		printf("変換すると%c\n", moji);
	}
	else if (moji >= 'a' && moji <= 'z') {
		moji = moji - 32;
		printf("変換すると%c\n", moji);
	}
	else {
		printf("エラー:正しい文字を入力してください\n");
	}
}