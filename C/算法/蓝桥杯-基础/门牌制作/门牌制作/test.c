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
			if (x % 10 == 2)//�ж��Ƿ���2
			{
				ans++;
			}
			x /= 10;//�����ǰ���ֵ�ÿһλ
		}
	}
	printf("һ����%d���ַ���2��", ans);
	return 0;
}