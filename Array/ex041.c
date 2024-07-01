#include <stdio.h>
main()
{
	int i;
	float a[3], sum;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("‡Œv‚Í %.2f ‚Å‚·\n", sum);
	printf("•½‹Ï‚Í %.2f ‚Å‚·\n", sum / 3.0);
}