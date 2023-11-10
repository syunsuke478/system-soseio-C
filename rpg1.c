#include<stdio.h>
int main(void)
{
	int a;
	int i = 1;
	while (i = 1) {
		printf("ここに３匹のポケモンがいます,好きなポケモンを選びなさい\n1.マッギョ\n2.ミルタンク\n3.アルセウス\n");
		scanf_s("%d", &a);
		if (a == 1)
			printf_s("あなたは変人ですね");
		else if (a == 2)
			printf("あなたは素晴らしいでしょう");
		else
			printf("あなたはもう少しで神になれるでしょう");
	}
	return 0;
}