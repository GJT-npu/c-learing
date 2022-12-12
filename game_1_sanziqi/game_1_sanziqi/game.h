#define _CRT_SECURE_NO_WARNINGS 1

//头文件包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 3     //行数
#define COL 3     //列数

//函数的声明
//
//初始化棋盘
void InitBoard(char board[ROW][COL] , int row , int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL] , int row , int col);

//玩家下棋 - 本质是给数组赋值‘*’
//1.玩家输入坐标
//2.判断坐标是否合法
//3.判断坐标是否被占用
void PlayerMove(char board[ROW][COL] , int row , int col);

//电脑下棋 - 本质给数组赋值‘#’
//1.随机数生成0-2的坐标
//2.判断坐标是否被占用
void PcMove(char board[ROW][COL] , int row , int col);

//获胜判断函数
//玩家获胜 - *
//电脑获胜 - #
//平局 - Q
//继续游戏 - C
char IsWin(char board[ROW][COL] , int row , int col);

//棋盘元素是否占满判断函数
int IsFull(char board[ROW][COL] , int row , int col);


