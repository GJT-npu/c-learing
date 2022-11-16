#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//作用域：可以使用的范围
//局部变量：局部变量所在的区域
//全局变量：整个工程当中，可以跨文件使用

//int year = 2022;  //全局变量
//全局变量跨文件使用时应先声明     使用extern

//extern int year;
//
//int main()
//{
//	int a = 10;
//	printf("a = %d\n",a);
//	printf("%d\n",year);
//	return 0;
//}

//生命周期：变量的创建和销毁之间的时间段
//局部变量：进入局部范围到出局部范围
//全局变量：程序的生命周期

//char                             字符型                      %c  %s       1
//short                            短整型                      %hd      2
//int                                整型                          %d       4
//long                             长整型                       %ld      4
//long long                     更长的整形                            8
//float                             单精度浮点型             %f       4
//double                         双精度浮点型             %lf      8

//常量
//#define  max  10

//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//三个枚举常量
//	
//	male = 3,  //赋初值
//	female,
//	secret
//   
//};


//int main()
//{
//	//1.字面常量
//	//‘1’
//	//‘ca'
//
//	//2.const修饰的常变量，具有常属性，不可改变，当仍是变量
//    //const int a = 10;
//	//a = 20;  不可改变
//	//printf("a = %d\n",a);
//
//	//3.#define定义的标识符常量   可以在大括号中定义
//	//#define  名称  数字
//
//	//4.枚举常量    是常量   默认从0开始  可以赋初值
//	//可以一一列举的常量
//	//enum  枚举关键字
//	//enum  Sex 定义类型
//
//	//enum Sex s = male;   //枚举变量只能选择male,famale,secret
//	//
//	//printf("%d\n", male);
//	//printf("%d\n", female);
//	//printf("%d\n", secret);
//
//	return 0;
//}


//int main()
//{
//	//字符串：用双引号引起的一串字符
//    //结束标志  \0  被隐藏
//	//字符数组   是一组相同类型的元素
//	char  arr[] = "hello";  //以“\0”为结束标志
//
//	//计算字符串长度函数  strlen  ("")    需要引用头文件  #include<string.h>
//	//计算字符串长度的时不计算“\0”
//
//	char  arr1[] = "abc";
//	char  arr2[] = {'a','b','c','\0'};   //没有 '\0'  strlen输出随机数   故单个输入字符必须添加结束符'\0'
//
//	printf("%d\n",strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//转义字符
//    \t    \n    \'     \"    \\     
//printf("%c",'a')   打印字符单引号引用    打印字符串双引号引用
//      \ooo  八进制ASCI     \xoo   十六进制ASCI


//初识选择语句  if
//初识循环语句  while

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//函数实现两数相加
//	int num = Add (num1, num2);
//	printf("%d\n", num);
//	return 0;
//}

// sizeof后面的（）可以省略，但一般写着   以字节为单位
//计算数组元素的大小

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd\n", sizeof(arr));                       //数组总字节数  
//	printf("%zd\n", sizeof(arr[0]));                   //一个数的字节大小
//	int az = sizeof(arr) / sizeof(arr[0]);               //数组元素个数
//	printf("%d\n", az);
//	return 0;
//}

//~按位取反
// a = 0; ~a = -1;   按位取反  由于反码的原因


//前后置++，--
//int main()
//{
//	//int a = 10;
//	//int b = ++a;    //前置++/-- ： 先++，后使用赋值给b
//
//	int a = 10;
//	int b = a++;    //后置++/-- ： 先使用赋值给b，后++     优先级高
//
//	printf("%d\n", a);  //11   11
//	printf("%d\n", b);  //11   10
//	return 0;
//}

//（类型），强制转化类型
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//  ==相等于   !=不等于
//  逗号表达式从左向右依次计算  int as =（a=b+1,b=a+2,c=b+4 ）;
//整个表达式的结果是最后一个式子的结果
//  下标引用操作符  [ ]    arr[4]   引用数组第五个元素







