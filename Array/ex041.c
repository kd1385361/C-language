#include <stdio.h>
main()
{
	int i;
	float a[3], sum;
	for (i = 0; i < 3; i++) {
		printf("���������:");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("���v�� %.2f �ł�\n", sum);
	printf("���ς� %.2f �ł�\n", sum / 3.0);
}