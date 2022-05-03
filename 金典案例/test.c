#define _CRT_SECURE_NO_WARNINGS 1


//1、杨辉三角
//#include<stdio.h>
//int main(void)
//{
//	int  a[9][9] = { 0 };
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			a[i][j] = 1;
//		}
//	}
//
//	for (int i = 2; i < 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int k = 0; k < 26-6*i/2; k++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <=i; j++)
//		{
//			printf("%6d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2、通过键盘输入3名学生4门课程的成绩
//分别求每个学生的平均成绩和每门课程的平均成绩要求所有成绩均放入一个4行5列的数组中
//输入时同一人数据间用空格, 不同人用回车其中最后—列和最后一行
//分别放每个学生的平均成绩、每门课程的平均成绩及班级总平均分
#include<stdio.h>
int main()
{
	float data[4][5] ;
	float num1 = 0, num2 = 0;
	//数组初始化
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5;j++)
		{
			data[i][j] = 0;
		}
	}

	//输入成绩
	for (int i = 0; i < 3; i++)
	{
		printf("请输入第%d位同学的成绩：",i+1);
		scanf("%f %f %f %f", &data[i][0], &data[i][1], &data[i][2], &data[i][3]);
	}

	//求每位同学的平均分
	for (int i = 0; i < 3; i++)
	{
		num1 = 0;
		for (int j = 0; j < 4; j++)
		{
			num1 += data[i][j];
		}
		data[i][4] = num1 / 4;
	}

	//求每个学科的平均分
	for (int i = 0; i < 4; i++)
	{
		num2 = 0;
		for (int j = 0; j < 3; j++)
		{
			num2 += data[j][i];
		}
		data[3][i] = num2 / 3;
	}
	
	//总览
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%.1f\t", data[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}



