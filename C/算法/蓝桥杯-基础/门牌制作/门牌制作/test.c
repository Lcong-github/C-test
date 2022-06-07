#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ans = 0, x;
	for (int i = 1; i <= 2022; i++)
	{
		x = i;
		while (x)
		{
			if (x % 10 == 2)//判断是否有2
			{
				ans++;
			}
			x /= 10;//求出当前数字的每一位
		}
	}
	printf("一共有%d个字符‘2’", ans);
	return 0;
}