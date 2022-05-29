#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int x = 10,y = 90;
	for (int i = 1; i <= 120; i++)
	{
		if (y <= 0)//如果y被吃没了，就没有了
		{
			y = 0;
			break;
		}
		if (i % 2 == 1)
		{
			y -= x;//y被吃掉
		}
		if (i % 4 == 0)
		{
			y *= 2;//y分裂
		}
		if (i % 6 == 0)
		{
			x *= 2;//x分裂
		}
	}
	printf("%d", y);
	return 0;
}