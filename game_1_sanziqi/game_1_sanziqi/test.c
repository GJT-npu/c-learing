#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//打印菜单
void menu()
{
	printf("***********************************\n");
	printf("**********     1.play     *********\n");
	printf("**********     0.exit     *********\n");
	printf("***********************************\n");
}
void game()
{
	//创建存储空间,存放下棋元素
	char board[ROW][COL];

	//初始化棋盘 赋空格
	InitBoard(board , ROW , COL);

	//打印棋盘 布局版面
	DisplayBoard(board , ROW , COL);

	char ret = 0; //获胜判断字符
	while (1)
	{
		//玩家下棋
		PlayerMove(board , ROW , COL);
		DisplayBoard(board , ROW , COL);
		ret = IsWin(board , ROW , COL);
		if (ret != 'C')
			break;
		
		//电脑下棋
		PcMove(board , ROW , COL);
		DisplayBoard(board , ROW , COL);
		ret = IsWin(board , ROW , COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else
		printf("平局\n");
	DisplayBoard(board , ROW , COL);


}
int main()
{
	int input = 0;
	srand(( unsigned int )time(NULL));
	do {
		menu();
		printf("请输入:>");
		scanf("%d" , &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
