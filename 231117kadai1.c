#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char x;

	printf_s("��������͂��Ă�������");
	scanf_s("%c\n", &x);
	if (isupper(x) != 0)
		printf("x�͑啶�����܂܂�Ă��܂�");
	else
		printf("x�͑啶�����܂܂�Ă��܂���");
	return 0;
}