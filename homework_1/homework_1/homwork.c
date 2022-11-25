#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//找出1-100中所有3的倍数
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
//			printf("输出完成");
//			break;
//		}
//	}
//
//	return 0;
//}


//找出两个数的最大公因数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	int min = 0;
//	scanf("%d%d", &m, &n);
//	max = m > n ? n : m;         //假设最大公因数是m,n中的较小值,逐渐往下减
//	min = m * n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公因数是:>%d\n", max);
//			break;
//		}
//		max--;
//	}
//	min /= max;
//	printf("最小公倍数是:>%d\n",min);
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
//	printf("最大公因数是:>%d\n", n);
//	printf("最小公倍数是:>%d\n", min);
//	return 0;
//}


//找到1000-2000中的闰年
//int main()
//{
//	int y = 0;       //存放闰年年份
//	int count = 0;        //闰年个数
//	for (y = 1000; y <= 2000; y++)
//	{
//     //闰年判断方法
//     //1.可被4整除 && 不可被100整除
//     //2.可被400整除
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//输出100-200中的素数
//#include<math.h>
//int main()
//{
//	int i , count = 0;
//	int flag = 0;
//	//一层循环产生100-200的数字
//	for (i = 100; i <= 200; i++)      
//	{
//		//判断素数
//		//产生2->i-1的所有数，试除是否有因子
//
//		int j = 0;
//
//		//m = a*b;    7 = 1*7，16 = 2*8 = 4*4
//		//a和b之间至少有一个数字是<=开平方m的
//		//所以只用判断2->sqrt(m)的数字   声明math.h
//
//		flag = 1;         //假设i是素数，经过自然循环flag不会改变
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;       //不是素数，赋0
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
	//一层循环产生100-200的数字
	for (i = 101; i <= 200; i += 2)        //偶数不可能是素数
	{
		//判断素数
		//产生2->i-1的所有数，试除是否有因子

		int j = 0;

		//m = a*b;    7 = 1*7，16 = 2*8 = 4*4
		//a和b之间至少有一个数字是<=开平方m的
		//所以只用判断2->sqrt(m)的数字   声明math.h

		flag = 1;         //假设i是素数，经过自然循环flag不会改变
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;       //不是素数，赋0
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


















