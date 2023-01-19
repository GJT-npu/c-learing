#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


//猜数字游戏
//1.可以自动产生一个1-100的随机数
//2.打印菜单
//3.猜数字
//    a.猜到了，恭喜你，退出游戏
//    b.猜错了，会告诉你猜大了，还是猜小了，重新猜测，直到猜对
//4.游戏可以一直玩，直到退出

//游戏菜单
void menu()
{
	printf("**************************************\n");
	printf("*********       1.play       *********\n");
	printf("*********       0.exit       *********\n");
	printf("**************************************\n");
}


void game()
{
	//猜数字游戏的实现
	//1.生成1-100的随机数
	//rand产生随机数需要srand提前设置
	//srand不能频繁设置，在循环外设置一次就可以了
	
	int ran = rand() % 100 + 1;  //模100取余数  可以得到0-99，+1得到1-100随机数
	//printf("%d\n", ran);

	//2.猜数字
	int k = 0;
	while(1)
	{
		printf("请输入数字:>");
		scanf("%d", &k);
		if (k > ran)
		{
			printf("猜大了\n");

		}
		else if (k < ran)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			Sleep(1000);    //睡眠1s      windows.h声明
			system("cls");    //清空屏幕     string.h声明
			break;
		}
	}
}

int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));   //随机数发生
	do
	{
		menu();
		printf("您是否进行游戏:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			//printf("进行游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	return 0;
}











