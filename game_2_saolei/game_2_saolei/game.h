#define _CRT_SECURE_NO_WARNINGS 1

//ͷ�ļ�����
#include<stdio.h>
#include<math.h>
#include<time.h>

//��������
#define MINECOUNT 10    //�׵ĸ���
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void InitBoard(char board[ROWS][COLS] , int rows , int cols , char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS] , int row , int col);

//������
void SetMine(char mine[ROWS][COLS] , int row , int col , int count);

//�Ų���
void FindMine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row , int col);
