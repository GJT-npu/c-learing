#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//printf("hee\n");
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}

//char         字符型          %c       1
//short        短整型          %hd      2
//int          整型            %d       4
//long         长整型          %ld      4
//long long    更长的整形               8
//float        单精度浮点型    %f       4
//double       双精度浮点型    %lf      8

//求两个数的和
//scanf函数 scanf("%d %d",&a,&b);
//printf函数 printf("%d\n",sum);

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d\n",sum);

	return 0;
}




