#include<stdio.h>
int main(void)
{
	int a;
	int i = 1;
	while (i = 1) {
		printf("�����ɂR�C�̃|�P���������܂�,�D���ȃ|�P������I�тȂ���\n1.�}�b�M��\n2.�~���^���N\n3.�A���Z�E�X\n");
		scanf_s("%d", &a);
		if (a == 1)
			printf_s("���Ȃ��͕ϐl�ł���");
		else if (a == 2)
			printf("���Ȃ��͑f���炵���ł��傤");
		else
			printf("���Ȃ��͂��������Ő_�ɂȂ��ł��傤");
	}
	return 0;
}