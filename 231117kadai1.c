#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char x;

	printf_s("文字を入力してください");
	scanf_s("%c\n", &x);
	if (isupper(x) != 0)
		printf("xは大文字が含まれています");
	else
		printf("xは大文字が含まれていません");
	return 0;
}