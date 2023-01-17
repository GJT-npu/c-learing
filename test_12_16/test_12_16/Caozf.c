#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//算术操作符
//int main()
//{
//	// \小数除法
//	//两端至少有一个数是浮点数
//	float a = 6.0f / 5.0f;  //默认为double，f改为float
//	printf("%f" , a);
// 
//	return 0;
//}

//int main()
//{
//	// %取模 取余数运算符 两端必须为整数
//	int a = 7 % 2;
//	printf("%d" , a);
//
//	return 0;
//}

//移位操作符
//int main()
//{
//	// << 左移位操作符
//	// 左边丢弃、右边补0
//	// >> 右移位操作符
//	//    1.算数右移：右边丢弃、左边补原符号位
//	//    2.逻辑右移：右边丢弃、左边补0
//	// 
//	//内存存放的是补码
//	int a = -1;
//	int b = a >> 1;
//
//	printf("b = %d\n" , b); //输出是-1，说明采用的是算术右移
//	 
//	return 0;
//}

//位操作符 &  |  ^  操作数必须为整数
//按位与：&    按位或：|    按位异或：^
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	int c = a & b;
//	printf("c = %d\n" , c);  //按位与
//
//	int d = a | b;
//	printf("d = %d\n" , d);  //按位或
//
//	int e = a ^ b;
//	printf("e = %d\n" , e);  //按位异或
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;//& 取地址运算符
//	*pa = 60;//* 解引用操作符 间接访问操作符
//	printf("%d\n" , a);
//	return 0;
//}
 
 //结构体
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	struct Book b = { "C语言","C20221228",55 };
//	struct Book *pb = &b;
//
//	//结构体变量.成员名
//	//printf("书名:%s\n" , b.name);
//	//printf("书号:%s\n" , b.id);
//	//printf("定价:%d\n" , b.price);
//
//	//解引用操作符
//	//printf("书名:%s\n" , (*pb).name);
//	//printf("书号:%s\n" , (*pb).id);
//	//printf("定价:%d\n" , (*pb).price);
//
//	//结构体指针 变量->成员名
//	printf("书名:%s\n" , pb->name);
//	printf("书号:%s\n" , pb->id);
//	printf("定价:%d\n" , pb->price);
//   *
//}

   



