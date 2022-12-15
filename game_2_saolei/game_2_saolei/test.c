#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*************************\n");
	printf("********  1.play  *******\n");
	printf("********  0.exit  *******\n");
	printf("*************************\n");
}

void game()
{
	//创建棋盘数组
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化棋盘
	InitBoard(mine , ROWS , COLS , '0');//存放雷的棋盘
	InitBoard(show , ROWS , COLS , '*');//显示的棋盘

	//打印棋盘
	//DisplayBoard(mine , ROW , COL);
	DisplayBoard(show , ROW , COL);

	//放置雷
	SetMine(mine , ROW , COL , MINECOUNT);
	//DisplayBoard(mine , ROW , COL);

	//排查雷
	FindMine(mine , show , ROW , COL);

}

int main()
{
	//设置时间戳
	srand(( unsigned int )time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("扫雷游戏，是否进入:>");
		scanf("%d" , &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}