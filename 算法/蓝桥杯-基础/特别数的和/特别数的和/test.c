#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int check(int n)
{
	while (n)
	{
		int nump = n % 10;
		if (nump == 1 || nump == 2 || nump == 9 || nump == 0)
		{
			return 1;
		}
		n /= 10;
	}
	return 0;
}
int main()
{
	int n = 0;
	printf("���ʼ���1������֮������֣�");
	scanf("%d", &n);
	getchar();
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int a = check(i);
		if (a == 1)
		{
			ans += i;
		}
	}
	printf("��Ϊ%d", ans);

	return 0;
}