#define _CRT_SECURE_NO_WARNINGS 1//忽略安全检测

#include <stdio.h>
#include <stdlib.h>
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
	//struct student a[100];
	//定义动态结构体变量

	//p = (int*)malloc(sizeof(int) * n);
	struct student* a = (struct student*)malloc(sizeof(struct student)* n);
	for (int i = 0; i < n; i++)
	{
		printf("请输入第%d位同学的信息.\n", i + 1);
		printf("姓名、学号、语文、数学、C语言：");
		scanf("%s %d %f %f %f", a[i].xm, &a[i].xh, &a[i].yy, &a[i].sx, &a[i].c);
	}

	for (int i = 0; i < n; i++)
	{
		printf("输出第%d位同学：\n", i + 1);
		printf("%s\t%d\t%.2f\t%.2f\t%.2f\n", a[i].xm, a[i].xh, a[i].yy, a[i].sx, a[i].c);
	}
	return 0;
}