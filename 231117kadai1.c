#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char x;

	printf_s("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%c\n", &x);
	if (isupper(x) != 0)
		printf("x‚Í‘å•¶Žš‚ªŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·");
	else
		printf("x‚Í‘å•¶Žš‚ªŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ");
	return 0;
}