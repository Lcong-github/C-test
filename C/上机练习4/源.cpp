#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>			// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include <iostream>
using namespace std;


//���ƿ��Ƶ�ֱ��
void Drac(float arr[], float acc[], int count)
{
	setcolor(BLACK);
	moveto(arr[0],acc[0]);
	for (int i = 0; i < count; i++)
	{
		arr[i] = int(arr[i]);
		lineto(arr[i+1], acc[i+1]);
	}
	
}


//��������
void Draw(float px[], float py[], float t, int n) {
	if (n == 1) {
		printf("x=%d,y=%d\n", px[0], py[0]);
		putpixel(px[0],py[0], RED);
		return;
	}
	int i;
	for (i = 0; i < n - 1; i++) {
		px[i] = (1 - t) * px[i] + t * px[i + 1];
		py[i] = (1 - t) * py[i] + t * py[i + 1];
	}
	Draw(px, py, t, --n);
}


int main()
{
	int count ;
	printf("����Ҫ���Ƽ��ε�Bezier���ߣ�");
	scanf("%d", &count);
	float arr[10];
	float acc[10];
	for (int i = 0; i < count + 1; i++)
	{
		printf("�������%d�����Ƶ㣺", i + 1);
		scanf("%f", &arr[i]);
		scanf("%f", &acc[i]);
		getchar();
	}

	initgraph(800, 700);//��ʼ������
	setbkcolor(GREEN);// ���ñ���ɫΪ��ɫ
	cleardevice();// �ñ���ɫ�����Ļ
	setorigin(320, 240);//��������ԭ��
	setaspectratio(1, -1); //��ʹ y ������Ϊ��
	Drac(arr, acc, count);//���ƿ��Ƶ�ͼ��
	for (float t = 0; t < 1; t += 0.000001) {
		Draw(arr, acc, t, count+1);//n��Bezier������Ҫn+1�����Ƶ�
	}
	_getch();				// �����������
	closegraph();			// �ر�ͼ�ν���
}