#include<stdio.h>
int kaijo(int);
int main()
{
	int n;
	printf("n����͂��Ă�������");
	scanf_s("%d", &n);
	printf("%d�̊K���%d", n,kaijo(n));
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