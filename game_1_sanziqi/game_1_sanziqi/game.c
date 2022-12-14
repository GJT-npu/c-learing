#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void InitBoard(char board[ROW][COL] , int row , int col)
{
	//初始化棋盘 遍历每个元素赋值‘ ’
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL] , int row , int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c " , board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL] , int row , int col)
{
	//玩家输入坐标
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d" , &x , &y);
		//判断坐标是否合法
		if (x <= 3 && x >= 1 && y <= 3 && y >= 1)
		{
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
	
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

void PcMove(char board[ROW][COL] , int row , int col)
{
	//电脑随机下棋
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		//判断坐标是否占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//棋盘元素是否占满判断函数
int IsFull(char board[ROW][COL] , int row , int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL] , int row , int col)
{
	int i = 0;
	int ret = 0;  //棋盘元素是否满了
	//遍历行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//遍历列
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	
	//平局-棋盘满了
	//满了返回1，未满返回0
	ret = IsFull(board , ROW , COL);
	if (ret == 1)
		return 'Q';

	//继续游戏
	return 'C';

}

