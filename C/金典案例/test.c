#define _CRT_SECURE_NO_WARNINGS 1


//1���������
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


//2��ͨ����������3��ѧ��4�ſγ̵ĳɼ�
//�ֱ���ÿ��ѧ����ƽ���ɼ���ÿ�ſγ̵�ƽ���ɼ�Ҫ�����гɼ�������һ��4��5�е�������
//����ʱͬһ�����ݼ��ÿո�, ��ͬ���ûس���������к����һ��
//�ֱ��ÿ��ѧ����ƽ���ɼ���ÿ�ſγ̵�ƽ���ɼ����༶��ƽ����
#include<stdio.h>
int main()
{
	float data[4][5] ;
	float num1 = 0, num2 = 0;
	//�����ʼ��
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5;j++)
		{
			data[i][j] = 0;
		}
	}

	//����ɼ�
	for (int i = 0; i < 3; i++)
	{
		printf("�������%dλͬѧ�ĳɼ���",i+1);
		scanf("%f %f %f %f", &data[i][0], &data[i][1], &data[i][2], &data[i][3]);
	}

	//��ÿλͬѧ��ƽ����
	for (int i = 0; i < 3; i++)
	{
		num1 = 0;
		for (int j = 0; j < 4; j++)
		{
			num1 += data[i][j];
		}
		data[i][4] = num1 / 4;
	}

	//��ÿ��ѧ�Ƶ�ƽ����
	for (int i = 0; i < 4; i++)
	{
		num2 = 0;
		for (int j = 0; j < 3; j++)
		{
			num2 += data[j][i];
		}
		data[3][i] = num2 / 3;
	}
	
	//����
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



