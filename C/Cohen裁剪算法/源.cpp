//#define _CRT_SECURE_NO_WARNINGS 1
//#include <graphics.h>			// 引用图形库头文件
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
//	printf("请输入直线起点x1 y1：");
//	scanf("%d %d", &x1, &y1);
//	printf("请输入直线终点x2 y2: ");
//	scanf("%d %d", &x2, &y2);
//	printf("请输入裁剪窗口wxl wxr wyb wyt:");
//	scanf("%d %d %d %d", &wxl, &wxr, &wyb, &wyt);
//		
//	//initgraph(800, 700);//初始化画布
//	//setbkcolor(GREEN);// 设置背景色为蓝色
//	//cleardevice();// 用背景色清空屏幕
//	//setorigin(400, 350);//设置坐标原点
//	//setaspectratio(1, -1); //可使 y 轴向上为正
//	//setcolor(RED);
//	//line(x1, y1, x2, y2);
//	//setcolor(BLACK);
//	//line(wxl, wyb, wxl, wyt);//左
//	//line(wxl, wyb, wxr, wyb);//下
//	//line(wxr, wyb, wxr, wyt);//右
//	//line(wxl, wyt, wxr, wyt);//上
//	//Sleep(5000);      
//	//cleardevice();
//	char C1=0, C2=0;
//	
//	//判断
//	C1 = Draw(x1, y1, wxl, wxr, wyb, wyt);
//	C2 = Draw(x2, y2, wxl, wxr, wyb, wyt);
//	if (C1 == C2 == '0000')
//	{
//		printf("完全保留\n");
//	}
//	else
//	{
//		printf("直线在外面");
//	}
//
//
//	
//	
//
//
//	_getch();				// 按任意键继续
//	closegraph();			// 关闭图形界面
//}