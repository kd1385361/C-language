#include <stdio.h>
main()
{
	float num;
	printf("実数を入れて:");
	scanf("%f", &num);
	printf("２倍すると %.2f\n", num * 2);
	printf("３倍すると %.2f\n", num * 3);
}