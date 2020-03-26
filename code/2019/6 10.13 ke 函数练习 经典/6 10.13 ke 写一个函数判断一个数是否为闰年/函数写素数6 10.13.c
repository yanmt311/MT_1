#define _CRT_SECURE_NO_WARNINGS 1
//程序2 写一个函数判断（100，200）一个数是不是素数
//2.1 代码1
//#include <stdio.h>
//is_prime(int n)
//{
//	int j = 0;
//	for(j=2; j<n; j++)
//	{
//		if(n%j == 0)
//			break;
//	}
//	if(j<n)
//		return 0;
//	else 
//		return 1;
//
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=100; i<=200; i++)
//	{
//		if(1 == is_prime(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	printf("count = %d\n",count);
//	return 0;
//}




//2.1 代码2 在函数中 break没有很大的意义
//#include <stdio.h>
//is_prime(int n)
//{
//	int j = 0;
//	for(j=2; j<n; j++)
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=100; i<=200; i++)
//	{
//		if(1 == is_prime(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	printf("count = %d\n",count);
//	return 0;
//}



//2.3 代码3
//#include <stdio.h>
//#include <math.h>
//is_prime(int n)
//{
//	int j = 0;
//	for(j=2; j<=sqrt(n); j++)//优化1使用开根号
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=100; i<=200; i++)
//	{
//		if(1 == is_prime(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	printf("count = %d\n",count);
//	return 0;
//}

















