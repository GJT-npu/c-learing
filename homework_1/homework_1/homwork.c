#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//�ҳ�1-100������3�ı���
//int main()
//{
//	int i , a = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		a = i * 3;
//		if (a <= 100)
//		{
//			printf("%d ", a);
//		}
//		else
//		{
//			printf("������");
//			break;
//		}
//	}
//
//	return 0;
//}


//�ҳ����������������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	int min = 0;
//	scanf("%d%d", &m, &n);
//	max = m > n ? n : m;         //�������������m,n�еĽ�Сֵ,�����¼�
//	min = m * n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���������:>%d\n", max);
//			break;
//		}
//		max--;
//	}
//	min /= max;
//	printf("��С��������:>%d\n",min);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	int  min = 0;
//	scanf("%d%d", &m, &n);
//	min = m * n;
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//	min /= n;
//	printf("���������:>%d\n", n);
//	printf("��С��������:>%d\n", min);
//	return 0;
//}


//�ҵ�1000-2000�е�����
//int main()
//{
//	int y = 0;       //����������
//	int count = 0;        //�������
//	for (y = 1000; y <= 2000; y++)
//	{
//     //�����жϷ���
//     //1.�ɱ�4���� && ���ɱ�100����
//     //2.�ɱ�400����
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//���100-200�е�����
//#include<math.h>
//int main()
//{
//	int i , count = 0;
//	int flag = 0;
//	//һ��ѭ������100-200������
//	for (i = 100; i <= 200; i++)      
//	{
//		//�ж�����
//		//����2->i-1�����������Գ��Ƿ�������
//
//		int j = 0;
//
//		//m = a*b;    7 = 1*7��16 = 2*8 = 4*4
//		//a��b֮��������һ��������<=��ƽ��m��
//		//����ֻ���ж�2->sqrt(m)������   ����math.h
//
//		flag = 1;         //����i��������������Ȼѭ��flag����ı�
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;       //������������0
//				break;
//			}
//		}
//		if (flag)
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


#include<math.h>
int main()
{
	int i, count = 0;
	int flag = 0;
	//һ��ѭ������100-200������
	for (i = 101; i <= 200; i += 2)        //ż��������������
	{
		//�ж�����
		//����2->i-1�����������Գ��Ƿ�������

		int j = 0;

		//m = a*b;    7 = 1*7��16 = 2*8 = 4*4
		//a��b֮��������һ��������<=��ƽ��m��
		//����ֻ���ж�2->sqrt(m)������   ����math.h

		flag = 1;         //����i��������������Ȼѭ��flag����ı�
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;       //������������0
				break;
			}
		}
		if (flag)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}


















