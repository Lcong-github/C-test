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
	//�׵���Ϣ�洢
	//1�������׵���Ϣ
	char main[ROWS][COLS] = { 0 };
	//2���Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(main, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//Displayboard(main, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	SetMain(main,ROW,COL);
	//Displayboard(main, ROW, COL);
	//ɨ��
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}