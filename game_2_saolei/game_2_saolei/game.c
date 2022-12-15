#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS] , int rows , int cols , char set)
{
	//�������飬��ʼ��
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
	printf("**********ɨ����Ϸ**********\n");
	//��ӡ�к�
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
	printf("**********ɨ����Ϸ**********\n");
}

void SetMine(char mine[ROWS][COLS] , int row , int col , int count)
{
	//������ - �������1����9�ĺ�������
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

//����Χը���ĸ�������������ʾ
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
	//1.�����Ų������
	//2.������괦�ǲ�����
	//   ��1������ ���ź�����ը����
	//   ��2�������� ͳ��������Χ�м�����
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;
	
	while (win<row*col-MINECOUNT)  //�Ų�����
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d" , &x , &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')  //��ը��
			{
				printf("�ܱ�Ǹ���㱻ը����\n");
				DisplayBoard(mine , row , col);
				break;
			}
			else  //����ը��
			{
				count = IsMine(mine , x , y);
				show[x][y] = '0' + count;
				//��ʾ�Ų��׵���Ϣ
				DisplayBoard(show , row , col);
				win++;
			} 
		}
		else
		{
			printf("����Ƿ�������������:>");
		}
	}
	if (win == row * col - MINECOUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine , row , col);
	}
}

