#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)//ż����
		{
			printf("%d\n", i * i / 2);//���ƽ���ٳ�2
		}
		else//������
		{
			printf("%d\n", ((i * i) - 1) / 2);//���ƽ����1�ٳ�2 
		}
	}
	return 0;
}