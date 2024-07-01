#include <stdio.h>
main()
{
	float num1, num2, num3, sum;
	printf("‚P‚Â–Ú‚ÌÀ”:");
	scanf("%f", &num1);
	printf("‚Q‚Â–Ú‚ÌÀ”:");
	scanf("%f", &num2);
	printf("‚R‚Â–Ú‚ÌÀ”:");
	scanf("%f", &num3);
	sum = num1 + num2 + num3;
	printf("‡Œv= %.2f •½‹Ï= %.2f\n", sum, sum / 3.0);
}