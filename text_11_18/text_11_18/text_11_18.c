#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//��֧���--ѡ��ṹ
//if  switch

//ѭ�����
//while  for do while

//int main()
//{
//	//else ���������� if ƥ�� 
//	//���1��100������
//	int a = 1;
//	while (a <= 100) 
//	{
//		//���ж�
//		if (1 == a % 2)
//		{
//			printf("%d  ", a);
//		}
//		a++;
//	}
//	return 0;
//}

//switch (���������)    //int or char
//{
//	case ���α��ʽ��
//		����
//		break;   //����
//	default
//		Ĭ�������
//}

//��whileѭ�� �� break������ֹѭ��
//��whileѭ�� �� continue��������ѭ�����ж��Ƿ������һ��ѭ��

//getchar �Ӽ��̻�ȡһ���ַ�
//putchar ����Ļ���һ���ַ�
//EOF-- end of file
//ctrl+z ��getchar����EOF

//��������������׵�ַ

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");    //123456 abcde
//	scanf("%s", password);  //��������������׵�ַ ����Ҫ���ȡ��ַ��&
//	//gets ��������һ�����ַ������ո�
//	printf("��ȷ������:>");
//	//����������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ���");
//	}
//	else
//	{
//		printf("ȷ��ʧ�ܣ�");
//	}
//	return 0;
//}

//for(ѭ����ʼ��ѭ��������ѭ������)
//      ѭ���壻
//forѭ������ҿ� for(i=0;i<10;i++)

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
//  ѭ����䣻
//while(���ʽ)��

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

//break����do whileѭ��

//n�Ľ׳�
//1��+2��+3��+����

//int main()
//{
//	int i, m, k = 0;
//	long long n = 1;
//	long long sum = 0;
//	printf("�����뼸�ν׳˺�: ");
//	scanf("%d", &k);
//
//	//for (m = 1; m <= k; m++)
//	//{
//	//	n = 1;    //����n�Ľ׳�ʱ���Ȱ�n��0,���ڽ�����һ��ѭ��
//	//	for (i = 1; i <= m; i++) 
//	//	{
//	//		n *= i;
//	//	}
//	//	sum += n;
//	//}
//
//	for (i = 1; i <= k; i++)      //һ��ѭ��, ������
//	{                             //3��= 2! * 3
//		n *= i;
//		sum += n;
//	}
//
//	printf("�׳˺�Ϊ��%lld", sum);
//	return 0;
//}


//���������в���ĳ�����������n ���ֲ���
//1 2 3 4 5 6 7 8 9 10

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0; 
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d", &k);  //��������7������7���±�6
//	int as = sizeof(arr) / sizeof(arr[0]);  //������Ԫ�� sizeof������������ĳ��ȵ�
//
//	//��������ԭʼ�±꣬��ʼ���ַ�
//	int left = 0;  //�����0��ʼ
//	int right = as - 1;  //�Ҷ��±�
//
//	while (left <= right)    //���±�<=���±� ˵�� �м仹��Ԫ�ؿ���ѡ�� ��������
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û���ҵ���Ԫ��");
//	}
//	return 0;
//}

//include<windows.h>
//sleep(1000); ��λ���� ˯�� ������
//system("cls"); �����Ļ

//strlen  �ַ�������
//strcmp( password , "123456" )==0  �ַ����Ƚ�

int main()
{
	char arr[] = "abc";
	int a = sizeof(arr)/sizeof(arr[0]);
	printf("%d", a);

	return 0;
}













