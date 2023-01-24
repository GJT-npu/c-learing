#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体的成员可以是标量、数组、指针、其他结构体
// .  ->

//结构体传参
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n" , t.sb.c , t.sb.s , t.sb.d , t.name , t.age , t.id);
//}
//void print2(struct Stu *ps)
//{
//	printf("%c %d %lf %s %d %s\n" , ps->sb.c , ps->sb.s , ps->sb.d , ps->name , ps->age , ps->id);
//}
//
//int main() 
//{
//	//s是局部变量
//	struct Stu s = { {'w',20,3.14 },"张三",30,"20230124" };
//	//写一个函数打印s的内容
//	print1(s);     //传值调用
//	print2(&s);    //传址调用
//
//	return 0;
//}
//结构体传参使用传值调用











