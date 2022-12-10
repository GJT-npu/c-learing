#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//数组名是什么
//数组名是数组首元素地址
// 2个例外
//1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小，单位是字节
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址

//冒泡排序 9876543210
//void bubble_sort(int *arr , int sz)
//{
//	//最多排sz-1趟
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每趟比较次数从9—1
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
//	//创建数组
//	int arr[ ] = { 9,8,7,6,5,4,3,2,1,0 };
//	//计算数组大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡函数排序
//	bubble_sort(arr , sz);
//	return 0;
//}

//冒泡排序优化
//void bubble_sort(int *arr , int sz)
//{
//	//最多排sz-1趟
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每趟比较次数从9—1
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
//		if (flag == 0)   //一趟排序之后没有发生交换 说明原来是有序的数字 
//			break;       //结束排序，跳出循环
//	}
//}
//int main()
//{
//	//创建数组
//	int arr[ ] = { 9,8,7,6,5,4,3,2,1,0 };
//	//计算数组大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡函数排序
//	bubble_sort(arr , sz);
//	return 0;
//}

