#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)//偶数项
		{
			printf("%d\n", i * i / 2);//序号平方再除2
		}
		else//奇数项
		{
			printf("%d\n", ((i * i) - 1) / 2);//序号平方减1再除2 
		}
	}
	return 0;
}