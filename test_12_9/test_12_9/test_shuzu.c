#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//��������ʲô
//��������������Ԫ�ص�ַ
// 2������
//1.sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С����λ���ֽ�
//2.&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ

//ð������ 9876543210
//void bubble_sort(int *arr , int sz)
//{
//	//�����sz-1��
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿ�˱Ƚϴ�����9��1
//		int j = 0;
//		int tmp = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//��������
//	int arr[ ] = { 9,8,7,6,5,4,3,2,1,0 };
//	//���������С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð�ݺ�������
//	bubble_sort(arr , sz);
//	return 0;
//}

//ð�������Ż�
//void bubble_sort(int *arr , int sz)
//{
//	//�����sz-1��
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿ�˱Ƚϴ�����9��1
//		int j = 0;
//		int flag = 1;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		
//		if (flag == 0)   //һ������֮��û�з������� ˵��ԭ������������� 
//			break;       //������������ѭ��
//	}
//}
//int main()
//{
//	//��������
//	int arr[ ] = { 9,8,7,6,5,4,3,2,1,0 };
//	//���������С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð�ݺ�������
//	bubble_sort(arr , sz);
//	return 0;
//}

