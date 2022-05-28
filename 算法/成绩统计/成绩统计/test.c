#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct student
{
	char xm[10];
	int xh;
	float yy;
	float sx;
	float c;
};

int main()
{
	int n = 0;
	printf("请问有几个学生？");
	scanf("%d", &n);
	getchar();
	struct student a[100];
	for (int i = 0; i < n; i++)
	{
		
		printf("请输入第%d位同学的信息.\n", i + 1);
		printf("姓名、学号、语文、数学、C语言：");
		scanf("%s", &a[i].xm);
		getchar();
		scanf("%d", &a[i].xh);
		getchar();
		scanf("%f", &a[i].yy);
		getchar();
		scanf("%f", &a[i].sx);
		getchar();
		scanf("%f", &a[i].c);
		getchar();


	}

	for (int i = 0; i < n;i++)
	{
		printf("输出第%d位同学：\n",i+1);
		printf("%s\t", a[i].xm);
		printf("%d\t", a[i].xh);
		printf("%f\t", a[i].yy);
		printf("%f\t", a[i].sx);
		printf("%f\n", a[i].c);
	}
	return 0;
}