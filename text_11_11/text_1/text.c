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

//char         �ַ���          %c       1
//short        ������          %hd      2
//int          ����            %d       4
//long         ������          %ld      4
//long long    ����������               8
//float        �����ȸ�����    %f       4
//double       ˫���ȸ�����    %lf      8

//���������ĺ�
//scanf���� scanf("%d %d",&a,&b);
//printf���� printf("%d\n",sum);

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




