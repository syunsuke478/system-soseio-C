#include<stdio.h>
int main(void)
{
	int a, b, surplus, result;

	//2�̐��������
	printf("Prease Enter Number:");
	scanf_s("%d", &a);
	printf("Prease Enter Other Number:");
	scanf_s("%d", &b);

	//�]����v�Z
	surplus = a % b;

	//��������
	if (surplus == 0)
	{
		result = a / b;
		printf("%d/%d=%d\n", a, b, result);
	}
	else
	{
		printf("%d ? %d...%d\n", a, b, result, surplus);
	}
	return 0;