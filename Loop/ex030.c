#include <stdio.h>
main()
{
	int count, i;
	count = 0;
	i = 0;
	printf("数を入れて:");
	scanf("%d", &count);
	while (i <= 10) {
		printf("%d + %d = %d\n", count, i, count + i);
		i++;
	}
}