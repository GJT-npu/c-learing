#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//分支语句--选择结构
//if  switch

//循环语句
//while  for do while

//int main()
//{
//	//else 与距离最近的 if 匹配 
//	//输出1—100的奇数
//	int a = 1;
//	while (a <= 100) 
//	{
//		//做判断
//		if (1 == a % 2)
//		{
//			printf("%d  ", a);
//		}
//		a++;
//	}
//	return 0;
//}

//switch (整型语句项)    //int or char
//{
//	case 整形表达式：
//		语句项；
//		break;   //跳出
//	default
//		默认语句项
//}

//在while循环 中 break永久终止循环
//在while循环 中 continue结束本次循环，判断是否进行下一次循环

//getchar 从键盘获取一个字符
//putchar 向屏幕输出一个字符
//EOF-- end of file
//ctrl+z 让getchar读到EOF

//数组名是数组的首地址

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");    //123456 abcde
//	scanf("%s", password);  //数组名是数组的首地址 不需要添加取地址符&
//	//gets 可以输入一长串字符包括空格
//	printf("请确认密码:>");
//	//清除缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！");
//	}
//	else
//	{
//		printf("确认失败！");
//	}
//	return 0;
//}

//for(循环初始；循环条件；循环控制)
//      循环体；
//for循环左闭右开 for(i=0;i<10;i++)

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//do 
//  循环语句；
//while(表达式)；

//int main()
//{
//	int i = 1;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//break跳出do while循环

//n的阶乘
//1！+2！+3！+……

//int main()
//{
//	int i, m, k = 0;
//	long long n = 1;
//	long long sum = 0;
//	printf("请输入几次阶乘和: ");
//	scanf("%d", &k);
//
//	//for (m = 1; m <= k; m++)
//	//{
//	//	n = 1;    //计算n的阶乘时，先把n置0,便于进行下一次循环
//	//	for (i = 1; i <= m; i++) 
//	//	{
//	//		n *= i;
//	//	}
//	//	sum += n;
//	//}
//
//	for (i = 1; i <= k; i++)      //一次循环, 方法二
//	{                             //3！= 2! * 3
//		n *= i;
//		sum += n;
//	}
//
//	printf("阶乘和为：%lld", sum);
//	return 0;
//}


//有序数组中查找某个具体的数字n 二分查找
//1 2 3 4 5 6 7 8 9 10

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0; 
//	printf("请输入要查找的数字：");
//	scanf("%d", &k);  //查找数字7，数字7是下标6
//	int as = sizeof(arr) / sizeof(arr[0]);  //求数组元素 sizeof是求整型数组的长度的
//
//	//给出两端原始下标，开始二分法
//	int left = 0;  //数组从0开始
//	int right = as - 1;  //右端下标
//
//	while (left <= right)    //左下标<=右下标 说明 中间还有元素可以选择 继续二分
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到该元素");
//	}
//	return 0;
//}

//include<windows.h>
//sleep(1000); 单位毫秒 睡眠 需声明
//system("cls"); 清空屏幕

//strlen  字符串长度
//strcmp( password , "123456" )==0  字符串比较

int main()
{
	char arr[] = "abc";
	int a = sizeof(arr)/sizeof(arr[0]);
	printf("%d", a);

	return 0;
}













