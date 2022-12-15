#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS] , int rows , int cols , char set)
{
	//遍历数组，初始化
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

void DisplayBoard(char board[ROWS][COLS] , int row , int col)
{
	int i = 0;
	int j = 0;
	printf("**********扫雷游戏**********\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d " , i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d " , i);
		for (j = 1; j <= col; j++)
		{
			printf("%c " , board[i][j]);
		}
		printf("\n");
	}
	printf("**********扫雷游戏**********\n");
}

void SetMine(char mine[ROWS][COLS] , int row , int col , int count)
{
	//设置雷 - 随机产生1——9的横纵坐标
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//求周围炸弹的个数，并返回显示
static int IsMine(char mine[ROWS][COLS] , int x , int y)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
	
	//return mine[x - 1][y - 1] +
	//	mine[x - 1][y] +
	//	mine[x - 1][y + 1] +
	//	mine[x][y - 1] +
	//	mine[x][y + 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row , int col)
{
	//1.输入排查的坐标
	//2.检查坐标处是不是雷
	//   （1）是雷 很遗憾，被炸死了
	//   （2）不是雷 统计坐标周围有几个雷
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;
	
	while (win<row*col-MINECOUNT)  //排查条件
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d" , &x , &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')  //是炸弹
			{
				printf("很抱歉，你被炸死了\n");
				DisplayBoard(mine , row , col);
				break;
			}
			else  //不是炸弹
			{
				count = IsMine(mine , x , y);
				show[x][y] = '0' + count;
				//显示排查雷的信息
				DisplayBoard(show , row , col);
				win++;
			} 
		}
		else
		{
			printf("坐标非法，请重新输入:>");
		}
	}
	if (win == row * col - MINECOUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine , row , col);
	}
}

