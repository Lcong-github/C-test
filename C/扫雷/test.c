#include "game.h"
void menu()
{
	printf("*************************************\n");
	printf("************     1.play     *********\n");
	printf("************     0.exit     *********\n");
	printf("*************************************\n");
}

void game()
{
	//雷的信息存储
	//1、布置雷的信息
	char main[ROWS][COLS] = { 0 };
	//2、排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(main, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//Displayboard(main, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷
	SetMain(main,ROW,COL);
	//Displayboard(main, ROW, COL);
	//扫雷
	//Displayboard(main, ROW, COL);
	Findline(main,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}