#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 0, day = 0, dayrun = 0, dayping = 0, sumday = 0;
	int count = 0;
	for (year = 1901; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//�ж������ƽ��
		{
			dayrun += 366;//����һ����366��
		}
		else
		{
			dayping += 365;//ƽ��һ����365��
		}
	}
	sumday = dayrun + dayping;//��1901�굽2000��һ��������
	for (day = 2; day <= sumday - 7; day += 7)//����һ��һ�����ڵĵڶ���
	{
		count++;
	}
	printf("�������һ����%d������һ\n", count);
	return 0;
}