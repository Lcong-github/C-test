#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>			// 引用图形库头文件
#include <conio.h>
#include <iostream>
using namespace std;


//绘制控制点直线
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


//绘制曲线
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
	printf("请问要绘制几次的Bezier曲线：");
	scanf("%d", &count);
	float arr[10];
	float acc[10];
	for (int i = 0; i < count + 1; i++)
	{
		printf("请输入第%d个控制点：", i + 1);
		scanf("%f", &arr[i]);
		scanf("%f", &acc[i]);
		getchar();
	}

	initgraph(800, 700);//初始化画布
	setbkcolor(GREEN);// 设置背景色为蓝色
	cleardevice();// 用背景色清空屏幕
	setorigin(320, 240);//设置坐标原点
	setaspectratio(1, -1); //可使 y 轴向上为正
	Drac(arr, acc, count);//绘制控制点图像
	for (float t = 0; t < 1; t += 0.000001) {
		Draw(arr, acc, t, count+1);//n次Bezier曲线需要n+1个控制点
	}
	_getch();				// 按任意键继续
	closegraph();			// 关闭图形界面
}