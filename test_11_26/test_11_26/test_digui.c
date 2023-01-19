#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//递归 程序调用自身的编程技巧
//存在限制条件，当满足条件时，递归结束
//每次递归调用之后，越来越接近这个条件

//输入无符号整型1234，依次打印1 2 3 4
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%u " , n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u" , &num);
//	//调用函数递归
//	print(num);
//	return 0;
//}


//输出第n个斐波那契数
//int my_Feibo(int n)
//{
//	int a = 1
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d" , &n);
//	int ret = my_Feibo(n);
//	printf("%d" , ret);
//	return 0;
//}

//逆序已知字符串
//void reverse_string(char *str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[ ] = "abcdef";
//	reverse_string(arr);  //数组名是arr数组首元素的地址
//	printf("%s\n" , arr);
//	return 0;
//}

//递归实现
void reverse_string(char *str)
{
	int len = my_strlen(str);
	char tmp = *str; //第一个存出tmp
	*str = *(str + len - 1);  //最后一个提上来
	*(str + len - 1) = '\0';  //最后一个补\0
	//判断条件
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);  //中间逆序
	}
	*(str + len - 1) = tmp;  //tmp存回最后一个字符
}
int my_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[ ] = "abcdef";
	reverse_string(arr);  //数组名是arr数组首元素的地址
	printf("%s\n" , arr);
	return 0;
}








