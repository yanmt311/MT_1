#define _CRT_SECURE_NO_WARNINGS 1


//��ϰ1������ʵ��-��ӡ100��200֮���������

//����1��
//#include <stdio.h>
////1.1---���庯������ʱ���ò�ͬ�ı���---Ϊn
//int is_prime(int n)
//{
//	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{ 
//			return 0;
//		}
//	}
//	return 1;
//}
//
////1.2---���庯������ʱ��ʹ����ͬ�ı���---��Ϊi
////int is_prime(int i)
////{
////	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
////	int n = 0;
////	for (n = 2; n < i; n++)
////	{
////		if (i%n == 0)
////		{
////			return 0;
////		}
////	}
////	return 1;
////}
//int main()
//{
//	//��ӡ1-100����
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if(is_prime(i) == 1)//i==1����������
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//��������
//#include <math.h>
//#include <stdio.h>
//
//int is_prime(int n)
//{
//	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//ֻ��һ����������ǲ�����forѭ��
//	return 1;
//}
//int main()
//{
//	//��ӡ1-100����
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1����������
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//��������
#include <math.h>
#include <stdio.h>

int is_prime(int n)
{
	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	//ֻ��һ����������ǲ�����forѭ��
	return 1;
}
int main()
{
	//��ӡ1-100����
	int i = 0;
	int count = 0;
	for (i = 101; i < 201; i += 2)
	{
		if (is_prime(i) == 1)//i==1����������
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n count = %d\n", count);
	return 0;
}
