#include<stdio.h>
int kaijo(int);
int main()
{
	int n;
	printf("nを入力してください");
	scanf_s("%d", &n);
	printf("%dの階乗は%d", n,kaijo(n));
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