#define _CRT_SECURE_NO_WARNINGS 1


//练习1：函数实现-打印100到200之间的素数。

//方法1：
//#include <stdio.h>
////1.1---定义函数参数时，用不同的变量---为n
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
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
////1.2---定义函数参数时，使用相同的变量---均为i
////int is_prime(int i)
////{
////	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
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
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if(is_prime(i) == 1)//i==1，则是素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//方法二：
//#include <math.h>
//#include <stdio.h>
//
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//只有一种情况，就是不满足for循环
//	return 1;
//}
//int main()
//{
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1，则是素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//方法三：
#include <math.h>
#include <stdio.h>

int is_prime(int n)
{
	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	//只有一种情况，就是不满足for循环
	return 1;
}
int main()
{
	//打印1-100的数
	int i = 0;
	int count = 0;
	for (i = 101; i < 201; i += 2)
	{
		if (is_prime(i) == 1)//i==1，则是素数
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n count = %d\n", count);
	return 0;
}
