#include<stdio.h>
int kaijo(int);
int main()
{
	int n;
	printf("n‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%d", &n);
	printf("%d‚ÌŠKæ‚Í%d", n,kaijo(n));
}
int kaijo(int x)
{
	int y, i;
	y = 1;
	for (i = 1; i <= x; i++)
	{
		y *= i;
	}
	return y;
}