#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>


//���100-200֮�������
//int is_prime(int n)
//{
//	int k = 0;
//	for (k = 2; k <= sqrt(n); k++)
//	{
//		if (n % k == 0)  //�������Ա����� ��������
//			return 0;
//	}
//	return 1;
//}
//int main( )
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime( i ) == 1)
//		{
//			count++;
//			printf("%d " , i);
//		}
//	}
//	printf( "\ncount = %d\n" , count );
//	return 0;
//}

//���ֲ���
int binary_search(int a[ ] , int k , int s)
{
	int left = 0;
	int right = s - 1;
	
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right -= 1;
		}
		else if (a[mid] < k)
		{
			left += 1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[ ] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��ˣ������±�
	//û�ҵ�������-1
	int ret = binary_search(arr , key ,sz );
	if (ret == -1)
		printf("û�ҵ�\n");
	else
		printf("�ҵ��ˣ��±��ǣ�%d\n" , ret);

	return 0;
}












