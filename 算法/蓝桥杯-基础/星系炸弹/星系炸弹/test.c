#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int monthdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//����
	int days = 1000;//��ʱ1000��
	int year = 2014, month = 11, day = 9;//�������ʱ��
	for (int i = 0; i < days; i++)
	{
		day++;
			if (day > monthdays[month-1])//�ж������Ƿ������Ӧ���·ݵ�����
			{
				day = 1;
				month++;
				if (month > 12)//�ж������Ƿ����12����
				{
					month = 1;
					year++;

					//�ж��Ƿ�Ϊ����
					if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
					{
						monthdays[1] = 29;
					}
					else
					{
						monthdays[1] = 28;
					}
				}
			}
			
	}
	printf("ը����ըʱ��Ϊ��%d-%d-%d", year, month, day);
	return 0;
}