//#define _CRT_SECURE_NO_WARNINGS 1
//#include <graphics.h>			// ����ͼ�ο�ͷ�ļ�
//#include <conio.h>
//#include <iostream>
//using namespace std;
//
//char Draw(int x,int y,int wxl,int wxr,int wyb,int wyt)
//{
//	char C;
//	//if (x < wxl)
//	//{
//	//	C = 1;
//	//}
//	//
//	//if (x > wxr)
//	//{
//	//	C = 1;
//	//}
//	//if (y < wyb)
//	//{
//	//	C = 1;
//	//}
//	//if (y > wyt)
//	//{
//	//	C = 1;
//	//}
//	/*if (wxl < x < wxr && wyb < y < wyt)
//	{
//		C = '0000';
//	}*/
//	if (wxl < x < wxr && wyb < y < wyt)
//	{
//		C = '0000';
//	}
//	/*else if (x < wxl && y > wyt)
//	{
//		C = 1001;
//	}
//	else if (x < wxl && wyb < y < wyt)
//	{
//		C = 0001;
//	}
//	else if (x < wxl && y < wyb)
//	{
//		C = 0101;
//	}
//	else if (x > wxr && y > wyt)
//	{
//		C = 1010;
//	}
//	else if (x > wxl && wyb < y < wyt)
//	{
//		C = 0010;
//	}
//	else if (x > wxl && y < wyb)
//	{
//		C = 0110;
//	}
//	else if (y < wyb && wxl < x <wxr)
//	{
//		C = 0100;
//	}
//	else if(y > wyt && wxl < x <wxr)
//	{
//		C = 1000;
//	}*/
//	
//	return C;
//}
//
//int main()
//{
//	int x1, y1, x2, y2;
//	int wxl, wxr, wyb, wyt;
//	printf("������ֱ�����x1 y1��");
//	scanf("%d %d", &x1, &y1);
//	printf("������ֱ���յ�x2 y2: ");
//	scanf("%d %d", &x2, &y2);
//	printf("������ü�����wxl wxr wyb wyt:");
//	scanf("%d %d %d %d", &wxl, &wxr, &wyb, &wyt);
//		
//	//initgraph(800, 700);//��ʼ������
//	//setbkcolor(GREEN);// ���ñ���ɫΪ��ɫ
//	//cleardevice();// �ñ���ɫ�����Ļ
//	//setorigin(400, 350);//��������ԭ��
//	//setaspectratio(1, -1); //��ʹ y ������Ϊ��
//	//setcolor(RED);
//	//line(x1, y1, x2, y2);
//	//setcolor(BLACK);
//	//line(wxl, wyb, wxl, wyt);//��
//	//line(wxl, wyb, wxr, wyb);//��
//	//line(wxr, wyb, wxr, wyt);//��
//	//line(wxl, wyt, wxr, wyt);//��
//	//Sleep(5000);      
//	//cleardevice();
//	char C1=0, C2=0;
//	
//	//�ж�
//	C1 = Draw(x1, y1, wxl, wxr, wyb, wyt);
//	C2 = Draw(x2, y2, wxl, wxr, wyb, wyt);
//	if (C1 == C2 == '0000')
//	{
//		printf("��ȫ����\n");
//	}
//	else
//	{
//		printf("ֱ��������");
//	}
//
//
//	
//	
//
//
//	_getch();				// �����������
//	closegraph();			// �ر�ͼ�ν���
//}