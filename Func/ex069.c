#include <stdio.h>
main()
{
	int a;
	int i = 0, sum = 0;
	printf("�����F");
	while ((scanf("%d", &a)) != EOF) {
		sum += a;
		i++;
		printf("�����F");
	}
	printf("���v = %d\t���� = %.2f\n", sum, (float)sum / i);
}