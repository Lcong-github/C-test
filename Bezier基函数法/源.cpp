#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>			// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include <iostream>
using namespace std;
void Drac(int arr[], int acc[], int count)
{
	setcolor(BLACK);
	moveto(arr[0], acc[0]);
	for (int i = 0; i < count; i++)
	{
		lineto(arr[i + 1], acc[i + 1]);
	}

}

float Draw(int add[], int count,float t)
{
	float bez03;
	float bez13;
	float bez23;
	float bez33;
	float p;
		bez03 = (1 - t) * (1 - t) * (1 - t);
		bez13 = 3 * t * (1 - t) * (1 - t);
		bez23 = 3 * t * t * (1 - t);
		bez33 = t * t * t;
		p = bez03 * add[0] + bez13 * add[1] + bez23 * add[2] + bez33 * add[3];
		return p;
}

int main()
{
	int count = 3;
	printf("����Ҫ���Ƶ�3��Bezier���߿��Ƶ�!\n");
	/*scanf("%d", &count);*/
	int arr[10];
	int acc[10];
	for (int i = 0; i < count + 1; i++)
	{
		printf("�������%d�����Ƶ㣺", i + 1);
		scanf("%d", &arr[i]);
		scanf("%d", &acc[i]);
		getchar();
	}

	initgraph(800, 700);//��ʼ������
	setbkcolor(GREEN);// ���ñ���ɫΪ��ɫ
	cleardevice();// �ñ���ɫ�����Ļ
	setorigin(400, 350);//��������ԭ��
	setaspectratio(1, -1); //��ʹ y ������Ϊ��
	Drac(arr, acc, count);
	for (float t = 0; t <=1; t = t + 0.0000001)
	{
		float x = Draw(arr, count, t);
		float y = Draw(acc, count, t);
		putpixel(x, y, RED);

	}
	

	_getch();				// �����������
	closegraph();			// �ر�ͼ�ν���
}