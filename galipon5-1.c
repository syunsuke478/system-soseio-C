#include<stdio.h>
int main(void)
{
	int i;
	for (i = 0; i < 10000; i++) {
		if (i % 13 == 0)
		{
			printf("%d\n",i);
		}
		else if (i % 17 == 0)
		{
			printf("%d\n",i);
		}
	}
}