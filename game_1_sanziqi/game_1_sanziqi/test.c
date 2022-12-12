#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ӡ�˵�
void menu()
{
	printf("***********************************\n");
	printf("**********     1.play     *********\n");
	printf("**********     0.exit     *********\n");
	printf("***********************************\n");
}
void game()
{
	//�����洢�ռ�,�������Ԫ��
	char board[ROW][COL];

	//��ʼ������ ���ո�
	InitBoard(board , ROW , COL);

	//��ӡ���� ���ְ���
	DisplayBoard(board , ROW , COL);

	char ret = 0; //��ʤ�ж��ַ�
	while (1)
	{
		//�������
		PlayerMove(board , ROW , COL);
		DisplayBoard(board , ROW , COL);
		ret = IsWin(board , ROW , COL);
		if (ret != 'C')
			break;
		
		//��������
		PcMove(board , ROW , COL);
		DisplayBoard(board , ROW , COL);
		ret = IsWin(board , ROW , COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else
		printf("ƽ��\n");
	DisplayBoard(board , ROW , COL);


}
int main()
{
	int input = 0;
	srand(( unsigned int )time(NULL));
	do {
		menu();
		printf("������:>");
		scanf("%d" , &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}
