#include"game.h"
//初始化
InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}


//布置雷
void SetMain(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//'1'-'0'=1
int get_main_count(char main[ROWS][COLS], int x, int y)
{
	return main[x - 1][y] +
		main[x - 1][y - 1] +
		main[x][y - 1] +
		main[x + 1][y - 1] +
		main[x + 1][y] +
		main[x + 1][y + 1] +
		main[x][y + 1] +
		main[x - 1][y + 1] - 8 * '0';
}

//扫雷
void Findline(char main[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入排查雷的坐标：>");
		scanf("%d %d", &x, &y);
		if (1 <= x <= row && 1 <= y <= col)
		{
			//坐标合法
			//1、踩雷
			if (main[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Displayboard(main, row, col);
				break;
			}
			//2、不是雷
			else
			{
				//计算x,y坐标周围的雷
				int count = get_main_count(main, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入非法坐标，请重新输入!\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜过关！\n");
		Displayboard(main, row, col);
	}
}