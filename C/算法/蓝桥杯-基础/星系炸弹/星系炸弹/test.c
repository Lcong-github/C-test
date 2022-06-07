#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int monthdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//闰年
	int days = 1000;//定时1000天
	int year = 2014, month = 11, day = 9;//定义放置时间
	for (int i = 0; i < days; i++)
	{
		day++;
			if (day > monthdays[month-1])//判断天数是否大于相应的月份的天数
			{
				day = 1;
				month++;
				if (month > 12)//判断月数是否大于12个月
				{
					month = 1;
					year++;

					//判断是否为闰年
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
	printf("炸弹爆炸时间为：%d-%d-%d", year, month, day);
	return 0;
}