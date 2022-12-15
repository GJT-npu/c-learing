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
	//������������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ������
	InitBoard(mine , ROWS , COLS , '0');//����׵�����
	InitBoard(show , ROWS , COLS , '*');//��ʾ������

	//��ӡ����
	//DisplayBoard(mine , ROW , COL);
	DisplayBoard(show , ROW , COL);

	//������
	SetMine(mine , ROW , COL , MINECOUNT);
	//DisplayBoard(mine , ROW , COL);

	//�Ų���
	FindMine(mine , show , ROW , COL);

}

int main()
{
	//����ʱ���
	srand(( unsigned int )time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("ɨ����Ϸ���Ƿ����:>");
		scanf("%d" , &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
}