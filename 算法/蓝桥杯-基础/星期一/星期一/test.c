#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 0, day = 0, dayrun = 0, dayping = 0, sumday = 0;
	int count = 0;
	for (year = 1901; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//判断闰年和平年
		{
			dayrun += 366;//闰年一年有366天
		}
		else
		{
			dayping += 365;//平年一年有365天
		}
	}
	sumday = dayrun + dayping;//从1901年到2000年一共的天数
	for (day = 2; day <= sumday - 7; day += 7)//星期一是一个星期的第二天
	{
		count++;
	}
	printf("这个世纪一共有%d个星期一\n", count);
	return 0;
}