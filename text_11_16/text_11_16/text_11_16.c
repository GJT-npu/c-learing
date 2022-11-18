#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//关键字 
//1.C语言提供，不能自己创建
//2.变量名不能是关键字

//typedef   类型重命名   可以重命名结构体变得更简单

//typedef unsigned int u_int;
//int main()
//{
//	u_int num = 10;    //重命名无符号整型
//	return 0;
//}
//

//auto      表示自动创建与销毁  一般可省略
//static     静态的
//1.static   修饰局部变量   改变了局部变量的生命周期（实质是改变了存储类型）栈区变到静态区
//2.static   修饰全局变量   使得这个全局变量只能在所在的源文件（.c）内部使用  其它源文件不能使用
//3.static   修饰函数    使得这个函数只能在自己所在的源文件（.c）内部使用  其他源文件不能用extern声明调用
//    后两种形式都是将（全局变量/函数）外部属性链接 改变成 内部属性链接

//栈区   局部变量 函数形参
//堆区   动态内存分配
//静态区   全局变量  static修饰的静态变量


//void text()
//{
//	static int a = 1;                //static修饰局部变量 在编译时仅赋初值一次  跳出函数变量不销毁  
//	a++;
//	printf("%d ", a);               //a是局部变量（）内产生，出来后销毁  
//}                                          //故每次进入空函数text都重新给a赋值为1，打印结果10个2
//int main()
//{
//	int i = 0;
//	while (i < 10)                   //0~9执行10次
//	{
//		text();    //调用自定义函数
//		i++;
//	}
//	return 0;
//}


//#define  定义常量与宏
//预处理指令
//1.定义标识符常量

//   #define max 11

//2.定义宏
//#define  ADD(X,Y)  ((X)+(Y))     //宏定义调用时是直接替换  都要加上括号
//
//int main()
//{
//    printf("%d\n", 4 * ADD(2, 3));         //不加括号直接替换是   4*X+Y  出现错误
//    return 0;
//}

//指针
//int main()
//{
//	int a = 10;            //分配4个字节
//	printf("%p\n", &a);      //  %p是打印地址的
//	
//	int * pa = &a;     //pa 指针变量  用来存放a的地址
//	     //*表示pa是指针变量
//	     //int表示pa指向的对象是int类型的
//
//	char ch = 'b';
//	char * pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * p = &a;
//    *p = 20;      // *  解引用操作  通过a的地址找到a 等价于a=20		
//	printf("%d\n", a);
//	return 0;
//}


//结构体

//struct stu                  //结构体类型定义
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct stu s = { "张三",20,89.5 };   //结构体变量初始化
//	printf("1: %s %d %.2f\n", s.name, s.age, s.score);    //结构体变量.成员名
//
//	struct stu * ps = &s;
//	printf("2: %s %d %.2f\n", (*ps).name, (*ps).age, (*ps).score);    
//	printf("3: %s %d %.2f\n", ps->name, ps->age, ps->score);     //结构体指针->成员名
//
//	return 0;
//}



















