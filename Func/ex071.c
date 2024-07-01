#include <stdio.h>
int gokei(int a, int b, int c);
float heikin(int g);
main()
{
	int a, b, c, g;
	float h;
	printf("®”‚ğ‚R‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);
	g = gokei(a, b, c);
	h = heikin(g);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", g, h);
}
int gokei(int a, int b, int c)
{
	return a + b + c;
}
float heikin(int g)
{
	return g / 3.0;
}