#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ݹ� �����������ı�̼���
//������������������������ʱ���ݹ����
//ÿ�εݹ����֮��Խ��Խ�ӽ��������

//�����޷�������1234�����δ�ӡ1 2 3 4
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
//	//���ú����ݹ�
//	print(num);
//	return 0;
//}


//�����n��쳲�������
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

//������֪�ַ���
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
//	reverse_string(arr);  //��������arr������Ԫ�صĵ�ַ
//	printf("%s\n" , arr);
//	return 0;
//}

//�ݹ�ʵ��
void reverse_string(char *str)
{
	int len = my_strlen(str);
	char tmp = *str; //��һ�����tmp
	*str = *(str + len - 1);  //���һ��������
	*(str + len - 1) = '\0';  //���һ����\0
	//�ж�����
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);  //�м�����
	}
	*(str + len - 1) = tmp;  //tmp������һ���ַ�
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
	reverse_string(arr);  //��������arr������Ԫ�صĵ�ַ
	printf("%s\n" , arr);
	return 0;
}








