#define _CRT_SECURE_NO_WARNINGS 1

//头文件包含
#include<stdio.h>
#include<math.h>
#include<time.h>

//常量定义
#define MINECOUNT 10    //雷的个数
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS] , int rows , int cols , char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS] , int row , int col);

//放置雷
void SetMine(char mine[ROWS][COLS] , int row , int col , int count);

//排查雷
void FindMine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row , int col);
