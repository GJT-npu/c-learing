#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


//��������Ϸ
//1.�����Զ�����һ��1-100�������
//2.��ӡ�˵�
//3.������
//    a.�µ��ˣ���ϲ�㣬�˳���Ϸ
//    b.�´��ˣ��������´��ˣ����ǲ�С�ˣ����²²⣬ֱ���¶�
//4.��Ϸ����һֱ�棬ֱ���˳�

//��Ϸ�˵�
void menu()
{
	printf("**************************************\n");
	printf("*********       1.play       *********\n");
	printf("*********       0.exit       *********\n");
	printf("**************************************\n");
}


void game()
{
	//��������Ϸ��ʵ��
	//1.����1-100�������
	//rand�����������Ҫsrand��ǰ����
	//srand����Ƶ�����ã���ѭ��������һ�ξͿ�����
	
	int ran = rand() % 100 + 1;  //ģ100ȡ����  ���Եõ�0-99��+1�õ�1-100�����
	//printf("%d\n", ran);

	//2.������
	int k = 0;
	while(1)
	{
		printf("����������:>");
		scanf("%d", &k);
		if (k > ran)
		{
			printf("�´���\n");

		}
		else if (k < ran)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			Sleep(1000);    //˯��1s      windows.h����
			system("cls");    //�����Ļ     string.h����
			break;
		}
	}
}

int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));   //���������
	do
	{
		menu();
		printf("���Ƿ������Ϸ:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			//printf("������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
	return 0;
}











