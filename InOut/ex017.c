#include <stdio.h>
main()
{
	float num1, num2, num3, sum;
	printf("�P�ڂ̎���:");
	scanf("%f", &num1);
	printf("�Q�ڂ̎���:");
	scanf("%f", &num2);
	printf("�R�ڂ̎���:");
	scanf("%f", &num3);
	sum = num1 + num2 + num3;
	printf("���v= %.2f ����= %.2f\n", sum, sum / 3.0);
}